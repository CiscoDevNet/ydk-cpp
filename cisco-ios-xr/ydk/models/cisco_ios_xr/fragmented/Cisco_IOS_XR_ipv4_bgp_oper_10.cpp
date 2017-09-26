
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_10.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_11.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MaxPeersInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::MinAdvertisementInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "min-advertisement-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::~MinAdvertisementInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-advertisement-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "min-advertisement-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MinAdvertisementInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::MsgLogInInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "msg-log-in-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::~MsgLogInInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-in-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "msg-log-in-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::MsgLogOutInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "msg-log-out-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::~MsgLogOutInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msg-log-out-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "msg-log-out-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::MsgLogOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::NbrEnforceFirstAsInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "nbr-enforce-first-as-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::~NbrEnforceFirstAsInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-enforce-first-as-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "nbr-enforce-first-as-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrEnforceFirstAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::NbrRestartTimeInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "nbr-restart-time-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::~NbrRestartTimeInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-restart-time-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "nbr-restart-time-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrRestartTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::NbrStalePathTimeInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "nbr-stale-path-time-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::~NbrStalePathTimeInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-stale-path-time-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "nbr-stale-path-time-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NbrStalePathTimeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::NeighborRemoteAsListInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "neighbor-remote-as-list-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::~NeighborRemoteAsListInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-remote-as-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "neighbor-remote-as-list-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborRemoteAsListInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::NeighborUpdateFilterAttributeInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "neighbor-update-filter-attribute-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::~NeighborUpdateFilterAttributeInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-update-filter-attribute-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "neighbor-update-filter-attribute-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterAttributeInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::NeighborUpdateFilterExistsInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "neighbor-update-filter-exists-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::~NeighborUpdateFilterExistsInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-update-filter-exists-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "neighbor-update-filter-exists-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterExistsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::NeighborUpdateFilterMessageBufferCountInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "neighbor-update-filter-message-buffer-count-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::~NeighborUpdateFilterMessageBufferCountInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-update-filter-message-buffer-count-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "neighbor-update-filter-message-buffer-count-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterMessageBufferCountInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::NeighborUpdateFilterSyslogDisableInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "neighbor-update-filter-syslog-disable-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::~NeighborUpdateFilterSyslogDisableInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-update-filter-syslog-disable-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "neighbor-update-filter-syslog-disable-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NeighborUpdateFilterSyslogDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::NsrDisabledInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "nsr-disabled-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::~NsrDisabledInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-disabled-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "nsr-disabled-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::NsrDisabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::PasswordInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "password-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::~PasswordInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "password-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PasswordInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::PrefixValidationAllowInvalidInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "prefix-validation-allow-invalid-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::~PrefixValidationAllowInvalidInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-validation-allow-invalid-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "prefix-validation-allow-invalid-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationAllowInvalidInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::PrefixValidationDisableInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "prefix-validation-disable-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::~PrefixValidationDisableInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-validation-disable-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "prefix-validation-disable-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationDisableInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::PrefixValidationSignalIbgpInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "prefix-validation-signal-ibgp-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::~PrefixValidationSignalIbgpInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-validation-signal-ibgp-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "prefix-validation-signal-ibgp-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationSignalIbgpInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::PrefixValidationUseValiditInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "prefix-validation-use-validit-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::~PrefixValidationUseValiditInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-validation-use-validit-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "prefix-validation-use-validit-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::PrefixValidationUseValiditInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::ReceiveBufferInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "receive-buffer-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::~ReceiveBufferInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buffer-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "receive-buffer-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
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
    ipv4_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6_sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpn_vpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>())
{
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;
    l2vpn_mspw_address->parent = this;
    l2vpn_vpls_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
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

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children() const
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "l2vpn-mspw-address" || name == "l2vpn-vpls-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-flowspec-address" || name == "ipv4-label-address" || name == "ipv4-mcast-address" || name == "ipv4-mdt-address" || name == "ipv4-tunnel-address" || name == "ipv4mvpn-address" || name == "ipv4vpn-address" || name == "ipv4vpn-flowspec-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-flowspec-address" || name == "ipv6-label-address" || name == "ipv6-mcast-address" || name == "ipv6mvpn-address" || name == "ipv6vpn-address" || name == "ipv6vpn-flowspec-address" || name == "ipv6vpn-mcast-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "rt-constraint-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::L2VpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::~L2VpnVplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::ReceiveBufferInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::RemoteAsInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;

    yang_name = "remote-as-info"; yang_parent_name = "af-independent-config"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::~RemoteAsInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_item_configured.yfilter)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-as-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.yfilter)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain == nullptr)
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain>();
        }
        return inheritance_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inheritance_chain != nullptr)
    {
        children["inheritance-chain"] = inheritance_chain;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
        is_item_configured.value_namespace = name_space;
        is_item_configured.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured.yfilter = yfilter;
    }
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inheritance-chain" || name == "is-item-configured")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::InheritanceChain()
{

    yang_name = "inheritance-chain"; yang_parent_name = "remote-as-info"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_config_entid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-config-entid")
        return true;
    return false;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family_identifier.yfilter)
	|| ydk::is_set(configuration_type.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.yfilter)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.yfilter)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor_address != nullptr)
    {
        children["neighbor-address"] = neighbor_address;
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfIndependentConfig::RemoteAsInfo::InheritanceChain::BgpConfigEntid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "address-family-identifier" || name == "configuration-type" || name == "group-name")
        return true;
    return false;
}


}
}

