
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_9.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_10.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::MaxPrefixesInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "max-prefixes-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::~MaxPrefixesInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-prefixes-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPrefixesInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "max-prefixes-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::MaxPrefixesInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::OrrInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "orr-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::~OrrInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orr-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OrrInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "orr-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::OrrInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::NextHopSelfInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "next-hop-self-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::~NextHopSelfInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopSelfInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "next-hop-self-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopSelfInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::NextHopUnchangedInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "next-hop-unchanged-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::~NextHopUnchangedInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-unchanged-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopUnchangedInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "next-hop-unchanged-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::NextHopUnchangedInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::RoutePolicyInInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "route-policy-in-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::~RoutePolicyInInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-in-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyInInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "route-policy-in-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::RoutePolicyOutInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "route-policy-out-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::~RoutePolicyOutInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-out-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyOutInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "route-policy-out-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RoutePolicyOutInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::PrefixFilterInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "prefix-filter-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::~PrefixFilterInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filter-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixFilterInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "prefix-filter-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::PrefixFilterInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::RemovePrivateAsInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "remove-private-as-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::~RemovePrivateAsInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "remove-private-as-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::RemovePrivateAsInInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "remove-private-as-in-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::~RemovePrivateAsInInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as-in-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemovePrivateAsInInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "remove-private-as-in-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RemovePrivateAsInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::RouteReflectorInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "route-reflector-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::~RouteReflectorInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-reflector-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteReflectorInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "route-reflector-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::RouteReflectorInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::LegacyPeRtInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "legacy-pe-rt-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::~LegacyPeRtInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "legacy-pe-rt-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LegacyPeRtInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "legacy-pe-rt-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::LegacyPeRtInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::AfEnabledInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "af-enabled-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::~AfEnabledInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af-enabled-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AfEnabledInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "af-enabled-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AfEnabledInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::SendCommunityInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "send-community-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::~SendCommunityInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendCommunityInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "send-community-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::SendGracefulShutdownCommunityInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "send-graceful-shutdown-community-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::~SendGracefulShutdownCommunityInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-graceful-shutdown-community-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendGracefulShutdownCommunityInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "send-graceful-shutdown-community-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendGracefulShutdownCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::SendExtendedCommunityInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "send-extended-community-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::~SendExtendedCommunityInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-extended-community-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendExtendedCommunityInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "send-extended-community-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SendExtendedCommunityInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::SoftReconfigInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "soft-reconfig-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::~SoftReconfigInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-reconfig-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoftReconfigInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "soft-reconfig-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoftReconfigInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::SoOInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "so-o-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::~SoOInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "so-o-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SoOInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "so-o-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::SoOInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::WeightInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "weight-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::~WeightInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WeightInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "weight-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::WeightInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::AllowasInInfo()
    :
    is_item_configured{YType::boolean, "is-item-configured"}
    	,
    inheritance_chain(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain>())
{
    inheritance_chain->parent = this;
    children["inheritance-chain"] = inheritance_chain;

    yang_name = "allowas-in-info"; yang_parent_name = "af-dependent-config";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::~AllowasInInfo()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::has_data() const
{
    return is_item_configured.is_set
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_item_configured.operation)
	|| (inheritance_chain !=  nullptr && inheritance_chain->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in-info";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllowasInInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_item_configured.is_set || is_set(is_item_configured.operation)) leaf_name_data.push_back(is_item_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inheritance-chain")
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
        else
        {
            inheritance_chain = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain>();
            inheritance_chain->parent = this;
            children["inheritance-chain"] = inheritance_chain;
        }
        return children.at("inheritance-chain");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::get_children()
{
    if(children.find("inheritance-chain") == children.end())
    {
        if(inheritance_chain != nullptr)
        {
            children["inheritance-chain"] = inheritance_chain;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-item-configured")
    {
        is_item_configured = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::InheritanceChain()
{
    yang_name = "inheritance-chain"; yang_parent_name = "allowas-in-info";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::~InheritanceChain()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::has_data() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::has_operation() const
{
    for (std::size_t index=0; index<bgp_config_entid.size(); index++)
    {
        if(bgp_config_entid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inheritance-chain";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InheritanceChain' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-config-entid")
    {
        for(auto const & c : bgp_config_entid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid>();
        c->parent = this;
        bgp_config_entid.push_back(std::move(c));
        children[segment_path] = bgp_config_entid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::get_children()
{
    for (auto const & c : bgp_config_entid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::set_value(const std::string & value_path, std::string value)
{
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::BgpConfigEntid()
    :
    address_family_identifier{YType::uint8, "address-family-identifier"},
    configuration_type{YType::enumeration, "configuration-type"},
    group_name{YType::str, "group-name"}
    	,
    neighbor_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "bgp-config-entid"; yang_parent_name = "inheritance-chain";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::~BgpConfigEntid()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::has_data() const
{
    return address_family_identifier.is_set
	|| configuration_type.is_set
	|| group_name.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family_identifier.operation)
	|| is_set(configuration_type.operation)
	|| is_set(group_name.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-config-entid";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpConfigEntid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family_identifier.is_set || is_set(address_family_identifier.operation)) leaf_name_data.push_back(address_family_identifier.get_name_leafdata());
    if (configuration_type.is_set || is_set(configuration_type.operation)) leaf_name_data.push_back(configuration_type.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family-identifier")
    {
        address_family_identifier = value;
    }
    if(value_path == "configuration-type")
    {
        configuration_type = value;
    }
    if(value_path == "group-name")
    {
        group_name = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
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
    ipv4sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "bgp-config-entid";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
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
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::ConfigInstances::ConfigInstance::ConfigVrfs::ConfigVrf::EntityConfigurations::EntityConfiguration::AfDependentConfig::AllowasInInfo::InheritanceChain::BgpConfigEntid::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}


}
}

