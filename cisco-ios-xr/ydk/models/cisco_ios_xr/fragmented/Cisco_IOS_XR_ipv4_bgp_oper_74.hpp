#ifndef _CISCO_IOS_XR_IPV4_BGP_OPER_74_
#define _CISCO_IOS_XR_IPV4_BGP_OPER_74_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_bgp_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_49.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_67.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_72.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_73.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop : public Entity
{
    public:
        PelemPathNexthop();
        ~PelemPathNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNexthop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::NhteTunnel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr : public Entity
{
    public:
        PelemPathNeighborAddr();
        ~PelemPathNeighborAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::NetworkPrefixes::NetworkPrefix::ActivePathElement::PelemPathNeighborAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr : public Entity
{
    public:
        AdvertisedPathXr();
        ~AdvertisedPathXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AdvertisedPath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath> > advertised_path;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath : public Entity
{
    public:
        AdvertisedPath();
        ~AdvertisedPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rd; //type: string
        YLeaf network; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf neighbor_address; //type: string
        YLeaf no_path; //type: boolean
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf process_instance_id; //type: uint8
        YLeaf label_oor; //type: boolean
        YLeaf label_o_or_version; //type: uint32
        YLeaf label_fail; //type: boolean
        YLeaf route_distinguisher; //type: string
        YLeaf source_route_distinguisher; //type: string
        YLeaf prefix_version; //type: uint32
        YLeaf vrf_name; //type: string
        YLeaf source_vrf_name; //type: string
        YLeaf srcaf_name; //type: BgpAfiEnum

        class NeighborAddressXr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr
        class PathInformation; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation
        class AttributesAfterPolicyIn; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn> attributes_after_policy_in;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr> neighbor_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation> path_information;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::NeighborAddressXr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation : public Entity
{
    public:
        PathInformation();
        ~PathInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf route_type; //type: BgpRoute1Enum
        YLeaf is_path_valid; //type: boolean
        YLeaf is_path_damped; //type: boolean
        YLeaf is_path_history_held; //type: boolean
        YLeaf is_internal_path; //type: boolean
        YLeaf is_best_path; //type: boolean
        YLeaf is_as_best; //type: boolean
        YLeaf is_spkr_as_best; //type: boolean
        YLeaf is_partial_best; //type: boolean
        YLeaf is_aggregation_suppressed; //type: boolean
        YLeaf is_import_dampened; //type: boolean
        YLeaf is_import_suspect; //type: boolean
        YLeaf is_path_not_advertised; //type: boolean
        YLeaf is_path_not_advertised_to_ebg_ps; //type: boolean
        YLeaf is_path_advertised_local_as_only; //type: boolean
        YLeaf is_path_from_route_reflector; //type: boolean
        YLeaf is_path_received_only; //type: boolean
        YLeaf is_received_path_not_modified; //type: boolean
        YLeaf is_path_locally_sourced; //type: boolean
        YLeaf is_path_local_aggregate; //type: boolean
        YLeaf is_path_from_network_command; //type: boolean
        YLeaf is_path_from_redistribute_command; //type: boolean
        YLeaf is_path_imported; //type: boolean
        YLeaf is_path_reoriginated; //type: boolean
        YLeaf is_path_reoriginated_stitching; //type: boolean
        YLeaf is_path_vpn_only; //type: boolean
        YLeaf is_path_from_confederation_peer; //type: boolean
        YLeaf is_path_synced_with_igp; //type: boolean
        YLeaf is_path_multipath; //type: boolean
        YLeaf is_path_imp_candidate; //type: boolean
        YLeaf is_path_stale; //type: boolean
        YLeaf is_path_long_lived_stale; //type: boolean
        YLeaf is_path_backup; //type: boolean
        YLeaf is_path_backup_protect_multipath; //type: boolean
        YLeaf is_path_best_external; //type: boolean
        YLeaf is_path_additional_path; //type: boolean
        YLeaf is_path_nexthop_discarded; //type: boolean
        YLeaf has_rcvd_label; //type: boolean
        YLeaf rcvd_label; //type: uint32
        YLeaf has_local_net_label; //type: boolean
        YLeaf local_label; //type: uint32
        YLeaf igp_metric; //type: uint32
        YLeaf path_weight; //type: uint16
        YLeaf neighbor_router_id; //type: string
        YLeaf has_mdt_group_addr; //type: boolean
        YLeaf l2vpn_size; //type: uint32
        YLeaf has_esi; //type: boolean
        YLeaf has_gw_addr; //type: boolean
        YLeaf has_second_label; //type: boolean
        YLeaf second_label; //type: uint32
        YLeaf path_flap_count; //type: uint32
        YLeaf seconds_since_first_flap; //type: uint32
        YLeaf time_to_unsuppress; //type: uint32
        YLeaf dampen_penalty; //type: uint32
        YLeaf halflife_time; //type: uint32
        YLeaf suppress_penalty; //type: uint32
        YLeaf reuse_value; //type: uint32
        YLeaf maximum_suppress_time; //type: uint32
        YLeaf best_path_comp_stage; //type: BgpBpStageEnum
        YLeaf best_path_id_comp_winner; //type: uint32
        YLeaf path_flags; //type: uint64
        YLeaf path_import_flags; //type: uint32
        YLeaf best_path_id; //type: uint32
        YLeaf local_path_id; //type: uint32
        YLeaf rcvd_path_id; //type: uint32
        YLeaf path_table_version; //type: uint32
        YLeaf advertisedto_pe; //type: boolean
        YLeaf rib_failed; //type: boolean
        YLeaf sn_rpki_origin_as_validity; //type: uint8
        YLeaf show_rpki_origin_as_validity; //type: boolean
        YLeaf ibgp_signaled_validity; //type: boolean
        YLeaf rpki_origin_as_validation_disabled; //type: boolean
        YLeaf accept_own_path; //type: boolean
        YLeaf accept_own_self_originated_p_ath; //type: boolean
        YLeaf aigp_metric; //type: uint64
        YLeaf mvpn_sfs_path; //type: boolean
        YLeaf fspec_invalid_path; //type: boolean
        YLeaf has_mvpn_nbr_addr; //type: boolean
        YLeaf has_mvpn_nexthop_addr; //type: boolean
        YLeaf has_mvpn_pmsi; //type: boolean
        YLeaf mvpn_pmsi_type; //type: uint16
        YLeaf mvpn_pmsi_flags; //type: uint8
        YLeaf mvpn_pmsi_label; //type: uint32
        YLeaf has_mvpn_extcomm; //type: boolean
        YLeaf mvpn_path_flags; //type: uint16
        YLeaf local_nh; //type: boolean
        YLeaf rt_set_limit_enabled; //type: boolean
        YLeaf path_rt_set_id; //type: uint32
        YLeaf path_rt_set_route_count; //type: uint32
        YLeaf is_path_af_install_eligible; //type: boolean
        YLeaf is_permanent_path; //type: boolean
        YLeaf graceful_shutdown; //type: boolean
        YLeaf labeled_unicast_safi_path; //type: boolean

        class BgpPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix
        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress
        class NextHop; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop
        class NhteTunnel; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NhteTunnel
        class MdtGroupAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr
        class L2VpnEvpnEsi; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnEvpnEsi
        class GwAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::GwAddr
        class BestPathCompWinner; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner
        class MvpnNbrAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr
        class MvpnNexthopAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr
        class L2VpnCircuitStatusValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnCircuitStatusValue
        class MvpnPmsiValue; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnPmsiValue
        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::ExtendedCommunity
        class LocalPeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo
        class PePeersAdvertisedTo; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo
        class BestPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield
        class AddPathOrrBitfield; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield> > add_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner> best_path_comp_winner;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield> > best_path_orr_bitfield;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix> bgp_prefix;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::ExtendedCommunity> > extended_community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::GwAddr> gw_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnCircuitStatusValue> > l2vpn_circuit_status_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnEvpnEsi> l2vpn_evpn_esi;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo> > local_peers_advertised_to;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr> mdt_group_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr> mvpn_nbr_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr> mvpn_nexthop_addr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnPmsiValue> > mvpn_pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress> neighbor_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NhteTunnel> nhte_tunnel;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo> > pe_peers_advertised_to;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix : public Entity
{
    public:
        BgpPrefix();
        ~BgpPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint16

        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix> prefix;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NextHop::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NhteTunnel : public Entity
{
    public:
        NhteTunnel();
        ~NhteTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_type; //type: BgpteTunnelEnum
        YLeaf tunnel_name; //type: string
        YLeaf has_te_tunnel; //type: boolean
        YLeaf is_tunnel_up; //type: boolean
        YLeaf is_tunnel_info_stale; //type: boolean
        YLeaf is_tunnel_registered; //type: boolean
        YLeaf tunnel_v6_required; //type: boolean
        YLeaf tunnel_v6_enabled; //type: boolean
        YLeaf binding_label; //type: uint32
        YLeaf tunnel_if_handle; //type: uint32
        YLeaf last_tunnel_update; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::NhteTunnel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr : public Entity
{
    public:
        MdtGroupAddr();
        ~MdtGroupAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnEvpnEsi : public Entity
{
    public:
        L2VpnEvpnEsi();
        ~L2VpnEvpnEsi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf esi; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnEvpnEsi


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::GwAddr : public Entity
{
    public:
        GwAddr();
        ~GwAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf len; //type: BgpGwAddrLenEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::GwAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner : public Entity
{
    public:
        BestPathCompWinner();
        ~BestPathCompWinner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathCompWinner::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr : public Entity
{
    public:
        MvpnNbrAddr();
        ~MvpnNbrAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr : public Entity
{
    public:
        MvpnNexthopAddr();
        ~MvpnNexthopAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnCircuitStatusValue : public Entity
{
    public:
        L2VpnCircuitStatusValue();
        ~L2VpnCircuitStatusValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::L2VpnCircuitStatusValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnPmsiValue : public Entity
{
    public:
        MvpnPmsiValue();
        ~MvpnPmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::MvpnPmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo : public Entity
{
    public:
        LocalPeersAdvertisedTo();
        ~LocalPeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo : public Entity
{
    public:
        PePeersAdvertisedTo();
        ~PePeersAdvertisedTo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield : public Entity
{
    public:
        BestPathOrrBitfield();
        ~BestPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield : public Entity
{
    public:
        AddPathOrrBitfield();
        ~AddPathOrrBitfield();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_neighbor; //type: boolean
        YLeaf update_group_number; //type: uint32

        class NeighborAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress> neighbor_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress : public Entity
{
    public:
        NeighborAddress();
        ~NeighborAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn : public Entity
{
    public:
        AttributesAfterPolicyIn();
        ~AttributesAfterPolicyIn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_as_path2_byte; //type: boolean
        YLeaf is_application_gateway_present; //type: boolean
        YLeaf is_attr_set_present; //type: boolean
        YLeaf set_aigp_inbound_igp; //type: boolean
        YLeaf set_aigp_inbound_metric; //type: boolean
        YLeaf is_rnh_present; //type: boolean
        YLeaf is_ribrnh_present; //type: boolean
        YLeaf attribute_key_number; //type: uint32
        YLeaf attribute_reuse_id_config; //type: boolean
        YLeaf attribute_reuse_id_max_id; //type: uint32
        YLeaf attribute_reuse_id_node; //type: uint32
        YLeaf attribute_reuse_id_current; //type: uint32
        YLeaf attribute_reuse_id_keys; //type: uint32
        YLeaf attribute_reuse_id_recover_sec; //type: uint32
        YLeaf vpn_distinguisher; //type: uint32
        YLeaf rnh_type; //type: uint16
        YLeaf rnh_len; //type: uint8
        YLeaf rnh_addr_len; //type: uint32
        YLeaf ribrnh_table; //type: uint32
        YLeaf ribrnh_mac; //type: string
        YLeaf ribrnhip_table; //type: uint32
        YLeaf ribrnh_vni; //type: uint32
        YLeaf ribrnh_encap; //type: uint8

        class CommonAttributes; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes
        class AttrSet; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet
        class RnhAddr; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr
        class RibrnhIp; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet> attr_set;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes> common_attributes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp> ribrnh_ip;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr> rnh_addr;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes : public Entity
{
    public:
        CommonAttributes();
        ~CommonAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_metric_present; //type: boolean
        YLeaf is_local_pref_present; //type: boolean
        YLeaf is_atomic_aggregate_present; //type: boolean
        YLeaf is_aggregator_present; //type: boolean
        YLeaf is_origin_present; //type: boolean
        YLeaf is_as_path_present; //type: boolean
        YLeaf is_community_present; //type: boolean
        YLeaf is_extended_community_present; //type: boolean
        YLeaf is_ssa_present; //type: boolean
        YLeaf is_connector_present; //type: boolean
        YLeaf is_pmsi_present; //type: boolean
        YLeaf is_pppmp_present; //type: boolean
        YLeaf is_aigp_present; //type: boolean
        YLeaf is_pe_distinguisher_label_present; //type: boolean
        YLeaf is_ls_attribute_present; //type: boolean
        YLeaf is_label_index_present; //type: boolean
        YLeaf is_tunnel_encap_present; //type: boolean
        YLeaf neighbor_as; //type: uint32
        YLeaf aggregator_as; //type: uint32
        YLeaf aggregator_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf local_preference; //type: uint32
        YLeaf origin; //type: uint16
        YLeaf as_path; //type: string
        YLeaf extended_community_flags; //type: uint8
        YLeaf originator; //type: string
        YLeaf l2tpv3_session_id; //type: uint32
        YLeaf connector_type; //type: uint16
        YLeaf aigp_metric_value; //type: uint64
        YLeaf pmsi_type; //type: uint16
        YLeaf pmsi_flags; //type: uint8
        YLeaf pmsi_label; //type: uint32
        YLeaf ppm_pvalue; //type: uint32
        YLeaf tunnel_encap_type; //type: uint16
        YLeaf sr_policy_preference; //type: uint32
        YLeaf sr_tunnel_state; //type: uint32
        YLeaf sr_tunnel_request_state; //type: BgpSrpolicyTunReqStateEnum

        class SrPolicyBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid
        class SrPolicyAllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid
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
        class SrPolicyExplicitPath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster> > cluster;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue> > pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid> sr_policy_allocated_binding_sid;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid> sr_policy_binding_sid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath> > sr_policy_explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute> > unknown_attribute;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid : public Entity
{
    public:
        SrPolicyBindingSid();
        ~SrPolicyBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid : public Entity
{
    public:
        SrPolicyAllocatedBindingSid();
        ~SrPolicyAllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute : public Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie : public Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue : public Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue : public Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr : public Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr : public Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel : public Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pe_address; //type: string
        YLeaf label; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath : public Entity
{
    public:
        SrPolicyExplicitPath();
        ~SrPolicyExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf weight; //type: uint8

        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid> > sid;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid : public Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf label; //type: uint32
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet : public Entity
{
    public:
        AttrSet();
        ~AttrSet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf is_metric_present; //type: boolean
        YLeaf is_local_pref_present; //type: boolean
        YLeaf is_atomic_aggregate_present; //type: boolean
        YLeaf is_aggregator_present; //type: boolean
        YLeaf is_origin_present; //type: boolean
        YLeaf is_as_path_present; //type: boolean
        YLeaf is_community_present; //type: boolean
        YLeaf is_extended_community_present; //type: boolean
        YLeaf is_ssa_present; //type: boolean
        YLeaf is_connector_present; //type: boolean
        YLeaf is_pmsi_present; //type: boolean
        YLeaf is_pppmp_present; //type: boolean
        YLeaf is_aigp_present; //type: boolean
        YLeaf is_pe_distinguisher_label_present; //type: boolean
        YLeaf is_ls_attribute_present; //type: boolean
        YLeaf is_label_index_present; //type: boolean
        YLeaf is_tunnel_encap_present; //type: boolean
        YLeaf neighbor_as; //type: uint32
        YLeaf aggregator_as; //type: uint32
        YLeaf aggregator_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf local_preference; //type: uint32
        YLeaf origin; //type: uint16
        YLeaf as_path; //type: string
        YLeaf extended_community_flags; //type: uint8
        YLeaf originator; //type: string
        YLeaf l2tpv3_session_id; //type: uint32
        YLeaf connector_type; //type: uint16
        YLeaf aigp_metric_value; //type: uint64
        YLeaf pmsi_type; //type: uint16
        YLeaf pmsi_flags; //type: uint8
        YLeaf pmsi_label; //type: uint32
        YLeaf ppm_pvalue; //type: uint32
        YLeaf tunnel_encap_type; //type: uint16
        YLeaf sr_policy_preference; //type: uint32
        YLeaf sr_tunnel_state; //type: uint32
        YLeaf sr_tunnel_request_state; //type: BgpSrpolicyTunReqStateEnum

        class SrPolicyBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid
        class SrPolicyAllocatedBindingSid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid
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
        class SrPolicyExplicitPath; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster> > cluster;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community> > community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue> > connector_value;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie> > l2tpv3_cookie;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr> > label_index_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr> > ls_attr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel> > pe_distinguisher_label;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue> > pmsi_value;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid> sr_policy_allocated_binding_sid;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid> sr_policy_binding_sid;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath> > sr_policy_explicit_path;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute> > unknown_attribute;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid : public Entity
{
    public:
        SrPolicyBindingSid();
        ~SrPolicyBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid : public Entity
{
    public:
        SrPolicyAllocatedBindingSid();
        ~SrPolicyAllocatedBindingSid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpBindingSidEnum
        YLeaf label; //type: uint32
        YLeaf ipv6_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Community


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute : public Entity
{
    public:
        UnknownAttribute();
        ~UnknownAttribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::UnknownAttribute


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster : public Entity
{
    public:
        Cluster();
        ~Cluster();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::Cluster


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie : public Entity
{
    public:
        L2Tpv3Cookie();
        ~L2Tpv3Cookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue : public Entity
{
    public:
        ConnectorValue();
        ~ConnectorValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::ConnectorValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue : public Entity
{
    public:
        PmsiValue();
        ~PmsiValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PmsiValue


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr : public Entity
{
    public:
        LsAttr();
        ~LsAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LsAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr : public Entity
{
    public:
        LabelIndexAttr();
        ~LabelIndexAttr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel : public Entity
{
    public:
        PeDistinguisherLabel();
        ~PeDistinguisherLabel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pe_address; //type: string
        YLeaf label; //type: uint32



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath : public Entity
{
    public:
        SrPolicyExplicitPath();
        ~SrPolicyExplicitPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf weight; //type: uint8

        class Sid; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid> > sid;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid : public Entity
{
    public:
        Sid();
        ~Sid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: uint8
        YLeaf label; //type: uint32
        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr : public Entity
{
    public:
        RnhAddr();
        ~RnhAddr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf len; //type: BgpRnhAddrLenEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf mac_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RnhAddr


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp : public Entity
{
    public:
        RibrnhIp();
        ~RibrnhIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::AdvertisedPathXr::AdvertisedPath::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks : public Entity
{
    public:
        SourcedNetworks();
        ~SourcedNetworks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SourcedNetwork; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork> > sourced_network;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork : public Entity
{
    public:
        SourcedNetwork();
        ~SourcedNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf network; //type: string
        YLeaf af_name; //type: BgpAfiEnum
        YLeaf is_backdoor; //type: boolean

        class SourcedPrefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix> sourced_prefix;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix : public Entity
{
    public:
        SourcedPrefix();
        ~SourcedPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: uint16

        class Prefix; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix> prefix;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::SourcedNetworks::SourcedNetwork::SourcedPrefix::Prefix::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups : public Entity
{
    public:
        UpdateGroups();
        ~UpdateGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UpdateGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup> > update_group;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup : public Entity
{
    public:
        UpdateGroup();
        ~UpdateGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_group_id; //type: int32
        YLeaf filter_group_id; //type: int32
        YLeaf process_instance_id; //type: uint8
        YLeaf session_af_name; //type: uint8
        YLeaf update_group_number; //type: uint32
        YLeaf update_group_af_name; //type: BgpAfiEnum
        YLeaf should_send_communities; //type: boolean
        YLeaf should_send_ext_communities; //type: boolean
        YLeaf should_send_stitching_rt; //type: boolean
        YLeaf has_orf_receive_capability; //type: boolean
        YLeaf is_route_reflector_client; //type: boolean
        YLeaf is_client_reflection_disabled; //type: boolean
        YLeaf accepts_legacy_pe_rt_route; //type: boolean
        YLeaf updgrp_cluster_id; //type: uint32
        YLeaf updgrp_cluster_type; //type: uint8
        YLeaf orr_group_name; //type: string
        YLeaf orr_group_index; //type: uint32
        YLeaf is_orr_root_address_configured; //type: boolean
        YLeaf should_remove_private_a_ss; //type: boolean
        YLeaf should_remove_private_as_ent_path; //type: boolean
        YLeaf use_next_hop_self; //type: boolean
        YLeaf use_next_hop_unchanged_mpath; //type: boolean
        YLeaf is_internal_peers; //type: boolean
        YLeaf is_common_admin_peers; //type: boolean
        YLeaf is4_byte_as_peer; //type: boolean
        YLeaf is_addpath_capable; //type: boolean
        YLeaf is_send_mcast_attr_enabled; //type: boolean
        YLeaf is_aigp_capable; //type: boolean
        YLeaf is_aigp_cost_community_capable; //type: boolean
        YLeaf is_aigp_med_capable; //type: boolean
        YLeaf is_llgr_capable; //type: boolean
        YLeaf is_adv_capable; //type: boolean
        YLeaf is_adv_reorg_capable; //type: boolean
        YLeaf disable_native_advertisement; //type: boolean
        YLeaf disable_def_vrf_imp_advertisement; //type: boolean
        YLeaf disable_vrf_re_imp_advertisement; //type: boolean
        YLeaf encapsulation_type; //type: uint32
        YLeaf advertise_rt_type; //type: uint8
        YLeaf is_directly_connected_ebgp_v6_peers; //type: boolean
        YLeaf minimum_advertisement_interval; //type: uint32
        YLeaf minimum_advertisement_interval_msecs; //type: uint32
        YLeaf local_as; //type: uint32
        YLeaf route_policy_out; //type: string
        YLeaf desync_count; //type: uint32
        YLeaf subgrp_merge_count; //type: uint32
        YLeaf refresh_subgrp_count; //type: uint32
        YLeaf updates_formatted; //type: uint32
        YLeaf updates_replicated; //type: uint32
        YLeaf local_as_replace_as; //type: boolean
        YLeaf as_override; //type: boolean
        YLeaf soo; //type: boolean
        YLeaf soo_value; //type: string
        YLeaf split_horizon; //type: boolean
        YLeaf is_labeled_afi_enabled; //type: boolean
        YLeaf is_unlabeled_afi_enabled; //type: boolean
        YLeaf ext_nh_encoding; //type: boolean
        YLeaf remote_as; //type: uint32
        YLeaf is_adv_perm_net_capable; //type: boolean
        YLeaf should_send_gshut_community; //type: boolean
        YLeaf gshut_active; //type: boolean
        YLeaf gshut_locpref_set; //type: boolean
        YLeaf gshut_locpref; //type: uint32
        YLeaf gshut_prepends; //type: uint8
        YLeaf advertise_local_labeled_route_unicast; //type: boolean

        class PerformanceStatistics; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor
        class UpdateSubGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor> > neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics> performance_statistics;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup> > update_sub_group;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics : public Entity
{
    public:
        PerformanceStatistics();
        ~PerformanceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_generation_calls; //type: uint32
        YLeaf update_generation_prefixes_count; //type: uint32
        YLeaf update_generation_be_prefixes_count; //type: uint32
        YLeaf update_generation_messages_count; //type: uint32
        YLeaf update_generation_time; //type: uint32
        YLeaf updgen_timer_start_time; //type: uint64
        YLeaf updgen_timer_stop_time; //type: uint64
        YLeaf updgen_timer_process_time; //type: uint64



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::PerformanceStatistics


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup : public Entity
{
    public:
        UpdateSubGroup();
        ~UpdateSubGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_sub_group_number; //type: uint32
        YLeaf filter_group; //type: uint16
        YLeaf wait_for_eo_rs; //type: boolean

        class UpdateFilterGroup; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup> > update_filter_group;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup : public Entity
{
    public:
        UpdateFilterGroup();
        ~UpdateFilterGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf update_filter_group_number; //type: uint32
        YLeaf rts; //type: uint32
        YLeaf fgroup_flags; //type: uint8
        YLeaf fgroup_neighbors; //type: uint16
        YLeaf fgroup_created_message_elements; //type: uint32
        YLeaf fgroup_deleted_message_elements; //type: uint32
        YLeaf fgroup_queued_message_elements; //type: uint32
        YLeaf fgroup_advertised_prefixes; //type: uint32
        YLeaf fgroup_total_advertised_prefixes; //type: uint32
        YLeaf fgroup_withdrawn_prefixes; //type: uint32
        YLeaf fgroup_total_withdrawn_prefixes; //type: uint32
        YLeaf fgroup_total_non_optimised_prefixes; //type: uint32
        YLeaf fgroup_skipped_prefixes; //type: uint32
        YLeaf fgroup_suppressed_prefixes; //type: uint32
        YLeaf is_rt_present; //type: boolean

        class ExtendedCommunity; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity
        class Neighbor; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity> > extended_community;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor> > neighbor;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity : public Entity
{
    public:
        ExtendedCommunity();
        ~ExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: uint8



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::ExtendedCommunity


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv4SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress : public Entity
{
    public:
        Ipv6SrPolicyAddress();
        ~Ipv6SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::UpdateFilterGroup::Neighbor::Ipv6SrPolicyAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf afi; //type: BgpAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv4_mcast_address; //type: string
        YLeaf ipv4_label_address; //type: string
        YLeaf ipv4_tunnel_address; //type: string
        YLeaf ipv4mdt_address; //type: string
        YLeaf ipv4vpn_address; //type: string
        YLeaf ipv4vpna_mcastddress; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf ipv6_mcast_address; //type: string
        YLeaf ipv6_label_address; //type: string
        YLeaf ipv6vpn_address; //type: string
        YLeaf ipv6vpn_mcast_address; //type: string
        YLeaf rt_constraint_address; //type: string
        YLeaf ipv6mvpn_address; //type: string
        YLeaf ipv4mvpn_address; //type: string
        YLeaf l2vpn_evpn_address; //type: string
        YLeaf ls_ls_address; //type: string
        YLeaf ipv4_flowspec_address; //type: string
        YLeaf ipv6_flowspec_address; //type: string
        YLeaf ipv4vpn_flowspec_address; //type: string
        YLeaf ipv6vpn_flowspec_address; //type: string

        class L2VpnvplsAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnvplsAddress
        class L2VpnMspwAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress
        class Ipv4SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress
        class Ipv6SrPolicyAddress; //type: Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress> ipv4sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv6SrPolicyAddress> ipv6sr_policy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress> l2vpn_mspw_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_bgp_oper::Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnvplsAddress> l2vpnvpls_address;


}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnvplsAddress : public Entity
{
    public:
        L2VpnvplsAddress();
        ~L2VpnvplsAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnvplsAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress : public Entity
{
    public:
        L2VpnMspwAddress();
        ~L2VpnMspwAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2vpn_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::L2VpnMspwAddress


class Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress : public Entity
{
    public:
        Ipv4SrPolicyAddress();
        ~Ipv4SrPolicyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_srpolicy_address; //type: string



}; // Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::UpdateGroups::UpdateGroup::UpdateSubGroup::Neighbor::Ipv4SrPolicyAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_OPER_74_ */

