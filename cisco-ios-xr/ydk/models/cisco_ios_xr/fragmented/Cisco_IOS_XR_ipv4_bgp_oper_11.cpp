
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_19.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_13.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_20.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_18.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_23.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_30.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_24.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_28.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_15.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_26.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_31.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_22.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_29.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_16.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_12.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseDefVrfImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::AdvertiseVrfReImpDisableAfiV4Info()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "advertise-vrf-re-imp-disable-afi-v4-info"; yang_parent_name = "af-dependent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::~AdvertiseVrfReImpDisableAfiV4Info()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-re-imp-disable-afi-v4-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "advertise-vrf-re-imp-disable-afi-v4-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV4Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::AdvertiseVrfReImpDisableAfiV6Info()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "advertise-vrf-re-imp-disable-afi-v6-info"; yang_parent_name = "af-dependent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::~AdvertiseVrfReImpDisableAfiV6Info()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-vrf-re-imp-disable-afi-v6-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "advertise-vrf-re-imp-disable-afi-v6-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseVrfReImpDisableAfiV6Info::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::AfEncapsulationTypeInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "af-encapsulation-type-info"; yang_parent_name = "af-dependent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::~AfEncapsulationTypeInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-encapsulation-type-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "af-encapsulation-type-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEncapsulationTypeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::ImportAfiInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "import-afi-info"; yang_parent_name = "af-dependent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::~ImportAfiInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-afi-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "import-afi-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::ImportAfiInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::AdvertiseLocalLabeledRouteInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "advertise-local-labeled-route-info"; yang_parent_name = "af-dependent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::~AdvertiseLocalLabeledRouteInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-local-labeled-route-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "advertise-local-labeled-route-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AdvertiseLocalLabeledRouteInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::EnforceMultipleLabelsInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "enforce-multiple-labels-info"; yang_parent_name = "af-dependent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::~EnforceMultipleLabelsInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enforce-multiple-labels-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "enforce-multiple-labels-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::EnforceMultipleLabelsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUsers()
{

    yang_name = "configuration-users"; yang_parent_name = "config-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::~ConfigurationUsers()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::has_data() const
{
    for (std::size_t index=0; index<configuration_user.size(); index++)
    {
        if(configuration_user[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::has_operation() const
{
    for (std::size_t index=0; index<configuration_user.size(); index++)
    {
        if(configuration_user[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-users";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-user")
    {
        for(auto const & c : configuration_user)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser>();
        c->parent = this;
        configuration_user.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configuration_user)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-user")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::ConfigurationUser()
    :
    entity_type{YType::enumeration, "entity-type"},
    neighbor_address{YType::str, "neighbor-address"},
    entity_name{YType::str, "entity-name"},
    group_name{YType::str, "group-name"},
    configuration_type{YType::enumeration, "configuration-type"},
    address_family_identifier{YType::uint8, "address-family-identifier"}
    	,
    neighbor_address_xr(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr>())
	,af_independent_relatives(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives>())
{
    neighbor_address_xr->parent = this;
    af_independent_relatives->parent = this;

    yang_name = "configuration-user"; yang_parent_name = "configuration-users"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::~ConfigurationUser()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::has_data() const
{
    for (std::size_t index=0; index<af_dependent_relative.size(); index++)
    {
        if(af_dependent_relative[index]->has_data())
            return true;
    }
    return entity_type.is_set
	|| neighbor_address.is_set
	|| entity_name.is_set
	|| group_name.is_set
	|| configuration_type.is_set
	|| address_family_identifier.is_set
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (af_independent_relatives !=  nullptr && af_independent_relatives->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::has_operation() const
{
    for (std::size_t index=0; index<af_dependent_relative.size(); index++)
    {
        if(af_dependent_relative[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entity_type.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(entity_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (af_independent_relatives !=  nullptr && af_independent_relatives->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_type.is_set || is_set(entity_type.yfilter)) leaf_name_data.push_back(entity_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (entity_name.is_set || is_set(entity_name.yfilter)) leaf_name_data.push_back(entity_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "af-independent-relatives")
    {
        if(af_independent_relatives == nullptr)
        {
            af_independent_relatives = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives>();
        }
        return af_independent_relatives;
    }

    if(child_yang_name == "af-dependent-relative")
    {
        for(auto const & c : af_dependent_relative)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative>();
        c->parent = this;
        af_dependent_relative.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address_xr != nullptr)
    {
        children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(af_independent_relatives != nullptr)
    {
        children["af-independent-relatives"] = af_independent_relatives;
    }

    for (auto const & c : af_dependent_relative)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entity-type")
    {
        entity_type = value;
        entity_type.value_namespace = name_space;
        entity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-name")
    {
        entity_name = value;
        entity_name.value_namespace = name_space;
        entity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entity-type")
    {
        entity_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "entity-name")
    {
        entity_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "af-independent-relatives" || name == "af-dependent-relative" || name == "entity-type" || name == "neighbor-address" || name == "entity-name" || name == "group-name" || name == "configuration-type" || name == "address-family-identifier")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::NeighborAddressXr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address-xr"; yang_parent_name = "configuration-user"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::NeighborAddressXr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::AfIndependentRelatives()
{

    yang_name = "af-independent-relatives"; yang_parent_name = "configuration-user"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::~AfIndependentRelatives()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-independent-relatives";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "af-independent-relatives"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::AfDependentRelative()
{

    yang_name = "af-dependent-relative"; yang_parent_name = "configuration-user"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::~AfDependentRelative()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-dependent-relative";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "af-dependent-relative"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationUsers::ConfigurationUser::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritances()
{

    yang_name = "configuration-inheritances"; yang_parent_name = "config-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::~ConfigurationInheritances()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::has_data() const
{
    for (std::size_t index=0; index<configuration_inheritance.size(); index++)
    {
        if(configuration_inheritance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::has_operation() const
{
    for (std::size_t index=0; index<configuration_inheritance.size(); index++)
    {
        if(configuration_inheritance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-inheritances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-inheritance")
    {
        for(auto const & c : configuration_inheritance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance>();
        c->parent = this;
        configuration_inheritance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configuration_inheritance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-inheritance")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::ConfigurationInheritance()
    :
    entity_type{YType::enumeration, "entity-type"},
    neighbor_address{YType::str, "neighbor-address"},
    entity_name{YType::str, "entity-name"},
    group_name{YType::str, "group-name"},
    configuration_type{YType::enumeration, "configuration-type"},
    address_family_identifier{YType::uint8, "address-family-identifier"}
    	,
    neighbor_address_xr(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr>())
	,af_independent_relatives(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives>())
{
    neighbor_address_xr->parent = this;
    af_independent_relatives->parent = this;

    yang_name = "configuration-inheritance"; yang_parent_name = "configuration-inheritances"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::~ConfigurationInheritance()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::has_data() const
{
    for (std::size_t index=0; index<af_dependent_relative.size(); index++)
    {
        if(af_dependent_relative[index]->has_data())
            return true;
    }
    return entity_type.is_set
	|| neighbor_address.is_set
	|| entity_name.is_set
	|| group_name.is_set
	|| configuration_type.is_set
	|| address_family_identifier.is_set
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (af_independent_relatives !=  nullptr && af_independent_relatives->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::has_operation() const
{
    for (std::size_t index=0; index<af_dependent_relative.size(); index++)
    {
        if(af_dependent_relative[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entity_type.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(entity_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (af_independent_relatives !=  nullptr && af_independent_relatives->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-inheritance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entity_type.is_set || is_set(entity_type.yfilter)) leaf_name_data.push_back(entity_type.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (entity_name.is_set || is_set(entity_name.yfilter)) leaf_name_data.push_back(entity_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "af-independent-relatives")
    {
        if(af_independent_relatives == nullptr)
        {
            af_independent_relatives = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives>();
        }
        return af_independent_relatives;
    }

    if(child_yang_name == "af-dependent-relative")
    {
        for(auto const & c : af_dependent_relative)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative>();
        c->parent = this;
        af_dependent_relative.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address_xr != nullptr)
    {
        children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(af_independent_relatives != nullptr)
    {
        children["af-independent-relatives"] = af_independent_relatives;
    }

    for (auto const & c : af_dependent_relative)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entity-type")
    {
        entity_type = value;
        entity_type.value_namespace = name_space;
        entity_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-name")
    {
        entity_name = value;
        entity_name.value_namespace = name_space;
        entity_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entity-type")
    {
        entity_type.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "entity-name")
    {
        entity_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "af-independent-relatives" || name == "af-dependent-relative" || name == "entity-type" || name == "neighbor-address" || name == "entity-name" || name == "group-name" || name == "configuration-type" || name == "address-family-identifier")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::NeighborAddressXr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address-xr"; yang_parent_name = "configuration-inheritance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::NeighborAddressXr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::AfIndependentRelatives()
{

    yang_name = "af-independent-relatives"; yang_parent_name = "configuration-inheritance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::~AfIndependentRelatives()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-independent-relatives";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "af-independent-relatives"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfIndependentRelatives::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::AfDependentRelative()
{

    yang_name = "af-dependent-relative"; yang_parent_name = "configuration-inheritance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::~AfDependentRelative()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-dependent-relative";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "af-dependent-relative"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
        address_family_identifier.value_namespace = name_space;
        address_family_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
        configuration_type.value_namespace = name_space;
        configuration_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier.yfilter = yfilter;
    }
    if(value_path == "configuration-type")
    {
        configuration_type.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::ConfigurationInheritances::ConfigurationInheritance::AfDependentRelative::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instances()
{

    yang_name = "instances"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Instances::~Instances()
{
}

bool Bgp::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Bgp::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
    	,
    instance_active(std::make_shared<Bgp::Instances::Instance::InstanceActive>())
	,instance_standby(std::make_shared<Bgp::Instances::Instance::InstanceStandby>())
{
    instance_active->parent = this;
    instance_standby->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false;
}

Bgp::Instances::Instance::~Instance()
{
}

bool Bgp::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| (instance_active !=  nullptr && instance_active->has_data())
	|| (instance_standby !=  nullptr && instance_standby->has_data());
}

bool Bgp::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (instance_active !=  nullptr && instance_active->has_operation())
	|| (instance_standby !=  nullptr && instance_standby->has_operation());
}

std::string Bgp::Instances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-bgp-oper:bgp/instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Bgp::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-active")
    {
        if(instance_active == nullptr)
        {
            instance_active = std::make_shared<Bgp::Instances::Instance::InstanceActive>();
        }
        return instance_active;
    }

    if(child_yang_name == "instance-standby")
    {
        if(instance_standby == nullptr)
        {
            instance_standby = std::make_shared<Bgp::Instances::Instance::InstanceStandby>();
        }
        return instance_standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instance_active != nullptr)
    {
        children["instance-active"] = instance_active;
    }

    if(instance_standby != nullptr)
    {
        children["instance-standby"] = instance_standby;
    }

    return children;
}

void Bgp::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-active" || name == "instance-standby" || name == "instance-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::InstanceActive()
    :
    label_entries(std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelEntries>())
	,label_summary(std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelSummary>())
	,label_rpf_entries(std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelRpfEntries>())
	,update_generation_process(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess>())
	,rpki_refresh_afs(std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs>())
	,vrfs(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs>())
	,default_vrf(std::make_shared<Bgp::Instances::Instance::InstanceActive::DefaultVrf>())
	,update_inbound_filter_process(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateInboundFilterProcess>())
	,attributes(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes>())
	,rt_entries(std::make_shared<Bgp::Instances::Instance::InstanceActive::RtEntries>())
	,attribute_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups>())
	,rpki_server_list(std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiServerList>())
	,rpki_routes(std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRoutes>())
	,update_inbound_error_process(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess>())
	,rpki_summary(std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiSummary>())
{
    label_entries->parent = this;
    label_summary->parent = this;
    label_rpf_entries->parent = this;
    update_generation_process->parent = this;
    rpki_refresh_afs->parent = this;
    vrfs->parent = this;
    default_vrf->parent = this;
    update_inbound_filter_process->parent = this;
    attributes->parent = this;
    rt_entries->parent = this;
    attribute_filter_groups->parent = this;
    rpki_server_list->parent = this;
    rpki_routes->parent = this;
    update_inbound_error_process->parent = this;
    rpki_summary->parent = this;

    yang_name = "instance-active"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::~InstanceActive()
{
}

bool Bgp::Instances::Instance::InstanceActive::has_data() const
{
    return (label_entries !=  nullptr && label_entries->has_data())
	|| (label_summary !=  nullptr && label_summary->has_data())
	|| (label_rpf_entries !=  nullptr && label_rpf_entries->has_data())
	|| (update_generation_process !=  nullptr && update_generation_process->has_data())
	|| (rpki_refresh_afs !=  nullptr && rpki_refresh_afs->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (update_inbound_filter_process !=  nullptr && update_inbound_filter_process->has_data())
	|| (attributes !=  nullptr && attributes->has_data())
	|| (rt_entries !=  nullptr && rt_entries->has_data())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_data())
	|| (rpki_server_list !=  nullptr && rpki_server_list->has_data())
	|| (rpki_routes !=  nullptr && rpki_routes->has_data())
	|| (update_inbound_error_process !=  nullptr && update_inbound_error_process->has_data())
	|| (rpki_summary !=  nullptr && rpki_summary->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::has_operation() const
{
    return is_set(yfilter)
	|| (label_entries !=  nullptr && label_entries->has_operation())
	|| (label_summary !=  nullptr && label_summary->has_operation())
	|| (label_rpf_entries !=  nullptr && label_rpf_entries->has_operation())
	|| (update_generation_process !=  nullptr && update_generation_process->has_operation())
	|| (rpki_refresh_afs !=  nullptr && rpki_refresh_afs->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (update_inbound_filter_process !=  nullptr && update_inbound_filter_process->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (rt_entries !=  nullptr && rt_entries->has_operation())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_operation())
	|| (rpki_server_list !=  nullptr && rpki_server_list->has_operation())
	|| (rpki_routes !=  nullptr && rpki_routes->has_operation())
	|| (update_inbound_error_process !=  nullptr && update_inbound_error_process->has_operation())
	|| (rpki_summary !=  nullptr && rpki_summary->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-entries")
    {
        if(label_entries == nullptr)
        {
            label_entries = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelEntries>();
        }
        return label_entries;
    }

    if(child_yang_name == "label-summary")
    {
        if(label_summary == nullptr)
        {
            label_summary = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelSummary>();
        }
        return label_summary;
    }

    if(child_yang_name == "label-rpf-entries")
    {
        if(label_rpf_entries == nullptr)
        {
            label_rpf_entries = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelRpfEntries>();
        }
        return label_rpf_entries;
    }

    if(child_yang_name == "update-generation-process")
    {
        if(update_generation_process == nullptr)
        {
            update_generation_process = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess>();
        }
        return update_generation_process;
    }

    if(child_yang_name == "rpki-refresh-afs")
    {
        if(rpki_refresh_afs == nullptr)
        {
            rpki_refresh_afs = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs>();
        }
        return rpki_refresh_afs;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Bgp::Instances::Instance::InstanceActive::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "update-inbound-filter-process")
    {
        if(update_inbound_filter_process == nullptr)
        {
            update_inbound_filter_process = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateInboundFilterProcess>();
        }
        return update_inbound_filter_process;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "rt-entries")
    {
        if(rt_entries == nullptr)
        {
            rt_entries = std::make_shared<Bgp::Instances::Instance::InstanceActive::RtEntries>();
        }
        return rt_entries;
    }

    if(child_yang_name == "attribute-filter-groups")
    {
        if(attribute_filter_groups == nullptr)
        {
            attribute_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups>();
        }
        return attribute_filter_groups;
    }

    if(child_yang_name == "rpki-server-list")
    {
        if(rpki_server_list == nullptr)
        {
            rpki_server_list = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiServerList>();
        }
        return rpki_server_list;
    }

    if(child_yang_name == "rpki-routes")
    {
        if(rpki_routes == nullptr)
        {
            rpki_routes = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRoutes>();
        }
        return rpki_routes;
    }

    if(child_yang_name == "update-inbound-error-process")
    {
        if(update_inbound_error_process == nullptr)
        {
            update_inbound_error_process = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess>();
        }
        return update_inbound_error_process;
    }

    if(child_yang_name == "rpki-summary")
    {
        if(rpki_summary == nullptr)
        {
            rpki_summary = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiSummary>();
        }
        return rpki_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_entries != nullptr)
    {
        children["label-entries"] = label_entries;
    }

    if(label_summary != nullptr)
    {
        children["label-summary"] = label_summary;
    }

    if(label_rpf_entries != nullptr)
    {
        children["label-rpf-entries"] = label_rpf_entries;
    }

    if(update_generation_process != nullptr)
    {
        children["update-generation-process"] = update_generation_process;
    }

    if(rpki_refresh_afs != nullptr)
    {
        children["rpki-refresh-afs"] = rpki_refresh_afs;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    if(default_vrf != nullptr)
    {
        children["default-vrf"] = default_vrf;
    }

    if(update_inbound_filter_process != nullptr)
    {
        children["update-inbound-filter-process"] = update_inbound_filter_process;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    if(rt_entries != nullptr)
    {
        children["rt-entries"] = rt_entries;
    }

    if(attribute_filter_groups != nullptr)
    {
        children["attribute-filter-groups"] = attribute_filter_groups;
    }

    if(rpki_server_list != nullptr)
    {
        children["rpki-server-list"] = rpki_server_list;
    }

    if(rpki_routes != nullptr)
    {
        children["rpki-routes"] = rpki_routes;
    }

    if(update_inbound_error_process != nullptr)
    {
        children["update-inbound-error-process"] = update_inbound_error_process;
    }

    if(rpki_summary != nullptr)
    {
        children["rpki-summary"] = rpki_summary;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-entries" || name == "label-summary" || name == "label-rpf-entries" || name == "update-generation-process" || name == "rpki-refresh-afs" || name == "vrfs" || name == "default-vrf" || name == "update-inbound-filter-process" || name == "attributes" || name == "rt-entries" || name == "attribute-filter-groups" || name == "rpki-server-list" || name == "rpki-routes" || name == "update-inbound-error-process" || name == "rpki-summary")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntries()
{

    yang_name = "label-entries"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelEntries::~LabelEntries()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::has_data() const
{
    for (std::size_t index=0; index<label_entry.size(); index++)
    {
        if(label_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::has_operation() const
{
    for (std::size_t index=0; index<label_entry.size(); index++)
    {
        if(label_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::LabelEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-entry")
    {
        for(auto const & c : label_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry>();
        c->parent = this;
        label_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::LabelEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::LabelEntry()
    :
    label{YType::int32, "label"}
    	,
    entry(std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry>())
{
    entry->parent = this;

    yang_name = "label-entry"; yang_parent_name = "label-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::~LabelEntry()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::has_data() const
{
    return label.is_set
	|| (entry !=  nullptr && entry->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (entry !=  nullptr && entry->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-entry" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        if(entry == nullptr)
        {
            entry = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry>();
        }
        return entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(entry != nullptr)
    {
        children["entry"] = entry;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::Entry()
    :
    label{YType::uint32, "label"},
    rds{YType::str, "rds"},
    vrf{YType::str, "vrf"},
    ip{YType::str, "ip"},
    ip6{YType::str, "ip6"},
    rpc_set_id{YType::uint32, "rpc-set-id"},
    masklen{YType::uint16, "masklen"},
    ts_sec{YType::uint32, "ts-sec"},
    ts_ssec{YType::uint32, "ts-ssec"},
    info{YType::uint16, "info"},
    refcount{YType::uint32, "refcount"},
    inactive{YType::boolean, "inactive"}
{

    yang_name = "entry"; yang_parent_name = "label-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::~Entry()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::has_data() const
{
    return label.is_set
	|| rds.is_set
	|| vrf.is_set
	|| ip.is_set
	|| ip6.is_set
	|| rpc_set_id.is_set
	|| masklen.is_set
	|| ts_sec.is_set
	|| ts_ssec.is_set
	|| info.is_set
	|| refcount.is_set
	|| inactive.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(rds.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ip6.yfilter)
	|| ydk::is_set(rpc_set_id.yfilter)
	|| ydk::is_set(masklen.yfilter)
	|| ydk::is_set(ts_sec.yfilter)
	|| ydk::is_set(ts_ssec.yfilter)
	|| ydk::is_set(info.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(inactive.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (rds.is_set || is_set(rds.yfilter)) leaf_name_data.push_back(rds.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ip6.is_set || is_set(ip6.yfilter)) leaf_name_data.push_back(ip6.get_name_leafdata());
    if (rpc_set_id.is_set || is_set(rpc_set_id.yfilter)) leaf_name_data.push_back(rpc_set_id.get_name_leafdata());
    if (masklen.is_set || is_set(masklen.yfilter)) leaf_name_data.push_back(masklen.get_name_leafdata());
    if (ts_sec.is_set || is_set(ts_sec.yfilter)) leaf_name_data.push_back(ts_sec.get_name_leafdata());
    if (ts_ssec.is_set || is_set(ts_ssec.yfilter)) leaf_name_data.push_back(ts_ssec.get_name_leafdata());
    if (info.is_set || is_set(info.yfilter)) leaf_name_data.push_back(info.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (inactive.is_set || is_set(inactive.yfilter)) leaf_name_data.push_back(inactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rds")
    {
        rds = value;
        rds.value_namespace = name_space;
        rds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip6")
    {
        ip6 = value;
        ip6.value_namespace = name_space;
        ip6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpc-set-id")
    {
        rpc_set_id = value;
        rpc_set_id.value_namespace = name_space;
        rpc_set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "masklen")
    {
        masklen = value;
        masklen.value_namespace = name_space;
        masklen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts-sec")
    {
        ts_sec = value;
        ts_sec.value_namespace = name_space;
        ts_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ts-ssec")
    {
        ts_ssec = value;
        ts_ssec.value_namespace = name_space;
        ts_ssec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "info")
    {
        info = value;
        info.value_namespace = name_space;
        info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inactive")
    {
        inactive = value;
        inactive.value_namespace = name_space;
        inactive.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "rds")
    {
        rds.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ip6")
    {
        ip6.yfilter = yfilter;
    }
    if(value_path == "rpc-set-id")
    {
        rpc_set_id.yfilter = yfilter;
    }
    if(value_path == "masklen")
    {
        masklen.yfilter = yfilter;
    }
    if(value_path == "ts-sec")
    {
        ts_sec.yfilter = yfilter;
    }
    if(value_path == "ts-ssec")
    {
        ts_ssec.yfilter = yfilter;
    }
    if(value_path == "info")
    {
        info.yfilter = yfilter;
    }
    if(value_path == "refcount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "inactive")
    {
        inactive.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::LabelEntries::LabelEntry::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label" || name == "rds" || name == "vrf" || name == "ip" || name == "ip6" || name == "rpc-set-id" || name == "masklen" || name == "ts-sec" || name == "ts-ssec" || name == "info" || name == "refcount" || name == "inactive")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelSummary::LabelSummary()
    :
    stats(std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats>())
{
    stats->parent = this;

    yang_name = "label-summary"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelSummary::~LabelSummary()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelSummary::has_data() const
{
    return (stats !=  nullptr && stats->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::LabelSummary::has_operation() const
{
    return is_set(yfilter)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::LabelSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::LabelSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::Stats()
    :
    nbgp_label_alloc_type_gbl_ipv4{YType::uint32, "nbgp-label-alloc-type-gbl-ipv4"},
    nbgp_label_alloc_type_gbl_ipv6{YType::uint32, "nbgp-label-alloc-type-gbl-ipv6"},
    nbgp_label_alloc_type_vrf_ipv4{YType::uint32, "nbgp-label-alloc-type-vrf-ipv4"},
    nbgp_label_alloc_type_vrf_ipv6{YType::uint32, "nbgp-label-alloc-type-vrf-ipv6"},
    nbgp_label_alloc_type_ce_ipv4{YType::uint32, "nbgp-label-alloc-type-ce-ipv4"},
    nbgp_label_alloc_type_ce_ipv6{YType::uint32, "nbgp-label-alloc-type-ce-ipv6"},
    nbgp_label_alloc_type_tbl_ipv4{YType::uint32, "nbgp-label-alloc-type-tbl-ipv4"},
    nbgp_label_alloc_type_tbl_ipv6{YType::uint32, "nbgp-label-alloc-type-tbl-ipv6"},
    nbgp_label_alloc_type_vpn_ipv4{YType::uint32, "nbgp-label-alloc-type-vpn-ipv4"},
    nbgp_label_alloc_type_vpn_ipv6{YType::uint32, "nbgp-label-alloc-type-vpn-ipv6"},
    nbgp_label_alloc_type_asbr_nh{YType::uint32, "nbgp-label-alloc-type-asbr-nh"},
    nbgp_labels{YType::uint32, "nbgp-labels"},
    bgp_label_rpf_lists{YType::uint32, "bgp-label-rpf-lists"},
    bgp_label_rpf_nodes{YType::uint32, "bgp-label-rpf-nodes"}
{

    yang_name = "stats"; yang_parent_name = "label-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::~Stats()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::has_data() const
{
    return nbgp_label_alloc_type_gbl_ipv4.is_set
	|| nbgp_label_alloc_type_gbl_ipv6.is_set
	|| nbgp_label_alloc_type_vrf_ipv4.is_set
	|| nbgp_label_alloc_type_vrf_ipv6.is_set
	|| nbgp_label_alloc_type_ce_ipv4.is_set
	|| nbgp_label_alloc_type_ce_ipv6.is_set
	|| nbgp_label_alloc_type_tbl_ipv4.is_set
	|| nbgp_label_alloc_type_tbl_ipv6.is_set
	|| nbgp_label_alloc_type_vpn_ipv4.is_set
	|| nbgp_label_alloc_type_vpn_ipv6.is_set
	|| nbgp_label_alloc_type_asbr_nh.is_set
	|| nbgp_labels.is_set
	|| bgp_label_rpf_lists.is_set
	|| bgp_label_rpf_nodes.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_gbl_ipv4.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_gbl_ipv6.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_vrf_ipv4.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_vrf_ipv6.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_ce_ipv4.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_ce_ipv6.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_tbl_ipv4.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_tbl_ipv6.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_vpn_ipv4.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_vpn_ipv6.yfilter)
	|| ydk::is_set(nbgp_label_alloc_type_asbr_nh.yfilter)
	|| ydk::is_set(nbgp_labels.yfilter)
	|| ydk::is_set(bgp_label_rpf_lists.yfilter)
	|| ydk::is_set(bgp_label_rpf_nodes.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbgp_label_alloc_type_gbl_ipv4.is_set || is_set(nbgp_label_alloc_type_gbl_ipv4.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_gbl_ipv4.get_name_leafdata());
    if (nbgp_label_alloc_type_gbl_ipv6.is_set || is_set(nbgp_label_alloc_type_gbl_ipv6.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_gbl_ipv6.get_name_leafdata());
    if (nbgp_label_alloc_type_vrf_ipv4.is_set || is_set(nbgp_label_alloc_type_vrf_ipv4.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_vrf_ipv4.get_name_leafdata());
    if (nbgp_label_alloc_type_vrf_ipv6.is_set || is_set(nbgp_label_alloc_type_vrf_ipv6.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_vrf_ipv6.get_name_leafdata());
    if (nbgp_label_alloc_type_ce_ipv4.is_set || is_set(nbgp_label_alloc_type_ce_ipv4.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_ce_ipv4.get_name_leafdata());
    if (nbgp_label_alloc_type_ce_ipv6.is_set || is_set(nbgp_label_alloc_type_ce_ipv6.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_ce_ipv6.get_name_leafdata());
    if (nbgp_label_alloc_type_tbl_ipv4.is_set || is_set(nbgp_label_alloc_type_tbl_ipv4.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_tbl_ipv4.get_name_leafdata());
    if (nbgp_label_alloc_type_tbl_ipv6.is_set || is_set(nbgp_label_alloc_type_tbl_ipv6.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_tbl_ipv6.get_name_leafdata());
    if (nbgp_label_alloc_type_vpn_ipv4.is_set || is_set(nbgp_label_alloc_type_vpn_ipv4.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_vpn_ipv4.get_name_leafdata());
    if (nbgp_label_alloc_type_vpn_ipv6.is_set || is_set(nbgp_label_alloc_type_vpn_ipv6.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_vpn_ipv6.get_name_leafdata());
    if (nbgp_label_alloc_type_asbr_nh.is_set || is_set(nbgp_label_alloc_type_asbr_nh.yfilter)) leaf_name_data.push_back(nbgp_label_alloc_type_asbr_nh.get_name_leafdata());
    if (nbgp_labels.is_set || is_set(nbgp_labels.yfilter)) leaf_name_data.push_back(nbgp_labels.get_name_leafdata());
    if (bgp_label_rpf_lists.is_set || is_set(bgp_label_rpf_lists.yfilter)) leaf_name_data.push_back(bgp_label_rpf_lists.get_name_leafdata());
    if (bgp_label_rpf_nodes.is_set || is_set(bgp_label_rpf_nodes.yfilter)) leaf_name_data.push_back(bgp_label_rpf_nodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbgp-label-alloc-type-gbl-ipv4")
    {
        nbgp_label_alloc_type_gbl_ipv4 = value;
        nbgp_label_alloc_type_gbl_ipv4.value_namespace = name_space;
        nbgp_label_alloc_type_gbl_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-gbl-ipv6")
    {
        nbgp_label_alloc_type_gbl_ipv6 = value;
        nbgp_label_alloc_type_gbl_ipv6.value_namespace = name_space;
        nbgp_label_alloc_type_gbl_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-vrf-ipv4")
    {
        nbgp_label_alloc_type_vrf_ipv4 = value;
        nbgp_label_alloc_type_vrf_ipv4.value_namespace = name_space;
        nbgp_label_alloc_type_vrf_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-vrf-ipv6")
    {
        nbgp_label_alloc_type_vrf_ipv6 = value;
        nbgp_label_alloc_type_vrf_ipv6.value_namespace = name_space;
        nbgp_label_alloc_type_vrf_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-ce-ipv4")
    {
        nbgp_label_alloc_type_ce_ipv4 = value;
        nbgp_label_alloc_type_ce_ipv4.value_namespace = name_space;
        nbgp_label_alloc_type_ce_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-ce-ipv6")
    {
        nbgp_label_alloc_type_ce_ipv6 = value;
        nbgp_label_alloc_type_ce_ipv6.value_namespace = name_space;
        nbgp_label_alloc_type_ce_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-tbl-ipv4")
    {
        nbgp_label_alloc_type_tbl_ipv4 = value;
        nbgp_label_alloc_type_tbl_ipv4.value_namespace = name_space;
        nbgp_label_alloc_type_tbl_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-tbl-ipv6")
    {
        nbgp_label_alloc_type_tbl_ipv6 = value;
        nbgp_label_alloc_type_tbl_ipv6.value_namespace = name_space;
        nbgp_label_alloc_type_tbl_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-vpn-ipv4")
    {
        nbgp_label_alloc_type_vpn_ipv4 = value;
        nbgp_label_alloc_type_vpn_ipv4.value_namespace = name_space;
        nbgp_label_alloc_type_vpn_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-vpn-ipv6")
    {
        nbgp_label_alloc_type_vpn_ipv6 = value;
        nbgp_label_alloc_type_vpn_ipv6.value_namespace = name_space;
        nbgp_label_alloc_type_vpn_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-label-alloc-type-asbr-nh")
    {
        nbgp_label_alloc_type_asbr_nh = value;
        nbgp_label_alloc_type_asbr_nh.value_namespace = name_space;
        nbgp_label_alloc_type_asbr_nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbgp-labels")
    {
        nbgp_labels = value;
        nbgp_labels.value_namespace = name_space;
        nbgp_labels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-label-rpf-lists")
    {
        bgp_label_rpf_lists = value;
        bgp_label_rpf_lists.value_namespace = name_space;
        bgp_label_rpf_lists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-label-rpf-nodes")
    {
        bgp_label_rpf_nodes = value;
        bgp_label_rpf_nodes.value_namespace = name_space;
        bgp_label_rpf_nodes.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbgp-label-alloc-type-gbl-ipv4")
    {
        nbgp_label_alloc_type_gbl_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-gbl-ipv6")
    {
        nbgp_label_alloc_type_gbl_ipv6.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-vrf-ipv4")
    {
        nbgp_label_alloc_type_vrf_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-vrf-ipv6")
    {
        nbgp_label_alloc_type_vrf_ipv6.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-ce-ipv4")
    {
        nbgp_label_alloc_type_ce_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-ce-ipv6")
    {
        nbgp_label_alloc_type_ce_ipv6.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-tbl-ipv4")
    {
        nbgp_label_alloc_type_tbl_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-tbl-ipv6")
    {
        nbgp_label_alloc_type_tbl_ipv6.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-vpn-ipv4")
    {
        nbgp_label_alloc_type_vpn_ipv4.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-vpn-ipv6")
    {
        nbgp_label_alloc_type_vpn_ipv6.yfilter = yfilter;
    }
    if(value_path == "nbgp-label-alloc-type-asbr-nh")
    {
        nbgp_label_alloc_type_asbr_nh.yfilter = yfilter;
    }
    if(value_path == "nbgp-labels")
    {
        nbgp_labels.yfilter = yfilter;
    }
    if(value_path == "bgp-label-rpf-lists")
    {
        bgp_label_rpf_lists.yfilter = yfilter;
    }
    if(value_path == "bgp-label-rpf-nodes")
    {
        bgp_label_rpf_nodes.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::LabelSummary::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbgp-label-alloc-type-gbl-ipv4" || name == "nbgp-label-alloc-type-gbl-ipv6" || name == "nbgp-label-alloc-type-vrf-ipv4" || name == "nbgp-label-alloc-type-vrf-ipv6" || name == "nbgp-label-alloc-type-ce-ipv4" || name == "nbgp-label-alloc-type-ce-ipv6" || name == "nbgp-label-alloc-type-tbl-ipv4" || name == "nbgp-label-alloc-type-tbl-ipv6" || name == "nbgp-label-alloc-type-vpn-ipv4" || name == "nbgp-label-alloc-type-vpn-ipv6" || name == "nbgp-label-alloc-type-asbr-nh" || name == "nbgp-labels" || name == "bgp-label-rpf-lists" || name == "bgp-label-rpf-nodes")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntries()
{

    yang_name = "label-rpf-entries"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::~LabelRpfEntries()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::has_data() const
{
    for (std::size_t index=0; index<label_rpf_entry.size(); index++)
    {
        if(label_rpf_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::has_operation() const
{
    for (std::size_t index=0; index<label_rpf_entry.size(); index++)
    {
        if(label_rpf_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rpf-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-rpf-entry")
    {
        for(auto const & c : label_rpf_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry>();
        c->parent = this;
        label_rpf_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : label_rpf_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-rpf-entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::LabelRpfEntry()
    :
    label{YType::int32, "label"}
    	,
    rpf(std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf>())
{
    rpf->parent = this;

    yang_name = "label-rpf-entry"; yang_parent_name = "label-rpf-entries"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::~LabelRpfEntry()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::has_data() const
{
    return label.is_set
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| (rpf !=  nullptr && rpf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-rpf-entry" <<"[label='" <<label <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        if(rpf == nullptr)
        {
            rpf = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf>();
        }
        return rpf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf != nullptr)
    {
        children["rpf"] = rpf;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf()
    :
    label{YType::uint32, "label"},
    flags{YType::uint32, "flags"},
    install{YType::enumeration, "install"}
{

    yang_name = "rpf"; yang_parent_name = "label-rpf-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::~Rpf()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::has_data() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return label.is_set
	|| flags.is_set
	|| install.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(install.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        for(auto const & c : rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_>();
        c->parent = this;
        rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf" || name == "label" || name == "flags" || name == "install")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::Rpf_()
    :
    ip{YType::str, "ip"},
    ip6{YType::str, "ip6"},
    count{YType::uint32, "count"},
    flags{YType::uint32, "flags"}
{

    yang_name = "rpf"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::~Rpf_()
{
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::has_data() const
{
    return ip.is_set
	|| ip6.is_set
	|| count.is_set
	|| flags.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ip6.yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ip6.is_set || is_set(ip6.yfilter)) leaf_name_data.push_back(ip6.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip6")
    {
        ip6 = value;
        ip6.value_namespace = name_space;
        ip6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ip6")
    {
        ip6.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::LabelRpfEntries::LabelRpfEntry::Rpf::Rpf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ip6" || name == "count" || name == "flags")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateGenerationProcess()
    :
    update_out_logging{YType::boolean, "update-out-logging"},
    current_update_limit_process{YType::uint32, "current-update-limit-process"},
    configured_update_limit_process{YType::uint32, "configured-update-limit-process"},
    update_out_queue_messages{YType::uint32, "update-out-queue-messages"},
    update_out_queue_size{YType::uint32, "update-out-queue-size"},
    update_throttled{YType::boolean, "update-throttled"}
    	,
    update_statistics(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics>())
{
    update_statistics->parent = this;

    yang_name = "update-generation-process"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::~UpdateGenerationProcess()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::has_data() const
{
    for (std::size_t index=0; index<update_address_family.size(); index++)
    {
        if(update_address_family[index]->has_data())
            return true;
    }
    return update_out_logging.is_set
	|| current_update_limit_process.is_set
	|| configured_update_limit_process.is_set
	|| update_out_queue_messages.is_set
	|| update_out_queue_size.is_set
	|| update_throttled.is_set
	|| (update_statistics !=  nullptr && update_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::has_operation() const
{
    for (std::size_t index=0; index<update_address_family.size(); index++)
    {
        if(update_address_family[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_out_logging.yfilter)
	|| ydk::is_set(current_update_limit_process.yfilter)
	|| ydk::is_set(configured_update_limit_process.yfilter)
	|| ydk::is_set(update_out_queue_messages.yfilter)
	|| ydk::is_set(update_out_queue_size.yfilter)
	|| ydk::is_set(update_throttled.yfilter)
	|| (update_statistics !=  nullptr && update_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-generation-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_out_logging.is_set || is_set(update_out_logging.yfilter)) leaf_name_data.push_back(update_out_logging.get_name_leafdata());
    if (current_update_limit_process.is_set || is_set(current_update_limit_process.yfilter)) leaf_name_data.push_back(current_update_limit_process.get_name_leafdata());
    if (configured_update_limit_process.is_set || is_set(configured_update_limit_process.yfilter)) leaf_name_data.push_back(configured_update_limit_process.get_name_leafdata());
    if (update_out_queue_messages.is_set || is_set(update_out_queue_messages.yfilter)) leaf_name_data.push_back(update_out_queue_messages.get_name_leafdata());
    if (update_out_queue_size.is_set || is_set(update_out_queue_size.yfilter)) leaf_name_data.push_back(update_out_queue_size.get_name_leafdata());
    if (update_throttled.is_set || is_set(update_throttled.yfilter)) leaf_name_data.push_back(update_throttled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-statistics")
    {
        if(update_statistics == nullptr)
        {
            update_statistics = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics>();
        }
        return update_statistics;
    }

    if(child_yang_name == "update-address-family")
    {
        for(auto const & c : update_address_family)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily>();
        c->parent = this;
        update_address_family.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_statistics != nullptr)
    {
        children["update-statistics"] = update_statistics;
    }

    for (auto const & c : update_address_family)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-out-logging")
    {
        update_out_logging = value;
        update_out_logging.value_namespace = name_space;
        update_out_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-update-limit-process")
    {
        current_update_limit_process = value;
        current_update_limit_process.value_namespace = name_space;
        current_update_limit_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-update-limit-process")
    {
        configured_update_limit_process = value;
        configured_update_limit_process.value_namespace = name_space;
        configured_update_limit_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages = value;
        update_out_queue_messages.value_namespace = name_space;
        update_out_queue_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size = value;
        update_out_queue_size.value_namespace = name_space;
        update_out_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttled")
    {
        update_throttled = value;
        update_throttled.value_namespace = name_space;
        update_throttled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-out-logging")
    {
        update_out_logging.yfilter = yfilter;
    }
    if(value_path == "current-update-limit-process")
    {
        current_update_limit_process.yfilter = yfilter;
    }
    if(value_path == "configured-update-limit-process")
    {
        configured_update_limit_process.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size.yfilter = yfilter;
    }
    if(value_path == "update-throttled")
    {
        update_throttled.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-statistics" || name == "update-address-family" || name == "update-out-logging" || name == "current-update-limit-process" || name == "configured-update-limit-process" || name == "update-out-queue-messages" || name == "update-out-queue-size" || name == "update-throttled")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::UpdateStatistics()
    :
    update_out_queue_messages_high{YType::uint32, "update-out-queue-messages-high"},
    update_out_queue_messages_cumulative{YType::uint32, "update-out-queue-messages-cumulative"},
    update_out_queue_messages_discarded{YType::uint32, "update-out-queue-messages-discarded"},
    update_out_queue_messages_cleared{YType::uint32, "update-out-queue-messages-cleared"},
    update_out_queue_size_high{YType::uint32, "update-out-queue-size-high"},
    update_out_queue_size_cumulative{YType::uint64, "update-out-queue-size-cumulative"},
    update_out_queue_size_discarded{YType::uint64, "update-out-queue-size-discarded"},
    update_out_queue_size_cleared{YType::uint64, "update-out-queue-size-cleared"},
    last_update_discard_age{YType::uint32, "last-update-discard-age"},
    last_update_cleard_age{YType::uint32, "last-update-cleard-age"},
    update_throttle_count{YType::uint32, "update-throttle-count"},
    last_update_throttle_age{YType::uint32, "last-update-throttle-age"},
    update_recovery_count{YType::uint32, "update-recovery-count"},
    last_update_recovery_age{YType::uint32, "last-update-recovery-age"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"}
    	,
    last_update_discard_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp>())
	,last_update_cleared_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp>())
	,last_update_throttle_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp>())
	,last_update_recovery_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>())
{
    last_update_discard_timestamp->parent = this;
    last_update_cleared_timestamp->parent = this;
    last_update_throttle_timestamp->parent = this;
    last_update_recovery_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;

    yang_name = "update-statistics"; yang_parent_name = "update-generation-process"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::~UpdateStatistics()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::has_data() const
{
    return update_out_queue_messages_high.is_set
	|| update_out_queue_messages_cumulative.is_set
	|| update_out_queue_messages_discarded.is_set
	|| update_out_queue_messages_cleared.is_set
	|| update_out_queue_size_high.is_set
	|| update_out_queue_size_cumulative.is_set
	|| update_out_queue_size_discarded.is_set
	|| update_out_queue_size_cleared.is_set
	|| last_update_discard_age.is_set
	|| last_update_cleard_age.is_set
	|| update_throttle_count.is_set
	|| last_update_throttle_age.is_set
	|| update_recovery_count.is_set
	|| last_update_recovery_age.is_set
	|| update_memory_allocation_fail_count.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_data())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_data())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_data())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_out_queue_messages_high.yfilter)
	|| ydk::is_set(update_out_queue_messages_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_messages_discarded.yfilter)
	|| ydk::is_set(update_out_queue_messages_cleared.yfilter)
	|| ydk::is_set(update_out_queue_size_high.yfilter)
	|| ydk::is_set(update_out_queue_size_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_size_discarded.yfilter)
	|| ydk::is_set(update_out_queue_size_cleared.yfilter)
	|| ydk::is_set(last_update_discard_age.yfilter)
	|| ydk::is_set(last_update_cleard_age.yfilter)
	|| ydk::is_set(update_throttle_count.yfilter)
	|| ydk::is_set(last_update_throttle_age.yfilter)
	|| ydk::is_set(update_recovery_count.yfilter)
	|| ydk::is_set(last_update_recovery_age.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_operation())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_operation())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_operation())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_out_queue_messages_high.is_set || is_set(update_out_queue_messages_high.yfilter)) leaf_name_data.push_back(update_out_queue_messages_high.get_name_leafdata());
    if (update_out_queue_messages_cumulative.is_set || is_set(update_out_queue_messages_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cumulative.get_name_leafdata());
    if (update_out_queue_messages_discarded.is_set || is_set(update_out_queue_messages_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_messages_discarded.get_name_leafdata());
    if (update_out_queue_messages_cleared.is_set || is_set(update_out_queue_messages_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cleared.get_name_leafdata());
    if (update_out_queue_size_high.is_set || is_set(update_out_queue_size_high.yfilter)) leaf_name_data.push_back(update_out_queue_size_high.get_name_leafdata());
    if (update_out_queue_size_cumulative.is_set || is_set(update_out_queue_size_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_size_cumulative.get_name_leafdata());
    if (update_out_queue_size_discarded.is_set || is_set(update_out_queue_size_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_size_discarded.get_name_leafdata());
    if (update_out_queue_size_cleared.is_set || is_set(update_out_queue_size_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_size_cleared.get_name_leafdata());
    if (last_update_discard_age.is_set || is_set(last_update_discard_age.yfilter)) leaf_name_data.push_back(last_update_discard_age.get_name_leafdata());
    if (last_update_cleard_age.is_set || is_set(last_update_cleard_age.yfilter)) leaf_name_data.push_back(last_update_cleard_age.get_name_leafdata());
    if (update_throttle_count.is_set || is_set(update_throttle_count.yfilter)) leaf_name_data.push_back(update_throttle_count.get_name_leafdata());
    if (last_update_throttle_age.is_set || is_set(last_update_throttle_age.yfilter)) leaf_name_data.push_back(last_update_throttle_age.get_name_leafdata());
    if (update_recovery_count.is_set || is_set(update_recovery_count.yfilter)) leaf_name_data.push_back(update_recovery_count.get_name_leafdata());
    if (last_update_recovery_age.is_set || is_set(last_update_recovery_age.yfilter)) leaf_name_data.push_back(last_update_recovery_age.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-discard-timestamp")
    {
        if(last_update_discard_timestamp == nullptr)
        {
            last_update_discard_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp>();
        }
        return last_update_discard_timestamp;
    }

    if(child_yang_name == "last-update-cleared-timestamp")
    {
        if(last_update_cleared_timestamp == nullptr)
        {
            last_update_cleared_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp>();
        }
        return last_update_cleared_timestamp;
    }

    if(child_yang_name == "last-update-throttle-timestamp")
    {
        if(last_update_throttle_timestamp == nullptr)
        {
            last_update_throttle_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp>();
        }
        return last_update_throttle_timestamp;
    }

    if(child_yang_name == "last-update-recovery-timestamp")
    {
        if(last_update_recovery_timestamp == nullptr)
        {
            last_update_recovery_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp>();
        }
        return last_update_recovery_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_discard_timestamp != nullptr)
    {
        children["last-update-discard-timestamp"] = last_update_discard_timestamp;
    }

    if(last_update_cleared_timestamp != nullptr)
    {
        children["last-update-cleared-timestamp"] = last_update_cleared_timestamp;
    }

    if(last_update_throttle_timestamp != nullptr)
    {
        children["last-update-throttle-timestamp"] = last_update_throttle_timestamp;
    }

    if(last_update_recovery_timestamp != nullptr)
    {
        children["last-update-recovery-timestamp"] = last_update_recovery_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high = value;
        update_out_queue_messages_high.value_namespace = name_space;
        update_out_queue_messages_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative = value;
        update_out_queue_messages_cumulative.value_namespace = name_space;
        update_out_queue_messages_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded = value;
        update_out_queue_messages_discarded.value_namespace = name_space;
        update_out_queue_messages_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared = value;
        update_out_queue_messages_cleared.value_namespace = name_space;
        update_out_queue_messages_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high = value;
        update_out_queue_size_high.value_namespace = name_space;
        update_out_queue_size_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative = value;
        update_out_queue_size_cumulative.value_namespace = name_space;
        update_out_queue_size_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded = value;
        update_out_queue_size_discarded.value_namespace = name_space;
        update_out_queue_size_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared = value;
        update_out_queue_size_cleared.value_namespace = name_space;
        update_out_queue_size_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age = value;
        last_update_discard_age.value_namespace = name_space;
        last_update_discard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age = value;
        last_update_cleard_age.value_namespace = name_space;
        last_update_cleard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count = value;
        update_throttle_count.value_namespace = name_space;
        update_throttle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age = value;
        last_update_throttle_age.value_namespace = name_space;
        last_update_throttle_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count = value;
        update_recovery_count.value_namespace = name_space;
        update_recovery_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age = value;
        last_update_recovery_age.value_namespace = name_space;
        last_update_recovery_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
        update_memory_allocation_fail_count.value_namespace = name_space;
        update_memory_allocation_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
        last_update_memory_allocation_fail_age.value_namespace = name_space;
        last_update_memory_allocation_fail_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared.yfilter = yfilter;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age.yfilter = yfilter;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age.yfilter = yfilter;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count.yfilter = yfilter;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age.yfilter = yfilter;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count.yfilter = yfilter;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-discard-timestamp" || name == "last-update-cleared-timestamp" || name == "last-update-throttle-timestamp" || name == "last-update-recovery-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "update-out-queue-messages-high" || name == "update-out-queue-messages-cumulative" || name == "update-out-queue-messages-discarded" || name == "update-out-queue-messages-cleared" || name == "update-out-queue-size-high" || name == "update-out-queue-size-cumulative" || name == "update-out-queue-size-discarded" || name == "update-out-queue-size-cleared" || name == "last-update-discard-age" || name == "last-update-cleard-age" || name == "update-throttle-count" || name == "last-update-throttle-age" || name == "update-recovery-count" || name == "last-update-recovery-age" || name == "update-memory-allocation-fail-count" || name == "last-update-memory-allocation-fail-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::LastUpdateDiscardTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-discard-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::~LastUpdateDiscardTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-discard-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::LastUpdateClearedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-cleared-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::~LastUpdateClearedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-cleared-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::LastUpdateThrottleTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-throttle-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::~LastUpdateThrottleTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-throttle-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::LastUpdateRecoveryTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-recovery-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::~LastUpdateRecoveryTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recovery-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::UpdateAddressFamily()
    :
    update_group_af_name{YType::enumeration, "update-group-af-name"},
    current_update_limit_af{YType::uint32, "current-update-limit-af"},
    update_out_queue_messages{YType::uint32, "update-out-queue-messages"},
    update_out_queue_size{YType::uint32, "update-out-queue-size"},
    update_throttled{YType::boolean, "update-throttled"},
    update_update_group_count{YType::uint32, "update-update-group-count"},
    update_sub_group_count{YType::uint32, "update-sub-group-count"},
    sub_group_throttled_count{YType::uint32, "sub-group-throttled-count"},
    refresh_sub_group_count{YType::uint32, "refresh-sub-group-count"},
    refresh_sub_group_throttled_count{YType::uint32, "refresh-sub-group-throttled-count"},
    filter_group_count{YType::uint32, "filter-group-count"},
    neighbor_count{YType::uint32, "neighbor-count"}
{

    yang_name = "update-address-family"; yang_parent_name = "update-generation-process"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::~UpdateAddressFamily()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::has_data() const
{
    return update_group_af_name.is_set
	|| current_update_limit_af.is_set
	|| update_out_queue_messages.is_set
	|| update_out_queue_size.is_set
	|| update_throttled.is_set
	|| update_update_group_count.is_set
	|| update_sub_group_count.is_set
	|| sub_group_throttled_count.is_set
	|| refresh_sub_group_count.is_set
	|| refresh_sub_group_throttled_count.is_set
	|| filter_group_count.is_set
	|| neighbor_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_group_af_name.yfilter)
	|| ydk::is_set(current_update_limit_af.yfilter)
	|| ydk::is_set(update_out_queue_messages.yfilter)
	|| ydk::is_set(update_out_queue_size.yfilter)
	|| ydk::is_set(update_throttled.yfilter)
	|| ydk::is_set(update_update_group_count.yfilter)
	|| ydk::is_set(update_sub_group_count.yfilter)
	|| ydk::is_set(sub_group_throttled_count.yfilter)
	|| ydk::is_set(refresh_sub_group_count.yfilter)
	|| ydk::is_set(refresh_sub_group_throttled_count.yfilter)
	|| ydk::is_set(filter_group_count.yfilter)
	|| ydk::is_set(neighbor_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group_af_name.is_set || is_set(update_group_af_name.yfilter)) leaf_name_data.push_back(update_group_af_name.get_name_leafdata());
    if (current_update_limit_af.is_set || is_set(current_update_limit_af.yfilter)) leaf_name_data.push_back(current_update_limit_af.get_name_leafdata());
    if (update_out_queue_messages.is_set || is_set(update_out_queue_messages.yfilter)) leaf_name_data.push_back(update_out_queue_messages.get_name_leafdata());
    if (update_out_queue_size.is_set || is_set(update_out_queue_size.yfilter)) leaf_name_data.push_back(update_out_queue_size.get_name_leafdata());
    if (update_throttled.is_set || is_set(update_throttled.yfilter)) leaf_name_data.push_back(update_throttled.get_name_leafdata());
    if (update_update_group_count.is_set || is_set(update_update_group_count.yfilter)) leaf_name_data.push_back(update_update_group_count.get_name_leafdata());
    if (update_sub_group_count.is_set || is_set(update_sub_group_count.yfilter)) leaf_name_data.push_back(update_sub_group_count.get_name_leafdata());
    if (sub_group_throttled_count.is_set || is_set(sub_group_throttled_count.yfilter)) leaf_name_data.push_back(sub_group_throttled_count.get_name_leafdata());
    if (refresh_sub_group_count.is_set || is_set(refresh_sub_group_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_count.get_name_leafdata());
    if (refresh_sub_group_throttled_count.is_set || is_set(refresh_sub_group_throttled_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_throttled_count.get_name_leafdata());
    if (filter_group_count.is_set || is_set(filter_group_count.yfilter)) leaf_name_data.push_back(filter_group_count.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group-af-name")
    {
        update_group_af_name = value;
        update_group_af_name.value_namespace = name_space;
        update_group_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-update-limit-af")
    {
        current_update_limit_af = value;
        current_update_limit_af.value_namespace = name_space;
        current_update_limit_af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages = value;
        update_out_queue_messages.value_namespace = name_space;
        update_out_queue_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size = value;
        update_out_queue_size.value_namespace = name_space;
        update_out_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttled")
    {
        update_throttled = value;
        update_throttled.value_namespace = name_space;
        update_throttled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-update-group-count")
    {
        update_update_group_count = value;
        update_update_group_count.value_namespace = name_space;
        update_update_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-sub-group-count")
    {
        update_sub_group_count = value;
        update_sub_group_count.value_namespace = name_space;
        update_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-throttled-count")
    {
        sub_group_throttled_count = value;
        sub_group_throttled_count.value_namespace = name_space;
        sub_group_throttled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count = value;
        refresh_sub_group_count.value_namespace = name_space;
        refresh_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-throttled-count")
    {
        refresh_sub_group_throttled_count = value;
        refresh_sub_group_throttled_count.value_namespace = name_space;
        refresh_sub_group_throttled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count = value;
        filter_group_count.value_namespace = name_space;
        filter_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group-af-name")
    {
        update_group_af_name.yfilter = yfilter;
    }
    if(value_path == "current-update-limit-af")
    {
        current_update_limit_af.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size.yfilter = yfilter;
    }
    if(value_path == "update-throttled")
    {
        update_throttled.yfilter = yfilter;
    }
    if(value_path == "update-update-group-count")
    {
        update_update_group_count.yfilter = yfilter;
    }
    if(value_path == "update-sub-group-count")
    {
        update_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "sub-group-throttled-count")
    {
        sub_group_throttled_count.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-throttled-count")
    {
        refresh_sub_group_throttled_count.yfilter = yfilter;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateGenerationProcess::UpdateAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-group-af-name" || name == "current-update-limit-af" || name == "update-out-queue-messages" || name == "update-out-queue-size" || name == "update-throttled" || name == "update-update-group-count" || name == "update-sub-group-count" || name == "sub-group-throttled-count" || name == "refresh-sub-group-count" || name == "refresh-sub-group-throttled-count" || name == "filter-group-count" || name == "neighbor-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAfs()
{

    yang_name = "rpki-refresh-afs"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::~RpkiRefreshAfs()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::has_data() const
{
    for (std::size_t index=0; index<rpki_refresh_af.size(); index++)
    {
        if(rpki_refresh_af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::has_operation() const
{
    for (std::size_t index=0; index<rpki_refresh_af.size(); index++)
    {
        if(rpki_refresh_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-refresh-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-refresh-af")
    {
        for(auto const & c : rpki_refresh_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf>();
        c->parent = this;
        rpki_refresh_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpki_refresh_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-refresh-af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RpkiRefreshAf()
    :
    af_name{YType::enumeration, "af-name"}
{

    yang_name = "rpki-refresh-af"; yang_parent_name = "rpki-refresh-afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::~RpkiRefreshAf()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::has_data() const
{
    for (std::size_t index=0; index<refresh_entry.size(); index++)
    {
        if(refresh_entry[index]->has_data())
            return true;
    }
    return af_name.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::has_operation() const
{
    for (std::size_t index=0; index<refresh_entry.size(); index++)
    {
        if(refresh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-refresh-af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh-entry")
    {
        for(auto const & c : refresh_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry>();
        c->parent = this;
        refresh_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : refresh_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-entry" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::RefreshEntry()
    :
    af_name{YType::enumeration, "af-name"},
    neighbor{YType::str, "neighbor"},
    policy{YType::str, "policy"},
    paths{YType::uint32, "paths"},
    drop{YType::boolean, "drop"}
{

    yang_name = "refresh-entry"; yang_parent_name = "rpki-refresh-af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::~RefreshEntry()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::has_data() const
{
    return af_name.is_set
	|| neighbor.is_set
	|| policy.is_set
	|| paths.is_set
	|| drop.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(paths.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRefreshAfs::RpkiRefreshAf::RefreshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "neighbor" || name == "policy" || name == "paths" || name == "drop")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::~Vrfs()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    update_inbound_error_vrf(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf>())
	,afs(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs>())
	,information(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Information>())
	,update_inbound_filter_vrf(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf>())
	,postits(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Postits>())
	,global_process_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::GlobalProcessInfo>())
	,update_inbound_error_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors>())
	,update_inbound_filter_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors>())
	,bmp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp>())
	,process_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo>())
	,sessions(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions>())
	,neighbors(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors>())
	,next_hop_vrf(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NextHopVrf>())
	,neighbor_ranges(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NeighborRanges>())
	,message_logs(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::MessageLogs>())
{
    update_inbound_error_vrf->parent = this;
    afs->parent = this;
    information->parent = this;
    update_inbound_filter_vrf->parent = this;
    postits->parent = this;
    global_process_info->parent = this;
    update_inbound_error_neighbors->parent = this;
    update_inbound_filter_neighbors->parent = this;
    bmp->parent = this;
    process_info->parent = this;
    sessions->parent = this;
    neighbors->parent = this;
    next_hop_vrf->parent = this;
    neighbor_ranges->parent = this;
    message_logs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_data())
	|| (postits !=  nullptr && postits->has_data())
	|| (global_process_info !=  nullptr && global_process_info->has_data())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_data())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_data())
	|| (bmp !=  nullptr && bmp->has_data())
	|| (process_info !=  nullptr && process_info->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_data())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_data())
	|| (message_logs !=  nullptr && message_logs->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_operation())
	|| (postits !=  nullptr && postits->has_operation())
	|| (global_process_info !=  nullptr && global_process_info->has_operation())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_operation())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_operation())
	|| (bmp !=  nullptr && bmp->has_operation())
	|| (process_info !=  nullptr && process_info->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_operation())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_operation())
	|| (message_logs !=  nullptr && message_logs->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-error-vrf")
    {
        if(update_inbound_error_vrf == nullptr)
        {
            update_inbound_error_vrf = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf>();
        }
        return update_inbound_error_vrf;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Information>();
        }
        return information;
    }

    if(child_yang_name == "update-inbound-filter-vrf")
    {
        if(update_inbound_filter_vrf == nullptr)
        {
            update_inbound_filter_vrf = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterVrf>();
        }
        return update_inbound_filter_vrf;
    }

    if(child_yang_name == "postits")
    {
        if(postits == nullptr)
        {
            postits = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Postits>();
        }
        return postits;
    }

    if(child_yang_name == "global-process-info")
    {
        if(global_process_info == nullptr)
        {
            global_process_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::GlobalProcessInfo>();
        }
        return global_process_info;
    }

    if(child_yang_name == "update-inbound-error-neighbors")
    {
        if(update_inbound_error_neighbors == nullptr)
        {
            update_inbound_error_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorNeighbors>();
        }
        return update_inbound_error_neighbors;
    }

    if(child_yang_name == "update-inbound-filter-neighbors")
    {
        if(update_inbound_filter_neighbors == nullptr)
        {
            update_inbound_filter_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundFilterNeighbors>();
        }
        return update_inbound_filter_neighbors;
    }

    if(child_yang_name == "bmp")
    {
        if(bmp == nullptr)
        {
            bmp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Bmp>();
        }
        return bmp;
    }

    if(child_yang_name == "process-info")
    {
        if(process_info == nullptr)
        {
            process_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::ProcessInfo>();
        }
        return process_info;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "next-hop-vrf")
    {
        if(next_hop_vrf == nullptr)
        {
            next_hop_vrf = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NextHopVrf>();
        }
        return next_hop_vrf;
    }

    if(child_yang_name == "neighbor-ranges")
    {
        if(neighbor_ranges == nullptr)
        {
            neighbor_ranges = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::NeighborRanges>();
        }
        return neighbor_ranges;
    }

    if(child_yang_name == "message-logs")
    {
        if(message_logs == nullptr)
        {
            message_logs = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::MessageLogs>();
        }
        return message_logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(update_inbound_error_vrf != nullptr)
    {
        children["update-inbound-error-vrf"] = update_inbound_error_vrf;
    }

    if(afs != nullptr)
    {
        children["afs"] = afs;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(update_inbound_filter_vrf != nullptr)
    {
        children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;
    }

    if(postits != nullptr)
    {
        children["postits"] = postits;
    }

    if(global_process_info != nullptr)
    {
        children["global-process-info"] = global_process_info;
    }

    if(update_inbound_error_neighbors != nullptr)
    {
        children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;
    }

    if(update_inbound_filter_neighbors != nullptr)
    {
        children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;
    }

    if(bmp != nullptr)
    {
        children["bmp"] = bmp;
    }

    if(process_info != nullptr)
    {
        children["process-info"] = process_info;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(next_hop_vrf != nullptr)
    {
        children["next-hop-vrf"] = next_hop_vrf;
    }

    if(neighbor_ranges != nullptr)
    {
        children["neighbor-ranges"] = neighbor_ranges;
    }

    if(message_logs != nullptr)
    {
        children["message-logs"] = message_logs;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-error-vrf" || name == "afs" || name == "information" || name == "update-inbound-filter-vrf" || name == "postits" || name == "global-process-info" || name == "update-inbound-error-neighbors" || name == "update-inbound-filter-neighbors" || name == "bmp" || name == "process-info" || name == "sessions" || name == "neighbors" || name == "next-hop-vrf" || name == "neighbor-ranges" || name == "message-logs" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::UpdateInboundErrorVrf()
    :
    update_vrf_name{YType::str, "update-vrf-name"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"}
    	,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::~UpdateInboundErrorVrf()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::has_data() const
{
    return update_vrf_name.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| last_update_malformed_age.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_update_malformed_timestamp != nullptr)
    {
        children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
        update_malformed_neighbor_count.value_namespace = name_space;
        update_malformed_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "update-vrf-name" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count" || name == "last-update-malformed-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Afs()
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::~Afs()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af>();
        c->parent = this;
        af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    network_lookup_all_rds(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds>())
	,policies(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies>())
	,convergence(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Convergence>())
	,af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AfProcessInfo>())
	,path_used_table(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathUsedTable>())
	,bmp_path_table_generic(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric>())
	,rpc_sets(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RpcSets>())
	,global_af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::GlobalAfProcessInfo>())
	,network_prefixes(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkPrefixes>())
	,advertised_path_xr(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathXr>())
	,sourced_networks(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::SourcedNetworks>())
	,update_groups(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGroups>())
	,update_generation_sub_groups(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups>())
	,next_hop_address_families(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies>())
	,rt_set_counters(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters>())
	,bmp_paths(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths>())
	,update_generation_update_groups(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups>())
	,update_generation_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups>())
	,networks(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks>())
	,path_table(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathTable>())
	,epes(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Epes>())
	,advertised_path_counts(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathCounts>())
	,path_labeled_table(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathLabeledTable>())
	,advertised_paths(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths>())
	,neighbor_af_table(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable>())
	,network_all_rds(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds>())
	,update_generation_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors>())
	,update_generation_address_family(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily>())
	,dampenings(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Dampenings>())
	,prefix_filters(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PrefixFilters>())
	,attributes(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Attributes>())
{
    network_lookup_all_rds->parent = this;
    policies->parent = this;
    convergence->parent = this;
    af_process_info->parent = this;
    path_used_table->parent = this;
    bmp_path_table_generic->parent = this;
    rpc_sets->parent = this;
    global_af_process_info->parent = this;
    network_prefixes->parent = this;
    advertised_path_xr->parent = this;
    sourced_networks->parent = this;
    update_groups->parent = this;
    update_generation_sub_groups->parent = this;
    next_hop_address_families->parent = this;
    rt_set_counters->parent = this;
    bmp_paths->parent = this;
    update_generation_update_groups->parent = this;
    update_generation_filter_groups->parent = this;
    networks->parent = this;
    path_table->parent = this;
    epes->parent = this;
    advertised_path_counts->parent = this;
    path_labeled_table->parent = this;
    advertised_paths->parent = this;
    neighbor_af_table->parent = this;
    network_all_rds->parent = this;
    update_generation_neighbors->parent = this;
    update_generation_address_family->parent = this;
    dampenings->parent = this;
    prefix_filters->parent = this;
    attributes->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (network_lookup_all_rds !=  nullptr && network_lookup_all_rds->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (af_process_info !=  nullptr && af_process_info->has_data())
	|| (path_used_table !=  nullptr && path_used_table->has_data())
	|| (bmp_path_table_generic !=  nullptr && bmp_path_table_generic->has_data())
	|| (rpc_sets !=  nullptr && rpc_sets->has_data())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_data())
	|| (network_prefixes !=  nullptr && network_prefixes->has_data())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (update_groups !=  nullptr && update_groups->has_data())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_data())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_data())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_data())
	|| (bmp_paths !=  nullptr && bmp_paths->has_data())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_data())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (path_table !=  nullptr && path_table->has_data())
	|| (epes !=  nullptr && epes->has_data())
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_data())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_data())
	|| (advertised_paths !=  nullptr && advertised_paths->has_data())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_data())
	|| (network_all_rds !=  nullptr && network_all_rds->has_data())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_data())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_data())
	|| (dampenings !=  nullptr && dampenings->has_data())
	|| (prefix_filters !=  nullptr && prefix_filters->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (network_lookup_all_rds !=  nullptr && network_lookup_all_rds->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (af_process_info !=  nullptr && af_process_info->has_operation())
	|| (path_used_table !=  nullptr && path_used_table->has_operation())
	|| (bmp_path_table_generic !=  nullptr && bmp_path_table_generic->has_operation())
	|| (rpc_sets !=  nullptr && rpc_sets->has_operation())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_operation())
	|| (network_prefixes !=  nullptr && network_prefixes->has_operation())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (update_groups !=  nullptr && update_groups->has_operation())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_operation())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_operation())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_operation())
	|| (bmp_paths !=  nullptr && bmp_paths->has_operation())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_operation())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (path_table !=  nullptr && path_table->has_operation())
	|| (epes !=  nullptr && epes->has_operation())
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_operation())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_operation())
	|| (advertised_paths !=  nullptr && advertised_paths->has_operation())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_operation())
	|| (network_all_rds !=  nullptr && network_all_rds->has_operation())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_operation())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_operation())
	|| (dampenings !=  nullptr && dampenings->has_operation())
	|| (prefix_filters !=  nullptr && prefix_filters->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-lookup-all-rds")
    {
        if(network_lookup_all_rds == nullptr)
        {
            network_lookup_all_rds = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds>();
        }
        return network_lookup_all_rds;
    }

    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Policies>();
        }
        return policies;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "af-process-info")
    {
        if(af_process_info == nullptr)
        {
            af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AfProcessInfo>();
        }
        return af_process_info;
    }

    if(child_yang_name == "path-used-table")
    {
        if(path_used_table == nullptr)
        {
            path_used_table = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathUsedTable>();
        }
        return path_used_table;
    }

    if(child_yang_name == "bmp-path-table-generic")
    {
        if(bmp_path_table_generic == nullptr)
        {
            bmp_path_table_generic = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric>();
        }
        return bmp_path_table_generic;
    }

    if(child_yang_name == "rpc-sets")
    {
        if(rpc_sets == nullptr)
        {
            rpc_sets = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RpcSets>();
        }
        return rpc_sets;
    }

    if(child_yang_name == "global-af-process-info")
    {
        if(global_af_process_info == nullptr)
        {
            global_af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::GlobalAfProcessInfo>();
        }
        return global_af_process_info;
    }

    if(child_yang_name == "network-prefixes")
    {
        if(network_prefixes == nullptr)
        {
            network_prefixes = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkPrefixes>();
        }
        return network_prefixes;
    }

    if(child_yang_name == "advertised-path-xr")
    {
        if(advertised_path_xr == nullptr)
        {
            advertised_path_xr = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathXr>();
        }
        return advertised_path_xr;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "update-groups")
    {
        if(update_groups == nullptr)
        {
            update_groups = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGroups>();
        }
        return update_groups;
    }

    if(child_yang_name == "update-generation-sub-groups")
    {
        if(update_generation_sub_groups == nullptr)
        {
            update_generation_sub_groups = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups>();
        }
        return update_generation_sub_groups;
    }

    if(child_yang_name == "next-hop-address-families")
    {
        if(next_hop_address_families == nullptr)
        {
            next_hop_address_families = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies>();
        }
        return next_hop_address_families;
    }

    if(child_yang_name == "rt-set-counters")
    {
        if(rt_set_counters == nullptr)
        {
            rt_set_counters = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::RtSetCounters>();
        }
        return rt_set_counters;
    }

    if(child_yang_name == "bmp-paths")
    {
        if(bmp_paths == nullptr)
        {
            bmp_paths = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::BmpPaths>();
        }
        return bmp_paths;
    }

    if(child_yang_name == "update-generation-update-groups")
    {
        if(update_generation_update_groups == nullptr)
        {
            update_generation_update_groups = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups>();
        }
        return update_generation_update_groups;
    }

    if(child_yang_name == "update-generation-filter-groups")
    {
        if(update_generation_filter_groups == nullptr)
        {
            update_generation_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups>();
        }
        return update_generation_filter_groups;
    }

    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "path-table")
    {
        if(path_table == nullptr)
        {
            path_table = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathTable>();
        }
        return path_table;
    }

    if(child_yang_name == "epes")
    {
        if(epes == nullptr)
        {
            epes = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Epes>();
        }
        return epes;
    }

    if(child_yang_name == "advertised-path-counts")
    {
        if(advertised_path_counts == nullptr)
        {
            advertised_path_counts = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPathCounts>();
        }
        return advertised_path_counts;
    }

    if(child_yang_name == "path-labeled-table")
    {
        if(path_labeled_table == nullptr)
        {
            path_labeled_table = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PathLabeledTable>();
        }
        return path_labeled_table;
    }

    if(child_yang_name == "advertised-paths")
    {
        if(advertised_paths == nullptr)
        {
            advertised_paths = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::AdvertisedPaths>();
        }
        return advertised_paths;
    }

    if(child_yang_name == "neighbor-af-table")
    {
        if(neighbor_af_table == nullptr)
        {
            neighbor_af_table = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NeighborAfTable>();
        }
        return neighbor_af_table;
    }

    if(child_yang_name == "network-all-rds")
    {
        if(network_all_rds == nullptr)
        {
            network_all_rds = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkAllRds>();
        }
        return network_all_rds;
    }

    if(child_yang_name == "update-generation-neighbors")
    {
        if(update_generation_neighbors == nullptr)
        {
            update_generation_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors>();
        }
        return update_generation_neighbors;
    }

    if(child_yang_name == "update-generation-address-family")
    {
        if(update_generation_address_family == nullptr)
        {
            update_generation_address_family = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily>();
        }
        return update_generation_address_family;
    }

    if(child_yang_name == "dampenings")
    {
        if(dampenings == nullptr)
        {
            dampenings = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Dampenings>();
        }
        return dampenings;
    }

    if(child_yang_name == "prefix-filters")
    {
        if(prefix_filters == nullptr)
        {
            prefix_filters = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::PrefixFilters>();
        }
        return prefix_filters;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_lookup_all_rds != nullptr)
    {
        children["network-lookup-all-rds"] = network_lookup_all_rds;
    }

    if(policies != nullptr)
    {
        children["policies"] = policies;
    }

    if(convergence != nullptr)
    {
        children["convergence"] = convergence;
    }

    if(af_process_info != nullptr)
    {
        children["af-process-info"] = af_process_info;
    }

    if(path_used_table != nullptr)
    {
        children["path-used-table"] = path_used_table;
    }

    if(bmp_path_table_generic != nullptr)
    {
        children["bmp-path-table-generic"] = bmp_path_table_generic;
    }

    if(rpc_sets != nullptr)
    {
        children["rpc-sets"] = rpc_sets;
    }

    if(global_af_process_info != nullptr)
    {
        children["global-af-process-info"] = global_af_process_info;
    }

    if(network_prefixes != nullptr)
    {
        children["network-prefixes"] = network_prefixes;
    }

    if(advertised_path_xr != nullptr)
    {
        children["advertised-path-xr"] = advertised_path_xr;
    }

    if(sourced_networks != nullptr)
    {
        children["sourced-networks"] = sourced_networks;
    }

    if(update_groups != nullptr)
    {
        children["update-groups"] = update_groups;
    }

    if(update_generation_sub_groups != nullptr)
    {
        children["update-generation-sub-groups"] = update_generation_sub_groups;
    }

    if(next_hop_address_families != nullptr)
    {
        children["next-hop-address-families"] = next_hop_address_families;
    }

    if(rt_set_counters != nullptr)
    {
        children["rt-set-counters"] = rt_set_counters;
    }

    if(bmp_paths != nullptr)
    {
        children["bmp-paths"] = bmp_paths;
    }

    if(update_generation_update_groups != nullptr)
    {
        children["update-generation-update-groups"] = update_generation_update_groups;
    }

    if(update_generation_filter_groups != nullptr)
    {
        children["update-generation-filter-groups"] = update_generation_filter_groups;
    }

    if(networks != nullptr)
    {
        children["networks"] = networks;
    }

    if(path_table != nullptr)
    {
        children["path-table"] = path_table;
    }

    if(epes != nullptr)
    {
        children["epes"] = epes;
    }

    if(advertised_path_counts != nullptr)
    {
        children["advertised-path-counts"] = advertised_path_counts;
    }

    if(path_labeled_table != nullptr)
    {
        children["path-labeled-table"] = path_labeled_table;
    }

    if(advertised_paths != nullptr)
    {
        children["advertised-paths"] = advertised_paths;
    }

    if(neighbor_af_table != nullptr)
    {
        children["neighbor-af-table"] = neighbor_af_table;
    }

    if(network_all_rds != nullptr)
    {
        children["network-all-rds"] = network_all_rds;
    }

    if(update_generation_neighbors != nullptr)
    {
        children["update-generation-neighbors"] = update_generation_neighbors;
    }

    if(update_generation_address_family != nullptr)
    {
        children["update-generation-address-family"] = update_generation_address_family;
    }

    if(dampenings != nullptr)
    {
        children["dampenings"] = dampenings;
    }

    if(prefix_filters != nullptr)
    {
        children["prefix-filters"] = prefix_filters;
    }

    if(attributes != nullptr)
    {
        children["attributes"] = attributes;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-lookup-all-rds" || name == "policies" || name == "convergence" || name == "af-process-info" || name == "path-used-table" || name == "bmp-path-table-generic" || name == "rpc-sets" || name == "global-af-process-info" || name == "network-prefixes" || name == "advertised-path-xr" || name == "sourced-networks" || name == "update-groups" || name == "update-generation-sub-groups" || name == "next-hop-address-families" || name == "rt-set-counters" || name == "bmp-paths" || name == "update-generation-update-groups" || name == "update-generation-filter-groups" || name == "networks" || name == "path-table" || name == "epes" || name == "advertised-path-counts" || name == "path-labeled-table" || name == "advertised-paths" || name == "neighbor-af-table" || name == "network-all-rds" || name == "update-generation-neighbors" || name == "update-generation-address-family" || name == "dampenings" || name == "prefix-filters" || name == "attributes" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRds()
{

    yang_name = "network-lookup-all-rds"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::~NetworkLookupAllRds()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::has_data() const
{
    for (std::size_t index=0; index<network_lookup_all_rd.size(); index++)
    {
        if(network_lookup_all_rd[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::has_operation() const
{
    for (std::size_t index=0; index<network_lookup_all_rd.size(); index++)
    {
        if(network_lookup_all_rd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-all-rds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-lookup-all-rd")
    {
        for(auto const & c : network_lookup_all_rd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd>();
        c->parent = this;
        network_lookup_all_rd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_lookup_all_rd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-lookup-all-rd")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupAllRd()
    :
    network_prefix{YType::str, "network-prefix"}
    	,
    network_lookup_rds(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds>())
{
    network_lookup_rds->parent = this;

    yang_name = "network-lookup-all-rd"; yang_parent_name = "network-lookup-all-rds"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::~NetworkLookupAllRd()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::has_data() const
{
    return network_prefix.is_set
	|| (network_lookup_rds !=  nullptr && network_lookup_rds->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(network_prefix.yfilter)
	|| (network_lookup_rds !=  nullptr && network_lookup_rds->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-all-rd" <<"[network-prefix='" <<network_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network_prefix.is_set || is_set(network_prefix.yfilter)) leaf_name_data.push_back(network_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-lookup-rds")
    {
        if(network_lookup_rds == nullptr)
        {
            network_lookup_rds = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds>();
        }
        return network_lookup_rds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(network_lookup_rds != nullptr)
    {
        children["network-lookup-rds"] = network_lookup_rds;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network-prefix")
    {
        network_prefix = value;
        network_prefix.value_namespace = name_space;
        network_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network-prefix")
    {
        network_prefix.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-lookup-rds" || name == "network-prefix")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRds()
{

    yang_name = "network-lookup-rds"; yang_parent_name = "network-lookup-all-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::~NetworkLookupRds()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::has_data() const
{
    for (std::size_t index=0; index<network_lookup_rd.size(); index++)
    {
        if(network_lookup_rd[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::has_operation() const
{
    for (std::size_t index=0; index<network_lookup_rd.size(); index++)
    {
        if(network_lookup_rd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-rds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network-lookup-rd")
    {
        for(auto const & c : network_lookup_rd)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd>();
        c->parent = this;
        network_lookup_rd.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network_lookup_rd)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network-lookup-rd")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::NetworkLookupRd()
    :
    rd{YType::str, "rd"},
    af_name{YType::enumeration, "af-name"},
    process_instance_id{YType::uint8, "process-instance-id"},
    has_inconsistent_paths{YType::boolean, "has-inconsistent-paths"},
    is_net_aggregation_suppressed{YType::boolean, "is-net-aggregation-suppressed"},
    is_net_ldp_signaled{YType::boolean, "is-net-ldp-signaled"},
    table_version{YType::uint32, "table-version"},
    table_brib_version{YType::uint32, "table-brib-version"},
    advertisedto_pe{YType::boolean, "advertisedto-pe"},
    has_local_label{YType::boolean, "has-local-label"},
    net_local_label{YType::uint32, "net-local-label"},
    net_local_label_rewrite{YType::boolean, "net-local-label-rewrite"},
    net_local_label_srgb{YType::boolean, "net-local-label-srgb"},
    has_lbl_retained{YType::boolean, "has-lbl-retained"},
    route_distinguisher{YType::str, "route-distinguisher"},
    vrf_name{YType::str, "vrf-name"},
    net_flags{YType::uint32, "net-flags"},
    net_extended_flags{YType::uint32, "net-extended-flags"},
    net_multipath{YType::boolean, "net-multipath"},
    net_eibgp_multipath{YType::boolean, "net-eibgp-multipath"},
    net_backup_available{YType::boolean, "net-backup-available"},
    net_backup_label_rewrite_available{YType::boolean, "net-backup-label-rewrite-available"},
    rib_failed{YType::boolean, "rib-failed"},
    gateway_array{YType::uint32, "gateway-array"},
    resilient_nexthop_set{YType::uint32, "resilient-nexthop-set"},
    is_permanent_network{YType::boolean, "is-permanent-network"},
    num_of_path{YType::uint32, "num-of-path"},
    version{YType::uint32, "version"},
    bit{YType::uint16, "bit"},
    flags{YType::uint8, "flags"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix>())
	,version_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp>())
	,version_age(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge>())
{
    bgp_prefix->parent = this;
    version_timestamp->parent = this;
    version_age->parent = this;

    yang_name = "network-lookup-rd"; yang_parent_name = "network-lookup-rds"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::~NetworkLookupRd()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::has_data() const
{
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_process_instance_path.size(); index++)
    {
        if(local_process_instance_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_process_instance_path.size(); index++)
    {
        if(active_process_instance_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_path_element.size(); index++)
    {
        if(local_path_element[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_path_element.size(); index++)
    {
        if(active_path_element[index]->has_data())
            return true;
    }
    return rd.is_set
	|| af_name.is_set
	|| process_instance_id.is_set
	|| has_inconsistent_paths.is_set
	|| is_net_aggregation_suppressed.is_set
	|| is_net_ldp_signaled.is_set
	|| table_version.is_set
	|| table_brib_version.is_set
	|| advertisedto_pe.is_set
	|| has_local_label.is_set
	|| net_local_label.is_set
	|| net_local_label_rewrite.is_set
	|| net_local_label_srgb.is_set
	|| has_lbl_retained.is_set
	|| route_distinguisher.is_set
	|| vrf_name.is_set
	|| net_flags.is_set
	|| net_extended_flags.is_set
	|| net_multipath.is_set
	|| net_eibgp_multipath.is_set
	|| net_backup_available.is_set
	|| net_backup_label_rewrite_available.is_set
	|| rib_failed.is_set
	|| gateway_array.is_set
	|| resilient_nexthop_set.is_set
	|| is_permanent_network.is_set
	|| num_of_path.is_set
	|| version.is_set
	|| bit.is_set
	|| flags.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (version_timestamp !=  nullptr && version_timestamp->has_data())
	|| (version_age !=  nullptr && version_age->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::has_operation() const
{
    for (std::size_t index=0; index<local_peers_advertised_to.size(); index++)
    {
        if(local_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.size(); index++)
    {
        if(pe_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.size(); index++)
    {
        if(best_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.size(); index++)
    {
        if(add_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_process_instance_path.size(); index++)
    {
        if(local_process_instance_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_process_instance_path.size(); index++)
    {
        if(active_process_instance_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_path_element.size(); index++)
    {
        if(local_path_element[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_path_element.size(); index++)
    {
        if(active_path_element[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(has_inconsistent_paths.yfilter)
	|| ydk::is_set(is_net_aggregation_suppressed.yfilter)
	|| ydk::is_set(is_net_ldp_signaled.yfilter)
	|| ydk::is_set(table_version.yfilter)
	|| ydk::is_set(table_brib_version.yfilter)
	|| ydk::is_set(advertisedto_pe.yfilter)
	|| ydk::is_set(has_local_label.yfilter)
	|| ydk::is_set(net_local_label.yfilter)
	|| ydk::is_set(net_local_label_rewrite.yfilter)
	|| ydk::is_set(net_local_label_srgb.yfilter)
	|| ydk::is_set(has_lbl_retained.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(net_flags.yfilter)
	|| ydk::is_set(net_extended_flags.yfilter)
	|| ydk::is_set(net_multipath.yfilter)
	|| ydk::is_set(net_eibgp_multipath.yfilter)
	|| ydk::is_set(net_backup_available.yfilter)
	|| ydk::is_set(net_backup_label_rewrite_available.yfilter)
	|| ydk::is_set(rib_failed.yfilter)
	|| ydk::is_set(gateway_array.yfilter)
	|| ydk::is_set(resilient_nexthop_set.yfilter)
	|| ydk::is_set(is_permanent_network.yfilter)
	|| ydk::is_set(num_of_path.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(bit.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (version_timestamp !=  nullptr && version_timestamp->has_operation())
	|| (version_age !=  nullptr && version_age->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-lookup-rd" <<"[rd='" <<rd <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (has_inconsistent_paths.is_set || is_set(has_inconsistent_paths.yfilter)) leaf_name_data.push_back(has_inconsistent_paths.get_name_leafdata());
    if (is_net_aggregation_suppressed.is_set || is_set(is_net_aggregation_suppressed.yfilter)) leaf_name_data.push_back(is_net_aggregation_suppressed.get_name_leafdata());
    if (is_net_ldp_signaled.is_set || is_set(is_net_ldp_signaled.yfilter)) leaf_name_data.push_back(is_net_ldp_signaled.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.yfilter)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (table_brib_version.is_set || is_set(table_brib_version.yfilter)) leaf_name_data.push_back(table_brib_version.get_name_leafdata());
    if (advertisedto_pe.is_set || is_set(advertisedto_pe.yfilter)) leaf_name_data.push_back(advertisedto_pe.get_name_leafdata());
    if (has_local_label.is_set || is_set(has_local_label.yfilter)) leaf_name_data.push_back(has_local_label.get_name_leafdata());
    if (net_local_label.is_set || is_set(net_local_label.yfilter)) leaf_name_data.push_back(net_local_label.get_name_leafdata());
    if (net_local_label_rewrite.is_set || is_set(net_local_label_rewrite.yfilter)) leaf_name_data.push_back(net_local_label_rewrite.get_name_leafdata());
    if (net_local_label_srgb.is_set || is_set(net_local_label_srgb.yfilter)) leaf_name_data.push_back(net_local_label_srgb.get_name_leafdata());
    if (has_lbl_retained.is_set || is_set(has_lbl_retained.yfilter)) leaf_name_data.push_back(has_lbl_retained.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (net_flags.is_set || is_set(net_flags.yfilter)) leaf_name_data.push_back(net_flags.get_name_leafdata());
    if (net_extended_flags.is_set || is_set(net_extended_flags.yfilter)) leaf_name_data.push_back(net_extended_flags.get_name_leafdata());
    if (net_multipath.is_set || is_set(net_multipath.yfilter)) leaf_name_data.push_back(net_multipath.get_name_leafdata());
    if (net_eibgp_multipath.is_set || is_set(net_eibgp_multipath.yfilter)) leaf_name_data.push_back(net_eibgp_multipath.get_name_leafdata());
    if (net_backup_available.is_set || is_set(net_backup_available.yfilter)) leaf_name_data.push_back(net_backup_available.get_name_leafdata());
    if (net_backup_label_rewrite_available.is_set || is_set(net_backup_label_rewrite_available.yfilter)) leaf_name_data.push_back(net_backup_label_rewrite_available.get_name_leafdata());
    if (rib_failed.is_set || is_set(rib_failed.yfilter)) leaf_name_data.push_back(rib_failed.get_name_leafdata());
    if (gateway_array.is_set || is_set(gateway_array.yfilter)) leaf_name_data.push_back(gateway_array.get_name_leafdata());
    if (resilient_nexthop_set.is_set || is_set(resilient_nexthop_set.yfilter)) leaf_name_data.push_back(resilient_nexthop_set.get_name_leafdata());
    if (is_permanent_network.is_set || is_set(is_permanent_network.yfilter)) leaf_name_data.push_back(is_permanent_network.get_name_leafdata());
    if (num_of_path.is_set || is_set(num_of_path.yfilter)) leaf_name_data.push_back(num_of_path.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (bit.is_set || is_set(bit.yfilter)) leaf_name_data.push_back(bit.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "version-timestamp")
    {
        if(version_timestamp == nullptr)
        {
            version_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp>();
        }
        return version_timestamp;
    }

    if(child_yang_name == "version-age")
    {
        if(version_age == nullptr)
        {
            version_age = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge>();
        }
        return version_age;
    }

    if(child_yang_name == "local-peers-advertised-to")
    {
        for(auto const & c : local_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo>();
        c->parent = this;
        local_peers_advertised_to.push_back(c);
        return c;
    }

    if(child_yang_name == "pe-peers-advertised-to")
    {
        for(auto const & c : pe_peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo>();
        c->parent = this;
        pe_peers_advertised_to.push_back(c);
        return c;
    }

    if(child_yang_name == "best-path-orr-bitfield")
    {
        for(auto const & c : best_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield>();
        c->parent = this;
        best_path_orr_bitfield.push_back(c);
        return c;
    }

    if(child_yang_name == "add-path-orr-bitfield")
    {
        for(auto const & c : add_path_orr_bitfield)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::AddPathOrrBitfield>();
        c->parent = this;
        add_path_orr_bitfield.push_back(c);
        return c;
    }

    if(child_yang_name == "local-process-instance-path")
    {
        for(auto const & c : local_process_instance_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalProcessInstancePath>();
        c->parent = this;
        local_process_instance_path.push_back(c);
        return c;
    }

    if(child_yang_name == "active-process-instance-path")
    {
        for(auto const & c : active_process_instance_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActiveProcessInstancePath>();
        c->parent = this;
        active_process_instance_path.push_back(c);
        return c;
    }

    if(child_yang_name == "local-path-element")
    {
        for(auto const & c : local_path_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPathElement>();
        c->parent = this;
        local_path_element.push_back(c);
        return c;
    }

    if(child_yang_name == "active-path-element")
    {
        for(auto const & c : active_path_element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::ActivePathElement>();
        c->parent = this;
        active_path_element.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_prefix != nullptr)
    {
        children["bgp-prefix"] = bgp_prefix;
    }

    if(version_timestamp != nullptr)
    {
        children["version-timestamp"] = version_timestamp;
    }

    if(version_age != nullptr)
    {
        children["version-age"] = version_age;
    }

    for (auto const & c : local_peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pe_peers_advertised_to)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : best_path_orr_bitfield)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : add_path_orr_bitfield)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : local_process_instance_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : active_process_instance_path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : local_path_element)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : active_path_element)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-inconsistent-paths")
    {
        has_inconsistent_paths = value;
        has_inconsistent_paths.value_namespace = name_space;
        has_inconsistent_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-net-aggregation-suppressed")
    {
        is_net_aggregation_suppressed = value;
        is_net_aggregation_suppressed.value_namespace = name_space;
        is_net_aggregation_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-net-ldp-signaled")
    {
        is_net_ldp_signaled = value;
        is_net_ldp_signaled.value_namespace = name_space;
        is_net_ldp_signaled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-version")
    {
        table_version = value;
        table_version.value_namespace = name_space;
        table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version = value;
        table_brib_version.value_namespace = name_space;
        table_brib_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe = value;
        advertisedto_pe.value_namespace = name_space;
        advertisedto_pe.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "net-local-label-rewrite")
    {
        net_local_label_rewrite = value;
        net_local_label_rewrite.value_namespace = name_space;
        net_local_label_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-local-label-srgb")
    {
        net_local_label_srgb = value;
        net_local_label_srgb.value_namespace = name_space;
        net_local_label_srgb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-lbl-retained")
    {
        has_lbl_retained = value;
        has_lbl_retained.value_namespace = name_space;
        has_lbl_retained.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-flags")
    {
        net_flags = value;
        net_flags.value_namespace = name_space;
        net_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-extended-flags")
    {
        net_extended_flags = value;
        net_extended_flags.value_namespace = name_space;
        net_extended_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-multipath")
    {
        net_multipath = value;
        net_multipath.value_namespace = name_space;
        net_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-eibgp-multipath")
    {
        net_eibgp_multipath = value;
        net_eibgp_multipath.value_namespace = name_space;
        net_eibgp_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-backup-available")
    {
        net_backup_available = value;
        net_backup_available.value_namespace = name_space;
        net_backup_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-backup-label-rewrite-available")
    {
        net_backup_label_rewrite_available = value;
        net_backup_label_rewrite_available.value_namespace = name_space;
        net_backup_label_rewrite_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-failed")
    {
        rib_failed = value;
        rib_failed.value_namespace = name_space;
        rib_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-array")
    {
        gateway_array = value;
        gateway_array.value_namespace = name_space;
        gateway_array.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resilient-nexthop-set")
    {
        resilient_nexthop_set = value;
        resilient_nexthop_set.value_namespace = name_space;
        resilient_nexthop_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent-network")
    {
        is_permanent_network = value;
        is_permanent_network.value_namespace = name_space;
        is_permanent_network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-path")
    {
        num_of_path = value;
        num_of_path.value_namespace = name_space;
        num_of_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit")
    {
        bit = value;
        bit.value_namespace = name_space;
        bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "has-inconsistent-paths")
    {
        has_inconsistent_paths.yfilter = yfilter;
    }
    if(value_path == "is-net-aggregation-suppressed")
    {
        is_net_aggregation_suppressed.yfilter = yfilter;
    }
    if(value_path == "is-net-ldp-signaled")
    {
        is_net_ldp_signaled.yfilter = yfilter;
    }
    if(value_path == "table-version")
    {
        table_version.yfilter = yfilter;
    }
    if(value_path == "table-brib-version")
    {
        table_brib_version.yfilter = yfilter;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe.yfilter = yfilter;
    }
    if(value_path == "has-local-label")
    {
        has_local_label.yfilter = yfilter;
    }
    if(value_path == "net-local-label")
    {
        net_local_label.yfilter = yfilter;
    }
    if(value_path == "net-local-label-rewrite")
    {
        net_local_label_rewrite.yfilter = yfilter;
    }
    if(value_path == "net-local-label-srgb")
    {
        net_local_label_srgb.yfilter = yfilter;
    }
    if(value_path == "has-lbl-retained")
    {
        has_lbl_retained.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "net-flags")
    {
        net_flags.yfilter = yfilter;
    }
    if(value_path == "net-extended-flags")
    {
        net_extended_flags.yfilter = yfilter;
    }
    if(value_path == "net-multipath")
    {
        net_multipath.yfilter = yfilter;
    }
    if(value_path == "net-eibgp-multipath")
    {
        net_eibgp_multipath.yfilter = yfilter;
    }
    if(value_path == "net-backup-available")
    {
        net_backup_available.yfilter = yfilter;
    }
    if(value_path == "net-backup-label-rewrite-available")
    {
        net_backup_label_rewrite_available.yfilter = yfilter;
    }
    if(value_path == "rib-failed")
    {
        rib_failed.yfilter = yfilter;
    }
    if(value_path == "gateway-array")
    {
        gateway_array.yfilter = yfilter;
    }
    if(value_path == "resilient-nexthop-set")
    {
        resilient_nexthop_set.yfilter = yfilter;
    }
    if(value_path == "is-permanent-network")
    {
        is_permanent_network.yfilter = yfilter;
    }
    if(value_path == "num-of-path")
    {
        num_of_path.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "bit")
    {
        bit.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "version-timestamp" || name == "version-age" || name == "local-peers-advertised-to" || name == "pe-peers-advertised-to" || name == "best-path-orr-bitfield" || name == "add-path-orr-bitfield" || name == "local-process-instance-path" || name == "active-process-instance-path" || name == "local-path-element" || name == "active-path-element" || name == "rd" || name == "af-name" || name == "process-instance-id" || name == "has-inconsistent-paths" || name == "is-net-aggregation-suppressed" || name == "is-net-ldp-signaled" || name == "table-version" || name == "table-brib-version" || name == "advertisedto-pe" || name == "has-local-label" || name == "net-local-label" || name == "net-local-label-rewrite" || name == "net-local-label-srgb" || name == "has-lbl-retained" || name == "route-distinguisher" || name == "vrf-name" || name == "net-flags" || name == "net-extended-flags" || name == "net-multipath" || name == "net-eibgp-multipath" || name == "net-backup-available" || name == "net-backup-label-rewrite-available" || name == "rib-failed" || name == "gateway-array" || name == "resilient-nexthop-set" || name == "is-permanent-network" || name == "num-of-path" || name == "version" || name == "bit" || name == "flags")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "network-lookup-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::VersionTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-timestamp"; yang_parent_name = "network-lookup-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::~VersionTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::VersionAge()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "version-age"; yang_parent_name = "network-lookup-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::~VersionAge()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::has_data() const
{
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-age";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::VersionAge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "network-lookup-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "network-lookup-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "network-lookup-rd"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
    	,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn_vpls_address != nullptr)
    {
        children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Vrfs::Vrf::Afs::Af::NetworkLookupAllRds::NetworkLookupAllRd::NetworkLookupRds::NetworkLookupRd::BestPathOrrBitfield::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}


}
}

