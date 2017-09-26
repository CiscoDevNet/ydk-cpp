
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMinintervalInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::BfdMultiplierInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "bfd-multiplier-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::~BfdMultiplierInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-multiplier-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "bfd-multiplier-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BfdMultiplierInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::BmpServersInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "bmp-servers-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::~BmpServersInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-servers-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "bmp-servers-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::BmpServersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::CapabilityNegotiationSuppressedInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "capability-negotiation-suppressed-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::~CapabilityNegotiationSuppressedInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability-negotiation-suppressed-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "capability-negotiation-suppressed-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::CapabilityNegotiationSuppressedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::ClusterIdInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "cluster-id-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::~ClusterIdInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "cluster-id-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ClusterIdInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::DescriptionInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "description-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::~DescriptionInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "description-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "description-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DescriptionInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::DmzLinkBandwidthInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "dmz-link-bandwidth-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::~DmzLinkBandwidthInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dmz-link-bandwidth-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "dmz-link-bandwidth-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::DmzLinkBandwidthInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::EbgpHopCountInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "ebgp-hop-count-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::~EbgpHopCountInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-hop-count-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "ebgp-hop-count-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpHopCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::EbgpRecvDmzInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "ebgp-recv-dmz-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::~EbgpRecvDmzInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-recv-dmz-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "ebgp-recv-dmz-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpRecvDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::EbgpSendDmzInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "ebgp-send-dmz-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::~EbgpSendDmzInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ebgp-send-dmz-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "ebgp-send-dmz-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EbgpSendDmzInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::EgressPeerEngineeringInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "egress-peer-engineering-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::~EgressPeerEngineeringInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "egress-peer-engineering-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "egress-peer-engineering-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::EgressPeerEngineeringInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::GracefulRestartDisabledInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "graceful-restart-disabled-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::~GracefulRestartDisabledInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-disabled-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "graceful-restart-disabled-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulRestartDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::GracefulShutdownActivateInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "graceful-shutdown-activate-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::~GracefulShutdownActivateInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-shutdown-activate-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "graceful-shutdown-activate-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownActivateInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::GracefulShutdownAsPrependsInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "graceful-shutdown-as-prepends-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::~GracefulShutdownAsPrependsInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-shutdown-as-prepends-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "graceful-shutdown-as-prepends-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownAsPrependsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::GracefulShutdownInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "graceful-shutdown-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::~GracefulShutdownInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-shutdown-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "graceful-shutdown-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::GracefulShutdownLocPrefInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "graceful-shutdown-loc-pref-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::~GracefulShutdownLocPrefInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-shutdown-loc-pref-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "graceful-shutdown-loc-pref-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::GracefulShutdownLocPrefInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::IdleWatchTimeInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "idle-watch-time-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::~IdleWatchTimeInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-watch-time-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "idle-watch-time-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IdleWatchTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::IgnoreConnectedInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "ignore-connected-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::~IgnoreConnectedInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ignore-connected-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "ignore-connected-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::IgnoreConnectedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InternalVpnClientInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "internal-vpn-client-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::~InternalVpnClientInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-vpn-client-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "internal-vpn-client-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::InternalVpnClientInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::KeychainInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "keychain-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::~KeychainInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keychain-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "keychain-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigInstanceDefaultVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::KeychainInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}


}
}

