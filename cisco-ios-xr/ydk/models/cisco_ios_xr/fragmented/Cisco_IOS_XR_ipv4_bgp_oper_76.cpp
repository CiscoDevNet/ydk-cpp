
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_76.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_77.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::BgpPrefix::Prefix::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::GwAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"}
{

    yang_name = "gw-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::~GwAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(len.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::GwAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "len")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::L2VpnCircuitStatusValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2vpn-circuit-status-value"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::~L2VpnCircuitStatusValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-circuit-status-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::L2VpnCircuitStatusValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::MdtGroupAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "mdt-group-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::~MdtGroupAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MdtGroupAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::MvpnNbrAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "mvpn-nbr-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::~MvpnNbrAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nbr-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNbrAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::MvpnNexthopAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "mvpn-nexthop-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::~MvpnNexthopAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nexthop-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnNexthopAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::MvpnPmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "mvpn-pmsi-value"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::~MvpnPmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::MvpnPmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::~NextHop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NextHop::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::NhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"}
{

    yang_name = "nh-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::~NhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(len.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "len")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::NhTunnel()
    :
    binding_label{YType::uint32, "binding-label"},
    is_tunnel_info_stale{YType::boolean, "is-tunnel-info-stale"},
    is_tunnel_registered{YType::boolean, "is-tunnel-registered"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    last_tunnel_update{YType::uint32, "last-tunnel-update"},
    tunnel_if_handle{YType::uint32, "tunnel-if-handle"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_type{YType::enumeration, "tunnel-type"},
    tunnel_v6_enabled{YType::boolean, "tunnel-v6-enabled"},
    tunnel_v6_required{YType::boolean, "tunnel-v6-required"}
{

    yang_name = "nh-tunnel"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::~NhTunnel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::has_data() const
{
    return binding_label.is_set
	|| is_tunnel_info_stale.is_set
	|| is_tunnel_registered.is_set
	|| is_tunnel_up.is_set
	|| last_tunnel_update.is_set
	|| tunnel_if_handle.is_set
	|| tunnel_name.is_set
	|| tunnel_type.is_set
	|| tunnel_v6_enabled.is_set
	|| tunnel_v6_required.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(is_tunnel_info_stale.yfilter)
	|| ydk::is_set(is_tunnel_registered.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(last_tunnel_update.yfilter)
	|| ydk::is_set(tunnel_if_handle.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(tunnel_v6_enabled.yfilter)
	|| ydk::is_set(tunnel_v6_required.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (is_tunnel_info_stale.is_set || is_set(is_tunnel_info_stale.yfilter)) leaf_name_data.push_back(is_tunnel_info_stale.get_name_leafdata());
    if (is_tunnel_registered.is_set || is_set(is_tunnel_registered.yfilter)) leaf_name_data.push_back(is_tunnel_registered.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (last_tunnel_update.is_set || is_set(last_tunnel_update.yfilter)) leaf_name_data.push_back(last_tunnel_update.get_name_leafdata());
    if (tunnel_if_handle.is_set || is_set(tunnel_if_handle.yfilter)) leaf_name_data.push_back(tunnel_if_handle.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (tunnel_v6_enabled.is_set || is_set(tunnel_v6_enabled.yfilter)) leaf_name_data.push_back(tunnel_v6_enabled.get_name_leafdata());
    if (tunnel_v6_required.is_set || is_set(tunnel_v6_required.yfilter)) leaf_name_data.push_back(tunnel_v6_required.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale = value;
        is_tunnel_info_stale.value_namespace = name_space;
        is_tunnel_info_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered = value;
        is_tunnel_registered.value_namespace = name_space;
        is_tunnel_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update = value;
        last_tunnel_update.value_namespace = name_space;
        last_tunnel_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle = value;
        tunnel_if_handle.value_namespace = name_space;
        tunnel_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled = value;
        tunnel_v6_enabled.value_namespace = name_space;
        tunnel_v6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required = value;
        tunnel_v6_required.value_namespace = name_space;
        tunnel_v6_required.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update.yfilter = yfilter;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::NhTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label" || name == "is-tunnel-info-stale" || name == "is-tunnel-registered" || name == "is-tunnel-up" || name == "last-tunnel-update" || name == "tunnel-if-handle" || name == "tunnel-name" || name == "tunnel-type" || name == "tunnel-v6-enabled" || name == "tunnel-v6-required")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::RcvdLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "rcvd-label"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::~RcvdLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcvd-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::RcvdLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::VpnNexthopAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "vpn-nexthop-addr"; yang_parent_name = "path-information"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::~VpnNexthopAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-nexthop-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::Paths::PathInformation::VpnNexthopAddr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::AfProcessInfo()
    :
    af_name{YType::enumeration, "af-name"},
    process_instance{YType::uint8, "process-instance"},
    vrf_name{YType::str, "vrf-name"},
    vrf_totals{YType::boolean, "vrf-totals"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_>())
{
    global->parent = this;
    performance_statistics->parent = this;
    vrf->parent = this;

    yang_name = "af-process-info"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::~AfProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::has_data() const
{
    return af_name.is_set
	|| process_instance.is_set
	|| vrf_name.is_set
	|| vrf_totals.is_set
	|| (global !=  nullptr && global->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(process_instance.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_totals.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-process-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (process_instance.is_set || is_set(process_instance.yfilter)) leaf_name_data.push_back(process_instance.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_totals.is_set || is_set(vrf_totals.yfilter)) leaf_name_data.push_back(vrf_totals.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics == nullptr)
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics>();
        }
        return performance_statistics;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(performance_statistics != nullptr)
    {
        children["performance-statistics"] = performance_statistics;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance")
    {
        process_instance = value;
        process_instance.value_namespace = name_space;
        process_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals = value;
        vrf_totals.value_namespace = name_space;
        vrf_totals.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "process-instance")
    {
        process_instance.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-totals")
    {
        vrf_totals.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "performance-statistics" || name == "vrf" || name == "af-name" || name == "process-instance" || name == "vrf-name" || name == "vrf-totals")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::Global()
    :
    freed_rd_count{YType::uint32, "freed-rd-count"},
    import_bgp_version{YType::uint32, "import-bgp-version"},
    import_last_trigger{YType::uint64, "import-last-trigger"},
    import_triggers{YType::uint32, "import-triggers"},
    import_version{YType::uint32, "import-version"},
    imported_paths_memory{YType::uint32, "imported-paths-memory"},
    imported_paths_num{YType::uint32, "imported-paths-num"},
    label_bgp_version{YType::uint32, "label-bgp-version"},
    label_last_trigger{YType::uint64, "label-last-trigger"},
    label_triggers{YType::uint32, "label-triggers"},
    label_version{YType::uint32, "label-version"},
    last_import_version{YType::uint32, "last-import-version"},
    last_label_version{YType::uint32, "last-label-version"},
    last_rib_version{YType::uint32, "last-rib-version"},
    local_networks_freed_num{YType::uint32, "local-networks-freed-num"},
    local_networks_malloced_num{YType::uint32, "local-networks-malloced-num"},
    local_networks_memory{YType::uint32, "local-networks-memory"},
    local_networks_num{YType::uint32, "local-networks-num"},
    local_paths_freed_num{YType::uint32, "local-paths-freed-num"},
    local_paths_malloced_num{YType::uint32, "local-paths-malloced-num"},
    local_paths_memory{YType::uint32, "local-paths-memory"},
    local_paths_num{YType::uint32, "local-paths-num"},
    malloced_rd_count{YType::uint32, "malloced-rd-count"},
    max_active_pelem_version{YType::uint32, "max-active-pelem-version"},
    max_label_stack_depth_v4_next_hop{YType::uint32, "max-label-stack-depth-v4-next-hop"},
    max_label_stack_depth_v6_next_hop{YType::uint32, "max-label-stack-depth-v6-next-hop"},
    merged_table_version{YType::uint32, "merged-table-version"},
    multipath_network_entry_count{YType::uint32, "multipath-network-entry-count"},
    multipath_network_entry_memory{YType::uint32, "multipath-network-entry-memory"},
    multipath_paths_count{YType::uint32, "multipath-paths-count"},
    multipath_paths_memory{YType::uint32, "multipath-paths-memory"},
    networks_freed_num{YType::uint32, "networks-freed-num"},
    networks_malloced_num{YType::uint32, "networks-malloced-num"},
    networks_memory{YType::uint32, "networks-memory"},
    networks_num{YType::uint32, "networks-num"},
    num_init_sync_pfx{YType::uint32, "num-init-sync-pfx"},
    path_elems_freed_num{YType::uint32, "path-elems-freed-num"},
    path_elems_malloced_num{YType::uint32, "path-elems-malloced-num"},
    path_elems_memory{YType::uint32, "path-elems-memory"},
    path_elems_num{YType::uint32, "path-elems-num"},
    paths_freed_num{YType::uint32, "paths-freed-num"},
    paths_malloced_num{YType::uint32, "paths-malloced-num"},
    paths_memory{YType::uint32, "paths-memory"},
    paths_num{YType::uint32, "paths-num"},
    rd_memory{YType::uint32, "rd-memory"},
    rib_ack_requests{YType::uint32, "rib-ack-requests"},
    rib_acked_table_version{YType::uint32, "rib-acked-table-version"},
    rib_acks_received{YType::uint32, "rib-acks-received"},
    rib_bgp_version{YType::uint32, "rib-bgp-version"},
    rib_brib_received_version{YType::uint32, "rib-brib-received-version"},
    rib_last_trigger{YType::uint64, "rib-last-trigger"},
    rib_slow_acks{YType::uint32, "rib-slow-acks"},
    rib_triggers{YType::uint32, "rib-triggers"},
    route_download_go_active_done_pending{YType::uint32, "route-download-go-active-done-pending"},
    router_state{YType::enumeration, "router-state"},
    send_version{YType::uint32, "send-version"},
    standby_version{YType::uint32, "standby-version"},
    table_brib_version{YType::uint32, "table-brib-version"},
    table_version{YType::uint32, "table-version"},
    total_r_ds_num{YType::uint32, "total-r-ds-num"},
    total_remote_r_ds_num{YType::uint32, "total-remote-r-ds-num"},
    total_same_r_ds_num{YType::uint32, "total-same-r-ds-num"},
    update_gen_bgp_version{YType::uint32, "update-gen-bgp-version"},
    update_gen_last_trigger{YType::uint64, "update-gen-last-trigger"},
    update_triggers{YType::uint32, "update-triggers"},
    update_wait_install_enabled{YType::uint32, "update-wait-install-enabled"},
    version_wrapped{YType::uint32, "version-wrapped"},
    version_wrapped_tid{YType::uint32, "version-wrapped-tid"}
    	,
    rib_install(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall>())
	,trigger_import(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport>())
	,trigger_label(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel>())
	,trigger_rib(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib>())
	,trigger_update(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate>())
	,version_wrap_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec>())
	,version_wrap_start_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec>())
	,version_wrap_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec>())
{
    rib_install->parent = this;
    trigger_import->parent = this;
    trigger_label->parent = this;
    trigger_rib->parent = this;
    trigger_update->parent = this;
    version_wrap_done_time_spec->parent = this;
    version_wrap_start_time_spec->parent = this;
    version_wrap_time_spec->parent = this;

    yang_name = "global"; yang_parent_name = "af-process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::has_data() const
{
    return freed_rd_count.is_set
	|| import_bgp_version.is_set
	|| import_last_trigger.is_set
	|| import_triggers.is_set
	|| import_version.is_set
	|| imported_paths_memory.is_set
	|| imported_paths_num.is_set
	|| label_bgp_version.is_set
	|| label_last_trigger.is_set
	|| label_triggers.is_set
	|| label_version.is_set
	|| last_import_version.is_set
	|| last_label_version.is_set
	|| last_rib_version.is_set
	|| local_networks_freed_num.is_set
	|| local_networks_malloced_num.is_set
	|| local_networks_memory.is_set
	|| local_networks_num.is_set
	|| local_paths_freed_num.is_set
	|| local_paths_malloced_num.is_set
	|| local_paths_memory.is_set
	|| local_paths_num.is_set
	|| malloced_rd_count.is_set
	|| max_active_pelem_version.is_set
	|| max_label_stack_depth_v4_next_hop.is_set
	|| max_label_stack_depth_v6_next_hop.is_set
	|| merged_table_version.is_set
	|| multipath_network_entry_count.is_set
	|| multipath_network_entry_memory.is_set
	|| multipath_paths_count.is_set
	|| multipath_paths_memory.is_set
	|| networks_freed_num.is_set
	|| networks_malloced_num.is_set
	|| networks_memory.is_set
	|| networks_num.is_set
	|| num_init_sync_pfx.is_set
	|| path_elems_freed_num.is_set
	|| path_elems_malloced_num.is_set
	|| path_elems_memory.is_set
	|| path_elems_num.is_set
	|| paths_freed_num.is_set
	|| paths_malloced_num.is_set
	|| paths_memory.is_set
	|| paths_num.is_set
	|| rd_memory.is_set
	|| rib_ack_requests.is_set
	|| rib_acked_table_version.is_set
	|| rib_acks_received.is_set
	|| rib_bgp_version.is_set
	|| rib_brib_received_version.is_set
	|| rib_last_trigger.is_set
	|| rib_slow_acks.is_set
	|| rib_triggers.is_set
	|| route_download_go_active_done_pending.is_set
	|| router_state.is_set
	|| send_version.is_set
	|| standby_version.is_set
	|| table_brib_version.is_set
	|| table_version.is_set
	|| total_r_ds_num.is_set
	|| total_remote_r_ds_num.is_set
	|| total_same_r_ds_num.is_set
	|| update_gen_bgp_version.is_set
	|| update_gen_last_trigger.is_set
	|| update_triggers.is_set
	|| update_wait_install_enabled.is_set
	|| version_wrapped.is_set
	|| version_wrapped_tid.is_set
	|| (rib_install !=  nullptr && rib_install->has_data())
	|| (trigger_import !=  nullptr && trigger_import->has_data())
	|| (trigger_label !=  nullptr && trigger_label->has_data())
	|| (trigger_rib !=  nullptr && trigger_rib->has_data())
	|| (trigger_update !=  nullptr && trigger_update->has_data())
	|| (version_wrap_done_time_spec !=  nullptr && version_wrap_done_time_spec->has_data())
	|| (version_wrap_start_time_spec !=  nullptr && version_wrap_start_time_spec->has_data())
	|| (version_wrap_time_spec !=  nullptr && version_wrap_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(freed_rd_count.yfilter)
	|| ydk::is_set(import_bgp_version.yfilter)
	|| ydk::is_set(import_last_trigger.yfilter)
	|| ydk::is_set(import_triggers.yfilter)
	|| ydk::is_set(import_version.yfilter)
	|| ydk::is_set(imported_paths_memory.yfilter)
	|| ydk::is_set(imported_paths_num.yfilter)
	|| ydk::is_set(label_bgp_version.yfilter)
	|| ydk::is_set(label_last_trigger.yfilter)
	|| ydk::is_set(label_triggers.yfilter)
	|| ydk::is_set(label_version.yfilter)
	|| ydk::is_set(last_import_version.yfilter)
	|| ydk::is_set(last_label_version.yfilter)
	|| ydk::is_set(last_rib_version.yfilter)
	|| ydk::is_set(local_networks_freed_num.yfilter)
	|| ydk::is_set(local_networks_malloced_num.yfilter)
	|| ydk::is_set(local_networks_memory.yfilter)
	|| ydk::is_set(local_networks_num.yfilter)
	|| ydk::is_set(local_paths_freed_num.yfilter)
	|| ydk::is_set(local_paths_malloced_num.yfilter)
	|| ydk::is_set(local_paths_memory.yfilter)
	|| ydk::is_set(local_paths_num.yfilter)
	|| ydk::is_set(malloced_rd_count.yfilter)
	|| ydk::is_set(max_active_pelem_version.yfilter)
	|| ydk::is_set(max_label_stack_depth_v4_next_hop.yfilter)
	|| ydk::is_set(max_label_stack_depth_v6_next_hop.yfilter)
	|| ydk::is_set(merged_table_version.yfilter)
	|| ydk::is_set(multipath_network_entry_count.yfilter)
	|| ydk::is_set(multipath_network_entry_memory.yfilter)
	|| ydk::is_set(multipath_paths_count.yfilter)
	|| ydk::is_set(multipath_paths_memory.yfilter)
	|| ydk::is_set(networks_freed_num.yfilter)
	|| ydk::is_set(networks_malloced_num.yfilter)
	|| ydk::is_set(networks_memory.yfilter)
	|| ydk::is_set(networks_num.yfilter)
	|| ydk::is_set(num_init_sync_pfx.yfilter)
	|| ydk::is_set(path_elems_freed_num.yfilter)
	|| ydk::is_set(path_elems_malloced_num.yfilter)
	|| ydk::is_set(path_elems_memory.yfilter)
	|| ydk::is_set(path_elems_num.yfilter)
	|| ydk::is_set(paths_freed_num.yfilter)
	|| ydk::is_set(paths_malloced_num.yfilter)
	|| ydk::is_set(paths_memory.yfilter)
	|| ydk::is_set(paths_num.yfilter)
	|| ydk::is_set(rd_memory.yfilter)
	|| ydk::is_set(rib_ack_requests.yfilter)
	|| ydk::is_set(rib_acked_table_version.yfilter)
	|| ydk::is_set(rib_acks_received.yfilter)
	|| ydk::is_set(rib_bgp_version.yfilter)
	|| ydk::is_set(rib_brib_received_version.yfilter)
	|| ydk::is_set(rib_last_trigger.yfilter)
	|| ydk::is_set(rib_slow_acks.yfilter)
	|| ydk::is_set(rib_triggers.yfilter)
	|| ydk::is_set(route_download_go_active_done_pending.yfilter)
	|| ydk::is_set(router_state.yfilter)
	|| ydk::is_set(send_version.yfilter)
	|| ydk::is_set(standby_version.yfilter)
	|| ydk::is_set(table_brib_version.yfilter)
	|| ydk::is_set(table_version.yfilter)
	|| ydk::is_set(total_r_ds_num.yfilter)
	|| ydk::is_set(total_remote_r_ds_num.yfilter)
	|| ydk::is_set(total_same_r_ds_num.yfilter)
	|| ydk::is_set(update_gen_bgp_version.yfilter)
	|| ydk::is_set(update_gen_last_trigger.yfilter)
	|| ydk::is_set(update_triggers.yfilter)
	|| ydk::is_set(update_wait_install_enabled.yfilter)
	|| ydk::is_set(version_wrapped.yfilter)
	|| ydk::is_set(version_wrapped_tid.yfilter)
	|| (rib_install !=  nullptr && rib_install->has_operation())
	|| (trigger_import !=  nullptr && trigger_import->has_operation())
	|| (trigger_label !=  nullptr && trigger_label->has_operation())
	|| (trigger_rib !=  nullptr && trigger_rib->has_operation())
	|| (trigger_update !=  nullptr && trigger_update->has_operation())
	|| (version_wrap_done_time_spec !=  nullptr && version_wrap_done_time_spec->has_operation())
	|| (version_wrap_start_time_spec !=  nullptr && version_wrap_start_time_spec->has_operation())
	|| (version_wrap_time_spec !=  nullptr && version_wrap_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (freed_rd_count.is_set || is_set(freed_rd_count.yfilter)) leaf_name_data.push_back(freed_rd_count.get_name_leafdata());
    if (import_bgp_version.is_set || is_set(import_bgp_version.yfilter)) leaf_name_data.push_back(import_bgp_version.get_name_leafdata());
    if (import_last_trigger.is_set || is_set(import_last_trigger.yfilter)) leaf_name_data.push_back(import_last_trigger.get_name_leafdata());
    if (import_triggers.is_set || is_set(import_triggers.yfilter)) leaf_name_data.push_back(import_triggers.get_name_leafdata());
    if (import_version.is_set || is_set(import_version.yfilter)) leaf_name_data.push_back(import_version.get_name_leafdata());
    if (imported_paths_memory.is_set || is_set(imported_paths_memory.yfilter)) leaf_name_data.push_back(imported_paths_memory.get_name_leafdata());
    if (imported_paths_num.is_set || is_set(imported_paths_num.yfilter)) leaf_name_data.push_back(imported_paths_num.get_name_leafdata());
    if (label_bgp_version.is_set || is_set(label_bgp_version.yfilter)) leaf_name_data.push_back(label_bgp_version.get_name_leafdata());
    if (label_last_trigger.is_set || is_set(label_last_trigger.yfilter)) leaf_name_data.push_back(label_last_trigger.get_name_leafdata());
    if (label_triggers.is_set || is_set(label_triggers.yfilter)) leaf_name_data.push_back(label_triggers.get_name_leafdata());
    if (label_version.is_set || is_set(label_version.yfilter)) leaf_name_data.push_back(label_version.get_name_leafdata());
    if (last_import_version.is_set || is_set(last_import_version.yfilter)) leaf_name_data.push_back(last_import_version.get_name_leafdata());
    if (last_label_version.is_set || is_set(last_label_version.yfilter)) leaf_name_data.push_back(last_label_version.get_name_leafdata());
    if (last_rib_version.is_set || is_set(last_rib_version.yfilter)) leaf_name_data.push_back(last_rib_version.get_name_leafdata());
    if (local_networks_freed_num.is_set || is_set(local_networks_freed_num.yfilter)) leaf_name_data.push_back(local_networks_freed_num.get_name_leafdata());
    if (local_networks_malloced_num.is_set || is_set(local_networks_malloced_num.yfilter)) leaf_name_data.push_back(local_networks_malloced_num.get_name_leafdata());
    if (local_networks_memory.is_set || is_set(local_networks_memory.yfilter)) leaf_name_data.push_back(local_networks_memory.get_name_leafdata());
    if (local_networks_num.is_set || is_set(local_networks_num.yfilter)) leaf_name_data.push_back(local_networks_num.get_name_leafdata());
    if (local_paths_freed_num.is_set || is_set(local_paths_freed_num.yfilter)) leaf_name_data.push_back(local_paths_freed_num.get_name_leafdata());
    if (local_paths_malloced_num.is_set || is_set(local_paths_malloced_num.yfilter)) leaf_name_data.push_back(local_paths_malloced_num.get_name_leafdata());
    if (local_paths_memory.is_set || is_set(local_paths_memory.yfilter)) leaf_name_data.push_back(local_paths_memory.get_name_leafdata());
    if (local_paths_num.is_set || is_set(local_paths_num.yfilter)) leaf_name_data.push_back(local_paths_num.get_name_leafdata());
    if (malloced_rd_count.is_set || is_set(malloced_rd_count.yfilter)) leaf_name_data.push_back(malloced_rd_count.get_name_leafdata());
    if (max_active_pelem_version.is_set || is_set(max_active_pelem_version.yfilter)) leaf_name_data.push_back(max_active_pelem_version.get_name_leafdata());
    if (max_label_stack_depth_v4_next_hop.is_set || is_set(max_label_stack_depth_v4_next_hop.yfilter)) leaf_name_data.push_back(max_label_stack_depth_v4_next_hop.get_name_leafdata());
    if (max_label_stack_depth_v6_next_hop.is_set || is_set(max_label_stack_depth_v6_next_hop.yfilter)) leaf_name_data.push_back(max_label_stack_depth_v6_next_hop.get_name_leafdata());
    if (merged_table_version.is_set || is_set(merged_table_version.yfilter)) leaf_name_data.push_back(merged_table_version.get_name_leafdata());
    if (multipath_network_entry_count.is_set || is_set(multipath_network_entry_count.yfilter)) leaf_name_data.push_back(multipath_network_entry_count.get_name_leafdata());
    if (multipath_network_entry_memory.is_set || is_set(multipath_network_entry_memory.yfilter)) leaf_name_data.push_back(multipath_network_entry_memory.get_name_leafdata());
    if (multipath_paths_count.is_set || is_set(multipath_paths_count.yfilter)) leaf_name_data.push_back(multipath_paths_count.get_name_leafdata());
    if (multipath_paths_memory.is_set || is_set(multipath_paths_memory.yfilter)) leaf_name_data.push_back(multipath_paths_memory.get_name_leafdata());
    if (networks_freed_num.is_set || is_set(networks_freed_num.yfilter)) leaf_name_data.push_back(networks_freed_num.get_name_leafdata());
    if (networks_malloced_num.is_set || is_set(networks_malloced_num.yfilter)) leaf_name_data.push_back(networks_malloced_num.get_name_leafdata());
    if (networks_memory.is_set || is_set(networks_memory.yfilter)) leaf_name_data.push_back(networks_memory.get_name_leafdata());
    if (networks_num.is_set || is_set(networks_num.yfilter)) leaf_name_data.push_back(networks_num.get_name_leafdata());
    if (num_init_sync_pfx.is_set || is_set(num_init_sync_pfx.yfilter)) leaf_name_data.push_back(num_init_sync_pfx.get_name_leafdata());
    if (path_elems_freed_num.is_set || is_set(path_elems_freed_num.yfilter)) leaf_name_data.push_back(path_elems_freed_num.get_name_leafdata());
    if (path_elems_malloced_num.is_set || is_set(path_elems_malloced_num.yfilter)) leaf_name_data.push_back(path_elems_malloced_num.get_name_leafdata());
    if (path_elems_memory.is_set || is_set(path_elems_memory.yfilter)) leaf_name_data.push_back(path_elems_memory.get_name_leafdata());
    if (path_elems_num.is_set || is_set(path_elems_num.yfilter)) leaf_name_data.push_back(path_elems_num.get_name_leafdata());
    if (paths_freed_num.is_set || is_set(paths_freed_num.yfilter)) leaf_name_data.push_back(paths_freed_num.get_name_leafdata());
    if (paths_malloced_num.is_set || is_set(paths_malloced_num.yfilter)) leaf_name_data.push_back(paths_malloced_num.get_name_leafdata());
    if (paths_memory.is_set || is_set(paths_memory.yfilter)) leaf_name_data.push_back(paths_memory.get_name_leafdata());
    if (paths_num.is_set || is_set(paths_num.yfilter)) leaf_name_data.push_back(paths_num.get_name_leafdata());
    if (rd_memory.is_set || is_set(rd_memory.yfilter)) leaf_name_data.push_back(rd_memory.get_name_leafdata());
    if (rib_ack_requests.is_set || is_set(rib_ack_requests.yfilter)) leaf_name_data.push_back(rib_ack_requests.get_name_leafdata());
    if (rib_acked_table_version.is_set || is_set(rib_acked_table_version.yfilter)) leaf_name_data.push_back(rib_acked_table_version.get_name_leafdata());
    if (rib_acks_received.is_set || is_set(rib_acks_received.yfilter)) leaf_name_data.push_back(rib_acks_received.get_name_leafdata());
    if (rib_bgp_version.is_set || is_set(rib_bgp_version.yfilter)) leaf_name_data.push_back(rib_bgp_version.get_name_leafdata());
    if (rib_brib_received_version.is_set || is_set(rib_brib_received_version.yfilter)) leaf_name_data.push_back(rib_brib_received_version.get_name_leafdata());
    if (rib_last_trigger.is_set || is_set(rib_last_trigger.yfilter)) leaf_name_data.push_back(rib_last_trigger.get_name_leafdata());
    if (rib_slow_acks.is_set || is_set(rib_slow_acks.yfilter)) leaf_name_data.push_back(rib_slow_acks.get_name_leafdata());
    if (rib_triggers.is_set || is_set(rib_triggers.yfilter)) leaf_name_data.push_back(rib_triggers.get_name_leafdata());
    if (route_download_go_active_done_pending.is_set || is_set(route_download_go_active_done_pending.yfilter)) leaf_name_data.push_back(route_download_go_active_done_pending.get_name_leafdata());
    if (router_state.is_set || is_set(router_state.yfilter)) leaf_name_data.push_back(router_state.get_name_leafdata());
    if (send_version.is_set || is_set(send_version.yfilter)) leaf_name_data.push_back(send_version.get_name_leafdata());
    if (standby_version.is_set || is_set(standby_version.yfilter)) leaf_name_data.push_back(standby_version.get_name_leafdata());
    if (table_brib_version.is_set || is_set(table_brib_version.yfilter)) leaf_name_data.push_back(table_brib_version.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.yfilter)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (total_r_ds_num.is_set || is_set(total_r_ds_num.yfilter)) leaf_name_data.push_back(total_r_ds_num.get_name_leafdata());
    if (total_remote_r_ds_num.is_set || is_set(total_remote_r_ds_num.yfilter)) leaf_name_data.push_back(total_remote_r_ds_num.get_name_leafdata());
    if (total_same_r_ds_num.is_set || is_set(total_same_r_ds_num.yfilter)) leaf_name_data.push_back(total_same_r_ds_num.get_name_leafdata());
    if (update_gen_bgp_version.is_set || is_set(update_gen_bgp_version.yfilter)) leaf_name_data.push_back(update_gen_bgp_version.get_name_leafdata());
    if (update_gen_last_trigger.is_set || is_set(update_gen_last_trigger.yfilter)) leaf_name_data.push_back(update_gen_last_trigger.get_name_leafdata());
    if (update_triggers.is_set || is_set(update_triggers.yfilter)) leaf_name_data.push_back(update_triggers.get_name_leafdata());
    if (update_wait_install_enabled.is_set || is_set(update_wait_install_enabled.yfilter)) leaf_name_data.push_back(update_wait_install_enabled.get_name_leafdata());
    if (version_wrapped.is_set || is_set(version_wrapped.yfilter)) leaf_name_data.push_back(version_wrapped.get_name_leafdata());
    if (version_wrapped_tid.is_set || is_set(version_wrapped_tid.yfilter)) leaf_name_data.push_back(version_wrapped_tid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rib-install")
    {
        if(rib_install == nullptr)
        {
            rib_install = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall>();
        }
        return rib_install;
    }

    if(child_yang_name == "trigger-import")
    {
        if(trigger_import == nullptr)
        {
            trigger_import = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport>();
        }
        return trigger_import;
    }

    if(child_yang_name == "trigger-label")
    {
        if(trigger_label == nullptr)
        {
            trigger_label = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel>();
        }
        return trigger_label;
    }

    if(child_yang_name == "trigger-rib")
    {
        if(trigger_rib == nullptr)
        {
            trigger_rib = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib>();
        }
        return trigger_rib;
    }

    if(child_yang_name == "trigger-update")
    {
        if(trigger_update == nullptr)
        {
            trigger_update = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate>();
        }
        return trigger_update;
    }

    if(child_yang_name == "version-wrap-done-time-spec")
    {
        if(version_wrap_done_time_spec == nullptr)
        {
            version_wrap_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec>();
        }
        return version_wrap_done_time_spec;
    }

    if(child_yang_name == "version-wrap-start-time-spec")
    {
        if(version_wrap_start_time_spec == nullptr)
        {
            version_wrap_start_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec>();
        }
        return version_wrap_start_time_spec;
    }

    if(child_yang_name == "version-wrap-time-spec")
    {
        if(version_wrap_time_spec == nullptr)
        {
            version_wrap_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec>();
        }
        return version_wrap_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rib_install != nullptr)
    {
        children["rib-install"] = rib_install;
    }

    if(trigger_import != nullptr)
    {
        children["trigger-import"] = trigger_import;
    }

    if(trigger_label != nullptr)
    {
        children["trigger-label"] = trigger_label;
    }

    if(trigger_rib != nullptr)
    {
        children["trigger-rib"] = trigger_rib;
    }

    if(trigger_update != nullptr)
    {
        children["trigger-update"] = trigger_update;
    }

    if(version_wrap_done_time_spec != nullptr)
    {
        children["version-wrap-done-time-spec"] = version_wrap_done_time_spec;
    }

    if(version_wrap_start_time_spec != nullptr)
    {
        children["version-wrap-start-time-spec"] = version_wrap_start_time_spec;
    }

    if(version_wrap_time_spec != nullptr)
    {
        children["version-wrap-time-spec"] = version_wrap_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "freed-rd-count")
    {
        freed_rd_count = value;
        freed_rd_count.value_namespace = name_space;
        freed_rd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-bgp-version")
    {
        import_bgp_version = value;
        import_bgp_version.value_namespace = name_space;
        import_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-last-trigger")
    {
        import_last_trigger = value;
        import_last_trigger.value_namespace = name_space;
        import_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-triggers")
    {
        import_triggers = value;
        import_triggers.value_namespace = name_space;
        import_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-version")
    {
        import_version = value;
        import_version.value_namespace = name_space;
        import_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-paths-memory")
    {
        imported_paths_memory = value;
        imported_paths_memory.value_namespace = name_space;
        imported_paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-paths-num")
    {
        imported_paths_num = value;
        imported_paths_num.value_namespace = name_space;
        imported_paths_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-bgp-version")
    {
        label_bgp_version = value;
        label_bgp_version.value_namespace = name_space;
        label_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-last-trigger")
    {
        label_last_trigger = value;
        label_last_trigger.value_namespace = name_space;
        label_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-triggers")
    {
        label_triggers = value;
        label_triggers.value_namespace = name_space;
        label_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-version")
    {
        label_version = value;
        label_version.value_namespace = name_space;
        label_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-import-version")
    {
        last_import_version = value;
        last_import_version.value_namespace = name_space;
        last_import_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-label-version")
    {
        last_label_version = value;
        last_label_version.value_namespace = name_space;
        last_label_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-version")
    {
        last_rib_version = value;
        last_rib_version.value_namespace = name_space;
        last_rib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-freed-num")
    {
        local_networks_freed_num = value;
        local_networks_freed_num.value_namespace = name_space;
        local_networks_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-malloced-num")
    {
        local_networks_malloced_num = value;
        local_networks_malloced_num.value_namespace = name_space;
        local_networks_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-memory")
    {
        local_networks_memory = value;
        local_networks_memory.value_namespace = name_space;
        local_networks_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-networks-num")
    {
        local_networks_num = value;
        local_networks_num.value_namespace = name_space;
        local_networks_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-freed-num")
    {
        local_paths_freed_num = value;
        local_paths_freed_num.value_namespace = name_space;
        local_paths_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-malloced-num")
    {
        local_paths_malloced_num = value;
        local_paths_malloced_num.value_namespace = name_space;
        local_paths_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-memory")
    {
        local_paths_memory = value;
        local_paths_memory.value_namespace = name_space;
        local_paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths-num")
    {
        local_paths_num = value;
        local_paths_num.value_namespace = name_space;
        local_paths_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-rd-count")
    {
        malloced_rd_count = value;
        malloced_rd_count.value_namespace = name_space;
        malloced_rd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-active-pelem-version")
    {
        max_active_pelem_version = value;
        max_active_pelem_version.value_namespace = name_space;
        max_active_pelem_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-stack-depth-v4-next-hop")
    {
        max_label_stack_depth_v4_next_hop = value;
        max_label_stack_depth_v4_next_hop.value_namespace = name_space;
        max_label_stack_depth_v4_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-label-stack-depth-v6-next-hop")
    {
        max_label_stack_depth_v6_next_hop = value;
        max_label_stack_depth_v6_next_hop.value_namespace = name_space;
        max_label_stack_depth_v6_next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "merged-table-version")
    {
        merged_table_version = value;
        merged_table_version.value_namespace = name_space;
        merged_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-network-entry-count")
    {
        multipath_network_entry_count = value;
        multipath_network_entry_count.value_namespace = name_space;
        multipath_network_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-network-entry-memory")
    {
        multipath_network_entry_memory = value;
        multipath_network_entry_memory.value_namespace = name_space;
        multipath_network_entry_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-paths-count")
    {
        multipath_paths_count = value;
        multipath_paths_count.value_namespace = name_space;
        multipath_paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath-paths-memory")
    {
        multipath_paths_memory = value;
        multipath_paths_memory.value_namespace = name_space;
        multipath_paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-freed-num")
    {
        networks_freed_num = value;
        networks_freed_num.value_namespace = name_space;
        networks_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-malloced-num")
    {
        networks_malloced_num = value;
        networks_malloced_num.value_namespace = name_space;
        networks_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-memory")
    {
        networks_memory = value;
        networks_memory.value_namespace = name_space;
        networks_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "networks-num")
    {
        networks_num = value;
        networks_num.value_namespace = name_space;
        networks_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-init-sync-pfx")
    {
        num_init_sync_pfx = value;
        num_init_sync_pfx.value_namespace = name_space;
        num_init_sync_pfx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-freed-num")
    {
        path_elems_freed_num = value;
        path_elems_freed_num.value_namespace = name_space;
        path_elems_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-malloced-num")
    {
        path_elems_malloced_num = value;
        path_elems_malloced_num.value_namespace = name_space;
        path_elems_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-memory")
    {
        path_elems_memory = value;
        path_elems_memory.value_namespace = name_space;
        path_elems_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-num")
    {
        path_elems_num = value;
        path_elems_num.value_namespace = name_space;
        path_elems_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-freed-num")
    {
        paths_freed_num = value;
        paths_freed_num.value_namespace = name_space;
        paths_freed_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-malloced-num")
    {
        paths_malloced_num = value;
        paths_malloced_num.value_namespace = name_space;
        paths_malloced_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-memory")
    {
        paths_memory = value;
        paths_memory.value_namespace = name_space;
        paths_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-num")
    {
        paths_num = value;
        paths_num.value_namespace = name_space;
        paths_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rd-memory")
    {
        rd_memory = value;
        rd_memory.value_namespace = name_space;
        rd_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-ack-requests")
    {
        rib_ack_requests = value;
        rib_ack_requests.value_namespace = name_space;
        rib_ack_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-acked-table-version")
    {
        rib_acked_table_version = value;
        rib_acked_table_version.value_namespace = name_space;
        rib_acked_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-acks-received")
    {
        rib_acks_received = value;
        rib_acks_received.value_namespace = name_space;
        rib_acks_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-bgp-version")
    {
        rib_bgp_version = value;
        rib_bgp_version.value_namespace = name_space;
        rib_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-brib-received-version")
    {
        rib_brib_received_version = value;
        rib_brib_received_version.value_namespace = name_space;
        rib_brib_received_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-last-trigger")
    {
        rib_last_trigger = value;
        rib_last_trigger.value_namespace = name_space;
        rib_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-slow-acks")
    {
        rib_slow_acks = value;
        rib_slow_acks.value_namespace = name_space;
        rib_slow_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-triggers")
    {
        rib_triggers = value;
        rib_triggers.value_namespace = name_space;
        rib_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-download-go-active-done-pending")
    {
        route_download_go_active_done_pending = value;
        route_download_go_active_done_pending.value_namespace = name_space;
        route_download_go_active_done_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-state")
    {
        router_state = value;
        router_state.value_namespace = name_space;
        router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-version")
    {
        send_version = value;
        send_version.value_namespace = name_space;
        send_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-version")
    {
        standby_version = value;
        standby_version.value_namespace = name_space;
        standby_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version = value;
        table_brib_version.value_namespace = name_space;
        table_brib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-version")
    {
        table_version = value;
        table_version.value_namespace = name_space;
        table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-r-ds-num")
    {
        total_r_ds_num = value;
        total_r_ds_num.value_namespace = name_space;
        total_r_ds_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-remote-r-ds-num")
    {
        total_remote_r_ds_num = value;
        total_remote_r_ds_num.value_namespace = name_space;
        total_remote_r_ds_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-same-r-ds-num")
    {
        total_same_r_ds_num = value;
        total_same_r_ds_num.value_namespace = name_space;
        total_same_r_ds_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-gen-bgp-version")
    {
        update_gen_bgp_version = value;
        update_gen_bgp_version.value_namespace = name_space;
        update_gen_bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-gen-last-trigger")
    {
        update_gen_last_trigger = value;
        update_gen_last_trigger.value_namespace = name_space;
        update_gen_last_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-triggers")
    {
        update_triggers = value;
        update_triggers.value_namespace = name_space;
        update_triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-wait-install-enabled")
    {
        update_wait_install_enabled = value;
        update_wait_install_enabled.value_namespace = name_space;
        update_wait_install_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-wrapped")
    {
        version_wrapped = value;
        version_wrapped.value_namespace = name_space;
        version_wrapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version-wrapped-tid")
    {
        version_wrapped_tid = value;
        version_wrapped_tid.value_namespace = name_space;
        version_wrapped_tid.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "freed-rd-count")
    {
        freed_rd_count.yfilter = yfilter;
    }
    if(value_path == "import-bgp-version")
    {
        import_bgp_version.yfilter = yfilter;
    }
    if(value_path == "import-last-trigger")
    {
        import_last_trigger.yfilter = yfilter;
    }
    if(value_path == "import-triggers")
    {
        import_triggers.yfilter = yfilter;
    }
    if(value_path == "import-version")
    {
        import_version.yfilter = yfilter;
    }
    if(value_path == "imported-paths-memory")
    {
        imported_paths_memory.yfilter = yfilter;
    }
    if(value_path == "imported-paths-num")
    {
        imported_paths_num.yfilter = yfilter;
    }
    if(value_path == "label-bgp-version")
    {
        label_bgp_version.yfilter = yfilter;
    }
    if(value_path == "label-last-trigger")
    {
        label_last_trigger.yfilter = yfilter;
    }
    if(value_path == "label-triggers")
    {
        label_triggers.yfilter = yfilter;
    }
    if(value_path == "label-version")
    {
        label_version.yfilter = yfilter;
    }
    if(value_path == "last-import-version")
    {
        last_import_version.yfilter = yfilter;
    }
    if(value_path == "last-label-version")
    {
        last_label_version.yfilter = yfilter;
    }
    if(value_path == "last-rib-version")
    {
        last_rib_version.yfilter = yfilter;
    }
    if(value_path == "local-networks-freed-num")
    {
        local_networks_freed_num.yfilter = yfilter;
    }
    if(value_path == "local-networks-malloced-num")
    {
        local_networks_malloced_num.yfilter = yfilter;
    }
    if(value_path == "local-networks-memory")
    {
        local_networks_memory.yfilter = yfilter;
    }
    if(value_path == "local-networks-num")
    {
        local_networks_num.yfilter = yfilter;
    }
    if(value_path == "local-paths-freed-num")
    {
        local_paths_freed_num.yfilter = yfilter;
    }
    if(value_path == "local-paths-malloced-num")
    {
        local_paths_malloced_num.yfilter = yfilter;
    }
    if(value_path == "local-paths-memory")
    {
        local_paths_memory.yfilter = yfilter;
    }
    if(value_path == "local-paths-num")
    {
        local_paths_num.yfilter = yfilter;
    }
    if(value_path == "malloced-rd-count")
    {
        malloced_rd_count.yfilter = yfilter;
    }
    if(value_path == "max-active-pelem-version")
    {
        max_active_pelem_version.yfilter = yfilter;
    }
    if(value_path == "max-label-stack-depth-v4-next-hop")
    {
        max_label_stack_depth_v4_next_hop.yfilter = yfilter;
    }
    if(value_path == "max-label-stack-depth-v6-next-hop")
    {
        max_label_stack_depth_v6_next_hop.yfilter = yfilter;
    }
    if(value_path == "merged-table-version")
    {
        merged_table_version.yfilter = yfilter;
    }
    if(value_path == "multipath-network-entry-count")
    {
        multipath_network_entry_count.yfilter = yfilter;
    }
    if(value_path == "multipath-network-entry-memory")
    {
        multipath_network_entry_memory.yfilter = yfilter;
    }
    if(value_path == "multipath-paths-count")
    {
        multipath_paths_count.yfilter = yfilter;
    }
    if(value_path == "multipath-paths-memory")
    {
        multipath_paths_memory.yfilter = yfilter;
    }
    if(value_path == "networks-freed-num")
    {
        networks_freed_num.yfilter = yfilter;
    }
    if(value_path == "networks-malloced-num")
    {
        networks_malloced_num.yfilter = yfilter;
    }
    if(value_path == "networks-memory")
    {
        networks_memory.yfilter = yfilter;
    }
    if(value_path == "networks-num")
    {
        networks_num.yfilter = yfilter;
    }
    if(value_path == "num-init-sync-pfx")
    {
        num_init_sync_pfx.yfilter = yfilter;
    }
    if(value_path == "path-elems-freed-num")
    {
        path_elems_freed_num.yfilter = yfilter;
    }
    if(value_path == "path-elems-malloced-num")
    {
        path_elems_malloced_num.yfilter = yfilter;
    }
    if(value_path == "path-elems-memory")
    {
        path_elems_memory.yfilter = yfilter;
    }
    if(value_path == "path-elems-num")
    {
        path_elems_num.yfilter = yfilter;
    }
    if(value_path == "paths-freed-num")
    {
        paths_freed_num.yfilter = yfilter;
    }
    if(value_path == "paths-malloced-num")
    {
        paths_malloced_num.yfilter = yfilter;
    }
    if(value_path == "paths-memory")
    {
        paths_memory.yfilter = yfilter;
    }
    if(value_path == "paths-num")
    {
        paths_num.yfilter = yfilter;
    }
    if(value_path == "rd-memory")
    {
        rd_memory.yfilter = yfilter;
    }
    if(value_path == "rib-ack-requests")
    {
        rib_ack_requests.yfilter = yfilter;
    }
    if(value_path == "rib-acked-table-version")
    {
        rib_acked_table_version.yfilter = yfilter;
    }
    if(value_path == "rib-acks-received")
    {
        rib_acks_received.yfilter = yfilter;
    }
    if(value_path == "rib-bgp-version")
    {
        rib_bgp_version.yfilter = yfilter;
    }
    if(value_path == "rib-brib-received-version")
    {
        rib_brib_received_version.yfilter = yfilter;
    }
    if(value_path == "rib-last-trigger")
    {
        rib_last_trigger.yfilter = yfilter;
    }
    if(value_path == "rib-slow-acks")
    {
        rib_slow_acks.yfilter = yfilter;
    }
    if(value_path == "rib-triggers")
    {
        rib_triggers.yfilter = yfilter;
    }
    if(value_path == "route-download-go-active-done-pending")
    {
        route_download_go_active_done_pending.yfilter = yfilter;
    }
    if(value_path == "router-state")
    {
        router_state.yfilter = yfilter;
    }
    if(value_path == "send-version")
    {
        send_version.yfilter = yfilter;
    }
    if(value_path == "standby-version")
    {
        standby_version.yfilter = yfilter;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version.yfilter = yfilter;
    }
    if(value_path == "table-version")
    {
        table_version.yfilter = yfilter;
    }
    if(value_path == "total-r-ds-num")
    {
        total_r_ds_num.yfilter = yfilter;
    }
    if(value_path == "total-remote-r-ds-num")
    {
        total_remote_r_ds_num.yfilter = yfilter;
    }
    if(value_path == "total-same-r-ds-num")
    {
        total_same_r_ds_num.yfilter = yfilter;
    }
    if(value_path == "update-gen-bgp-version")
    {
        update_gen_bgp_version.yfilter = yfilter;
    }
    if(value_path == "update-gen-last-trigger")
    {
        update_gen_last_trigger.yfilter = yfilter;
    }
    if(value_path == "update-triggers")
    {
        update_triggers.yfilter = yfilter;
    }
    if(value_path == "update-wait-install-enabled")
    {
        update_wait_install_enabled.yfilter = yfilter;
    }
    if(value_path == "version-wrapped")
    {
        version_wrapped.yfilter = yfilter;
    }
    if(value_path == "version-wrapped-tid")
    {
        version_wrapped_tid.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rib-install" || name == "trigger-import" || name == "trigger-label" || name == "trigger-rib" || name == "trigger-update" || name == "version-wrap-done-time-spec" || name == "version-wrap-start-time-spec" || name == "version-wrap-time-spec" || name == "freed-rd-count" || name == "import-bgp-version" || name == "import-last-trigger" || name == "import-triggers" || name == "import-version" || name == "imported-paths-memory" || name == "imported-paths-num" || name == "label-bgp-version" || name == "label-last-trigger" || name == "label-triggers" || name == "label-version" || name == "last-import-version" || name == "last-label-version" || name == "last-rib-version" || name == "local-networks-freed-num" || name == "local-networks-malloced-num" || name == "local-networks-memory" || name == "local-networks-num" || name == "local-paths-freed-num" || name == "local-paths-malloced-num" || name == "local-paths-memory" || name == "local-paths-num" || name == "malloced-rd-count" || name == "max-active-pelem-version" || name == "max-label-stack-depth-v4-next-hop" || name == "max-label-stack-depth-v6-next-hop" || name == "merged-table-version" || name == "multipath-network-entry-count" || name == "multipath-network-entry-memory" || name == "multipath-paths-count" || name == "multipath-paths-memory" || name == "networks-freed-num" || name == "networks-malloced-num" || name == "networks-memory" || name == "networks-num" || name == "num-init-sync-pfx" || name == "path-elems-freed-num" || name == "path-elems-malloced-num" || name == "path-elems-memory" || name == "path-elems-num" || name == "paths-freed-num" || name == "paths-malloced-num" || name == "paths-memory" || name == "paths-num" || name == "rd-memory" || name == "rib-ack-requests" || name == "rib-acked-table-version" || name == "rib-acks-received" || name == "rib-bgp-version" || name == "rib-brib-received-version" || name == "rib-last-trigger" || name == "rib-slow-acks" || name == "rib-triggers" || name == "route-download-go-active-done-pending" || name == "router-state" || name == "send-version" || name == "standby-version" || name == "table-brib-version" || name == "table-version" || name == "total-r-ds-num" || name == "total-remote-r-ds-num" || name == "total-same-r-ds-num" || name == "update-gen-bgp-version" || name == "update-gen-last-trigger" || name == "update-triggers" || name == "update-wait-install-enabled" || name == "version-wrapped" || name == "version-wrapped-tid")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::RibInstall()
    :
    installed_count{YType::uint32, "installed-count"},
    modified_count{YType::uint32, "modified-count"},
    skipped_count{YType::uint32, "skipped-count"},
    start_version{YType::uint32, "start-version"},
    target_version{YType::uint32, "target-version"},
    withdrawn_count{YType::uint32, "withdrawn-count"}
    	,
    install_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime>())
	,update_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime>())
{
    install_time->parent = this;
    update_time->parent = this;

    yang_name = "rib-install"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::~RibInstall()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::has_data() const
{
    return installed_count.is_set
	|| modified_count.is_set
	|| skipped_count.is_set
	|| start_version.is_set
	|| target_version.is_set
	|| withdrawn_count.is_set
	|| (install_time !=  nullptr && install_time->has_data())
	|| (update_time !=  nullptr && update_time->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(installed_count.yfilter)
	|| ydk::is_set(modified_count.yfilter)
	|| ydk::is_set(skipped_count.yfilter)
	|| ydk::is_set(start_version.yfilter)
	|| ydk::is_set(target_version.yfilter)
	|| ydk::is_set(withdrawn_count.yfilter)
	|| (install_time !=  nullptr && install_time->has_operation())
	|| (update_time !=  nullptr && update_time->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rib-install";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (installed_count.is_set || is_set(installed_count.yfilter)) leaf_name_data.push_back(installed_count.get_name_leafdata());
    if (modified_count.is_set || is_set(modified_count.yfilter)) leaf_name_data.push_back(modified_count.get_name_leafdata());
    if (skipped_count.is_set || is_set(skipped_count.yfilter)) leaf_name_data.push_back(skipped_count.get_name_leafdata());
    if (start_version.is_set || is_set(start_version.yfilter)) leaf_name_data.push_back(start_version.get_name_leafdata());
    if (target_version.is_set || is_set(target_version.yfilter)) leaf_name_data.push_back(target_version.get_name_leafdata());
    if (withdrawn_count.is_set || is_set(withdrawn_count.yfilter)) leaf_name_data.push_back(withdrawn_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "install-time")
    {
        if(install_time == nullptr)
        {
            install_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime>();
        }
        return install_time;
    }

    if(child_yang_name == "update-time")
    {
        if(update_time == nullptr)
        {
            update_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime>();
        }
        return update_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(install_time != nullptr)
    {
        children["install-time"] = install_time;
    }

    if(update_time != nullptr)
    {
        children["update-time"] = update_time;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "installed-count")
    {
        installed_count = value;
        installed_count.value_namespace = name_space;
        installed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modified-count")
    {
        modified_count = value;
        modified_count.value_namespace = name_space;
        modified_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-count")
    {
        skipped_count = value;
        skipped_count.value_namespace = name_space;
        skipped_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-version")
    {
        start_version = value;
        start_version.value_namespace = name_space;
        start_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-version")
    {
        target_version = value;
        target_version.value_namespace = name_space;
        target_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdrawn-count")
    {
        withdrawn_count = value;
        withdrawn_count.value_namespace = name_space;
        withdrawn_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "installed-count")
    {
        installed_count.yfilter = yfilter;
    }
    if(value_path == "modified-count")
    {
        modified_count.yfilter = yfilter;
    }
    if(value_path == "skipped-count")
    {
        skipped_count.yfilter = yfilter;
    }
    if(value_path == "start-version")
    {
        start_version.yfilter = yfilter;
    }
    if(value_path == "target-version")
    {
        target_version.yfilter = yfilter;
    }
    if(value_path == "withdrawn-count")
    {
        withdrawn_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "install-time" || name == "update-time" || name == "installed-count" || name == "modified-count" || name == "skipped-count" || name == "start-version" || name == "target-version" || name == "withdrawn-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::InstallTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "install-time"; yang_parent_name = "rib-install"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::~InstallTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::InstallTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::UpdateTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "update-time"; yang_parent_name = "rib-install"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::~UpdateTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::RibInstall::UpdateTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::TriggerImport()
    :
    triggers{YType::uint32, "triggers"}
{

    yang_name = "trigger-import"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::~TriggerImport()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-import";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::Statistic()
    :
    trigger_table_version{YType::uint32, "trigger-table-version"},
    trigger_version{YType::uint32, "trigger-version"}
    	,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-import"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::has_data() const
{
    return trigger_table_version.is_set
	|| trigger_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());
    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger_time_spec != nullptr)
    {
        children["trigger-time-spec"] = trigger_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-table-version" || name == "trigger-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerImport::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::TriggerLabel()
    :
    triggers{YType::uint32, "triggers"}
{

    yang_name = "trigger-label"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::~TriggerLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::Statistic()
    :
    trigger_table_version{YType::uint32, "trigger-table-version"},
    trigger_version{YType::uint32, "trigger-version"}
    	,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-label"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::has_data() const
{
    return trigger_table_version.is_set
	|| trigger_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());
    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger_time_spec != nullptr)
    {
        children["trigger-time-spec"] = trigger_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-table-version" || name == "trigger-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerLabel::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::TriggerRib()
    :
    triggers{YType::uint32, "triggers"}
{

    yang_name = "trigger-rib"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::~TriggerRib()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::Statistic()
    :
    trigger_table_version{YType::uint32, "trigger-table-version"},
    trigger_version{YType::uint32, "trigger-version"}
    	,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-rib"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::has_data() const
{
    return trigger_table_version.is_set
	|| trigger_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());
    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger_time_spec != nullptr)
    {
        children["trigger-time-spec"] = trigger_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-table-version" || name == "trigger-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerRib::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::TriggerUpdate()
    :
    triggers{YType::uint32, "triggers"}
{

    yang_name = "trigger-update"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::~TriggerUpdate()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return triggers.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(triggers.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic>();
        c->parent = this;
        statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistic" || name == "triggers")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::Statistic()
    :
    trigger_table_version{YType::uint32, "trigger-table-version"},
    trigger_version{YType::uint32, "trigger-version"}
    	,
    trigger_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec>())
{
    trigger_time_spec->parent = this;

    yang_name = "statistic"; yang_parent_name = "trigger-update"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::~Statistic()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::has_data() const
{
    return trigger_table_version.is_set
	|| trigger_version.is_set
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_table_version.yfilter)
	|| ydk::is_set(trigger_version.yfilter)
	|| (trigger_time_spec !=  nullptr && trigger_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_table_version.is_set || is_set(trigger_table_version.yfilter)) leaf_name_data.push_back(trigger_table_version.get_name_leafdata());
    if (trigger_version.is_set || is_set(trigger_version.yfilter)) leaf_name_data.push_back(trigger_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger-time-spec")
    {
        if(trigger_time_spec == nullptr)
        {
            trigger_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec>();
        }
        return trigger_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger_time_spec != nullptr)
    {
        children["trigger-time-spec"] = trigger_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version = value;
        trigger_table_version.value_namespace = name_space;
        trigger_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-version")
    {
        trigger_version = value;
        trigger_version.value_namespace = name_space;
        trigger_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-table-version")
    {
        trigger_table_version.yfilter = yfilter;
    }
    if(value_path == "trigger-version")
    {
        trigger_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger-time-spec" || name == "trigger-table-version" || name == "trigger-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::TriggerTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "trigger-time-spec"; yang_parent_name = "statistic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::~TriggerTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::TriggerUpdate::Statistic::TriggerTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::VersionWrapDoneTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "version-wrap-done-time-spec"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::~VersionWrapDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-wrap-done-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapDoneTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::VersionWrapStartTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "version-wrap-start-time-spec"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::~VersionWrapStartTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-wrap-start-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapStartTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::VersionWrapTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "version-wrap-time-spec"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::~VersionWrapTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-wrap-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Global::VersionWrapTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::PerformanceStatistics()
    :
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_>())
{
    global->parent = this;
    vrf->parent = this;

    yang_name = "performance-statistics"; yang_parent_name = "af-process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::Global()
    :
    first_nbr_up_time{YType::uint32, "first-nbr-up-time"},
    has_converged{YType::boolean, "has-converged"},
    total_pim_callback_batch{YType::uint32, "total-pim-callback-batch"},
    total_pim_callbacks{YType::uint32, "total-pim-callbacks"},
    total_pim_install{YType::uint32, "total-pim-install"}
{

    yang_name = "global"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::has_data() const
{
    for (std::size_t index=0; index<mode_enter_time.size(); index++)
    {
        if(mode_enter_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add.size(); index++)
    {
        if(total_pim_callback_add[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add_local.size(); index++)
    {
        if(total_pim_callback_add_local[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del.size(); index++)
    {
        if(total_pim_callback_del[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del_local.size(); index++)
    {
        if(total_pim_callback_del_local[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_add.size(); index++)
    {
        if(total_pim_install_add[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_del.size(); index++)
    {
        if(total_pim_install_del[index]->has_data())
            return true;
    }
    return first_nbr_up_time.is_set
	|| has_converged.is_set
	|| total_pim_callback_batch.is_set
	|| total_pim_callbacks.is_set
	|| total_pim_install.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::has_operation() const
{
    for (std::size_t index=0; index<mode_enter_time.size(); index++)
    {
        if(mode_enter_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add.size(); index++)
    {
        if(total_pim_callback_add[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_add_local.size(); index++)
    {
        if(total_pim_callback_add_local[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del.size(); index++)
    {
        if(total_pim_callback_del[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_callback_del_local.size(); index++)
    {
        if(total_pim_callback_del_local[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_add.size(); index++)
    {
        if(total_pim_install_add[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<total_pim_install_del.size(); index++)
    {
        if(total_pim_install_del[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(first_nbr_up_time.yfilter)
	|| ydk::is_set(has_converged.yfilter)
	|| ydk::is_set(total_pim_callback_batch.yfilter)
	|| ydk::is_set(total_pim_callbacks.yfilter)
	|| ydk::is_set(total_pim_install.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_nbr_up_time.is_set || is_set(first_nbr_up_time.yfilter)) leaf_name_data.push_back(first_nbr_up_time.get_name_leafdata());
    if (has_converged.is_set || is_set(has_converged.yfilter)) leaf_name_data.push_back(has_converged.get_name_leafdata());
    if (total_pim_callback_batch.is_set || is_set(total_pim_callback_batch.yfilter)) leaf_name_data.push_back(total_pim_callback_batch.get_name_leafdata());
    if (total_pim_callbacks.is_set || is_set(total_pim_callbacks.yfilter)) leaf_name_data.push_back(total_pim_callbacks.get_name_leafdata());
    if (total_pim_install.is_set || is_set(total_pim_install.yfilter)) leaf_name_data.push_back(total_pim_install.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-enter-time")
    {
        for(auto const & c : mode_enter_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime>();
        c->parent = this;
        mode_enter_time.push_back(c);
        return c;
    }

    if(child_yang_name == "total-pim-callback-add")
    {
        for(auto const & c : total_pim_callback_add)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd>();
        c->parent = this;
        total_pim_callback_add.push_back(c);
        return c;
    }

    if(child_yang_name == "total-pim-callback-add-local")
    {
        for(auto const & c : total_pim_callback_add_local)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal>();
        c->parent = this;
        total_pim_callback_add_local.push_back(c);
        return c;
    }

    if(child_yang_name == "total-pim-callback-del")
    {
        for(auto const & c : total_pim_callback_del)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel>();
        c->parent = this;
        total_pim_callback_del.push_back(c);
        return c;
    }

    if(child_yang_name == "total-pim-callback-del-local")
    {
        for(auto const & c : total_pim_callback_del_local)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal>();
        c->parent = this;
        total_pim_callback_del_local.push_back(c);
        return c;
    }

    if(child_yang_name == "total-pim-install-add")
    {
        for(auto const & c : total_pim_install_add)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd>();
        c->parent = this;
        total_pim_install_add.push_back(c);
        return c;
    }

    if(child_yang_name == "total-pim-install-del")
    {
        for(auto const & c : total_pim_install_del)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel>();
        c->parent = this;
        total_pim_install_del.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mode_enter_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : total_pim_callback_add)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : total_pim_callback_add_local)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : total_pim_callback_del)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : total_pim_callback_del_local)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : total_pim_install_add)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : total_pim_install_del)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-nbr-up-time")
    {
        first_nbr_up_time = value;
        first_nbr_up_time.value_namespace = name_space;
        first_nbr_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-converged")
    {
        has_converged = value;
        has_converged.value_namespace = name_space;
        has_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pim-callback-batch")
    {
        total_pim_callback_batch = value;
        total_pim_callback_batch.value_namespace = name_space;
        total_pim_callback_batch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pim-callbacks")
    {
        total_pim_callbacks = value;
        total_pim_callbacks.value_namespace = name_space;
        total_pim_callbacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pim-install")
    {
        total_pim_install = value;
        total_pim_install.value_namespace = name_space;
        total_pim_install.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-nbr-up-time")
    {
        first_nbr_up_time.yfilter = yfilter;
    }
    if(value_path == "has-converged")
    {
        has_converged.yfilter = yfilter;
    }
    if(value_path == "total-pim-callback-batch")
    {
        total_pim_callback_batch.yfilter = yfilter;
    }
    if(value_path == "total-pim-callbacks")
    {
        total_pim_callbacks.yfilter = yfilter;
    }
    if(value_path == "total-pim-install")
    {
        total_pim_install.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-enter-time" || name == "total-pim-callback-add" || name == "total-pim-callback-add-local" || name == "total-pim-callback-del" || name == "total-pim-callback-del-local" || name == "total-pim-install-add" || name == "total-pim-install-del" || name == "first-nbr-up-time" || name == "has-converged" || name == "total-pim-callback-batch" || name == "total-pim-callbacks" || name == "total-pim-install")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::ModeEnterTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mode-enter-time"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::~ModeEnterTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-enter-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::ModeEnterTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::TotalPimCallbackAdd()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-add"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::~TotalPimCallbackAdd()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-add";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::TotalPimCallbackAddLocal()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-add-local"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::~TotalPimCallbackAddLocal()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-add-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackAddLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::TotalPimCallbackDel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-del"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::~TotalPimCallbackDel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-del";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::TotalPimCallbackDelLocal()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-callback-del-local"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::~TotalPimCallbackDelLocal()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-callback-del-local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimCallbackDelLocal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::TotalPimInstallAdd()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-install-add"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::~TotalPimInstallAdd()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-install-add";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallAdd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::TotalPimInstallDel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "total-pim-install-del"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::~TotalPimInstallDel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-pim-install-del";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Global::TotalPimInstallDel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::Vrf_()
    :
    attributes_recover_from_rib{YType::uint32, "attributes-recover-from-rib"},
    attributes_removed_from_rib{YType::uint32, "attributes-removed-from-rib"},
    attributes_sent_to_rib{YType::uint32, "attributes-sent-to-rib"},
    first_rib_table_full_version{YType::uint32, "first-rib-table-full-version"},
    first_rib_table_has_space_version{YType::uint32, "first-rib-table-has-space-version"},
    import_added_path_count{YType::uint32, "import-added-path-count"},
    import_calls{YType::uint32, "import-calls"},
    import_dest_net_processed_count{YType::uint32, "import-dest-net-processed-count"},
    import_removed_path_count{YType::uint32, "import-removed-path-count"},
    import_replaced_path_count{YType::uint32, "import-replaced-path-count"},
    import_src_net_processed_count{YType::uint32, "import-src-net-processed-count"},
    import_time{YType::uint32, "import-time"},
    is_rib_table_full{YType::boolean, "is-rib-table-full"},
    label_added_count{YType::uint32, "label-added-count"},
    label_calls{YType::uint32, "label-calls"},
    label_release_count{YType::uint32, "label-release-count"},
    label_rewrite_count{YType::uint32, "label-rewrite-count"},
    label_time{YType::uint32, "label-time"},
    last_rib_table_full_age{YType::uint32, "last-rib-table-full-age"},
    last_rib_table_full_version{YType::uint32, "last-rib-table-full-version"},
    last_rib_table_has_space_age{YType::uint32, "last-rib-table-has-space-age"},
    last_rib_table_has_space_version{YType::uint32, "last-rib-table-has-space-version"},
    prefixes_not_sent_to_rib{YType::uint32, "prefixes-not-sent-to-rib"},
    prefixes_removed_from_rib{YType::uint32, "prefixes-removed-from-rib"},
    prefixes_resent_to_rib{YType::uint32, "prefixes-resent-to-rib"},
    prefixes_sent_to_rib{YType::uint32, "prefixes-sent-to-rib"},
    rib_table_full_version{YType::uint32, "rib-table-full-version"},
    rib_tbl_del_calls{YType::uint32, "rib-tbl-del-calls"},
    rib_tbl_invalid_calls{YType::uint32, "rib-tbl-invalid-calls"},
    rib_tbl_local_label{YType::uint32, "rib-tbl-local-label"},
    rib_tbl_retry{YType::uint32, "rib-tbl-retry"},
    rib_tbl_skip_calls{YType::uint32, "rib-tbl-skip-calls"},
    rib_trigger{YType::boolean, "rib-trigger"},
    rib_update_calls{YType::uint32, "rib-update-calls"},
    rib_update_time{YType::uint32, "rib-update-time"},
    scanner_runs{YType::uint32, "scanner-runs"},
    scanner_time{YType::uint32, "scanner-time"},
    subgroup_count{YType::uint32, "subgroup-count"},
    time_last_update_sent{YType::uint32, "time-last-update-sent"},
    update_generation_be_prefixes_count{YType::uint32, "update-generation-be-prefixes-count"},
    update_generation_calls{YType::uint32, "update-generation-calls"},
    update_generation_messages_count{YType::uint32, "update-generation-messages-count"},
    update_generation_prefixes_count{YType::uint32, "update-generation-prefixes-count"},
    update_generation_time{YType::uint32, "update-generation-time"},
    update_group_count{YType::uint32, "update-group-count"},
    vrf_flags{YType::uint32, "vrf-flags"}
    	,
    first_rib_table_full_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp>())
	,first_rib_table_has_space_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp>())
	,last_rib_table_full_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp>())
	,last_rib_table_has_space_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp>())
	,time_label_retain(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain>())
	,time_rib_coverged(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged>())
	,time_rib_down(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown>())
{
    first_rib_table_full_timestamp->parent = this;
    first_rib_table_has_space_timestamp->parent = this;
    last_rib_table_full_timestamp->parent = this;
    last_rib_table_has_space_timestamp->parent = this;
    time_label_retain->parent = this;
    time_rib_coverged->parent = this;
    time_rib_down->parent = this;

    yang_name = "vrf"; yang_parent_name = "performance-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::has_data() const
{
    return attributes_recover_from_rib.is_set
	|| attributes_removed_from_rib.is_set
	|| attributes_sent_to_rib.is_set
	|| first_rib_table_full_version.is_set
	|| first_rib_table_has_space_version.is_set
	|| import_added_path_count.is_set
	|| import_calls.is_set
	|| import_dest_net_processed_count.is_set
	|| import_removed_path_count.is_set
	|| import_replaced_path_count.is_set
	|| import_src_net_processed_count.is_set
	|| import_time.is_set
	|| is_rib_table_full.is_set
	|| label_added_count.is_set
	|| label_calls.is_set
	|| label_release_count.is_set
	|| label_rewrite_count.is_set
	|| label_time.is_set
	|| last_rib_table_full_age.is_set
	|| last_rib_table_full_version.is_set
	|| last_rib_table_has_space_age.is_set
	|| last_rib_table_has_space_version.is_set
	|| prefixes_not_sent_to_rib.is_set
	|| prefixes_removed_from_rib.is_set
	|| prefixes_resent_to_rib.is_set
	|| prefixes_sent_to_rib.is_set
	|| rib_table_full_version.is_set
	|| rib_tbl_del_calls.is_set
	|| rib_tbl_invalid_calls.is_set
	|| rib_tbl_local_label.is_set
	|| rib_tbl_retry.is_set
	|| rib_tbl_skip_calls.is_set
	|| rib_trigger.is_set
	|| rib_update_calls.is_set
	|| rib_update_time.is_set
	|| scanner_runs.is_set
	|| scanner_time.is_set
	|| subgroup_count.is_set
	|| time_last_update_sent.is_set
	|| update_generation_be_prefixes_count.is_set
	|| update_generation_calls.is_set
	|| update_generation_messages_count.is_set
	|| update_generation_prefixes_count.is_set
	|| update_generation_time.is_set
	|| update_group_count.is_set
	|| vrf_flags.is_set
	|| (first_rib_table_full_timestamp !=  nullptr && first_rib_table_full_timestamp->has_data())
	|| (first_rib_table_has_space_timestamp !=  nullptr && first_rib_table_has_space_timestamp->has_data())
	|| (last_rib_table_full_timestamp !=  nullptr && last_rib_table_full_timestamp->has_data())
	|| (last_rib_table_has_space_timestamp !=  nullptr && last_rib_table_has_space_timestamp->has_data())
	|| (time_label_retain !=  nullptr && time_label_retain->has_data())
	|| (time_rib_coverged !=  nullptr && time_rib_coverged->has_data())
	|| (time_rib_down !=  nullptr && time_rib_down->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attributes_recover_from_rib.yfilter)
	|| ydk::is_set(attributes_removed_from_rib.yfilter)
	|| ydk::is_set(attributes_sent_to_rib.yfilter)
	|| ydk::is_set(first_rib_table_full_version.yfilter)
	|| ydk::is_set(first_rib_table_has_space_version.yfilter)
	|| ydk::is_set(import_added_path_count.yfilter)
	|| ydk::is_set(import_calls.yfilter)
	|| ydk::is_set(import_dest_net_processed_count.yfilter)
	|| ydk::is_set(import_removed_path_count.yfilter)
	|| ydk::is_set(import_replaced_path_count.yfilter)
	|| ydk::is_set(import_src_net_processed_count.yfilter)
	|| ydk::is_set(import_time.yfilter)
	|| ydk::is_set(is_rib_table_full.yfilter)
	|| ydk::is_set(label_added_count.yfilter)
	|| ydk::is_set(label_calls.yfilter)
	|| ydk::is_set(label_release_count.yfilter)
	|| ydk::is_set(label_rewrite_count.yfilter)
	|| ydk::is_set(label_time.yfilter)
	|| ydk::is_set(last_rib_table_full_age.yfilter)
	|| ydk::is_set(last_rib_table_full_version.yfilter)
	|| ydk::is_set(last_rib_table_has_space_age.yfilter)
	|| ydk::is_set(last_rib_table_has_space_version.yfilter)
	|| ydk::is_set(prefixes_not_sent_to_rib.yfilter)
	|| ydk::is_set(prefixes_removed_from_rib.yfilter)
	|| ydk::is_set(prefixes_resent_to_rib.yfilter)
	|| ydk::is_set(prefixes_sent_to_rib.yfilter)
	|| ydk::is_set(rib_table_full_version.yfilter)
	|| ydk::is_set(rib_tbl_del_calls.yfilter)
	|| ydk::is_set(rib_tbl_invalid_calls.yfilter)
	|| ydk::is_set(rib_tbl_local_label.yfilter)
	|| ydk::is_set(rib_tbl_retry.yfilter)
	|| ydk::is_set(rib_tbl_skip_calls.yfilter)
	|| ydk::is_set(rib_trigger.yfilter)
	|| ydk::is_set(rib_update_calls.yfilter)
	|| ydk::is_set(rib_update_time.yfilter)
	|| ydk::is_set(scanner_runs.yfilter)
	|| ydk::is_set(scanner_time.yfilter)
	|| ydk::is_set(subgroup_count.yfilter)
	|| ydk::is_set(time_last_update_sent.yfilter)
	|| ydk::is_set(update_generation_be_prefixes_count.yfilter)
	|| ydk::is_set(update_generation_calls.yfilter)
	|| ydk::is_set(update_generation_messages_count.yfilter)
	|| ydk::is_set(update_generation_prefixes_count.yfilter)
	|| ydk::is_set(update_generation_time.yfilter)
	|| ydk::is_set(update_group_count.yfilter)
	|| ydk::is_set(vrf_flags.yfilter)
	|| (first_rib_table_full_timestamp !=  nullptr && first_rib_table_full_timestamp->has_operation())
	|| (first_rib_table_has_space_timestamp !=  nullptr && first_rib_table_has_space_timestamp->has_operation())
	|| (last_rib_table_full_timestamp !=  nullptr && last_rib_table_full_timestamp->has_operation())
	|| (last_rib_table_has_space_timestamp !=  nullptr && last_rib_table_has_space_timestamp->has_operation())
	|| (time_label_retain !=  nullptr && time_label_retain->has_operation())
	|| (time_rib_coverged !=  nullptr && time_rib_coverged->has_operation())
	|| (time_rib_down !=  nullptr && time_rib_down->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes_recover_from_rib.is_set || is_set(attributes_recover_from_rib.yfilter)) leaf_name_data.push_back(attributes_recover_from_rib.get_name_leafdata());
    if (attributes_removed_from_rib.is_set || is_set(attributes_removed_from_rib.yfilter)) leaf_name_data.push_back(attributes_removed_from_rib.get_name_leafdata());
    if (attributes_sent_to_rib.is_set || is_set(attributes_sent_to_rib.yfilter)) leaf_name_data.push_back(attributes_sent_to_rib.get_name_leafdata());
    if (first_rib_table_full_version.is_set || is_set(first_rib_table_full_version.yfilter)) leaf_name_data.push_back(first_rib_table_full_version.get_name_leafdata());
    if (first_rib_table_has_space_version.is_set || is_set(first_rib_table_has_space_version.yfilter)) leaf_name_data.push_back(first_rib_table_has_space_version.get_name_leafdata());
    if (import_added_path_count.is_set || is_set(import_added_path_count.yfilter)) leaf_name_data.push_back(import_added_path_count.get_name_leafdata());
    if (import_calls.is_set || is_set(import_calls.yfilter)) leaf_name_data.push_back(import_calls.get_name_leafdata());
    if (import_dest_net_processed_count.is_set || is_set(import_dest_net_processed_count.yfilter)) leaf_name_data.push_back(import_dest_net_processed_count.get_name_leafdata());
    if (import_removed_path_count.is_set || is_set(import_removed_path_count.yfilter)) leaf_name_data.push_back(import_removed_path_count.get_name_leafdata());
    if (import_replaced_path_count.is_set || is_set(import_replaced_path_count.yfilter)) leaf_name_data.push_back(import_replaced_path_count.get_name_leafdata());
    if (import_src_net_processed_count.is_set || is_set(import_src_net_processed_count.yfilter)) leaf_name_data.push_back(import_src_net_processed_count.get_name_leafdata());
    if (import_time.is_set || is_set(import_time.yfilter)) leaf_name_data.push_back(import_time.get_name_leafdata());
    if (is_rib_table_full.is_set || is_set(is_rib_table_full.yfilter)) leaf_name_data.push_back(is_rib_table_full.get_name_leafdata());
    if (label_added_count.is_set || is_set(label_added_count.yfilter)) leaf_name_data.push_back(label_added_count.get_name_leafdata());
    if (label_calls.is_set || is_set(label_calls.yfilter)) leaf_name_data.push_back(label_calls.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.yfilter)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_rewrite_count.is_set || is_set(label_rewrite_count.yfilter)) leaf_name_data.push_back(label_rewrite_count.get_name_leafdata());
    if (label_time.is_set || is_set(label_time.yfilter)) leaf_name_data.push_back(label_time.get_name_leafdata());
    if (last_rib_table_full_age.is_set || is_set(last_rib_table_full_age.yfilter)) leaf_name_data.push_back(last_rib_table_full_age.get_name_leafdata());
    if (last_rib_table_full_version.is_set || is_set(last_rib_table_full_version.yfilter)) leaf_name_data.push_back(last_rib_table_full_version.get_name_leafdata());
    if (last_rib_table_has_space_age.is_set || is_set(last_rib_table_has_space_age.yfilter)) leaf_name_data.push_back(last_rib_table_has_space_age.get_name_leafdata());
    if (last_rib_table_has_space_version.is_set || is_set(last_rib_table_has_space_version.yfilter)) leaf_name_data.push_back(last_rib_table_has_space_version.get_name_leafdata());
    if (prefixes_not_sent_to_rib.is_set || is_set(prefixes_not_sent_to_rib.yfilter)) leaf_name_data.push_back(prefixes_not_sent_to_rib.get_name_leafdata());
    if (prefixes_removed_from_rib.is_set || is_set(prefixes_removed_from_rib.yfilter)) leaf_name_data.push_back(prefixes_removed_from_rib.get_name_leafdata());
    if (prefixes_resent_to_rib.is_set || is_set(prefixes_resent_to_rib.yfilter)) leaf_name_data.push_back(prefixes_resent_to_rib.get_name_leafdata());
    if (prefixes_sent_to_rib.is_set || is_set(prefixes_sent_to_rib.yfilter)) leaf_name_data.push_back(prefixes_sent_to_rib.get_name_leafdata());
    if (rib_table_full_version.is_set || is_set(rib_table_full_version.yfilter)) leaf_name_data.push_back(rib_table_full_version.get_name_leafdata());
    if (rib_tbl_del_calls.is_set || is_set(rib_tbl_del_calls.yfilter)) leaf_name_data.push_back(rib_tbl_del_calls.get_name_leafdata());
    if (rib_tbl_invalid_calls.is_set || is_set(rib_tbl_invalid_calls.yfilter)) leaf_name_data.push_back(rib_tbl_invalid_calls.get_name_leafdata());
    if (rib_tbl_local_label.is_set || is_set(rib_tbl_local_label.yfilter)) leaf_name_data.push_back(rib_tbl_local_label.get_name_leafdata());
    if (rib_tbl_retry.is_set || is_set(rib_tbl_retry.yfilter)) leaf_name_data.push_back(rib_tbl_retry.get_name_leafdata());
    if (rib_tbl_skip_calls.is_set || is_set(rib_tbl_skip_calls.yfilter)) leaf_name_data.push_back(rib_tbl_skip_calls.get_name_leafdata());
    if (rib_trigger.is_set || is_set(rib_trigger.yfilter)) leaf_name_data.push_back(rib_trigger.get_name_leafdata());
    if (rib_update_calls.is_set || is_set(rib_update_calls.yfilter)) leaf_name_data.push_back(rib_update_calls.get_name_leafdata());
    if (rib_update_time.is_set || is_set(rib_update_time.yfilter)) leaf_name_data.push_back(rib_update_time.get_name_leafdata());
    if (scanner_runs.is_set || is_set(scanner_runs.yfilter)) leaf_name_data.push_back(scanner_runs.get_name_leafdata());
    if (scanner_time.is_set || is_set(scanner_time.yfilter)) leaf_name_data.push_back(scanner_time.get_name_leafdata());
    if (subgroup_count.is_set || is_set(subgroup_count.yfilter)) leaf_name_data.push_back(subgroup_count.get_name_leafdata());
    if (time_last_update_sent.is_set || is_set(time_last_update_sent.yfilter)) leaf_name_data.push_back(time_last_update_sent.get_name_leafdata());
    if (update_generation_be_prefixes_count.is_set || is_set(update_generation_be_prefixes_count.yfilter)) leaf_name_data.push_back(update_generation_be_prefixes_count.get_name_leafdata());
    if (update_generation_calls.is_set || is_set(update_generation_calls.yfilter)) leaf_name_data.push_back(update_generation_calls.get_name_leafdata());
    if (update_generation_messages_count.is_set || is_set(update_generation_messages_count.yfilter)) leaf_name_data.push_back(update_generation_messages_count.get_name_leafdata());
    if (update_generation_prefixes_count.is_set || is_set(update_generation_prefixes_count.yfilter)) leaf_name_data.push_back(update_generation_prefixes_count.get_name_leafdata());
    if (update_generation_time.is_set || is_set(update_generation_time.yfilter)) leaf_name_data.push_back(update_generation_time.get_name_leafdata());
    if (update_group_count.is_set || is_set(update_group_count.yfilter)) leaf_name_data.push_back(update_group_count.get_name_leafdata());
    if (vrf_flags.is_set || is_set(vrf_flags.yfilter)) leaf_name_data.push_back(vrf_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "first-rib-table-full-timestamp")
    {
        if(first_rib_table_full_timestamp == nullptr)
        {
            first_rib_table_full_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp>();
        }
        return first_rib_table_full_timestamp;
    }

    if(child_yang_name == "first-rib-table-has-space-timestamp")
    {
        if(first_rib_table_has_space_timestamp == nullptr)
        {
            first_rib_table_has_space_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp>();
        }
        return first_rib_table_has_space_timestamp;
    }

    if(child_yang_name == "last-rib-table-full-timestamp")
    {
        if(last_rib_table_full_timestamp == nullptr)
        {
            last_rib_table_full_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp>();
        }
        return last_rib_table_full_timestamp;
    }

    if(child_yang_name == "last-rib-table-has-space-timestamp")
    {
        if(last_rib_table_has_space_timestamp == nullptr)
        {
            last_rib_table_has_space_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp>();
        }
        return last_rib_table_has_space_timestamp;
    }

    if(child_yang_name == "time-label-retain")
    {
        if(time_label_retain == nullptr)
        {
            time_label_retain = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain>();
        }
        return time_label_retain;
    }

    if(child_yang_name == "time-rib-coverged")
    {
        if(time_rib_coverged == nullptr)
        {
            time_rib_coverged = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged>();
        }
        return time_rib_coverged;
    }

    if(child_yang_name == "time-rib-down")
    {
        if(time_rib_down == nullptr)
        {
            time_rib_down = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown>();
        }
        return time_rib_down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(first_rib_table_full_timestamp != nullptr)
    {
        children["first-rib-table-full-timestamp"] = first_rib_table_full_timestamp;
    }

    if(first_rib_table_has_space_timestamp != nullptr)
    {
        children["first-rib-table-has-space-timestamp"] = first_rib_table_has_space_timestamp;
    }

    if(last_rib_table_full_timestamp != nullptr)
    {
        children["last-rib-table-full-timestamp"] = last_rib_table_full_timestamp;
    }

    if(last_rib_table_has_space_timestamp != nullptr)
    {
        children["last-rib-table-has-space-timestamp"] = last_rib_table_has_space_timestamp;
    }

    if(time_label_retain != nullptr)
    {
        children["time-label-retain"] = time_label_retain;
    }

    if(time_rib_coverged != nullptr)
    {
        children["time-rib-coverged"] = time_rib_coverged;
    }

    if(time_rib_down != nullptr)
    {
        children["time-rib-down"] = time_rib_down;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attributes-recover-from-rib")
    {
        attributes_recover_from_rib = value;
        attributes_recover_from_rib.value_namespace = name_space;
        attributes_recover_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes-removed-from-rib")
    {
        attributes_removed_from_rib = value;
        attributes_removed_from_rib.value_namespace = name_space;
        attributes_removed_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes-sent-to-rib")
    {
        attributes_sent_to_rib = value;
        attributes_sent_to_rib.value_namespace = name_space;
        attributes_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-rib-table-full-version")
    {
        first_rib_table_full_version = value;
        first_rib_table_full_version.value_namespace = name_space;
        first_rib_table_full_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "first-rib-table-has-space-version")
    {
        first_rib_table_has_space_version = value;
        first_rib_table_has_space_version.value_namespace = name_space;
        first_rib_table_has_space_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-added-path-count")
    {
        import_added_path_count = value;
        import_added_path_count.value_namespace = name_space;
        import_added_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-calls")
    {
        import_calls = value;
        import_calls.value_namespace = name_space;
        import_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-dest-net-processed-count")
    {
        import_dest_net_processed_count = value;
        import_dest_net_processed_count.value_namespace = name_space;
        import_dest_net_processed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-removed-path-count")
    {
        import_removed_path_count = value;
        import_removed_path_count.value_namespace = name_space;
        import_removed_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-replaced-path-count")
    {
        import_replaced_path_count = value;
        import_replaced_path_count.value_namespace = name_space;
        import_replaced_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-src-net-processed-count")
    {
        import_src_net_processed_count = value;
        import_src_net_processed_count.value_namespace = name_space;
        import_src_net_processed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "import-time")
    {
        import_time = value;
        import_time.value_namespace = name_space;
        import_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-table-full")
    {
        is_rib_table_full = value;
        is_rib_table_full.value_namespace = name_space;
        is_rib_table_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-added-count")
    {
        label_added_count = value;
        label_added_count.value_namespace = name_space;
        label_added_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-calls")
    {
        label_calls = value;
        label_calls.value_namespace = name_space;
        label_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
        label_release_count.value_namespace = name_space;
        label_release_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-rewrite-count")
    {
        label_rewrite_count = value;
        label_rewrite_count.value_namespace = name_space;
        label_rewrite_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-time")
    {
        label_time = value;
        label_time.value_namespace = name_space;
        label_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-full-age")
    {
        last_rib_table_full_age = value;
        last_rib_table_full_age.value_namespace = name_space;
        last_rib_table_full_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-full-version")
    {
        last_rib_table_full_version = value;
        last_rib_table_full_version.value_namespace = name_space;
        last_rib_table_full_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-has-space-age")
    {
        last_rib_table_has_space_age = value;
        last_rib_table_has_space_age.value_namespace = name_space;
        last_rib_table_has_space_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rib-table-has-space-version")
    {
        last_rib_table_has_space_version = value;
        last_rib_table_has_space_version.value_namespace = name_space;
        last_rib_table_has_space_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-not-sent-to-rib")
    {
        prefixes_not_sent_to_rib = value;
        prefixes_not_sent_to_rib.value_namespace = name_space;
        prefixes_not_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-removed-from-rib")
    {
        prefixes_removed_from_rib = value;
        prefixes_removed_from_rib.value_namespace = name_space;
        prefixes_removed_from_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-resent-to-rib")
    {
        prefixes_resent_to_rib = value;
        prefixes_resent_to_rib.value_namespace = name_space;
        prefixes_resent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-sent-to-rib")
    {
        prefixes_sent_to_rib = value;
        prefixes_sent_to_rib.value_namespace = name_space;
        prefixes_sent_to_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-table-full-version")
    {
        rib_table_full_version = value;
        rib_table_full_version.value_namespace = name_space;
        rib_table_full_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-del-calls")
    {
        rib_tbl_del_calls = value;
        rib_tbl_del_calls.value_namespace = name_space;
        rib_tbl_del_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-invalid-calls")
    {
        rib_tbl_invalid_calls = value;
        rib_tbl_invalid_calls.value_namespace = name_space;
        rib_tbl_invalid_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-local-label")
    {
        rib_tbl_local_label = value;
        rib_tbl_local_label.value_namespace = name_space;
        rib_tbl_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-retry")
    {
        rib_tbl_retry = value;
        rib_tbl_retry.value_namespace = name_space;
        rib_tbl_retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-tbl-skip-calls")
    {
        rib_tbl_skip_calls = value;
        rib_tbl_skip_calls.value_namespace = name_space;
        rib_tbl_skip_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-trigger")
    {
        rib_trigger = value;
        rib_trigger.value_namespace = name_space;
        rib_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-calls")
    {
        rib_update_calls = value;
        rib_update_calls.value_namespace = name_space;
        rib_update_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-time")
    {
        rib_update_time = value;
        rib_update_time.value_namespace = name_space;
        rib_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scanner-runs")
    {
        scanner_runs = value;
        scanner_runs.value_namespace = name_space;
        scanner_runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scanner-time")
    {
        scanner_time = value;
        scanner_time.value_namespace = name_space;
        scanner_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subgroup-count")
    {
        subgroup_count = value;
        subgroup_count.value_namespace = name_space;
        subgroup_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-last-update-sent")
    {
        time_last_update_sent = value;
        time_last_update_sent.value_namespace = name_space;
        time_last_update_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-be-prefixes-count")
    {
        update_generation_be_prefixes_count = value;
        update_generation_be_prefixes_count.value_namespace = name_space;
        update_generation_be_prefixes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-calls")
    {
        update_generation_calls = value;
        update_generation_calls.value_namespace = name_space;
        update_generation_calls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-messages-count")
    {
        update_generation_messages_count = value;
        update_generation_messages_count.value_namespace = name_space;
        update_generation_messages_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-prefixes-count")
    {
        update_generation_prefixes_count = value;
        update_generation_prefixes_count.value_namespace = name_space;
        update_generation_prefixes_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-generation-time")
    {
        update_generation_time = value;
        update_generation_time.value_namespace = name_space;
        update_generation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-count")
    {
        update_group_count = value;
        update_group_count.value_namespace = name_space;
        update_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-flags")
    {
        vrf_flags = value;
        vrf_flags.value_namespace = name_space;
        vrf_flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attributes-recover-from-rib")
    {
        attributes_recover_from_rib.yfilter = yfilter;
    }
    if(value_path == "attributes-removed-from-rib")
    {
        attributes_removed_from_rib.yfilter = yfilter;
    }
    if(value_path == "attributes-sent-to-rib")
    {
        attributes_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "first-rib-table-full-version")
    {
        first_rib_table_full_version.yfilter = yfilter;
    }
    if(value_path == "first-rib-table-has-space-version")
    {
        first_rib_table_has_space_version.yfilter = yfilter;
    }
    if(value_path == "import-added-path-count")
    {
        import_added_path_count.yfilter = yfilter;
    }
    if(value_path == "import-calls")
    {
        import_calls.yfilter = yfilter;
    }
    if(value_path == "import-dest-net-processed-count")
    {
        import_dest_net_processed_count.yfilter = yfilter;
    }
    if(value_path == "import-removed-path-count")
    {
        import_removed_path_count.yfilter = yfilter;
    }
    if(value_path == "import-replaced-path-count")
    {
        import_replaced_path_count.yfilter = yfilter;
    }
    if(value_path == "import-src-net-processed-count")
    {
        import_src_net_processed_count.yfilter = yfilter;
    }
    if(value_path == "import-time")
    {
        import_time.yfilter = yfilter;
    }
    if(value_path == "is-rib-table-full")
    {
        is_rib_table_full.yfilter = yfilter;
    }
    if(value_path == "label-added-count")
    {
        label_added_count.yfilter = yfilter;
    }
    if(value_path == "label-calls")
    {
        label_calls.yfilter = yfilter;
    }
    if(value_path == "label-release-count")
    {
        label_release_count.yfilter = yfilter;
    }
    if(value_path == "label-rewrite-count")
    {
        label_rewrite_count.yfilter = yfilter;
    }
    if(value_path == "label-time")
    {
        label_time.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-full-age")
    {
        last_rib_table_full_age.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-full-version")
    {
        last_rib_table_full_version.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-has-space-age")
    {
        last_rib_table_has_space_age.yfilter = yfilter;
    }
    if(value_path == "last-rib-table-has-space-version")
    {
        last_rib_table_has_space_version.yfilter = yfilter;
    }
    if(value_path == "prefixes-not-sent-to-rib")
    {
        prefixes_not_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "prefixes-removed-from-rib")
    {
        prefixes_removed_from_rib.yfilter = yfilter;
    }
    if(value_path == "prefixes-resent-to-rib")
    {
        prefixes_resent_to_rib.yfilter = yfilter;
    }
    if(value_path == "prefixes-sent-to-rib")
    {
        prefixes_sent_to_rib.yfilter = yfilter;
    }
    if(value_path == "rib-table-full-version")
    {
        rib_table_full_version.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-del-calls")
    {
        rib_tbl_del_calls.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-invalid-calls")
    {
        rib_tbl_invalid_calls.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-local-label")
    {
        rib_tbl_local_label.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-retry")
    {
        rib_tbl_retry.yfilter = yfilter;
    }
    if(value_path == "rib-tbl-skip-calls")
    {
        rib_tbl_skip_calls.yfilter = yfilter;
    }
    if(value_path == "rib-trigger")
    {
        rib_trigger.yfilter = yfilter;
    }
    if(value_path == "rib-update-calls")
    {
        rib_update_calls.yfilter = yfilter;
    }
    if(value_path == "rib-update-time")
    {
        rib_update_time.yfilter = yfilter;
    }
    if(value_path == "scanner-runs")
    {
        scanner_runs.yfilter = yfilter;
    }
    if(value_path == "scanner-time")
    {
        scanner_time.yfilter = yfilter;
    }
    if(value_path == "subgroup-count")
    {
        subgroup_count.yfilter = yfilter;
    }
    if(value_path == "time-last-update-sent")
    {
        time_last_update_sent.yfilter = yfilter;
    }
    if(value_path == "update-generation-be-prefixes-count")
    {
        update_generation_be_prefixes_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-calls")
    {
        update_generation_calls.yfilter = yfilter;
    }
    if(value_path == "update-generation-messages-count")
    {
        update_generation_messages_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-prefixes-count")
    {
        update_generation_prefixes_count.yfilter = yfilter;
    }
    if(value_path == "update-generation-time")
    {
        update_generation_time.yfilter = yfilter;
    }
    if(value_path == "update-group-count")
    {
        update_group_count.yfilter = yfilter;
    }
    if(value_path == "vrf-flags")
    {
        vrf_flags.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "first-rib-table-full-timestamp" || name == "first-rib-table-has-space-timestamp" || name == "last-rib-table-full-timestamp" || name == "last-rib-table-has-space-timestamp" || name == "time-label-retain" || name == "time-rib-coverged" || name == "time-rib-down" || name == "attributes-recover-from-rib" || name == "attributes-removed-from-rib" || name == "attributes-sent-to-rib" || name == "first-rib-table-full-version" || name == "first-rib-table-has-space-version" || name == "import-added-path-count" || name == "import-calls" || name == "import-dest-net-processed-count" || name == "import-removed-path-count" || name == "import-replaced-path-count" || name == "import-src-net-processed-count" || name == "import-time" || name == "is-rib-table-full" || name == "label-added-count" || name == "label-calls" || name == "label-release-count" || name == "label-rewrite-count" || name == "label-time" || name == "last-rib-table-full-age" || name == "last-rib-table-full-version" || name == "last-rib-table-has-space-age" || name == "last-rib-table-has-space-version" || name == "prefixes-not-sent-to-rib" || name == "prefixes-removed-from-rib" || name == "prefixes-resent-to-rib" || name == "prefixes-sent-to-rib" || name == "rib-table-full-version" || name == "rib-tbl-del-calls" || name == "rib-tbl-invalid-calls" || name == "rib-tbl-local-label" || name == "rib-tbl-retry" || name == "rib-tbl-skip-calls" || name == "rib-trigger" || name == "rib-update-calls" || name == "rib-update-time" || name == "scanner-runs" || name == "scanner-time" || name == "subgroup-count" || name == "time-last-update-sent" || name == "update-generation-be-prefixes-count" || name == "update-generation-calls" || name == "update-generation-messages-count" || name == "update-generation-prefixes-count" || name == "update-generation-time" || name == "update-group-count" || name == "vrf-flags")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::FirstRibTableFullTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-table-full-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::~FirstRibTableFullTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-table-full-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableFullTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::FirstRibTableHasSpaceTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "first-rib-table-has-space-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::~FirstRibTableHasSpaceTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-rib-table-has-space-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::FirstRibTableHasSpaceTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::LastRibTableFullTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-table-full-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::~LastRibTableFullTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-table-full-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableFullTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::LastRibTableHasSpaceTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "last-rib-table-has-space-timestamp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::~LastRibTableHasSpaceTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-rib-table-has-space-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::LastRibTableHasSpaceTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::TimeLabelRetain()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "time-label-retain"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::~TimeLabelRetain()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-label-retain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeLabelRetain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::TimeRibCoverged()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "time-rib-coverged"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::~TimeRibCoverged()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-rib-coverged";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibCoverged::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::TimeRibDown()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "time-rib-down"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::~TimeRibDown()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-rib-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::PerformanceStatistics::Vrf_::TimeRibDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::Vrf_()
    :
    add_path_install_disable{YType::boolean, "add-path-install-disable"},
    add_path_install_enable{YType::boolean, "add-path-install-enable"},
    any_ebgp_neighbor_missing_policy{YType::boolean, "any-ebgp-neighbor-missing-policy"},
    asbr{YType::boolean, "asbr"},
    attribute_download{YType::boolean, "attribute-download"},
    best_external{YType::boolean, "best-external"},
    best_external_disable{YType::boolean, "best-external-disable"},
    bmp_network_entry_count{YType::uint32, "bmp-network-entry-count"},
    bmp_path_memory{YType::uint32, "bmp-path-memory"},
    bmp_paths_count{YType::uint32, "bmp-paths-count"},
    bmp_prefix_memory{YType::uint32, "bmp-prefix-memory"},
    damped_path_count{YType::uint32, "damped-path-count"},
    freed_path_count{YType::uint32, "freed-path-count"},
    freed_path_elem_count{YType::uint32, "freed-path-elem-count"},
    freed_prefix_count{YType::uint32, "freed-prefix-count"},
    history_path_count{YType::uint32, "history-path-count"},
    ibgp_nexthop_self_count{YType::uint32, "ibgp-nexthop-self-count"},
    imported_path_memory{YType::uint32, "imported-path-memory"},
    imported_paths{YType::uint32, "imported-paths"},
    is_route_reflector{YType::boolean, "is-route-reflector"},
    label_retain{YType::boolean, "label-retain"},
    label_retainvalue{YType::uint32, "label-retainvalue"},
    local_path_memory{YType::uint32, "local-path-memory"},
    local_paths{YType::uint32, "local-paths"},
    malloced_path_count{YType::uint32, "malloced-path-count"},
    malloced_path_elem_count{YType::uint32, "malloced-path-elem-count"},
    malloced_prefix_count{YType::uint32, "malloced-prefix-count"},
    network_entry_count{YType::uint32, "network-entry-count"},
    path_elem_memory{YType::uint32, "path-elem-memory"},
    path_elems_count{YType::uint32, "path-elems-count"},
    path_memory{YType::uint32, "path-memory"},
    paths_count{YType::uint32, "paths-count"},
    prefix_memory{YType::uint32, "prefix-memory"},
    received_path_count{YType::uint32, "received-path-count"},
    retain_rt_all{YType::boolean, "retain-rt-all"},
    route_target_download{YType::boolean, "route-target-download"},
    tbl_bitf_size{YType::uint16, "tbl-bitf-size"},
    tbl_chunk_bitf_size{YType::uint16, "tbl-chunk-bitf-size"},
    use_igpsr_label{YType::boolean, "use-igpsr-label"}
{

    yang_name = "vrf"; yang_parent_name = "af-process-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::has_data() const
{
    return add_path_install_disable.is_set
	|| add_path_install_enable.is_set
	|| any_ebgp_neighbor_missing_policy.is_set
	|| asbr.is_set
	|| attribute_download.is_set
	|| best_external.is_set
	|| best_external_disable.is_set
	|| bmp_network_entry_count.is_set
	|| bmp_path_memory.is_set
	|| bmp_paths_count.is_set
	|| bmp_prefix_memory.is_set
	|| damped_path_count.is_set
	|| freed_path_count.is_set
	|| freed_path_elem_count.is_set
	|| freed_prefix_count.is_set
	|| history_path_count.is_set
	|| ibgp_nexthop_self_count.is_set
	|| imported_path_memory.is_set
	|| imported_paths.is_set
	|| is_route_reflector.is_set
	|| label_retain.is_set
	|| label_retainvalue.is_set
	|| local_path_memory.is_set
	|| local_paths.is_set
	|| malloced_path_count.is_set
	|| malloced_path_elem_count.is_set
	|| malloced_prefix_count.is_set
	|| network_entry_count.is_set
	|| path_elem_memory.is_set
	|| path_elems_count.is_set
	|| path_memory.is_set
	|| paths_count.is_set
	|| prefix_memory.is_set
	|| received_path_count.is_set
	|| retain_rt_all.is_set
	|| route_target_download.is_set
	|| tbl_bitf_size.is_set
	|| tbl_chunk_bitf_size.is_set
	|| use_igpsr_label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add_path_install_disable.yfilter)
	|| ydk::is_set(add_path_install_enable.yfilter)
	|| ydk::is_set(any_ebgp_neighbor_missing_policy.yfilter)
	|| ydk::is_set(asbr.yfilter)
	|| ydk::is_set(attribute_download.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(best_external_disable.yfilter)
	|| ydk::is_set(bmp_network_entry_count.yfilter)
	|| ydk::is_set(bmp_path_memory.yfilter)
	|| ydk::is_set(bmp_paths_count.yfilter)
	|| ydk::is_set(bmp_prefix_memory.yfilter)
	|| ydk::is_set(damped_path_count.yfilter)
	|| ydk::is_set(freed_path_count.yfilter)
	|| ydk::is_set(freed_path_elem_count.yfilter)
	|| ydk::is_set(freed_prefix_count.yfilter)
	|| ydk::is_set(history_path_count.yfilter)
	|| ydk::is_set(ibgp_nexthop_self_count.yfilter)
	|| ydk::is_set(imported_path_memory.yfilter)
	|| ydk::is_set(imported_paths.yfilter)
	|| ydk::is_set(is_route_reflector.yfilter)
	|| ydk::is_set(label_retain.yfilter)
	|| ydk::is_set(label_retainvalue.yfilter)
	|| ydk::is_set(local_path_memory.yfilter)
	|| ydk::is_set(local_paths.yfilter)
	|| ydk::is_set(malloced_path_count.yfilter)
	|| ydk::is_set(malloced_path_elem_count.yfilter)
	|| ydk::is_set(malloced_prefix_count.yfilter)
	|| ydk::is_set(network_entry_count.yfilter)
	|| ydk::is_set(path_elem_memory.yfilter)
	|| ydk::is_set(path_elems_count.yfilter)
	|| ydk::is_set(path_memory.yfilter)
	|| ydk::is_set(paths_count.yfilter)
	|| ydk::is_set(prefix_memory.yfilter)
	|| ydk::is_set(received_path_count.yfilter)
	|| ydk::is_set(retain_rt_all.yfilter)
	|| ydk::is_set(route_target_download.yfilter)
	|| ydk::is_set(tbl_bitf_size.yfilter)
	|| ydk::is_set(tbl_chunk_bitf_size.yfilter)
	|| ydk::is_set(use_igpsr_label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add_path_install_disable.is_set || is_set(add_path_install_disable.yfilter)) leaf_name_data.push_back(add_path_install_disable.get_name_leafdata());
    if (add_path_install_enable.is_set || is_set(add_path_install_enable.yfilter)) leaf_name_data.push_back(add_path_install_enable.get_name_leafdata());
    if (any_ebgp_neighbor_missing_policy.is_set || is_set(any_ebgp_neighbor_missing_policy.yfilter)) leaf_name_data.push_back(any_ebgp_neighbor_missing_policy.get_name_leafdata());
    if (asbr.is_set || is_set(asbr.yfilter)) leaf_name_data.push_back(asbr.get_name_leafdata());
    if (attribute_download.is_set || is_set(attribute_download.yfilter)) leaf_name_data.push_back(attribute_download.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (best_external_disable.is_set || is_set(best_external_disable.yfilter)) leaf_name_data.push_back(best_external_disable.get_name_leafdata());
    if (bmp_network_entry_count.is_set || is_set(bmp_network_entry_count.yfilter)) leaf_name_data.push_back(bmp_network_entry_count.get_name_leafdata());
    if (bmp_path_memory.is_set || is_set(bmp_path_memory.yfilter)) leaf_name_data.push_back(bmp_path_memory.get_name_leafdata());
    if (bmp_paths_count.is_set || is_set(bmp_paths_count.yfilter)) leaf_name_data.push_back(bmp_paths_count.get_name_leafdata());
    if (bmp_prefix_memory.is_set || is_set(bmp_prefix_memory.yfilter)) leaf_name_data.push_back(bmp_prefix_memory.get_name_leafdata());
    if (damped_path_count.is_set || is_set(damped_path_count.yfilter)) leaf_name_data.push_back(damped_path_count.get_name_leafdata());
    if (freed_path_count.is_set || is_set(freed_path_count.yfilter)) leaf_name_data.push_back(freed_path_count.get_name_leafdata());
    if (freed_path_elem_count.is_set || is_set(freed_path_elem_count.yfilter)) leaf_name_data.push_back(freed_path_elem_count.get_name_leafdata());
    if (freed_prefix_count.is_set || is_set(freed_prefix_count.yfilter)) leaf_name_data.push_back(freed_prefix_count.get_name_leafdata());
    if (history_path_count.is_set || is_set(history_path_count.yfilter)) leaf_name_data.push_back(history_path_count.get_name_leafdata());
    if (ibgp_nexthop_self_count.is_set || is_set(ibgp_nexthop_self_count.yfilter)) leaf_name_data.push_back(ibgp_nexthop_self_count.get_name_leafdata());
    if (imported_path_memory.is_set || is_set(imported_path_memory.yfilter)) leaf_name_data.push_back(imported_path_memory.get_name_leafdata());
    if (imported_paths.is_set || is_set(imported_paths.yfilter)) leaf_name_data.push_back(imported_paths.get_name_leafdata());
    if (is_route_reflector.is_set || is_set(is_route_reflector.yfilter)) leaf_name_data.push_back(is_route_reflector.get_name_leafdata());
    if (label_retain.is_set || is_set(label_retain.yfilter)) leaf_name_data.push_back(label_retain.get_name_leafdata());
    if (label_retainvalue.is_set || is_set(label_retainvalue.yfilter)) leaf_name_data.push_back(label_retainvalue.get_name_leafdata());
    if (local_path_memory.is_set || is_set(local_path_memory.yfilter)) leaf_name_data.push_back(local_path_memory.get_name_leafdata());
    if (local_paths.is_set || is_set(local_paths.yfilter)) leaf_name_data.push_back(local_paths.get_name_leafdata());
    if (malloced_path_count.is_set || is_set(malloced_path_count.yfilter)) leaf_name_data.push_back(malloced_path_count.get_name_leafdata());
    if (malloced_path_elem_count.is_set || is_set(malloced_path_elem_count.yfilter)) leaf_name_data.push_back(malloced_path_elem_count.get_name_leafdata());
    if (malloced_prefix_count.is_set || is_set(malloced_prefix_count.yfilter)) leaf_name_data.push_back(malloced_prefix_count.get_name_leafdata());
    if (network_entry_count.is_set || is_set(network_entry_count.yfilter)) leaf_name_data.push_back(network_entry_count.get_name_leafdata());
    if (path_elem_memory.is_set || is_set(path_elem_memory.yfilter)) leaf_name_data.push_back(path_elem_memory.get_name_leafdata());
    if (path_elems_count.is_set || is_set(path_elems_count.yfilter)) leaf_name_data.push_back(path_elems_count.get_name_leafdata());
    if (path_memory.is_set || is_set(path_memory.yfilter)) leaf_name_data.push_back(path_memory.get_name_leafdata());
    if (paths_count.is_set || is_set(paths_count.yfilter)) leaf_name_data.push_back(paths_count.get_name_leafdata());
    if (prefix_memory.is_set || is_set(prefix_memory.yfilter)) leaf_name_data.push_back(prefix_memory.get_name_leafdata());
    if (received_path_count.is_set || is_set(received_path_count.yfilter)) leaf_name_data.push_back(received_path_count.get_name_leafdata());
    if (retain_rt_all.is_set || is_set(retain_rt_all.yfilter)) leaf_name_data.push_back(retain_rt_all.get_name_leafdata());
    if (route_target_download.is_set || is_set(route_target_download.yfilter)) leaf_name_data.push_back(route_target_download.get_name_leafdata());
    if (tbl_bitf_size.is_set || is_set(tbl_bitf_size.yfilter)) leaf_name_data.push_back(tbl_bitf_size.get_name_leafdata());
    if (tbl_chunk_bitf_size.is_set || is_set(tbl_chunk_bitf_size.yfilter)) leaf_name_data.push_back(tbl_chunk_bitf_size.get_name_leafdata());
    if (use_igpsr_label.is_set || is_set(use_igpsr_label.yfilter)) leaf_name_data.push_back(use_igpsr_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add-path-install-disable")
    {
        add_path_install_disable = value;
        add_path_install_disable.value_namespace = name_space;
        add_path_install_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-path-install-enable")
    {
        add_path_install_enable = value;
        add_path_install_enable.value_namespace = name_space;
        add_path_install_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-ebgp-neighbor-missing-policy")
    {
        any_ebgp_neighbor_missing_policy = value;
        any_ebgp_neighbor_missing_policy.value_namespace = name_space;
        any_ebgp_neighbor_missing_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asbr")
    {
        asbr = value;
        asbr.value_namespace = name_space;
        asbr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-download")
    {
        attribute_download = value;
        attribute_download.value_namespace = name_space;
        attribute_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external-disable")
    {
        best_external_disable = value;
        best_external_disable.value_namespace = name_space;
        best_external_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-network-entry-count")
    {
        bmp_network_entry_count = value;
        bmp_network_entry_count.value_namespace = name_space;
        bmp_network_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-path-memory")
    {
        bmp_path_memory = value;
        bmp_path_memory.value_namespace = name_space;
        bmp_path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-paths-count")
    {
        bmp_paths_count = value;
        bmp_paths_count.value_namespace = name_space;
        bmp_paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-prefix-memory")
    {
        bmp_prefix_memory = value;
        bmp_prefix_memory.value_namespace = name_space;
        bmp_prefix_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped-path-count")
    {
        damped_path_count = value;
        damped_path_count.value_namespace = name_space;
        damped_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-path-count")
    {
        freed_path_count = value;
        freed_path_count.value_namespace = name_space;
        freed_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-path-elem-count")
    {
        freed_path_elem_count = value;
        freed_path_elem_count.value_namespace = name_space;
        freed_path_elem_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-prefix-count")
    {
        freed_prefix_count = value;
        freed_prefix_count.value_namespace = name_space;
        freed_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history-path-count")
    {
        history_path_count = value;
        history_path_count.value_namespace = name_space;
        history_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibgp-nexthop-self-count")
    {
        ibgp_nexthop_self_count = value;
        ibgp_nexthop_self_count.value_namespace = name_space;
        ibgp_nexthop_self_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-path-memory")
    {
        imported_path_memory = value;
        imported_path_memory.value_namespace = name_space;
        imported_path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "imported-paths")
    {
        imported_paths = value;
        imported_paths.value_namespace = name_space;
        imported_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-reflector")
    {
        is_route_reflector = value;
        is_route_reflector.value_namespace = name_space;
        is_route_reflector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-retain")
    {
        label_retain = value;
        label_retain.value_namespace = name_space;
        label_retain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-retainvalue")
    {
        label_retainvalue = value;
        label_retainvalue.value_namespace = name_space;
        label_retainvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-path-memory")
    {
        local_path_memory = value;
        local_path_memory.value_namespace = name_space;
        local_path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-paths")
    {
        local_paths = value;
        local_paths.value_namespace = name_space;
        local_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-path-count")
    {
        malloced_path_count = value;
        malloced_path_count.value_namespace = name_space;
        malloced_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-path-elem-count")
    {
        malloced_path_elem_count = value;
        malloced_path_elem_count.value_namespace = name_space;
        malloced_path_elem_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "malloced-prefix-count")
    {
        malloced_prefix_count = value;
        malloced_prefix_count.value_namespace = name_space;
        malloced_prefix_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-entry-count")
    {
        network_entry_count = value;
        network_entry_count.value_namespace = name_space;
        network_entry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elem-memory")
    {
        path_elem_memory = value;
        path_elem_memory.value_namespace = name_space;
        path_elem_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-elems-count")
    {
        path_elems_count = value;
        path_elems_count.value_namespace = name_space;
        path_elems_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-memory")
    {
        path_memory = value;
        path_memory.value_namespace = name_space;
        path_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-count")
    {
        paths_count = value;
        paths_count.value_namespace = name_space;
        paths_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-memory")
    {
        prefix_memory = value;
        prefix_memory.value_namespace = name_space;
        prefix_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-path-count")
    {
        received_path_count = value;
        received_path_count.value_namespace = name_space;
        received_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retain-rt-all")
    {
        retain_rt_all = value;
        retain_rt_all.value_namespace = name_space;
        retain_rt_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-download")
    {
        route_target_download = value;
        route_target_download.value_namespace = name_space;
        route_target_download.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-bitf-size")
    {
        tbl_bitf_size = value;
        tbl_bitf_size.value_namespace = name_space;
        tbl_bitf_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tbl-chunk-bitf-size")
    {
        tbl_chunk_bitf_size = value;
        tbl_chunk_bitf_size.value_namespace = name_space;
        tbl_chunk_bitf_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label = value;
        use_igpsr_label.value_namespace = name_space;
        use_igpsr_label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add-path-install-disable")
    {
        add_path_install_disable.yfilter = yfilter;
    }
    if(value_path == "add-path-install-enable")
    {
        add_path_install_enable.yfilter = yfilter;
    }
    if(value_path == "any-ebgp-neighbor-missing-policy")
    {
        any_ebgp_neighbor_missing_policy.yfilter = yfilter;
    }
    if(value_path == "asbr")
    {
        asbr.yfilter = yfilter;
    }
    if(value_path == "attribute-download")
    {
        attribute_download.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "best-external-disable")
    {
        best_external_disable.yfilter = yfilter;
    }
    if(value_path == "bmp-network-entry-count")
    {
        bmp_network_entry_count.yfilter = yfilter;
    }
    if(value_path == "bmp-path-memory")
    {
        bmp_path_memory.yfilter = yfilter;
    }
    if(value_path == "bmp-paths-count")
    {
        bmp_paths_count.yfilter = yfilter;
    }
    if(value_path == "bmp-prefix-memory")
    {
        bmp_prefix_memory.yfilter = yfilter;
    }
    if(value_path == "damped-path-count")
    {
        damped_path_count.yfilter = yfilter;
    }
    if(value_path == "freed-path-count")
    {
        freed_path_count.yfilter = yfilter;
    }
    if(value_path == "freed-path-elem-count")
    {
        freed_path_elem_count.yfilter = yfilter;
    }
    if(value_path == "freed-prefix-count")
    {
        freed_prefix_count.yfilter = yfilter;
    }
    if(value_path == "history-path-count")
    {
        history_path_count.yfilter = yfilter;
    }
    if(value_path == "ibgp-nexthop-self-count")
    {
        ibgp_nexthop_self_count.yfilter = yfilter;
    }
    if(value_path == "imported-path-memory")
    {
        imported_path_memory.yfilter = yfilter;
    }
    if(value_path == "imported-paths")
    {
        imported_paths.yfilter = yfilter;
    }
    if(value_path == "is-route-reflector")
    {
        is_route_reflector.yfilter = yfilter;
    }
    if(value_path == "label-retain")
    {
        label_retain.yfilter = yfilter;
    }
    if(value_path == "label-retainvalue")
    {
        label_retainvalue.yfilter = yfilter;
    }
    if(value_path == "local-path-memory")
    {
        local_path_memory.yfilter = yfilter;
    }
    if(value_path == "local-paths")
    {
        local_paths.yfilter = yfilter;
    }
    if(value_path == "malloced-path-count")
    {
        malloced_path_count.yfilter = yfilter;
    }
    if(value_path == "malloced-path-elem-count")
    {
        malloced_path_elem_count.yfilter = yfilter;
    }
    if(value_path == "malloced-prefix-count")
    {
        malloced_prefix_count.yfilter = yfilter;
    }
    if(value_path == "network-entry-count")
    {
        network_entry_count.yfilter = yfilter;
    }
    if(value_path == "path-elem-memory")
    {
        path_elem_memory.yfilter = yfilter;
    }
    if(value_path == "path-elems-count")
    {
        path_elems_count.yfilter = yfilter;
    }
    if(value_path == "path-memory")
    {
        path_memory.yfilter = yfilter;
    }
    if(value_path == "paths-count")
    {
        paths_count.yfilter = yfilter;
    }
    if(value_path == "prefix-memory")
    {
        prefix_memory.yfilter = yfilter;
    }
    if(value_path == "received-path-count")
    {
        received_path_count.yfilter = yfilter;
    }
    if(value_path == "retain-rt-all")
    {
        retain_rt_all.yfilter = yfilter;
    }
    if(value_path == "route-target-download")
    {
        route_target_download.yfilter = yfilter;
    }
    if(value_path == "tbl-bitf-size")
    {
        tbl_bitf_size.yfilter = yfilter;
    }
    if(value_path == "tbl-chunk-bitf-size")
    {
        tbl_chunk_bitf_size.yfilter = yfilter;
    }
    if(value_path == "use-igpsr-label")
    {
        use_igpsr_label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-path-install-disable" || name == "add-path-install-enable" || name == "any-ebgp-neighbor-missing-policy" || name == "asbr" || name == "attribute-download" || name == "best-external" || name == "best-external-disable" || name == "bmp-network-entry-count" || name == "bmp-path-memory" || name == "bmp-paths-count" || name == "bmp-prefix-memory" || name == "damped-path-count" || name == "freed-path-count" || name == "freed-path-elem-count" || name == "freed-prefix-count" || name == "history-path-count" || name == "ibgp-nexthop-self-count" || name == "imported-path-memory" || name == "imported-paths" || name == "is-route-reflector" || name == "label-retain" || name == "label-retainvalue" || name == "local-path-memory" || name == "local-paths" || name == "malloced-path-count" || name == "malloced-path-elem-count" || name == "malloced-prefix-count" || name == "network-entry-count" || name == "path-elem-memory" || name == "path-elems-count" || name == "path-memory" || name == "paths-count" || name == "prefix-memory" || name == "received-path-count" || name == "retain-rt-all" || name == "route-target-download" || name == "tbl-bitf-size" || name == "tbl-chunk-bitf-size" || name == "use-igpsr-label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attributes()
{

    yang_name = "attributes"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::~Attributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        for(auto const & c : attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute>();
        c->parent = this;
        attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::Attribute()
    :
    attribute_cache_bucket{YType::int32, "attribute-cache-bucket"},
    attribute_cache_id{YType::int32, "attribute-cache-id"},
    attribute_iid{YType::int32, "attribute-iid"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    reference_count{YType::uint32, "reference-count"}
    	,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_data() const
{
    return attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| attribute_iid.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_hash_value.is_set
	|| attribute_structure_id.is_set
	|| process_instance_id.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_cache_bucket.yfilter)
	|| ydk::is_set(attribute_cache_id.yfilter)
	|| ydk::is_set(attribute_iid.yfilter)
	|| ydk::is_set(attribute_instance_id.yfilter)
	|| ydk::is_set(attribute_structure_hash_value.yfilter)
	|| ydk::is_set(attribute_structure_id.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.yfilter)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.yfilter)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (attribute_iid.is_set || is_set(attribute_iid.yfilter)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.yfilter)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.yfilter)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.yfilter)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-info")
    {
        if(attribute_info == nullptr)
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo>();
        }
        return attribute_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute_info != nullptr)
    {
        children["attribute-info"] = attribute_info;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
        attribute_cache_bucket.value_namespace = name_space;
        attribute_cache_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
        attribute_cache_id.value_namespace = name_space;
        attribute_cache_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
        attribute_iid.value_namespace = name_space;
        attribute_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
        attribute_instance_id.value_namespace = name_space;
        attribute_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
        attribute_structure_hash_value.value_namespace = name_space;
        attribute_structure_hash_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
        attribute_structure_id.value_namespace = name_space;
        attribute_structure_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id.yfilter = yfilter;
    }
    if(value_path == "attribute-iid")
    {
        attribute_iid.yfilter = yfilter;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-info" || name == "attribute-cache-bucket" || name == "attribute-cache-id" || name == "attribute-iid" || name == "attribute-instance-id" || name == "attribute-structure-hash-value" || name == "attribute-structure-id" || name == "process-instance-id" || name == "reference-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttributeInfo()
    :
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_type{YType::uint16, "rnh-type"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"}
    	,
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>())
{
    attr_set->parent = this;
    common_attributes->parent = this;
    ribrnh_ip->parent = this;
    rnh_addr->parent = this;

    yang_name = "attribute-info"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_data() const
{
    return attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| is_application_gateway_present.is_set
	|| is_as_path2_byte.is_set
	|| is_attr_set_present.is_set
	|| is_ribrnh_present.is_set
	|| is_rnh_present.is_set
	|| ribrnh_encap.is_set
	|| ribrnh_mac.is_set
	|| ribrnh_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnhip_table.is_set
	|| rnh_addr_len.is_set
	|| rnh_len.is_set
	|| rnh_type.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| vpn_distinguisher.is_set
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>();
        }
        return rnh_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attr_set != nullptr)
    {
        children["attr-set"] = attr_set;
    }

    if(common_attributes != nullptr)
    {
        children["common-attributes"] = common_attributes;
    }

    if(ribrnh_ip != nullptr)
    {
        children["ribrnh-ip"] = ribrnh_ip;
    }

    if(rnh_addr != nullptr)
    {
        children["rnh-addr"] = rnh_addr;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attr-set" || name == "common-attributes" || name == "ribrnh-ip" || name == "rnh-addr" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-recover-sec" || name == "is-application-gateway-present" || name == "is-as-path2-byte" || name == "is-attr-set-present" || name == "is-ribrnh-present" || name == "is-rnh-present" || name == "ribrnh-encap" || name == "ribrnh-mac" || name == "ribrnh-table" || name == "ribrnh-vni" || name == "ribrnhip-table" || name == "rnh-addr-len" || name == "rnh-len" || name == "rnh-type" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "vpn-distinguisher")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_large_community_present{YType::boolean, "is-large-community-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_large_community_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster" || name == "community" || name == "connector-value" || name == "extended-community" || name == "l2tpv3-cookie" || name == "label-index-attr" || name == "large-community" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "pmsi-value" || name == "tunnel-encap" || name == "unknown-attribute" || name == "aggregator-address" || name == "aggregator-as" || name == "aigp-metric-value" || name == "as-path" || name == "connector-type" || name == "extended-community-flags" || name == "is-aggregator-present" || name == "is-aigp-present" || name == "is-as-path-present" || name == "is-atomic-aggregate-present" || name == "is-community-present" || name == "is-connector-present" || name == "is-extended-community-present" || name == "is-label-index-present" || name == "is-large-community-present" || name == "is-local-pref-present" || name == "is-ls-attribute-present" || name == "is-metric-present" || name == "is-origin-present" || name == "is-pe-distinguisher-label-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-ssa-present" || name == "l2tpv3-session-id" || name == "local-preference" || name == "metric" || name == "neighbor-as" || name == "origin" || name == "originator" || name == "pmsi-flags" || name == "pmsi-label" || name == "pmsi-type" || name == "ppm-pvalue")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pe_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "pe-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    preference{YType::uint32, "preference"},
    request_state{YType::enumeration, "request-state"},
    state{YType::boolean, "state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
	,binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
{
    allocated_binding_sid->parent = this;
    binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return preference.is_set
	|| request_state.is_set
	|| state.is_set
	|| tunnel_encap_type.is_set
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-binding-sid" || name == "binding-sid" || name == "segment-list" || name == "preference" || name == "request-state" || name == "state" || name == "tunnel-encap-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_large_community_present{YType::boolean, "is-large-community-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"}
    	,
    tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>())
{
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_large_community_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.size(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(c);
        return c;
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(c);
        return c;
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(c);
        return c;
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(c);
        return c;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(c);
        return c;
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "large-community")
    {
        for(auto const & c : large_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity>();
        c->parent = this;
        large_community.push_back(c);
        return c;
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(c);
        return c;
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cluster)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connector_value)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : extended_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : l2tpv3_cookie)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : label_index_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : large_community)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ls_attr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_distinguisher_label)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmsi_value)
    {
        children[c->get_segment_path()] = c;
    }

    if(tunnel_encap != nullptr)
    {
        children["tunnel-encap"] = tunnel_encap;
    }

    for (auto const & c : unknown_attribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster" || name == "community" || name == "connector-value" || name == "extended-community" || name == "l2tpv3-cookie" || name == "label-index-attr" || name == "large-community" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "pmsi-value" || name == "tunnel-encap" || name == "unknown-attribute" || name == "aggregator-address" || name == "aggregator-as" || name == "aigp-metric-value" || name == "as-path" || name == "connector-type" || name == "extended-community-flags" || name == "is-aggregator-present" || name == "is-aigp-present" || name == "is-as-path-present" || name == "is-atomic-aggregate-present" || name == "is-community-present" || name == "is-connector-present" || name == "is-extended-community-present" || name == "is-label-index-present" || name == "is-large-community-present" || name == "is-local-pref-present" || name == "is-ls-attribute-present" || name == "is-metric-present" || name == "is-origin-present" || name == "is-pe-distinguisher-label-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-ssa-present" || name == "l2tpv3-session-id" || name == "local-preference" || name == "metric" || name == "neighbor-as" || name == "origin" || name == "originator" || name == "pmsi-flags" || name == "pmsi-label" || name == "pmsi-type" || name == "ppm-pvalue")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "label-index-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(pe_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "pe-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_data() const
{
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sr_policy != nullptr)
    {
        children["sr-policy"] = sr_policy;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    preference{YType::uint32, "preference"},
    request_state{YType::enumeration, "request-state"},
    state{YType::boolean, "state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
	,binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
{
    allocated_binding_sid->parent = this;
    binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return preference.is_set
	|| request_state.is_set
	|| state.is_set
	|| tunnel_encap_type.is_set
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data())
	|| (binding_sid !=  nullptr && binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.size(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation())
	|| (binding_sid !=  nullptr && binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        for(auto const & c : segment_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        c->parent = this;
        segment_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocated_binding_sid != nullptr)
    {
        children["allocated-binding-sid"] = allocated_binding_sid;
    }

    if(binding_sid != nullptr)
    {
        children["binding-sid"] = binding_sid;
    }

    for (auto const & c : segment_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-binding-sid" || name == "binding-sid" || name == "segment-list" || name == "preference" || name == "request-state" || name == "state" || name == "tunnel-encap-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.size(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        for(auto const & c : segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        c->parent = this;
        segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "label" || name == "type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address" || name == "len" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpPathTableGeneric()
    :
    bmp_route_monitoringe_enabled{YType::boolean, "bmp-route-monitoringe-enabled"},
    bmp_table_version{YType::uint32, "bmp-table-version"},
    bmp_version_incremented{YType::boolean, "bmp-version-incremented"},
    bmp_version_inprogress{YType::boolean, "bmp-version-inprogress"},
    bmp_version_wrapped{YType::uint32, "bmp-version-wrapped"},
    bmp_version_wrapped_tid{YType::uint32, "bmp-version-wrapped-tid"},
    network_count{YType::uint32, "network-count"},
    path_count{YType::uint32, "path-count"}
    	,
    bmp_version_wrap_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec>())
	,bmp_version_wrap_start_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec>())
	,bmp_version_wrap_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec>())
{
    bmp_version_wrap_done_time_spec->parent = this;
    bmp_version_wrap_start_time_spec->parent = this;
    bmp_version_wrap_time_spec->parent = this;

    yang_name = "bmp-path-table-generic"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::~BmpPathTableGeneric()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::has_data() const
{
    return bmp_route_monitoringe_enabled.is_set
	|| bmp_table_version.is_set
	|| bmp_version_incremented.is_set
	|| bmp_version_inprogress.is_set
	|| bmp_version_wrapped.is_set
	|| bmp_version_wrapped_tid.is_set
	|| network_count.is_set
	|| path_count.is_set
	|| (bmp_version_wrap_done_time_spec !=  nullptr && bmp_version_wrap_done_time_spec->has_data())
	|| (bmp_version_wrap_start_time_spec !=  nullptr && bmp_version_wrap_start_time_spec->has_data())
	|| (bmp_version_wrap_time_spec !=  nullptr && bmp_version_wrap_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmp_route_monitoringe_enabled.yfilter)
	|| ydk::is_set(bmp_table_version.yfilter)
	|| ydk::is_set(bmp_version_incremented.yfilter)
	|| ydk::is_set(bmp_version_inprogress.yfilter)
	|| ydk::is_set(bmp_version_wrapped.yfilter)
	|| ydk::is_set(bmp_version_wrapped_tid.yfilter)
	|| ydk::is_set(network_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| (bmp_version_wrap_done_time_spec !=  nullptr && bmp_version_wrap_done_time_spec->has_operation())
	|| (bmp_version_wrap_start_time_spec !=  nullptr && bmp_version_wrap_start_time_spec->has_operation())
	|| (bmp_version_wrap_time_spec !=  nullptr && bmp_version_wrap_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-path-table-generic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmp_route_monitoringe_enabled.is_set || is_set(bmp_route_monitoringe_enabled.yfilter)) leaf_name_data.push_back(bmp_route_monitoringe_enabled.get_name_leafdata());
    if (bmp_table_version.is_set || is_set(bmp_table_version.yfilter)) leaf_name_data.push_back(bmp_table_version.get_name_leafdata());
    if (bmp_version_incremented.is_set || is_set(bmp_version_incremented.yfilter)) leaf_name_data.push_back(bmp_version_incremented.get_name_leafdata());
    if (bmp_version_inprogress.is_set || is_set(bmp_version_inprogress.yfilter)) leaf_name_data.push_back(bmp_version_inprogress.get_name_leafdata());
    if (bmp_version_wrapped.is_set || is_set(bmp_version_wrapped.yfilter)) leaf_name_data.push_back(bmp_version_wrapped.get_name_leafdata());
    if (bmp_version_wrapped_tid.is_set || is_set(bmp_version_wrapped_tid.yfilter)) leaf_name_data.push_back(bmp_version_wrapped_tid.get_name_leafdata());
    if (network_count.is_set || is_set(network_count.yfilter)) leaf_name_data.push_back(network_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-version-wrap-done-time-spec")
    {
        if(bmp_version_wrap_done_time_spec == nullptr)
        {
            bmp_version_wrap_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec>();
        }
        return bmp_version_wrap_done_time_spec;
    }

    if(child_yang_name == "bmp-version-wrap-start-time-spec")
    {
        if(bmp_version_wrap_start_time_spec == nullptr)
        {
            bmp_version_wrap_start_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec>();
        }
        return bmp_version_wrap_start_time_spec;
    }

    if(child_yang_name == "bmp-version-wrap-time-spec")
    {
        if(bmp_version_wrap_time_spec == nullptr)
        {
            bmp_version_wrap_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec>();
        }
        return bmp_version_wrap_time_spec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bmp_version_wrap_done_time_spec != nullptr)
    {
        children["bmp-version-wrap-done-time-spec"] = bmp_version_wrap_done_time_spec;
    }

    if(bmp_version_wrap_start_time_spec != nullptr)
    {
        children["bmp-version-wrap-start-time-spec"] = bmp_version_wrap_start_time_spec;
    }

    if(bmp_version_wrap_time_spec != nullptr)
    {
        children["bmp-version-wrap-time-spec"] = bmp_version_wrap_time_spec;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmp-route-monitoringe-enabled")
    {
        bmp_route_monitoringe_enabled = value;
        bmp_route_monitoringe_enabled.value_namespace = name_space;
        bmp_route_monitoringe_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-table-version")
    {
        bmp_table_version = value;
        bmp_table_version.value_namespace = name_space;
        bmp_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-version-incremented")
    {
        bmp_version_incremented = value;
        bmp_version_incremented.value_namespace = name_space;
        bmp_version_incremented.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-version-inprogress")
    {
        bmp_version_inprogress = value;
        bmp_version_inprogress.value_namespace = name_space;
        bmp_version_inprogress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-version-wrapped")
    {
        bmp_version_wrapped = value;
        bmp_version_wrapped.value_namespace = name_space;
        bmp_version_wrapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-version-wrapped-tid")
    {
        bmp_version_wrapped_tid = value;
        bmp_version_wrapped_tid.value_namespace = name_space;
        bmp_version_wrapped_tid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-count")
    {
        network_count = value;
        network_count.value_namespace = name_space;
        network_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmp-route-monitoringe-enabled")
    {
        bmp_route_monitoringe_enabled.yfilter = yfilter;
    }
    if(value_path == "bmp-table-version")
    {
        bmp_table_version.yfilter = yfilter;
    }
    if(value_path == "bmp-version-incremented")
    {
        bmp_version_incremented.yfilter = yfilter;
    }
    if(value_path == "bmp-version-inprogress")
    {
        bmp_version_inprogress.yfilter = yfilter;
    }
    if(value_path == "bmp-version-wrapped")
    {
        bmp_version_wrapped.yfilter = yfilter;
    }
    if(value_path == "bmp-version-wrapped-tid")
    {
        bmp_version_wrapped_tid.yfilter = yfilter;
    }
    if(value_path == "network-count")
    {
        network_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-version-wrap-done-time-spec" || name == "bmp-version-wrap-start-time-spec" || name == "bmp-version-wrap-time-spec" || name == "bmp-route-monitoringe-enabled" || name == "bmp-table-version" || name == "bmp-version-incremented" || name == "bmp-version-inprogress" || name == "bmp-version-wrapped" || name == "bmp-version-wrapped-tid" || name == "network-count" || name == "path-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::BmpVersionWrapDoneTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "bmp-version-wrap-done-time-spec"; yang_parent_name = "bmp-path-table-generic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::~BmpVersionWrapDoneTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-version-wrap-done-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapDoneTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::BmpVersionWrapStartTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "bmp-version-wrap-start-time-spec"; yang_parent_name = "bmp-path-table-generic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::~BmpVersionWrapStartTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-version-wrap-start-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapStartTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::BmpVersionWrapTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "bmp-version-wrap-time-spec"; yang_parent_name = "bmp-path-table-generic"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::~BmpVersionWrapTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nanoseconds.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-version-wrap-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric::BmpVersionWrapTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nanoseconds" || name == "seconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPaths()
{

    yang_name = "bmp-paths"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::~BmpPaths()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::has_data() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::has_operation() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-path")
    {
        for(auto const & c : bmp_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath>();
        c->parent = this;
        bmp_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bmp_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-path")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath()
    :
    af_name{YType::enumeration, "af-name"},
    bmp_net_flags{YType::uint32, "bmp-net-flags"},
    bmp_net_version{YType::uint32, "bmp-net-version"},
    has_local_label{YType::boolean, "has-local-label"},
    net_local_label{YType::uint32, "net-local-label"},
    network{YType::str, "network"},
    num_of_path{YType::uint32, "num-of-path"},
    prefix_length{YType::int32, "prefix-length"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix>())
	,version_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge>())
	,version_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp>())
{
    bgp_prefix->parent = this;
    version_age->parent = this;
    version_timestamp->parent = this;

    yang_name = "bmp-path"; yang_parent_name = "bmp-paths"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::~BmpPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::has_data() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| bmp_net_flags.is_set
	|| bmp_net_version.is_set
	|| has_local_label.is_set
	|| net_local_label.is_set
	|| network.is_set
	|| num_of_path.is_set
	|| prefix_length.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (version_age !=  nullptr && version_age->has_data())
	|| (version_timestamp !=  nullptr && version_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::has_operation() const
{
    for (std::size_t index=0; index<bmp_path.size(); index++)
    {
        if(bmp_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(bmp_net_flags.yfilter)
	|| ydk::is_set(bmp_net_version.yfilter)
	|| ydk::is_set(has_local_label.yfilter)
	|| ydk::is_set(net_local_label.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(num_of_path.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (version_age !=  nullptr && version_age->has_operation())
	|| (version_timestamp !=  nullptr && version_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (bmp_net_flags.is_set || is_set(bmp_net_flags.yfilter)) leaf_name_data.push_back(bmp_net_flags.get_name_leafdata());
    if (bmp_net_version.is_set || is_set(bmp_net_version.yfilter)) leaf_name_data.push_back(bmp_net_version.get_name_leafdata());
    if (has_local_label.is_set || is_set(has_local_label.yfilter)) leaf_name_data.push_back(has_local_label.get_name_leafdata());
    if (net_local_label.is_set || is_set(net_local_label.yfilter)) leaf_name_data.push_back(net_local_label.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (num_of_path.is_set || is_set(num_of_path.yfilter)) leaf_name_data.push_back(num_of_path.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "bmp-path")
    {
        for(auto const & c : bmp_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BmpPath_>();
        c->parent = this;
        bmp_path.push_back(c);
        return c;
    }

    if(child_yang_name == "version-age")
    {
        if(version_age == nullptr)
        {
            version_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionAge>();
        }
        return version_age;
    }

    if(child_yang_name == "version-timestamp")
    {
        if(version_timestamp == nullptr)
        {
            version_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::VersionTimestamp>();
        }
        return version_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_prefix != nullptr)
    {
        children["bgp-prefix"] = bgp_prefix;
    }

    for (auto const & c : bmp_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(version_age != nullptr)
    {
        children["version-age"] = version_age;
    }

    if(version_timestamp != nullptr)
    {
        children["version-timestamp"] = version_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-net-flags")
    {
        bmp_net_flags = value;
        bmp_net_flags.value_namespace = name_space;
        bmp_net_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-net-version")
    {
        bmp_net_version = value;
        bmp_net_version.value_namespace = name_space;
        bmp_net_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-local-label")
    {
        has_local_label = value;
        has_local_label.value_namespace = name_space;
        has_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-local-label")
    {
        net_local_label = value;
        net_local_label.value_namespace = name_space;
        net_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-path")
    {
        num_of_path = value;
        num_of_path.value_namespace = name_space;
        num_of_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "bmp-net-flags")
    {
        bmp_net_flags.yfilter = yfilter;
    }
    if(value_path == "bmp-net-version")
    {
        bmp_net_version.yfilter = yfilter;
    }
    if(value_path == "has-local-label")
    {
        has_local_label.yfilter = yfilter;
    }
    if(value_path == "net-local-label")
    {
        net_local_label.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "num-of-path")
    {
        num_of_path.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "bmp-path" || name == "version-age" || name == "version-timestamp" || name == "af-name" || name == "bmp-net-flags" || name == "bmp-net-version" || name == "has-local-label" || name == "net-local-label" || name == "network" || name == "num-of-path" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "bmp-path"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths::BmpPath::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}


}
}

