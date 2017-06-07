
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "ifrs-interface";
}

Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Safs()
{
    yang_name = "safs"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Safs::~Safs()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::has_data() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Safs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "saf")
    {
        for(auto const & c : saf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf>();
        c->parent = this;
        saf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : saf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Saf()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    rpf_hash_source_groups(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups>())
	,rpf_hash_sources(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources>())
	,rpfs(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs>())
{
    rpf_hash_source_groups->parent = this;

    rpf_hash_sources->parent = this;

    rpfs->parent = this;

    yang_name = "saf"; yang_parent_name = "safs";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::~Saf()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::has_data() const
{
    return saf_name.is_set
	|| topology_name.is_set
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_data())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_data())
	|| (rpfs !=  nullptr && rpfs->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::has_operation() const
{
    return is_set(operation)
	|| is_set(saf_name.operation)
	|| is_set(topology_name.operation)
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_operation())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_operation())
	|| (rpfs !=  nullptr && rpfs->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Saf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-groups")
    {
        if(rpf_hash_source_groups == nullptr)
        {
            rpf_hash_source_groups = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups>();
        }
        return rpf_hash_source_groups;
    }

    if(child_yang_name == "rpf-hash-sources")
    {
        if(rpf_hash_sources == nullptr)
        {
            rpf_hash_sources = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources>();
        }
        return rpf_hash_sources;
    }

    if(child_yang_name == "rpfs")
    {
        if(rpfs == nullptr)
        {
            rpfs = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs>();
        }
        return rpfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_hash_source_groups != nullptr)
    {
        children["rpf-hash-source-groups"] = rpf_hash_source_groups;
    }

    if(rpf_hash_sources != nullptr)
    {
        children["rpf-hash-sources"] = rpf_hash_sources;
    }

    if(rpfs != nullptr)
    {
        children["rpfs"] = rpfs;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroups()
{
    yang_name = "rpf-hash-source-groups"; yang_parent_name = "saf";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::~RpfHashSourceGroups()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-groups";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSourceGroups' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-group")
    {
        for(auto const & c : rpf_hash_source_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup>();
        c->parent = this;
        rpf_hash_source_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf_hash_source_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::RpfHashSourceGroup()
    :
    group_address{YType::str, "group-address"},
    mask_length{YType::int32, "mask-length"},
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;

    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source-group"; yang_parent_name = "rpf-hash-source-groups";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::~RpfHashSourceGroup()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_data() const
{
    return group_address.is_set
	|| mask_length.is_set
	|| mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(mask_length.operation)
	|| is_set(mofrr.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_multipath_enabled.operation)
	|| is_set(secondary_next_hop_interface.operation)
	|| is_set(source_address.operation)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-group";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSourceGroup' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.operation)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.operation)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.operation)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.operation)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source-group";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source-group";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryNextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSources()
{
    yang_name = "rpf-hash-sources"; yang_parent_name = "saf";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::~RpfHashSources()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-sources";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSources' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source")
    {
        for(auto const & c : rpf_hash_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource>();
        c->parent = this;
        rpf_hash_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf_hash_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::RpfHashSource()
    :
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;

    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source"; yang_parent_name = "rpf-hash-sources";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::~RpfHashSource()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_data() const
{
    return mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_operation() const
{
    return is_set(operation)
	|| is_set(mofrr.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_multipath_enabled.operation)
	|| is_set(secondary_next_hop_interface.operation)
	|| is_set(source_address.operation)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSource' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mofrr.is_set || is_set(mofrr.operation)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.operation)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.operation)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mofrr")
    {
        mofrr = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryNextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpfs()
{
    yang_name = "rpfs"; yang_parent_name = "saf";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::~Rpfs()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::has_data() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::has_operation() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfs";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpfs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf>();
        c->parent = this;
        rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::Rpf()
    :
    registered_address{YType::str, "registered-address"},
    is_connected{YType::uint8, "is-connected"},
    is_rpf_bgp_route{YType::boolean, "is-rpf-bgp-route"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>())
{
    registered_address_xr->parent = this;

    yang_name = "rpf"; yang_parent_name = "rpfs";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::~Rpf()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_data() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_data())
            return true;
    }
    return registered_address.is_set
	|| is_connected.is_set
	|| is_rpf_bgp_route.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(registered_address.operation)
	|| is_set(is_connected.operation)
	|| is_set(is_rpf_bgp_route.operation)
	|| is_set(metric.operation)
	|| is_set(metric_preference.operation)
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf" <<"[registered-address='" <<registered_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registered_address.is_set || is_set(registered_address.operation)) leaf_name_data.push_back(registered_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_rpf_bgp_route.is_set || is_set(is_rpf_bgp_route.operation)) leaf_name_data.push_back(is_rpf_bgp_route.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.operation)) leaf_name_data.push_back(metric_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address-xr")
    {
        if(registered_address_xr == nullptr)
        {
            registered_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>();
        }
        return registered_address_xr;
    }

    if(child_yang_name == "rpf-path")
    {
        for(auto const & c : rpf_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath>();
        c->parent = this;
        rpf_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(registered_address_xr != nullptr)
    {
        children["registered-address-xr"] = registered_address_xr;
    }

    for (auto const & c : rpf_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "registered-address")
    {
        registered_address = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::RegisteredAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "registered-address-xr"; yang_parent_name = "rpf";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::~RegisteredAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisteredAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfPath()
    :
    connector{YType::str, "connector"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_rpf_interface_disabled{YType::boolean, "is-rpf-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_via_mlsm{YType::boolean, "is-via-mlsm"},
    rpf_interface_name{YType::str, "rpf-interface-name"}
    	,
    rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>())
	,rpf_nexthop(std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>())
{
    rpf_neighbor->parent = this;

    rpf_nexthop->parent = this;

    yang_name = "rpf-path"; yang_parent_name = "rpf";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::~RpfPath()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_data() const
{
    return connector.is_set
	|| extranet_vrf_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_rpf_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_via_mlsm.is_set
	|| rpf_interface_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_data());
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_operation() const
{
    return is_set(operation)
	|| is_set(connector.operation)
	|| is_set(extranet_vrf_name.operation)
	|| is_set(is_connector_attribute_present.operation)
	|| is_set(is_rpf_interface_disabled.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(is_via_mlsm.operation)
	|| is_set(rpf_interface_name.operation)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfPath' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connector.is_set || is_set(connector.operation)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.operation)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.operation)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_rpf_interface_disabled.is_set || is_set(is_rpf_interface_disabled.operation)) leaf_name_data.push_back(is_rpf_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_via_mlsm.is_set || is_set(is_via_mlsm.operation)) leaf_name_data.push_back(is_via_mlsm.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-nexthop")
    {
        if(rpf_nexthop == nullptr)
        {
            rpf_nexthop = std::make_shared<Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>();
        }
        return rpf_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_nexthop != nullptr)
    {
        children["rpf-nexthop"] = rpf_nexthop;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connector")
    {
        connector = value;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path";
}

Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNexthop' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistics()
{
    yang_name = "interface-statistics"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistics' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    input_assert{YType::uint32, "input-assert"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_df_election{YType::uint32, "input-df-election"},
    input_graft_ack_message{YType::uint32, "input-graft-ack-message"},
    input_graft_message{YType::uint32, "input-graft-message"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_miscellaneous{YType::uint32, "input-miscellaneous"},
    input_register{YType::uint32, "input-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_assert{YType::uint32, "output-assert"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_df_election{YType::uint32, "output-df-election"},
    output_graft_ack_message{YType::uint32, "output-graft-ack-message"},
    output_graft_message{YType::uint32, "output-graft-message"},
    output_hello{YType::uint32, "output-hello"},
    output_jp{YType::uint32, "output-jp"},
    output_register{YType::uint32, "output-register"},
    output_register_stop{YType::uint32, "output-register-stop"}
{
    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics";
}

Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    return interface_name.is_set
	|| input_assert.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_df_election.is_set
	|| input_graft_ack_message.is_set
	|| input_graft_message.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_miscellaneous.is_set
	|| input_register.is_set
	|| input_register_stop.is_set
	|| output_assert.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_df_election.is_set
	|| output_graft_ack_message.is_set
	|| output_graft_message.is_set
	|| output_hello.is_set
	|| output_jp.is_set
	|| output_register.is_set
	|| output_register_stop.is_set;
}

bool Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(input_assert.operation)
	|| is_set(input_bsr_message.operation)
	|| is_set(input_candidate_rp_advertisement.operation)
	|| is_set(input_df_election.operation)
	|| is_set(input_graft_ack_message.operation)
	|| is_set(input_graft_message.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_jp.operation)
	|| is_set(input_miscellaneous.operation)
	|| is_set(input_register.operation)
	|| is_set(input_register_stop.operation)
	|| is_set(output_assert.operation)
	|| is_set(output_bsr_message.operation)
	|| is_set(output_candidate_rp_advertisement.operation)
	|| is_set(output_df_election.operation)
	|| is_set(output_graft_ack_message.operation)
	|| is_set(output_graft_message.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_jp.operation)
	|| is_set(output_register.operation)
	|| is_set(output_register_stop.operation);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistic' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.operation)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.operation)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.operation)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.operation)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_graft_ack_message.is_set || is_set(input_graft_ack_message.operation)) leaf_name_data.push_back(input_graft_ack_message.get_name_leafdata());
    if (input_graft_message.is_set || is_set(input_graft_message.operation)) leaf_name_data.push_back(input_graft_message.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.operation)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_miscellaneous.is_set || is_set(input_miscellaneous.operation)) leaf_name_data.push_back(input_miscellaneous.get_name_leafdata());
    if (input_register.is_set || is_set(input_register.operation)) leaf_name_data.push_back(input_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.operation)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.operation)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.operation)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.operation)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.operation)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_graft_ack_message.is_set || is_set(output_graft_ack_message.operation)) leaf_name_data.push_back(output_graft_ack_message.get_name_leafdata());
    if (output_graft_message.is_set || is_set(output_graft_message.operation)) leaf_name_data.push_back(output_graft_message.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.operation)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_register.is_set || is_set(output_register.operation)) leaf_name_data.push_back(output_register.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.operation)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message = value;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous = value;
    }
    if(value_path == "input-register")
    {
        input_register = value;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message = value;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
    }
    if(value_path == "output-register")
    {
        output_register = value;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
    }
}

Pim::Active::Vrfs::Vrf::TopologyRouteCount::TopologyRouteCount()
    :
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress>())
{
    group_address->parent = this;

    yang_name = "topology-route-count"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::has_data() const
{
    return active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyRouteCount' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress>();
        }
        return group_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-route-count";
}

Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistics()
{
    yang_name = "jp-statistics"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::JpStatistics::~JpStatistics()
{
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::has_data() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::has_operation() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::JpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::JpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JpStatistics' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::JpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jp-statistic")
    {
        for(auto const & c : jp_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic>();
        c->parent = this;
        jp_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::JpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jp_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::JpStatistics::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::JpStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    received{YType::uint32, "received"},
    received100{YType::uint16, "received100"},
    received_10k{YType::uint16, "received-10k"},
    received_1k{YType::uint16, "received-1k"},
    received_50k{YType::uint16, "received-50k"},
    transmitted{YType::uint32, "transmitted"},
    transmitted100{YType::uint16, "transmitted100"},
    transmitted_10k{YType::uint16, "transmitted-10k"},
    transmitted_1k{YType::uint16, "transmitted-1k"},
    transmitted_50k{YType::uint16, "transmitted-50k"}
{
    yang_name = "jp-statistic"; yang_parent_name = "jp-statistics";
}

Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::~JpStatistic()
{
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| received.is_set
	|| received100.is_set
	|| received_10k.is_set
	|| received_1k.is_set
	|| received_50k.is_set
	|| transmitted.is_set
	|| transmitted100.is_set
	|| transmitted_10k.is_set
	|| transmitted_1k.is_set
	|| transmitted_50k.is_set;
}

bool Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(mtu.operation)
	|| is_set(received.operation)
	|| is_set(received100.operation)
	|| is_set(received_10k.operation)
	|| is_set(received_1k.operation)
	|| is_set(received_50k.operation)
	|| is_set(transmitted.operation)
	|| is_set(transmitted100.operation)
	|| is_set(transmitted_10k.operation)
	|| is_set(transmitted_1k.operation)
	|| is_set(transmitted_50k.operation);
}

std::string Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JpStatistic' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (received100.is_set || is_set(received100.operation)) leaf_name_data.push_back(received100.get_name_leafdata());
    if (received_10k.is_set || is_set(received_10k.operation)) leaf_name_data.push_back(received_10k.get_name_leafdata());
    if (received_1k.is_set || is_set(received_1k.operation)) leaf_name_data.push_back(received_1k.get_name_leafdata());
    if (received_50k.is_set || is_set(received_50k.operation)) leaf_name_data.push_back(received_50k.get_name_leafdata());
    if (transmitted.is_set || is_set(transmitted.operation)) leaf_name_data.push_back(transmitted.get_name_leafdata());
    if (transmitted100.is_set || is_set(transmitted100.operation)) leaf_name_data.push_back(transmitted100.get_name_leafdata());
    if (transmitted_10k.is_set || is_set(transmitted_10k.operation)) leaf_name_data.push_back(transmitted_10k.get_name_leafdata());
    if (transmitted_1k.is_set || is_set(transmitted_1k.operation)) leaf_name_data.push_back(transmitted_1k.get_name_leafdata());
    if (transmitted_50k.is_set || is_set(transmitted_50k.operation)) leaf_name_data.push_back(transmitted_50k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::JpStatistics::JpStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "received100")
    {
        received100 = value;
    }
    if(value_path == "received-10k")
    {
        received_10k = value;
    }
    if(value_path == "received-1k")
    {
        received_1k = value;
    }
    if(value_path == "received-50k")
    {
        received_50k = value;
    }
    if(value_path == "transmitted")
    {
        transmitted = value;
    }
    if(value_path == "transmitted100")
    {
        transmitted100 = value;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k = value;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k = value;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k = value;
    }
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabases()
{
    yang_name = "mib-databases"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::MibDatabases::~MibDatabases()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::has_data() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::has_operation() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-databases";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::MibDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MibDatabases' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-database")
    {
        for(auto const & c : mib_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase>();
        c->parent = this;
        mib_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mib_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::MibDatabase()
    :
    assert_metric{YType::uint32, "assert-metric"},
    assert_metric_preference{YType::uint32, "assert-metric-preference"},
    assert_rpt_bit{YType::boolean, "assert-rpt-bit"},
    bidirectional_route{YType::boolean, "bidirectional-route"},
    group_address{YType::str, "group-address"},
    protocol{YType::enumeration, "protocol"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_mask{YType::uint32, "rpf-mask"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    source_address{YType::str, "source-address"},
    source_netmask{YType::int32, "source-netmask"},
    spt_bit{YType::boolean, "spt-bit"},
    upstream_assert_timer{YType::int32, "upstream-assert-timer"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;

    rpf_neighbor->parent = this;

    rpf_root->parent = this;

    source_address_xr->parent = this;

    yang_name = "mib-database"; yang_parent_name = "mib-databases";
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::~MibDatabase()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::has_data() const
{
    return assert_metric.is_set
	|| assert_metric_preference.is_set
	|| assert_rpt_bit.is_set
	|| bidirectional_route.is_set
	|| group_address.is_set
	|| protocol.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_mask.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| source_address.is_set
	|| source_netmask.is_set
	|| spt_bit.is_set
	|| upstream_assert_timer.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::has_operation() const
{
    return is_set(operation)
	|| is_set(assert_metric.operation)
	|| is_set(assert_metric_preference.operation)
	|| is_set(assert_rpt_bit.operation)
	|| is_set(bidirectional_route.operation)
	|| is_set(group_address.operation)
	|| is_set(protocol.operation)
	|| is_set(rpf_drop.operation)
	|| is_set(rpf_extranet.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_mask.operation)
	|| is_set(rpf_safi.operation)
	|| is_set(rpf_table_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| is_set(source_address.operation)
	|| is_set(source_netmask.operation)
	|| is_set(spt_bit.operation)
	|| is_set(upstream_assert_timer.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-database";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MibDatabase' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assert_metric.is_set || is_set(assert_metric.operation)) leaf_name_data.push_back(assert_metric.get_name_leafdata());
    if (assert_metric_preference.is_set || is_set(assert_metric_preference.operation)) leaf_name_data.push_back(assert_metric_preference.get_name_leafdata());
    if (assert_rpt_bit.is_set || is_set(assert_rpt_bit.operation)) leaf_name_data.push_back(assert_rpt_bit.get_name_leafdata());
    if (bidirectional_route.is_set || is_set(bidirectional_route.operation)) leaf_name_data.push_back(bidirectional_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.operation)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.operation)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_mask.is_set || is_set(rpf_mask.operation)) leaf_name_data.push_back(rpf_mask.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.operation)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.operation)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_netmask.is_set || is_set(source_netmask.operation)) leaf_name_data.push_back(source_netmask.get_name_leafdata());
    if (spt_bit.is_set || is_set(spt_bit.operation)) leaf_name_data.push_back(spt_bit.get_name_leafdata());
    if (upstream_assert_timer.is_set || is_set(upstream_assert_timer.operation)) leaf_name_data.push_back(upstream_assert_timer.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "assert-metric")
    {
        assert_metric = value;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference = value;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit = value;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask = value;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-netmask")
    {
        source_netmask = value;
    }
    if(value_path == "spt-bit")
    {
        spt_bit = value;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "mib-database";
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "mib-database";
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "mib-database";
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-root"; yang_parent_name = "mib-database";
}

Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::~RpfRoot()
{
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfRoot' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpfs()
{
    yang_name = "group-map-match-rpfs"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::~GroupMapMatchRpfs()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_match_rpf.size(); index++)
    {
        if(group_map_match_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_match_rpf.size(); index++)
    {
        if(group_map_match_rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-rpfs";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapMatchRpfs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-match-rpf")
    {
        for(auto const & c : group_map_match_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf>();
        c->parent = this;
        group_map_match_rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_match_rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapMatchRpf()
    :
    group_address{YType::str, "group-address"},
    are_we_rp{YType::boolean, "are-we-rp"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor>())
{
    group_map_information->parent = this;

    rpf_neighbor->parent = this;

    yang_name = "group-map-match-rpf"; yang_parent_name = "group-map-match-rpfs";
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::~GroupMapMatchRpf()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::has_data() const
{
    return group_address.is_set
	|| are_we_rp.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(are_we_rp.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-rpf" <<"[group-address='" <<group_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapMatchRpf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (are_we_rp.is_set || is_set(are_we_rp.operation)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-match-rpf";
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-match-rpf";
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormats()
{
    yang_name = "neighbor-old-formats"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::~NeighborOldFormats()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::has_data() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::has_operation() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-formats";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborOldFormats' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-old-format")
    {
        for(auto const & c : neighbor_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat>();
        c->parent = this;
        neighbor_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborOldFormat()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "neighbor-old-format"; yang_parent_name = "neighbor-old-formats";
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::~NeighborOldFormat()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dr_priority.operation)
	|| is_set(expires.operation)
	|| is_set(expiry_timer.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bfd_state.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_dr_priority_capable.operation)
	|| is_set(is_ecmp_redirect_capable.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(is_this_neighbor_dr.operation)
	|| is_set(is_this_neighbor_us.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(override_interval.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(uptime.operation);
}

std::string Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-format";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborOldFormat' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.operation)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.operation)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.operation)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.operation)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.operation)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.operation)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_address_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor-old-format";
}

Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::IfrsSummary::IfrsSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-summary"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::IfrsSummary::~IfrsSummary()
{
}

bool Pim::Active::Vrfs::Vrf::IfrsSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Pim::Active::Vrfs::Vrf::IfrsSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Pim::Active::Vrfs::Vrf::IfrsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-summary";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::IfrsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsSummary' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::IfrsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::IfrsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::IfrsSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Pim::Active::Vrfs::Vrf::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Ranges::~Ranges()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ranges' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Ranges::Range::Range()
    :
    client{YType::enumeration, "client"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"}
    	,
    rp_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr>())
	,source_of_information(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation>())
{
    rp_address_xr->parent = this;

    source_of_information->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Pim::Active::Vrfs::Vrf::Ranges::Range::~Range()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::has_data() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return client.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(client_xr.operation)
	|| is_set(expires.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.operation)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-range")
    {
        for(auto const & c : group_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.push_back(c);
        return c;
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "range";
}

Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "range";
}

Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::GroupRange()
    :
    expires{YType::uint64, "expires"},
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix>())
	,source_of_information(std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;

    source_of_information->parent = this;

    yang_name = "group-range"; yang_parent_name = "range";
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::has_data() const
{
    return expires.is_set
	|| prefix_length.is_set
	|| uptime.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(operation)
	|| is_set(expires.operation)
	|| is_set(prefix_length.operation)
	|| is_set(uptime.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupRange' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-range";
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-range";
}

Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormats' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormat' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface-old-format";
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface-old-format";
}

Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::Bsr()
    :
    bsr_elections(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections>())
	,candidate_rps(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::CandidateRps>())
	,rp_caches(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches>())
{
    bsr_elections->parent = this;

    candidate_rps->parent = this;

    rp_caches->parent = this;

    yang_name = "bsr"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Bsr::~Bsr()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::has_data() const
{
    return (bsr_elections !=  nullptr && bsr_elections->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (rp_caches !=  nullptr && rp_caches->has_data());
}

bool Pim::Active::Vrfs::Vrf::Bsr::has_operation() const
{
    return is_set(operation)
	|| (bsr_elections !=  nullptr && bsr_elections->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation())
	|| (rp_caches !=  nullptr && rp_caches->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bsr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-elections")
    {
        if(bsr_elections == nullptr)
        {
            bsr_elections = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections>();
        }
        return bsr_elections;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    if(child_yang_name == "rp-caches")
    {
        if(rp_caches == nullptr)
        {
            rp_caches = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches>();
        }
        return rp_caches;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_elections != nullptr)
    {
        children["bsr-elections"] = bsr_elections;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    if(rp_caches != nullptr)
    {
        children["rp-caches"] = rp_caches;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCaches()
{
    yang_name = "rp-caches"; yang_parent_name = "bsr";
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::~RpCaches()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::has_data() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::has_operation() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::RpCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-caches";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::RpCaches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpCaches' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-cache")
    {
        for(auto const & c : rp_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache>();
        c->parent = this;
        rp_cache.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rp_cache)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::RpCaches::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::RpCache()
    :
    group_prefix{YType::str, "group-prefix"},
    candidate_rp_group_count{YType::uint32, "candidate-rp-group-count"},
    group_prefix_length{YType::uint32, "group-prefix-length"}
    	,
    candidate_rp_list(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList>())
	,group_prefix_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr>())
{
    candidate_rp_list->parent = this;

    group_prefix_xr->parent = this;

    yang_name = "rp-cache"; yang_parent_name = "rp-caches";
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::~RpCache()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::has_data() const
{
    return group_prefix.is_set
	|| candidate_rp_group_count.is_set
	|| group_prefix_length.is_set
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_data())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_prefix.operation)
	|| is_set(candidate_rp_group_count.operation)
	|| is_set(group_prefix_length.operation)
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_operation())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-cache" <<"[group-prefix='" <<group_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpCache' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_prefix.is_set || is_set(group_prefix.operation)) leaf_name_data.push_back(group_prefix.get_name_leafdata());
    if (candidate_rp_group_count.is_set || is_set(candidate_rp_group_count.operation)) leaf_name_data.push_back(candidate_rp_group_count.get_name_leafdata());
    if (group_prefix_length.is_set || is_set(group_prefix_length.operation)) leaf_name_data.push_back(group_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp-list")
    {
        if(candidate_rp_list == nullptr)
        {
            candidate_rp_list = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList>();
        }
        return candidate_rp_list;
    }

    if(child_yang_name == "group-prefix-xr")
    {
        if(group_prefix_xr == nullptr)
        {
            group_prefix_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr>();
        }
        return group_prefix_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_rp_list != nullptr)
    {
        children["candidate-rp-list"] = candidate_rp_list;
    }

    if(group_prefix_xr != nullptr)
    {
        children["group-prefix-xr"] = group_prefix_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-prefix")
    {
        group_prefix = value;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count = value;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::GroupPrefixXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-prefix-xr"; yang_parent_name = "rp-cache";
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::~GroupPrefixXr()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-prefix-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupPrefixXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::CandidateRpList()
{
    yang_name = "candidate-rp-list"; yang_parent_name = "rp-cache";
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::~CandidateRpList()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::has_data() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::has_operation() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-list";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpList' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pim-bsr-crp-bag")
    {
        for(auto const & c : pim_bsr_crp_bag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag>();
        c->parent = this;
        pim_bsr_crp_bag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pim_bsr_crp_bag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::PimBsrCrpBag()
    :
    candidate_rp_expires{YType::uint16, "candidate-rp-expires"},
    candidate_rp_holdtime{YType::uint16, "candidate-rp-holdtime"},
    candidate_rp_priority{YType::uint8, "candidate-rp-priority"},
    candidate_rp_up_time{YType::uint16, "candidate-rp-up-time"},
    protocol{YType::enumeration, "protocol"}
    	,
    candidate_rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>())
{
    candidate_rp_address->parent = this;

    yang_name = "pim-bsr-crp-bag"; yang_parent_name = "candidate-rp-list";
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::~PimBsrCrpBag()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_data() const
{
    return candidate_rp_expires.is_set
	|| candidate_rp_holdtime.is_set
	|| candidate_rp_priority.is_set
	|| candidate_rp_up_time.is_set
	|| protocol.is_set
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_operation() const
{
    return is_set(operation)
	|| is_set(candidate_rp_expires.operation)
	|| is_set(candidate_rp_holdtime.operation)
	|| is_set(candidate_rp_priority.operation)
	|| is_set(candidate_rp_up_time.operation)
	|| is_set(protocol.operation)
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-bsr-crp-bag";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PimBsrCrpBag' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_expires.is_set || is_set(candidate_rp_expires.operation)) leaf_name_data.push_back(candidate_rp_expires.get_name_leafdata());
    if (candidate_rp_holdtime.is_set || is_set(candidate_rp_holdtime.operation)) leaf_name_data.push_back(candidate_rp_holdtime.get_name_leafdata());
    if (candidate_rp_priority.is_set || is_set(candidate_rp_priority.operation)) leaf_name_data.push_back(candidate_rp_priority.get_name_leafdata());
    if (candidate_rp_up_time.is_set || is_set(candidate_rp_up_time.operation)) leaf_name_data.push_back(candidate_rp_up_time.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp-address")
    {
        if(candidate_rp_address == nullptr)
        {
            candidate_rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>();
        }
        return candidate_rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_rp_address != nullptr)
    {
        children["candidate-rp-address"] = candidate_rp_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires = value;
    }
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime = value;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority = value;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::CandidateRpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp-address"; yang_parent_name = "pim-bsr-crp-bag";
}

Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::~CandidateRpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRps' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    rp_address{YType::str, "rp-address"},
    acl_name{YType::str, "acl-name"},
    candidate_rp_advance_interval{YType::uint16, "candidate-rp-advance-interval"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    candidate_rp_scope{YType::int32, "candidate-rp-scope"},
    candidate_rp_uptime{YType::uint16, "candidate-rp-uptime"},
    crp_holdtime{YType::uint16, "crp-holdtime"},
    crp_priority{YType::uint8, "crp-priority"}
    	,
    candidate_rp(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_>())
{
    candidate_rp->parent = this;

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::has_data() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| acl_name.is_set
	|| candidate_rp_advance_interval.is_set
	|| candidate_rp_mode.is_set
	|| candidate_rp_scope.is_set
	|| candidate_rp_uptime.is_set
	|| crp_holdtime.is_set
	|| crp_priority.is_set
	|| (candidate_rp !=  nullptr && candidate_rp->has_data());
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(acl_name.operation)
	|| is_set(candidate_rp_advance_interval.operation)
	|| is_set(candidate_rp_mode.operation)
	|| is_set(candidate_rp_scope.operation)
	|| is_set(candidate_rp_uptime.operation)
	|| is_set(crp_holdtime.operation)
	|| is_set(crp_priority.operation)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_advance_interval.is_set || is_set(candidate_rp_advance_interval.operation)) leaf_name_data.push_back(candidate_rp_advance_interval.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.operation)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (candidate_rp_scope.is_set || is_set(candidate_rp_scope.operation)) leaf_name_data.push_back(candidate_rp_scope.get_name_leafdata());
    if (candidate_rp_uptime.is_set || is_set(candidate_rp_uptime.operation)) leaf_name_data.push_back(candidate_rp_uptime.get_name_leafdata());
    if (crp_holdtime.is_set || is_set(crp_holdtime.operation)) leaf_name_data.push_back(crp_holdtime.get_name_leafdata());
    if (crp_priority.is_set || is_set(crp_priority.operation)) leaf_name_data.push_back(crp_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp == nullptr)
        {
            candidate_rp = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_>();
        }
        return candidate_rp;
    }

    if(child_yang_name == "crp-access")
    {
        for(auto const & c : crp_access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess>();
        c->parent = this;
        crp_access.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_rp != nullptr)
    {
        children["candidate-rp"] = candidate_rp;
    }

    for (auto const & c : crp_access)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval = value;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope = value;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime = value;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime = value;
    }
    if(value_path == "crp-priority")
    {
        crp_priority = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::CandidateRp_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rp";
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::~CandidateRp_()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::CrpAccess()
    :
    acl_name{YType::str, "acl-name"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"}
{
    yang_name = "crp-access"; yang_parent_name = "candidate-rp";
}

Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::~CrpAccess()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::has_data() const
{
    return acl_name.is_set
	|| candidate_rp_mode.is_set;
}

bool Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_name.operation)
	|| is_set(candidate_rp_mode.operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crp-access";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrpAccess' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.operation)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.operation)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElections()
{
    yang_name = "bsr-elections"; yang_parent_name = "bsr";
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::~BsrElections()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::has_data() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::has_operation() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::BsrElections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-elections";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::BsrElections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrElections' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-election")
    {
        for(auto const & c : bsr_election)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection>();
        c->parent = this;
        bsr_election.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bsr_election)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::BsrElections::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrElection()
    :
    pim_scope{YType::int32, "pim-scope"},
    bootstrap_timeout{YType::uint16, "bootstrap-timeout"},
    bsr_election_state{YType::uint32, "bsr-election-state"},
    bsr_mask_length{YType::uint8, "bsr-mask-length"},
    bsr_priority{YType::uint8, "bsr-priority"},
    bsr_scope{YType::uint16, "bsr-scope"},
    bsr_up_time{YType::uint16, "bsr-up-time"},
    candidate_bsr_flag{YType::boolean, "candidate-bsr-flag"},
    candidate_bsr_mask_length{YType::uint8, "candidate-bsr-mask-length"},
    candidate_bsr_priority{YType::uint8, "candidate-bsr-priority"},
    candidate_bsr_state{YType::uint32, "candidate-bsr-state"}
    	,
    bsr_address(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress>())
	,candidate_bsr_address(std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress>())
{
    bsr_address->parent = this;

    candidate_bsr_address->parent = this;

    yang_name = "bsr-election"; yang_parent_name = "bsr-elections";
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::~BsrElection()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::has_data() const
{
    return pim_scope.is_set
	|| bootstrap_timeout.is_set
	|| bsr_election_state.is_set
	|| bsr_mask_length.is_set
	|| bsr_priority.is_set
	|| bsr_scope.is_set
	|| bsr_up_time.is_set
	|| candidate_bsr_flag.is_set
	|| candidate_bsr_mask_length.is_set
	|| candidate_bsr_priority.is_set
	|| candidate_bsr_state.is_set
	|| (bsr_address !=  nullptr && bsr_address->has_data())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::has_operation() const
{
    return is_set(operation)
	|| is_set(pim_scope.operation)
	|| is_set(bootstrap_timeout.operation)
	|| is_set(bsr_election_state.operation)
	|| is_set(bsr_mask_length.operation)
	|| is_set(bsr_priority.operation)
	|| is_set(bsr_scope.operation)
	|| is_set(bsr_up_time.operation)
	|| is_set(candidate_bsr_flag.operation)
	|| is_set(candidate_bsr_mask_length.operation)
	|| is_set(candidate_bsr_priority.operation)
	|| is_set(candidate_bsr_state.operation)
	|| (bsr_address !=  nullptr && bsr_address->has_operation())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-election" <<"[pim-scope='" <<pim_scope <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrElection' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_scope.is_set || is_set(pim_scope.operation)) leaf_name_data.push_back(pim_scope.get_name_leafdata());
    if (bootstrap_timeout.is_set || is_set(bootstrap_timeout.operation)) leaf_name_data.push_back(bootstrap_timeout.get_name_leafdata());
    if (bsr_election_state.is_set || is_set(bsr_election_state.operation)) leaf_name_data.push_back(bsr_election_state.get_name_leafdata());
    if (bsr_mask_length.is_set || is_set(bsr_mask_length.operation)) leaf_name_data.push_back(bsr_mask_length.get_name_leafdata());
    if (bsr_priority.is_set || is_set(bsr_priority.operation)) leaf_name_data.push_back(bsr_priority.get_name_leafdata());
    if (bsr_scope.is_set || is_set(bsr_scope.operation)) leaf_name_data.push_back(bsr_scope.get_name_leafdata());
    if (bsr_up_time.is_set || is_set(bsr_up_time.operation)) leaf_name_data.push_back(bsr_up_time.get_name_leafdata());
    if (candidate_bsr_flag.is_set || is_set(candidate_bsr_flag.operation)) leaf_name_data.push_back(candidate_bsr_flag.get_name_leafdata());
    if (candidate_bsr_mask_length.is_set || is_set(candidate_bsr_mask_length.operation)) leaf_name_data.push_back(candidate_bsr_mask_length.get_name_leafdata());
    if (candidate_bsr_priority.is_set || is_set(candidate_bsr_priority.operation)) leaf_name_data.push_back(candidate_bsr_priority.get_name_leafdata());
    if (candidate_bsr_state.is_set || is_set(candidate_bsr_state.operation)) leaf_name_data.push_back(candidate_bsr_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-address")
    {
        if(bsr_address == nullptr)
        {
            bsr_address = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress>();
        }
        return bsr_address;
    }

    if(child_yang_name == "candidate-bsr-address")
    {
        if(candidate_bsr_address == nullptr)
        {
            candidate_bsr_address = std::make_shared<Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress>();
        }
        return candidate_bsr_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_address != nullptr)
    {
        children["bsr-address"] = bsr_address;
    }

    if(candidate_bsr_address != nullptr)
    {
        children["candidate-bsr-address"] = candidate_bsr_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pim-scope")
    {
        pim_scope = value;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout = value;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state = value;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length = value;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority = value;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope = value;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time = value;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag = value;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length = value;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority = value;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::BsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::~BsrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::CandidateBsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::~CandidateBsrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateBsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics>())
	,route_policy_tests(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;

    route_policy_tests->parent = this;

    yang_name = "route-policy"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::has_data() const
{
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::has_operation() const
{
    return is_set(operation)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicy' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics == nullptr)
        {
            route_policy_statistics = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics>();
        }
        return route_policy_statistics;
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests == nullptr)
        {
            route_policy_tests = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests>();
        }
        return route_policy_tests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_policy_statistics != nullptr)
    {
        children["route-policy-statistics"] = route_policy_statistics;
    }

    if(route_policy_tests != nullptr)
    {
        children["route-policy-tests"] = route_policy_tests;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    any_table{YType::uint32, "any-table"},
    default_table{YType::uint32, "default-table"},
    drop{YType::uint32, "drop"},
    pass{YType::uint32, "pass"},
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"}
{
    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy";
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    return any_table.is_set
	|| default_table.is_set
	|| drop.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| requests.is_set;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(any_table.operation)
	|| is_set(default_table.operation)
	|| is_set(drop.operation)
	|| is_set(pass.operation)
	|| is_set(policy_name.operation)
	|| is_set(requests.operation);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyStatistics' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_table.is_set || is_set(any_table.operation)) leaf_name_data.push_back(any_table.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.operation)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (pass.is_set || is_set(pass.operation)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-table")
    {
        any_table = value;
    }
    if(value_path == "default-table")
    {
        default_table = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "pass")
    {
        pass = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
{
    yang_name = "route-policy-tests"; yang_parent_name = "route-policy";
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_data() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyTests' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-test")
    {
        for(auto const & c : route_policy_test)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_policy_test)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    afi{YType::uint32, "afi"},
    default_table{YType::boolean, "default-table"},
    ext_comm{YType::str, "ext-comm"},
    extended_community_rt{YType::str, "extended-community-rt"},
    group_address{YType::str, "group-address"},
    pass{YType::boolean, "pass"},
    policy_name{YType::str, "policy-name"},
    safi{YType::uint32, "safi"},
    source_address{YType::str, "source-address"},
    table_active{YType::boolean, "table-active"},
    table_exists{YType::boolean, "table-exists"},
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
{
    group_address_xr->parent = this;

    source_address_xr->parent = this;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests";
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    return afi.is_set
	|| default_table.is_set
	|| ext_comm.is_set
	|| extended_community_rt.is_set
	|| group_address.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| safi.is_set
	|| source_address.is_set
	|| table_active.is_set
	|| table_exists.is_set
	|| table_name.is_set
	|| vrf_name.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(default_table.operation)
	|| is_set(ext_comm.operation)
	|| is_set(extended_community_rt.operation)
	|| is_set(group_address.operation)
	|| is_set(pass.operation)
	|| is_set(policy_name.operation)
	|| is_set(safi.operation)
	|| is_set(source_address.operation)
	|| is_set(table_active.operation)
	|| is_set(table_exists.operation)
	|| is_set(table_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyTest' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.operation)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.operation)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.operation)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (pass.is_set || is_set(pass.operation)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.operation)) leaf_name_data.push_back(table_active.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.operation)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "default-table")
    {
        default_table = value;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "pass")
    {
        pass = value;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "table-active")
    {
        table_active = value;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    rump_enabled{YType::boolean, "rump-enabled"}
{
    yang_name = "rpf-summary"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::RpfSummary::~RpfSummary()
{
}

bool Pim::Active::Vrfs::Vrf::RpfSummary::has_data() const
{
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_isis_mtr_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_mbgp_configured.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| is_ospf_te_configured.is_set
	|| is_rib_convergence.is_set
	|| mo_frr_configured.is_set
	|| rib_convergence_time_left.is_set
	|| rib_convergence_timeout.is_set
	|| rib_mo_frr_configured.is_set
	|| rpf_registrations.is_set
	|| rump_enabled.is_set;
}

bool Pim::Active::Vrfs::Vrf::RpfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(default_safi.operation)
	|| is_set(default_table_name.operation)
	|| is_set(is_isis_mtr_configured.operation)
	|| is_set(is_isis_te_configured.operation)
	|| is_set(is_mbgp_configured.operation)
	|| is_set(is_multipath_enabled.operation)
	|| is_set(is_multipath_interface_hash_enabled.operation)
	|| is_set(is_multipath_source_hash_enabled.operation)
	|| is_set(is_multipath_source_next_hop_hash_enabled.operation)
	|| is_set(is_ospf_te_configured.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(mo_frr_configured.operation)
	|| is_set(rib_convergence_time_left.operation)
	|| is_set(rib_convergence_timeout.operation)
	|| is_set(rib_mo_frr_configured.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(rump_enabled.operation);
}

std::string Pim::Active::Vrfs::Vrf::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::RpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfSummary' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.operation)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.operation)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.operation)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.operation)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.operation)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.operation)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.operation)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.operation)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.operation)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.operation)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.operation)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.operation)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.operation)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::RpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::RpfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
    }
}

Pim::Active::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(are_we_dr.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(configured_override_interval.operation)
	|| is_set(configured_propagation_delay.operation)
	|| is_set(dr_priority.operation)
	|| is_set(external_neighbor_count.operation)
	|| is_set(generation_id.operation)
	|| is_set(hello_expiry.operation)
	|| is_set(hello_interval.operation)
	|| is_set(idb_acl_name.operation)
	|| is_set(idb_acl_provided.operation)
	|| is_set(idb_current_count.operation)
	|| is_set(idb_max_count.operation)
	|| is_set(idb_oor_enabled.operation)
	|| is_set(idb_threshold_count.operation)
	|| is_set(interface_address_mask.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_batch_asserts_capable.operation)
	|| is_set(is_bidirectional_capable.operation)
	|| is_set(is_enabled.operation)
	|| is_set(is_proxy_capable.operation)
	|| is_set(join_prune_interval.operation)
	|| is_set(neighbor_count.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(override_interval.operation)
	|| is_set(passive_interface.operation)
	|| is_set(propagation_delay.operation)
	|| is_set(prune_delay_enabled.operation)
	|| is_set(virtual_interface.operation)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.operation)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.operation)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.operation)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.operation)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.operation)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.operation)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.operation)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.operation)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.operation)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.operation)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.operation)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.operation)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.operation)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.operation)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.operation)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.operation)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.operation)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.operation)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.operation)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.operation)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.operation)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.operation)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.operation)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.operation)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.operation)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
    }
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface";
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface";
}

Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnels()
{
    yang_name = "net-io-tunnels"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::has_data() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NetIoTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetIoTunnels' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net-io-tunnel")
    {
        for(auto const & c : net_io_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : net_io_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::NetIoTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;

    rp_address->parent = this;

    source_address->parent = this;

    source_address_netio->parent = this;

    yang_name = "net-io-tunnel"; yang_parent_name = "net-io-tunnels";
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::~NetIoTunnel()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetIoTunnel' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-netio"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-netio"; yang_parent_name = "net-io-tunnel";
}

Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfStates()
{
    yang_name = "bidir-df-states"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::BidirDfStates::~BidirDfStates()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfStates::has_data() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::BidirDfStates::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_state.size(); index++)
    {
        if(bidir_df_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::BidirDfStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-states";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirDfStates' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-state")
    {
        for(auto const & c : bidir_df_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState>();
        c->parent = this;
        bidir_df_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_df_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfStates::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::BidirDfState()
    :
    election_state{YType::str, "election-state"},
    interface_name{YType::str, "interface-name"},
    our_metric{YType::uint32, "our-metric"},
    our_metric_preference{YType::uint32, "our-metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    time_nano_seconds{YType::uint64, "time-nano-seconds"},
    time_seconds{YType::uint64, "time-seconds"}
    	,
    rp_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr>())
{
    rp_address_xr->parent = this;

    yang_name = "bidir-df-state"; yang_parent_name = "bidir-df-states";
}

Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::~BidirDfState()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::has_data() const
{
    return election_state.is_set
	|| interface_name.is_set
	|| our_metric.is_set
	|| our_metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| time_nano_seconds.is_set
	|| time_seconds.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::has_operation() const
{
    return is_set(operation)
	|| is_set(election_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(our_metric.operation)
	|| is_set(our_metric_preference.operation)
	|| is_set(pim_interface_name.operation)
	|| is_set(rp_address.operation)
	|| is_set(time_nano_seconds.operation)
	|| is_set(time_seconds.operation)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-state";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirDfState' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (election_state.is_set || is_set(election_state.operation)) leaf_name_data.push_back(election_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (our_metric.is_set || is_set(our_metric.operation)) leaf_name_data.push_back(our_metric.get_name_leafdata());
    if (our_metric_preference.is_set || is_set(our_metric_preference.operation)) leaf_name_data.push_back(our_metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.operation)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (time_nano_seconds.is_set || is_set(time_nano_seconds.operation)) leaf_name_data.push_back(time_nano_seconds.get_name_leafdata());
    if (time_seconds.is_set || is_set(time_seconds.operation)) leaf_name_data.push_back(time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr>();
        }
        return rp_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "election-state")
    {
        election_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "our-metric")
    {
        our_metric = value;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference = value;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds = value;
    }
    if(value_path == "time-seconds")
    {
        time_seconds = value;
    }
}

Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-state";
}

Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfStates::BidirDfState::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topologies()
{
    yang_name = "topologies"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Topologies::~Topologies()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::has_data() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.size(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topologies' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        for(auto const & c : topology)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology>();
        c->parent = this;
        topology.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::Topology()
    :
    alive{YType::int32, "alive"},
    anycast_rp_match{YType::boolean, "anycast-rp-match"},
    anycast_rp_route_target{YType::str, "anycast-rp-route-target"},
    assume_alive{YType::boolean, "assume-alive"},
    bgp_join{YType::boolean, "bgp-join"},
    bgpjp_time{YType::uint64, "bgpjp-time"},
    connected{YType::boolean, "connected"},
    customer_routing_type{YType::int32, "customer-routing-type"},
    dont_check_connected{YType::boolean, "dont-check-connected"},
    expiry{YType::uint64, "expiry"},
    extranet_route{YType::boolean, "extranet-route"},
    group_address{YType::str, "group-address"},
    inherit_alive{YType::boolean, "inherit-alive"},
    inherit_spt{YType::boolean, "inherit-spt"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    jp_status{YType::int32, "jp-status"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    limit_reached{YType::boolean, "limit-reached"},
    low_memory{YType::boolean, "low-memory"},
    mofrr_active{YType::boolean, "mofrr-active"},
    mofrr_backup{YType::boolean, "mofrr-backup"},
    mofrr_enabled{YType::boolean, "mofrr-enabled"},
    mofrr_primary{YType::boolean, "mofrr-primary"},
    probe_alive{YType::boolean, "probe-alive"},
    protocol{YType::enumeration, "protocol"},
    proxy{YType::boolean, "proxy"},
    really_alive{YType::boolean, "really-alive"},
    register_received{YType::boolean, "register-received"},
    register_received_timer{YType::int32, "register-received-timer"},
    remote_source{YType::boolean, "remote-source"},
    rib_mo_frr_enabled{YType::boolean, "rib-mo-frr-enabled"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_proxy_enabled{YType::boolean, "rpf-proxy-enabled"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    rpt{YType::int32, "rpt"},
    rpt_xr{YType::boolean, "rpt-xr"},
    sa_joined{YType::boolean, "sa-joined"},
    sa_received{YType::boolean, "sa-received"},
    sa_sent{YType::boolean, "sa-sent"},
    secondary_rpf_interface_name{YType::str, "secondary-rpf-interface-name"},
    sending_null_registers{YType::boolean, "sending-null-registers"},
    sending_registers{YType::boolean, "sending-registers"},
    signal_sources{YType::boolean, "signal-sources"},
    source_address{YType::str, "source-address"},
    spt{YType::boolean, "spt"},
    suppress_registers{YType::int32, "suppress-registers"},
    uptime{YType::uint64, "uptime"},
    vxlan{YType::boolean, "vxlan"},
    wildcard{YType::boolean, "wildcard"}
    	,
    group_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr>())
	,orig_src_address(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress>())
	,proxy_address(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot>())
	,secondary_rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor>())
	,source_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr>())
{
    group_address_xr->parent = this;

    orig_src_address->parent = this;

    proxy_address->parent = this;

    rp_address->parent = this;

    rpf_neighbor->parent = this;

    rpf_root->parent = this;

    secondary_rpf_neighbor->parent = this;

    source_address_xr->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::~Topology()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::has_data() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_data())
            return true;
    }
    return alive.is_set
	|| anycast_rp_match.is_set
	|| anycast_rp_route_target.is_set
	|| assume_alive.is_set
	|| bgp_join.is_set
	|| bgpjp_time.is_set
	|| connected.is_set
	|| customer_routing_type.is_set
	|| dont_check_connected.is_set
	|| expiry.is_set
	|| extranet_route.is_set
	|| group_address.is_set
	|| inherit_alive.is_set
	|| inherit_spt.is_set
	|| is_via_lsm.is_set
	|| jp_status.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| limit_reached.is_set
	|| low_memory.is_set
	|| mofrr_active.is_set
	|| mofrr_backup.is_set
	|| mofrr_enabled.is_set
	|| mofrr_primary.is_set
	|| probe_alive.is_set
	|| protocol.is_set
	|| proxy.is_set
	|| really_alive.is_set
	|| register_received.is_set
	|| register_received_timer.is_set
	|| remote_source.is_set
	|| rib_mo_frr_enabled.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_proxy_enabled.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| rpt.is_set
	|| rpt_xr.is_set
	|| sa_joined.is_set
	|| sa_received.is_set
	|| sa_sent.is_set
	|| secondary_rpf_interface_name.is_set
	|| sending_null_registers.is_set
	|| sending_registers.is_set
	|| signal_sources.is_set
	|| source_address.is_set
	|| spt.is_set
	|| suppress_registers.is_set
	|| uptime.is_set
	|| vxlan.is_set
	|| wildcard.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (orig_src_address !=  nullptr && orig_src_address->has_data())
	|| (proxy_address !=  nullptr && proxy_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<outgoing_interface.size(); index++)
    {
        if(outgoing_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(alive.operation)
	|| is_set(anycast_rp_match.operation)
	|| is_set(anycast_rp_route_target.operation)
	|| is_set(assume_alive.operation)
	|| is_set(bgp_join.operation)
	|| is_set(bgpjp_time.operation)
	|| is_set(connected.operation)
	|| is_set(customer_routing_type.operation)
	|| is_set(dont_check_connected.operation)
	|| is_set(expiry.operation)
	|| is_set(extranet_route.operation)
	|| is_set(group_address.operation)
	|| is_set(inherit_alive.operation)
	|| is_set(inherit_spt.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(jp_status.operation)
	|| is_set(jp_timer.operation)
	|| is_set(last_hop.operation)
	|| is_set(limit_reached.operation)
	|| is_set(low_memory.operation)
	|| is_set(mofrr_active.operation)
	|| is_set(mofrr_backup.operation)
	|| is_set(mofrr_enabled.operation)
	|| is_set(mofrr_primary.operation)
	|| is_set(probe_alive.operation)
	|| is_set(protocol.operation)
	|| is_set(proxy.operation)
	|| is_set(really_alive.operation)
	|| is_set(register_received.operation)
	|| is_set(register_received_timer.operation)
	|| is_set(remote_source.operation)
	|| is_set(rib_mo_frr_enabled.operation)
	|| is_set(rpf_drop.operation)
	|| is_set(rpf_extranet.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_proxy_enabled.operation)
	|| is_set(rpf_safi.operation)
	|| is_set(rpf_table_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| is_set(rpt.operation)
	|| is_set(rpt_xr.operation)
	|| is_set(sa_joined.operation)
	|| is_set(sa_received.operation)
	|| is_set(sa_sent.operation)
	|| is_set(secondary_rpf_interface_name.operation)
	|| is_set(sending_null_registers.operation)
	|| is_set(sending_registers.operation)
	|| is_set(signal_sources.operation)
	|| is_set(source_address.operation)
	|| is_set(spt.operation)
	|| is_set(suppress_registers.operation)
	|| is_set(uptime.operation)
	|| is_set(vxlan.operation)
	|| is_set(wildcard.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (orig_src_address !=  nullptr && orig_src_address->has_operation())
	|| (proxy_address !=  nullptr && proxy_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Topology' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alive.is_set || is_set(alive.operation)) leaf_name_data.push_back(alive.get_name_leafdata());
    if (anycast_rp_match.is_set || is_set(anycast_rp_match.operation)) leaf_name_data.push_back(anycast_rp_match.get_name_leafdata());
    if (anycast_rp_route_target.is_set || is_set(anycast_rp_route_target.operation)) leaf_name_data.push_back(anycast_rp_route_target.get_name_leafdata());
    if (assume_alive.is_set || is_set(assume_alive.operation)) leaf_name_data.push_back(assume_alive.get_name_leafdata());
    if (bgp_join.is_set || is_set(bgp_join.operation)) leaf_name_data.push_back(bgp_join.get_name_leafdata());
    if (bgpjp_time.is_set || is_set(bgpjp_time.operation)) leaf_name_data.push_back(bgpjp_time.get_name_leafdata());
    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (customer_routing_type.is_set || is_set(customer_routing_type.operation)) leaf_name_data.push_back(customer_routing_type.get_name_leafdata());
    if (dont_check_connected.is_set || is_set(dont_check_connected.operation)) leaf_name_data.push_back(dont_check_connected.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_route.is_set || is_set(extranet_route.operation)) leaf_name_data.push_back(extranet_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (inherit_alive.is_set || is_set(inherit_alive.operation)) leaf_name_data.push_back(inherit_alive.get_name_leafdata());
    if (inherit_spt.is_set || is_set(inherit_spt.operation)) leaf_name_data.push_back(inherit_spt.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (jp_status.is_set || is_set(jp_status.operation)) leaf_name_data.push_back(jp_status.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.operation)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.operation)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (limit_reached.is_set || is_set(limit_reached.operation)) leaf_name_data.push_back(limit_reached.get_name_leafdata());
    if (low_memory.is_set || is_set(low_memory.operation)) leaf_name_data.push_back(low_memory.get_name_leafdata());
    if (mofrr_active.is_set || is_set(mofrr_active.operation)) leaf_name_data.push_back(mofrr_active.get_name_leafdata());
    if (mofrr_backup.is_set || is_set(mofrr_backup.operation)) leaf_name_data.push_back(mofrr_backup.get_name_leafdata());
    if (mofrr_enabled.is_set || is_set(mofrr_enabled.operation)) leaf_name_data.push_back(mofrr_enabled.get_name_leafdata());
    if (mofrr_primary.is_set || is_set(mofrr_primary.operation)) leaf_name_data.push_back(mofrr_primary.get_name_leafdata());
    if (probe_alive.is_set || is_set(probe_alive.operation)) leaf_name_data.push_back(probe_alive.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.operation)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (really_alive.is_set || is_set(really_alive.operation)) leaf_name_data.push_back(really_alive.get_name_leafdata());
    if (register_received.is_set || is_set(register_received.operation)) leaf_name_data.push_back(register_received.get_name_leafdata());
    if (register_received_timer.is_set || is_set(register_received_timer.operation)) leaf_name_data.push_back(register_received_timer.get_name_leafdata());
    if (remote_source.is_set || is_set(remote_source.operation)) leaf_name_data.push_back(remote_source.get_name_leafdata());
    if (rib_mo_frr_enabled.is_set || is_set(rib_mo_frr_enabled.operation)) leaf_name_data.push_back(rib_mo_frr_enabled.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.operation)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.operation)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_proxy_enabled.is_set || is_set(rpf_proxy_enabled.operation)) leaf_name_data.push_back(rpf_proxy_enabled.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.operation)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.operation)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (rpt.is_set || is_set(rpt.operation)) leaf_name_data.push_back(rpt.get_name_leafdata());
    if (rpt_xr.is_set || is_set(rpt_xr.operation)) leaf_name_data.push_back(rpt_xr.get_name_leafdata());
    if (sa_joined.is_set || is_set(sa_joined.operation)) leaf_name_data.push_back(sa_joined.get_name_leafdata());
    if (sa_received.is_set || is_set(sa_received.operation)) leaf_name_data.push_back(sa_received.get_name_leafdata());
    if (sa_sent.is_set || is_set(sa_sent.operation)) leaf_name_data.push_back(sa_sent.get_name_leafdata());
    if (secondary_rpf_interface_name.is_set || is_set(secondary_rpf_interface_name.operation)) leaf_name_data.push_back(secondary_rpf_interface_name.get_name_leafdata());
    if (sending_null_registers.is_set || is_set(sending_null_registers.operation)) leaf_name_data.push_back(sending_null_registers.get_name_leafdata());
    if (sending_registers.is_set || is_set(sending_registers.operation)) leaf_name_data.push_back(sending_registers.get_name_leafdata());
    if (signal_sources.is_set || is_set(signal_sources.operation)) leaf_name_data.push_back(signal_sources.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (spt.is_set || is_set(spt.operation)) leaf_name_data.push_back(spt.get_name_leafdata());
    if (suppress_registers.is_set || is_set(suppress_registers.operation)) leaf_name_data.push_back(suppress_registers.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.operation)) leaf_name_data.push_back(vxlan.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.operation)) leaf_name_data.push_back(wildcard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "orig-src-address")
    {
        if(orig_src_address == nullptr)
        {
            orig_src_address = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress>();
        }
        return orig_src_address;
    }

    if(child_yang_name == "outgoing-interface")
    {
        for(auto const & c : outgoing_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface>();
        c->parent = this;
        outgoing_interface.push_back(c);
        return c;
    }

    if(child_yang_name == "proxy-address")
    {
        if(proxy_address == nullptr)
        {
            proxy_address = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress>();
        }
        return proxy_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "secondary-rpf-neighbor")
    {
        if(secondary_rpf_neighbor == nullptr)
        {
            secondary_rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor>();
        }
        return secondary_rpf_neighbor;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(orig_src_address != nullptr)
    {
        children["orig-src-address"] = orig_src_address;
    }

    for (auto const & c : outgoing_interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(proxy_address != nullptr)
    {
        children["proxy-address"] = proxy_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(secondary_rpf_neighbor != nullptr)
    {
        children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alive")
    {
        alive = value;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match = value;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target = value;
    }
    if(value_path == "assume-alive")
    {
        assume_alive = value;
    }
    if(value_path == "bgp-join")
    {
        bgp_join = value;
    }
    if(value_path == "bgpjp-time")
    {
        bgpjp_time = value;
    }
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type = value;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected = value;
    }
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "extranet-route")
    {
        extranet_route = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive = value;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "jp-status")
    {
        jp_status = value;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
    }
    if(value_path == "limit-reached")
    {
        limit_reached = value;
    }
    if(value_path == "low-memory")
    {
        low_memory = value;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active = value;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup = value;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled = value;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary = value;
    }
    if(value_path == "probe-alive")
    {
        probe_alive = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "proxy")
    {
        proxy = value;
    }
    if(value_path == "really-alive")
    {
        really_alive = value;
    }
    if(value_path == "register-received")
    {
        register_received = value;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer = value;
    }
    if(value_path == "remote-source")
    {
        remote_source = value;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled = value;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled = value;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
    if(value_path == "rpt")
    {
        rpt = value;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr = value;
    }
    if(value_path == "sa-joined")
    {
        sa_joined = value;
    }
    if(value_path == "sa-received")
    {
        sa_received = value;
    }
    if(value_path == "sa-sent")
    {
        sa_sent = value;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name = value;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers = value;
    }
    if(value_path == "sending-registers")
    {
        sending_registers = value;
    }
    if(value_path == "signal-sources")
    {
        signal_sources = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "spt")
    {
        spt = value;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::SourceAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::SecondaryRpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-rpf-neighbor"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::~SecondaryRpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryRpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::SecondaryRpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-root"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::~RpfRoot()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfRoot' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::RpfRoot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::ProxyAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "proxy-address"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::~ProxyAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProxyAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::ProxyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::OrigSrcAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "orig-src-address"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::~OrigSrcAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-src-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OrigSrcAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OrigSrcAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::OutgoingInterface()
    :
    admin_boundary{YType::boolean, "admin-boundary"},
    assert_timer{YType::int32, "assert-timer"},
    bgp_c_mcast_join{YType::boolean, "bgp-c-mcast-join"},
    bgp_c_mcast_prune_delay_timer{YType::uint64, "bgp-c-mcast-prune-delay-timer"},
    data_mdt_join{YType::boolean, "data-mdt-join"},
    expiry{YType::uint64, "expiry"},
    extranet_interface{YType::boolean, "extranet-interface"},
    forwarding_state{YType::int32, "forwarding-state"},
    igmp_membership{YType::boolean, "igmp-membership"},
    immediate_state{YType::int32, "immediate-state"},
    interface_name{YType::str, "interface-name"},
    internal_interest_info{YType::int32, "internal-interest-info"},
    jp_state{YType::int32, "jp-state"},
    jp_timer{YType::int32, "jp-timer"},
    last_hop{YType::boolean, "last-hop"},
    local_mdt_join{YType::boolean, "local-mdt-join"},
    local_members{YType::int32, "local-members"},
    mdt_safi_join{YType::boolean, "mdt-safi-join"},
    mldp_inband_mdt{YType::boolean, "mldp-inband-mdt"},
    mldp_stale{YType::boolean, "mldp-stale"},
    mvp_nv6_safi_join{YType::boolean, "mvp-nv6-safi-join"},
    mvpn_safi_join{YType::boolean, "mvpn-safi-join"},
    sa_prune{YType::boolean, "sa-prune"},
    uptime{YType::uint64, "uptime"},
    vrf_name{YType::str, "vrf-name"}
    	,
    assert_winner(std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner>())
{
    assert_winner->parent = this;

    yang_name = "outgoing-interface"; yang_parent_name = "topology";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::~OutgoingInterface()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_data() const
{
    return admin_boundary.is_set
	|| assert_timer.is_set
	|| bgp_c_mcast_join.is_set
	|| bgp_c_mcast_prune_delay_timer.is_set
	|| data_mdt_join.is_set
	|| expiry.is_set
	|| extranet_interface.is_set
	|| forwarding_state.is_set
	|| igmp_membership.is_set
	|| immediate_state.is_set
	|| interface_name.is_set
	|| internal_interest_info.is_set
	|| jp_state.is_set
	|| jp_timer.is_set
	|| last_hop.is_set
	|| local_mdt_join.is_set
	|| local_members.is_set
	|| mdt_safi_join.is_set
	|| mldp_inband_mdt.is_set
	|| mldp_stale.is_set
	|| mvp_nv6_safi_join.is_set
	|| mvpn_safi_join.is_set
	|| sa_prune.is_set
	|| uptime.is_set
	|| vrf_name.is_set
	|| (assert_winner !=  nullptr && assert_winner->has_data());
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_boundary.operation)
	|| is_set(assert_timer.operation)
	|| is_set(bgp_c_mcast_join.operation)
	|| is_set(bgp_c_mcast_prune_delay_timer.operation)
	|| is_set(data_mdt_join.operation)
	|| is_set(expiry.operation)
	|| is_set(extranet_interface.operation)
	|| is_set(forwarding_state.operation)
	|| is_set(igmp_membership.operation)
	|| is_set(immediate_state.operation)
	|| is_set(interface_name.operation)
	|| is_set(internal_interest_info.operation)
	|| is_set(jp_state.operation)
	|| is_set(jp_timer.operation)
	|| is_set(last_hop.operation)
	|| is_set(local_mdt_join.operation)
	|| is_set(local_members.operation)
	|| is_set(mdt_safi_join.operation)
	|| is_set(mldp_inband_mdt.operation)
	|| is_set(mldp_stale.operation)
	|| is_set(mvp_nv6_safi_join.operation)
	|| is_set(mvpn_safi_join.operation)
	|| is_set(sa_prune.operation)
	|| is_set(uptime.operation)
	|| is_set(vrf_name.operation)
	|| (assert_winner !=  nullptr && assert_winner->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingInterface' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_boundary.is_set || is_set(admin_boundary.operation)) leaf_name_data.push_back(admin_boundary.get_name_leafdata());
    if (assert_timer.is_set || is_set(assert_timer.operation)) leaf_name_data.push_back(assert_timer.get_name_leafdata());
    if (bgp_c_mcast_join.is_set || is_set(bgp_c_mcast_join.operation)) leaf_name_data.push_back(bgp_c_mcast_join.get_name_leafdata());
    if (bgp_c_mcast_prune_delay_timer.is_set || is_set(bgp_c_mcast_prune_delay_timer.operation)) leaf_name_data.push_back(bgp_c_mcast_prune_delay_timer.get_name_leafdata());
    if (data_mdt_join.is_set || is_set(data_mdt_join.operation)) leaf_name_data.push_back(data_mdt_join.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (extranet_interface.is_set || is_set(extranet_interface.operation)) leaf_name_data.push_back(extranet_interface.get_name_leafdata());
    if (forwarding_state.is_set || is_set(forwarding_state.operation)) leaf_name_data.push_back(forwarding_state.get_name_leafdata());
    if (igmp_membership.is_set || is_set(igmp_membership.operation)) leaf_name_data.push_back(igmp_membership.get_name_leafdata());
    if (immediate_state.is_set || is_set(immediate_state.operation)) leaf_name_data.push_back(immediate_state.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (internal_interest_info.is_set || is_set(internal_interest_info.operation)) leaf_name_data.push_back(internal_interest_info.get_name_leafdata());
    if (jp_state.is_set || is_set(jp_state.operation)) leaf_name_data.push_back(jp_state.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.operation)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.operation)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (local_mdt_join.is_set || is_set(local_mdt_join.operation)) leaf_name_data.push_back(local_mdt_join.get_name_leafdata());
    if (local_members.is_set || is_set(local_members.operation)) leaf_name_data.push_back(local_members.get_name_leafdata());
    if (mdt_safi_join.is_set || is_set(mdt_safi_join.operation)) leaf_name_data.push_back(mdt_safi_join.get_name_leafdata());
    if (mldp_inband_mdt.is_set || is_set(mldp_inband_mdt.operation)) leaf_name_data.push_back(mldp_inband_mdt.get_name_leafdata());
    if (mldp_stale.is_set || is_set(mldp_stale.operation)) leaf_name_data.push_back(mldp_stale.get_name_leafdata());
    if (mvp_nv6_safi_join.is_set || is_set(mvp_nv6_safi_join.operation)) leaf_name_data.push_back(mvp_nv6_safi_join.get_name_leafdata());
    if (mvpn_safi_join.is_set || is_set(mvpn_safi_join.operation)) leaf_name_data.push_back(mvpn_safi_join.get_name_leafdata());
    if (sa_prune.is_set || is_set(sa_prune.operation)) leaf_name_data.push_back(sa_prune.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assert-winner")
    {
        if(assert_winner == nullptr)
        {
            assert_winner = std::make_shared<Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner>();
        }
        return assert_winner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(assert_winner != nullptr)
    {
        children["assert-winner"] = assert_winner;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-boundary")
    {
        admin_boundary = value;
    }
    if(value_path == "assert-timer")
    {
        assert_timer = value;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join = value;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer = value;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join = value;
    }
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface = value;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state = value;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership = value;
    }
    if(value_path == "immediate-state")
    {
        immediate_state = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info = value;
    }
    if(value_path == "jp-state")
    {
        jp_state = value;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join = value;
    }
    if(value_path == "local-members")
    {
        local_members = value;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join = value;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt = value;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale = value;
    }
    if(value_path == "mvp-nv6-safi-join")
    {
        mvp_nv6_safi_join = value;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join = value;
    }
    if(value_path == "sa-prune")
    {
        sa_prune = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::AssertWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "assert-winner"; yang_parent_name = "outgoing-interface";
}

Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::~AssertWinner()
{
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assert-winner";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssertWinner' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Topologies::Topology::OutgoingInterface::AssertWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAfs()
{
    yang_name = "bgp-afs"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::BgpAfs::~BgpAfs()
{
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::has_data() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_af.size(); index++)
    {
        if(bgp_af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::BgpAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-afs";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BgpAfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpAfs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BgpAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-af")
    {
        for(auto const & c : bgp_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf>();
        c->parent = this;
        bgp_af.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BgpAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_af)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::BgpAfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::BgpAf()
    :
    extranet_path_count{YType::uint32, "extranet-path-count"},
    group_address{YType::str, "group-address"},
    is_bgp_added{YType::boolean, "is-bgp-added"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_address{YType::str, "source-address"}
    	,
    group(std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group>())
	,next_hop(std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop>())
	,source(std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source>())
{
    group->parent = this;

    next_hop->parent = this;

    source->parent = this;

    yang_name = "bgp-af"; yang_parent_name = "bgp-afs";
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::~BgpAf()
{
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::has_data() const
{
    return extranet_path_count.is_set
	|| group_address.is_set
	|| is_bgp_added.is_set
	|| route_distinguisher.is_set
	|| source_address.is_set
	|| (group !=  nullptr && group->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::has_operation() const
{
    return is_set(operation)
	|| is_set(extranet_path_count.operation)
	|| is_set(group_address.operation)
	|| is_set(is_bgp_added.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(source_address.operation)
	|| (group !=  nullptr && group->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-af";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpAf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_path_count.is_set || is_set(extranet_path_count.operation)) leaf_name_data.push_back(extranet_path_count.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (is_bgp_added.is_set || is_set(is_bgp_added.operation)) leaf_name_data.push_back(is_bgp_added.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group>();
        }
        return group;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extranet-path-count")
    {
        extranet_path_count = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source"; yang_parent_name = "bgp-af";
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::~Source()
{
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::Group()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group"; yang_parent_name = "bgp-af";
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::~Group()
{
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::NextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop"; yang_parent_name = "bgp-af";
}

Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::~NextHop()
{
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::BgpAfs::BgpAf::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::AutoRp::AutoRp()
{
    yang_name = "auto-rp"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::AutoRp::~AutoRp()
{
}

bool Pim::Active::Vrfs::Vrf::AutoRp::has_data() const
{
    return false;
}

bool Pim::Active::Vrfs::Vrf::AutoRp::has_operation() const
{
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::AutoRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoRp' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::AutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::AutoRp::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
{
    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.size(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyInterfaceFlagRouteCounts' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-interface-flag-route-count")
    {
        for(auto const & c : topology_interface_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_interface_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts";
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    return interface_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_flag.operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count" <<"[interface-flag='" <<interface_flag <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyInterfaceFlagRouteCount' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.operation)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress>();
        }
        return group_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-interface-flag-route-count";
}

Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSources()
{
    yang_name = "group-map-sources"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::GroupMapSources::~GroupMapSources()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::has_data() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_source.size(); index++)
    {
        if(group_map_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-sources";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapSources' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-source")
    {
        for(auto const & c : group_map_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource>();
        c->parent = this;
        group_map_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapSource()
    :
    client{YType::enumeration, "client"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::int32, "priority"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation>())
{
    group_map_information->parent = this;

    source_of_information->parent = this;

    yang_name = "group-map-source"; yang_parent_name = "group-map-sources";
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::~GroupMapSource()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_data() const
{
    return client.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(expires.operation)
	|| is_set(holdtime.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| is_set(uptime.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-source";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapSource' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-map-source";
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::SourceOfInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-source";
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::TrafficCounters::TrafficCounters()
    :
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    checksum_error{YType::uint32, "checksum-error"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_error{YType::uint32, "format-error"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_data_register{YType::uint32, "input-data-register"},
    input_df_election{YType::uint32, "input-df-election"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_null_register{YType::uint32, "input-null-register"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    input_register_stop{YType::uint32, "input-register-stop"},
    inputs{YType::uint32, "inputs"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    invalid_registers{YType::uint32, "invalid-registers"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_data_register{YType::uint32, "output-data-register"},
    output_df_election{YType::uint32, "output-df-election"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_hello{YType::uint32, "output-hello"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    output_join_group{YType::uint32, "output-join-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_jp{YType::uint32, "output-jp"},
    output_loop_error{YType::uint32, "output-loop-error"},
    output_null_register{YType::uint32, "output-null-register"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_register_stop{YType::uint32, "output-register-stop"},
    outputs{YType::uint32, "outputs"},
    packet_dequeued{YType::uint32, "packet-dequeued"},
    packet_enqueued{YType::uint32, "packet-enqueued"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packet_queue_length{YType::uint32, "packet-queue-length"},
    packet_queue_size{YType::uint32, "packet-queue-size"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packet_tail_drop{YType::uint32, "packet-tail-drop"},
    packets_standby{YType::uint32, "packets-standby"},
    pakman_error{YType::uint32, "pakman-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    socket_error{YType::uint32, "socket-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"}
{
    yang_name = "traffic-counters"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::has_data() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    for (auto const & leaf : packet_dequeued.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_enqueued.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_queue_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_queue_size.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_tail_drop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| checksum_error.is_set
	|| elapsed_time.is_set
	|| format_error.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_data_register.is_set
	|| input_df_election.is_set
	|| input_ecmp_redirect.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_no_idb_error.is_set
	|| input_no_pim_error.is_set
	|| input_no_vrf_error.is_set
	|| input_null_register.is_set
	|| input_pim_version_error.is_set
	|| input_register_stop.is_set
	|| inputs.is_set
	|| invalid_destination_packets.is_set
	|| invalid_join_prunes.is_set
	|| invalid_registers.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| no_mdt_socket_connection.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| non_supported_packets.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_data_register.is_set
	|| output_df_election.is_set
	|| output_ecmp_redirect.is_set
	|| output_hello.is_set
	|| output_hello_bytes.is_set
	|| output_join_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_jp.is_set
	|| output_loop_error.is_set
	|| output_null_register.is_set
	|| output_prune_group.is_set
	|| output_register_stop.is_set
	|| outputs.is_set
	|| packet_packman_error.is_set
	|| packet_queue_last_clear.is_set
	|| packet_read_socket_error.is_set
	|| packets_standby.is_set
	|| pakman_error.is_set
	|| send_queue_full.is_set
	|| socket_error.is_set
	|| standby_packets_error.is_set
	|| truncated_pim_packets.is_set;
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.size(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    for (auto const & leaf : packet_dequeued.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_enqueued.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_queue_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_queue_size.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_tail_drop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(boundary_acl_rx_drop.operation)
	|| is_set(boundary_acl_tx_drop.operation)
	|| is_set(checksum_error.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_error.operation)
	|| is_set(input_assert.operation)
	|| is_set(input_assert_batched.operation)
	|| is_set(input_bsr_message.operation)
	|| is_set(input_candidate_rp_advertisement.operation)
	|| is_set(input_data_register.operation)
	|| is_set(input_df_election.operation)
	|| is_set(input_ecmp_redirect.operation)
	|| is_set(input_hello.operation)
	|| is_set(input_jp.operation)
	|| is_set(input_no_idb_error.operation)
	|| is_set(input_no_pim_error.operation)
	|| is_set(input_no_vrf_error.operation)
	|| is_set(input_null_register.operation)
	|| is_set(input_pim_version_error.operation)
	|| is_set(input_register_stop.operation)
	|| is_set(inputs.operation)
	|| is_set(invalid_destination_packets.operation)
	|| is_set(invalid_join_prunes.operation)
	|| is_set(invalid_registers.operation)
	|| is_set(mdt_drop_local_source_address.operation)
	|| is_set(mdt_drop_no_idb.operation)
	|| is_set(mdt_drop_no_vrf.operation)
	|| is_set(mdt_drop_null_local_address.operation)
	|| is_set(mdt_join_bad_type.operation)
	|| is_set(mdt_join_tlv_received.operation)
	|| is_set(mdt_join_tlv_sent.operation)
	|| is_set(mdt_joins_drop_multiple_encapsulation.operation)
	|| is_set(mdt_send_queue_full.operation)
	|| is_set(mdt_socket_error.operation)
	|| is_set(mldp_mdt_invalid_lsm_identifier.operation)
	|| is_set(no_mdt_socket_connection.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(no_source_address.operation)
	|| is_set(non_supported_packets.operation)
	|| is_set(output_assert.operation)
	|| is_set(output_assert_batched.operation)
	|| is_set(output_bsr_message.operation)
	|| is_set(output_candidate_rp_advertisement.operation)
	|| is_set(output_data_register.operation)
	|| is_set(output_df_election.operation)
	|| is_set(output_ecmp_redirect.operation)
	|| is_set(output_hello.operation)
	|| is_set(output_hello_bytes.operation)
	|| is_set(output_join_group.operation)
	|| is_set(output_join_prune_bytes.operation)
	|| is_set(output_jp.operation)
	|| is_set(output_loop_error.operation)
	|| is_set(output_null_register.operation)
	|| is_set(output_prune_group.operation)
	|| is_set(output_register_stop.operation)
	|| is_set(outputs.operation)
	|| is_set(packet_dequeued.operation)
	|| is_set(packet_enqueued.operation)
	|| is_set(packet_packman_error.operation)
	|| is_set(packet_queue_last_clear.operation)
	|| is_set(packet_queue_length.operation)
	|| is_set(packet_queue_size.operation)
	|| is_set(packet_read_socket_error.operation)
	|| is_set(packet_tail_drop.operation)
	|| is_set(packets_standby.operation)
	|| is_set(pakman_error.operation)
	|| is_set(send_queue_full.operation)
	|| is_set(socket_error.operation)
	|| is_set(standby_packets_error.operation)
	|| is_set(truncated_pim_packets.operation);
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficCounters' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.operation)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.operation)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.operation)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.operation)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.operation)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.operation)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.operation)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.operation)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.operation)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.operation)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.operation)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.operation)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.operation)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.operation)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.operation)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.operation)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.operation)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.operation)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.operation)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.operation)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.operation)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.operation)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.operation)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.operation)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.operation)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.operation)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.operation)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.operation)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.operation)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.operation)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.operation)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.operation)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.operation)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.operation)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.operation)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.operation)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.operation)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.operation)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.operation)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.operation)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.operation)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_data_register.is_set || is_set(output_data_register.operation)) leaf_name_data.push_back(output_data_register.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.operation)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.operation)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.operation)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.operation)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.operation)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.operation)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.operation)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.operation)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.operation)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.operation)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.operation)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.operation)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.operation)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.operation)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.operation)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.operation)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.operation)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.operation)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.operation)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.operation)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.operation)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());

    auto packet_dequeued_name_datas = packet_dequeued.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_dequeued_name_datas.begin(), packet_dequeued_name_datas.end());
    auto packet_enqueued_name_datas = packet_enqueued.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_enqueued_name_datas.begin(), packet_enqueued_name_datas.end());
    auto packet_queue_length_name_datas = packet_queue_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_queue_length_name_datas.begin(), packet_queue_length_name_datas.end());
    auto packet_queue_size_name_datas = packet_queue_size.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_queue_size_name_datas.begin(), packet_queue_size_name_datas.end());
    auto packet_tail_drop_name_datas = packet_tail_drop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_tail_drop_name_datas.begin(), packet_tail_drop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue")
    {
        for(auto const & c : packet_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : packet_queue)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-error")
    {
        format_error = value;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
    }
    if(value_path == "inputs")
    {
        inputs = value;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
    }
    if(value_path == "output-data-register")
    {
        output_data_register = value;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
    }
    if(value_path == "outputs")
    {
        outputs = value;
    }
    if(value_path == "packet-dequeued")
    {
        packet_dequeued.append(value);
    }
    if(value_path == "packet-enqueued")
    {
        packet_enqueued.append(value);
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
    }
    if(value_path == "packet-queue-length")
    {
        packet_queue_length.append(value);
    }
    if(value_path == "packet-queue-size")
    {
        packet_queue_size.append(value);
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
    }
    if(value_path == "packet-tail-drop")
    {
        packet_tail_drop.append(value);
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
    }
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
    	,
    packet_queue_state(std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>())
	,packet_queue_stats(std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;

    packet_queue_stats->parent = this;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters";
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::has_data() const
{
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(packet_queue_priority.operation)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketQueue' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.operation)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state == nullptr)
        {
            packet_queue_state = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState>();
        }
        return packet_queue_state;
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats == nullptr)
        {
            packet_queue_stats = std::make_shared<Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats>();
        }
        return packet_queue_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet_queue_state != nullptr)
    {
        children["packet-queue-state"] = packet_queue_state;
    }

    if(packet_queue_stats != nullptr)
    {
        children["packet-queue-stats"] = packet_queue_stats;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
    }
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{
    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue";
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(operation)
	|| is_set(max_queue_size.operation)
	|| is_set(queue_size_bytes.operation)
	|| is_set(queue_size_packets.operation);
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketQueueState' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.operation)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.operation)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.operation)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
    }
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    dequeued_packets{YType::uint32, "dequeued-packets"},
    enqueued_packets{YType::uint32, "enqueued-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    tail_drops{YType::uint32, "tail-drops"}
{
    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue";
}

Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    return dequeued_packets.is_set
	|| enqueued_packets.is_set
	|| high_water_mark_bytes.is_set
	|| high_water_mark_packets.is_set
	|| tail_drops.is_set;
}

bool Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(operation)
	|| is_set(dequeued_packets.operation)
	|| is_set(enqueued_packets.operation)
	|| is_set(high_water_mark_bytes.operation)
	|| is_set(high_water_mark_packets.operation)
	|| is_set(tail_drops.operation);
}

std::string Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PacketQueueStats' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dequeued_packets.is_set || is_set(dequeued_packets.operation)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (enqueued_packets.is_set || is_set(enqueued_packets.operation)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.operation)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.operation)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.operation)) leaf_name_data.push_back(tail_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
    }
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpfs()
{
    yang_name = "group-map-rpfs"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapRpfs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-rpf")
    {
        for(auto const & c : group_map_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    are_we_rp{YType::boolean, "are-we-rp"},
    client{YType::enumeration, "client"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::int32, "rp-priority"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
{
    group_map_information->parent = this;

    rpf_neighbor->parent = this;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs";
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_data() const
{
    return are_we_rp.is_set
	|| client.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(operation)
	|| is_set(are_we_rp.operation)
	|| is_set(client.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| is_set(rp_address.operation)
	|| is_set(rp_priority.operation)
	|| is_set(rpf_interface_name.operation)
	|| is_set(rpf_vrf_name.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapRpf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_rp.is_set || is_set(are_we_rp.operation)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.operation)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.operation)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.operation)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
    }
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "rp-priority")
    {
        rp_priority = value;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf";
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf";
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(client.operation)
	|| is_set(group_count.operation)
	|| is_set(is_override.operation)
	|| is_set(is_used.operation)
	|| is_set(mrib_active.operation)
	|| is_set(prefix_length.operation)
	|| is_set(priority.operation)
	|| is_set(protocol.operation)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.operation)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.operation)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.operation)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.operation)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client")
    {
        client = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "is-override")
    {
        is_override = value;
    }
    if(value_path == "is-used")
    {
        is_used = value;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{
    yang_name = "summary"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Summary::~Summary()
{
}

bool Pim::Active::Vrfs::Vrf::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Active::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bsr_candidate_rp_set_count.operation)
	|| is_set(bsr_candidate_rp_set_limit.operation)
	|| is_set(bsr_candidate_rp_set_threshold.operation)
	|| is_set(bsr_range_threshold.operation)
	|| is_set(bsr_ranges_count.operation)
	|| is_set(bsr_ranges_limit.operation)
	|| is_set(global_auto_rp_ranges_limit.operation)
	|| is_set(global_bsr_candidate_rp_set_count.operation)
	|| is_set(global_bsr_candidate_rp_set_limit.operation)
	|| is_set(global_bsr_candidate_rp_set_threshold.operation)
	|| is_set(global_bsr_ranges_count.operation)
	|| is_set(global_bsr_ranges_limit.operation)
	|| is_set(global_bsr_ranges_threshold.operation)
	|| is_set(global_register_limit.operation)
	|| is_set(is_bsr_ranges_threshold_reached.operation)
	|| is_set(is_global_auto_rp_ranges_limit_reached.operation)
	|| is_set(is_global_bsr_ranges_limit_reached.operation)
	|| is_set(is_global_register_limit_reached.operation)
	|| is_set(is_global_route_limit_reached.operation)
	|| is_set(is_global_rxi_limit_reached.operation)
	|| is_set(is_maximum_enforcement_disabled.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(is_ranges_limit_reached.operation)
	|| is_set(is_route_limit_reached.operation)
	|| is_set(ranges_count.operation)
	|| is_set(ranges_limit.operation)
	|| is_set(ranges_threshold.operation)
	|| is_set(register_count.operation)
	|| is_set(register_limit.operation)
	|| is_set(register_limit_reached.operation)
	|| is_set(register_threshold.operation)
	|| is_set(route_count.operation)
	|| is_set(route_limit.operation)
	|| is_set(route_low_water_mark.operation)
	|| is_set(route_threshold.operation)
	|| is_set(rxi_limit_reached.operation)
	|| is_set(rxi_low_water_mark.operation)
	|| is_set(topology_interface_state_count.operation)
	|| is_set(topology_interface_state_limit.operation)
	|| is_set(topology_interface_state_threshold.operation);
}

std::string Pim::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.operation)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.operation)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.operation)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.operation)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.operation)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.operation)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.operation)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.operation)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.operation)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.operation)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.operation)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.operation)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.operation)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.operation)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.operation)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.operation)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.operation)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.operation)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.operation)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.operation)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.operation)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.operation)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.operation)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.operation)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.operation)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.operation)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.operation)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.operation)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.operation)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.operation)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.operation)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.operation)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.operation)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.operation)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.operation)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
    }
    if(value_path == "register-count")
    {
        register_count = value;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
    }
    if(value_path == "route-count")
    {
        route_count = value;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
    }
}

Pim::Active::Vrfs::Vrf::Gre::Gre()
    :
    gre_hashes(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreHashes>())
	,gre_next_hops(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops>())
{
    gre_hashes->parent = this;

    gre_next_hops->parent = this;

    yang_name = "gre"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Gre::~Gre()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::has_data() const
{
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Pim::Active::Vrfs::Vrf::Gre::has_operation() const
{
    return is_set(operation)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gre' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes == nullptr)
        {
            gre_hashes = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreHashes>();
        }
        return gre_hashes;
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops == nullptr)
        {
            gre_next_hops = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops>();
        }
        return gre_next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre_hashes != nullptr)
    {
        children["gre-hashes"] = gre_hashes;
    }

    if(gre_next_hops != nullptr)
    {
        children["gre-next-hops"] = gre_next_hops;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHashes()
{
    yang_name = "gre-hashes"; yang_parent_name = "gre";
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::~GreHashes()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_data() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreHashes' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hash")
    {
        for(auto const & c : gre_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_hash)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreHashes::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::GreHash()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    ifname{YType::str, "ifname"},
    next_hop_interface{YType::str, "next-hop-interface"}
{
    yang_name = "gre-hash"; yang_parent_name = "gre-hashes";
}

Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::~GreHash()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| ifname.is_set
	|| next_hop_interface.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(ifname.operation)
	|| is_set(next_hop_interface.operation);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hash" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[ifname='" <<ifname <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreHash' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.operation)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "ifname")
    {
        ifname = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHops()
{
    yang_name = "gre-next-hops"; yang_parent_name = "gre";
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::~GreNextHops()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_data() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_operation() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hops";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNextHops' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-next-hop")
    {
        for(auto const & c : gre_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop>();
        c->parent = this;
        gre_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GreNextHop()
    :
    destination_address{YType::str, "destination-address"},
    is_connected{YType::uint8, "is-connected"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>())
{
    registered_address->parent = this;

    yang_name = "gre-next-hop"; yang_parent_name = "gre-next-hops";
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::~GreNextHop()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_data() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| is_connected.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address !=  nullptr && registered_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_operation() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(is_connected.operation)
	|| is_set(metric.operation)
	|| is_set(metric_preference.operation)
	|| (registered_address !=  nullptr && registered_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNextHop' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.operation)) leaf_name_data.push_back(metric_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-path")
    {
        for(auto const & c : gre_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath>();
        c->parent = this;
        gre_path.push_back(c);
        return c;
    }

    if(child_yang_name == "registered-address")
    {
        if(registered_address == nullptr)
        {
            registered_address = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>();
        }
        return registered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(registered_address != nullptr)
    {
        children["registered-address"] = registered_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
    }
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::RegisteredAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "registered-address"; yang_parent_name = "gre-next-hop";
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::~RegisteredAddress()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisteredAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GrePath()
    :
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    gre_interface_name{YType::str, "gre-interface-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_gre_interface_disabled{YType::boolean, "is-gre-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"}
    	,
    gre_neighbor(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>())
	,gre_next_hop(std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>())
{
    gre_neighbor->parent = this;

    gre_next_hop->parent = this;

    yang_name = "gre-path"; yang_parent_name = "gre-next-hop";
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::~GrePath()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_data() const
{
    return extranet_vrf_name.is_set
	|| gre_interface_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_gre_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_data())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_data());
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_operation() const
{
    return is_set(operation)
	|| is_set(extranet_vrf_name.operation)
	|| is_set(gre_interface_name.operation)
	|| is_set(is_connector_attribute_present.operation)
	|| is_set(is_gre_interface_disabled.operation)
	|| is_set(is_via_lsm.operation)
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_operation())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-path";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrePath' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.operation)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (gre_interface_name.is_set || is_set(gre_interface_name.operation)) leaf_name_data.push_back(gre_interface_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.operation)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_gre_interface_disabled.is_set || is_set(is_gre_interface_disabled.operation)) leaf_name_data.push_back(is_gre_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-neighbor")
    {
        if(gre_neighbor == nullptr)
        {
            gre_neighbor = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>();
        }
        return gre_neighbor;
    }

    if(child_yang_name == "gre-next-hop")
    {
        if(gre_next_hop == nullptr)
        {
            gre_next_hop = std::make_shared<Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>();
        }
        return gre_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre_neighbor != nullptr)
    {
        children["gre-neighbor"] = gre_neighbor;
    }

    if(gre_next_hop != nullptr)
    {
        children["gre-next-hop"] = gre_next_hop;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
    }
    if(value_path == "gre-interface-name")
    {
        gre_interface_name = value;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::GreNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "gre-neighbor"; yang_parent_name = "gre-path";
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::~GreNeighbor()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::GreNextHop_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "gre-next-hop"; yang_parent_name = "gre-path";
}

Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::~GreNextHop_()
{
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNextHop_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinners()
{
    yang_name = "bidir-df-winners"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::~BidirDfWinners()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::has_data() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::BidirDfWinners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winners";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfWinners::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirDfWinners' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfWinners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-winner")
    {
        for(auto const & c : bidir_df_winner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner>();
        c->parent = this;
        bidir_df_winner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfWinners::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_df_winner)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfWinners::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::BidirDfWinner()
    :
    are_we_df{YType::boolean, "are-we-df"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    rp_lan{YType::boolean, "rp-lan"},
    uptime{YType::uint64, "uptime"}
    	,
    df_winner(std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner>())
	,rp_address_xr(std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr>())
{
    df_winner->parent = this;

    rp_address_xr->parent = this;

    yang_name = "bidir-df-winner"; yang_parent_name = "bidir-df-winners";
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::~BidirDfWinner()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_data() const
{
    return are_we_df.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| rp_lan.is_set
	|| uptime.is_set
	|| (df_winner !=  nullptr && df_winner->has_data())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(are_we_df.operation)
	|| is_set(interface_name.operation)
	|| is_set(metric.operation)
	|| is_set(metric_preference.operation)
	|| is_set(pim_interface_name.operation)
	|| is_set(rp_address.operation)
	|| is_set(rp_lan.operation)
	|| is_set(uptime.operation)
	|| (df_winner !=  nullptr && df_winner->has_operation())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winner";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BidirDfWinner' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_df.is_set || is_set(are_we_df.operation)) leaf_name_data.push_back(are_we_df.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.operation)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.operation)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_lan.is_set || is_set(rp_lan.operation)) leaf_name_data.push_back(rp_lan.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-winner")
    {
        if(df_winner == nullptr)
        {
            df_winner = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner>();
        }
        return df_winner;
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr>();
        }
        return rp_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(df_winner != nullptr)
    {
        children["df-winner"] = df_winner;
    }

    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "are-we-df")
    {
        are_we_df = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "rp-lan")
    {
        rp_lan = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-winner";
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::DfWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "df-winner"; yang_parent_name = "bidir-df-winner";
}

Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::~DfWinner()
{
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-winner";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DfWinner' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::TableContexts::TableContexts()
{
    yang_name = "table-contexts"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::TableContexts::~TableContexts()
{
}

bool Pim::Active::Vrfs::Vrf::TableContexts::has_data() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TableContexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableContexts' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-context")
    {
        for(auto const & c : table_context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TableContexts::TableContext>();
        c->parent = this;
        table_context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TableContexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : table_context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TableContexts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::TableContexts::TableContext::TableContext()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    saf_name{YType::enumeration, "saf-name"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    topology_name{YType::str, "topology-name"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "table-context"; yang_parent_name = "table-contexts";
}

Pim::Active::Vrfs::Vrf::TableContexts::TableContext::~TableContext()
{
}

bool Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| saf_name.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| topology_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(is_active.operation)
	|| is_set(is_ital_registration_done.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(is_rib_convergence_received.operation)
	|| is_set(is_rib_registration_done.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(saf_name.operation)
	|| is_set(safi.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(topology_name.operation)
	|| is_set(vrf_id.operation);
}

std::string Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TableContext' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.operation)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.operation)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.operation)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.operation)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.operation)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TableContexts::TableContext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummaries()
{
    yang_name = "neighbor-summaries"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::~NeighborSummaries()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NeighborSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummaries' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborSummaries::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"},
    number_of_external_neighbors{YType::int32, "number-of-external-neighbors"},
    number_of_neighbors{YType::int32, "number-of-neighbors"}
{
    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries";
}

Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| number_of_external_neighbors.is_set
	|| number_of_neighbors.is_set;
}

bool Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(number_of_external_neighbors.operation)
	|| is_set(number_of_neighbors.operation);
}

std::string Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborSummary' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (number_of_external_neighbors.is_set || is_set(number_of_external_neighbors.operation)) leaf_name_data.push_back(number_of_external_neighbors.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::Context()
    :
    active_table_count{YType::uint32, "active-table-count"},
    allow_rp_configured{YType::boolean, "allow-rp-configured"},
    allow_rp_group_list{YType::str, "allow-rp-group-list"},
    allow_rp_rp_list{YType::str, "allow-rp-rp-list"},
    anycast_rp_configured{YType::boolean, "anycast-rp-configured"},
    anycast_rp_policy_name{YType::str, "anycast-rp-policy-name"},
    bgp_auto_discovery_configured{YType::boolean, "bgp-auto-discovery-configured"},
    bgp_auto_discovery_type{YType::uint32, "bgp-auto-discovery-type"},
    bgp_i_pmsi_added{YType::boolean, "bgp-i-pmsi-added"},
    bgp_remote_address{YType::str, "bgp-remote-address"},
    bgp_remote_interface{YType::str, "bgp-remote-interface"},
    bgp_remote_interface_name{YType::str, "bgp-remote-interface-name"},
    bgp_remote_on{YType::boolean, "bgp-remote-on"},
    bgp_remote_state{YType::uint32, "bgp-remote-state"},
    bgp_source_active_announce{YType::boolean, "bgp-source-active-announce"},
    gin_b_and_mdt_data_announce_interval{YType::uint32, "gin-b-and-mdt-data-announce-interval"},
    gin_b_and_mdt_data_switchover_interval{YType::uint32, "gin-b-and-mdt-data-switchover-interval"},
    gin_b_and_mdt_interface{YType::str, "gin-b-and-mdt-interface"},
    gin_b_and_mdt_mtu{YType::uint32, "gin-b-and-mdt-mtu"},
    gin_b_and_mdt_name{YType::str, "gin-b-and-mdt-name"},
    gin_b_and_mdt_rpf_identifier{YType::uint32, "gin-b-and-mdt-rpf-identifier"},
    gin_band_maximum_mdt_aggregation{YType::uint32, "gin-band-maximum-mdt-aggregation"},
    in_b_and_mdt_data_announce_interval{YType::uint32, "in-b-and-mdt-data-announce-interval"},
    in_b_and_mdt_data_switchover_interval{YType::uint32, "in-b-and-mdt-data-switchover-interval"},
    in_b_and_mdt_interface{YType::str, "in-b-and-mdt-interface"},
    in_b_and_mdt_mtu{YType::uint32, "in-b-and-mdt-mtu"},
    in_b_and_mdt_name{YType::str, "in-b-and-mdt-name"},
    in_b_and_mdt_rpf_identifier{YType::uint32, "in-b-and-mdt-rpf-identifier"},
    in_band_maximum_mdt_aggregation{YType::uint32, "in-band-maximum-mdt-aggregation"},
    in_band_signaling_local_enabled{YType::boolean, "in-band-signaling-local-enabled"},
    in_band_signaling_remote_enabled{YType::boolean, "in-band-signaling-remote-enabled"},
    inter_autonomous_system_enabled{YType::boolean, "inter-autonomous-system-enabled"},
    ir_maximum_mdt_aggregation{YType::uint32, "ir-maximum-mdt-aggregation"},
    ir_mdt_data_announce_interval{YType::uint32, "ir-mdt-data-announce-interval"},
    ir_mdt_data_switchover_interval{YType::uint32, "ir-mdt-data-switchover-interval"},
    ir_mdt_interface{YType::str, "ir-mdt-interface"},
    ir_mdt_mtu{YType::uint32, "ir-mdt-mtu"},
    ir_mdt_name{YType::str, "ir-mdt-name"},
    ir_mdt_rpf_identifier{YType::uint32, "ir-mdt-rpf-identifier"},
    ir_mdt_tail_label{YType::uint32, "ir-mdt-tail-label"},
    is_active{YType::boolean, "is-active"},
    is_active_ital{YType::boolean, "is-active-ital"},
    is_all_interface_disable_operation{YType::boolean, "is-all-interface-disable-operation"},
    is_auto_rp_listen_enabled{YType::boolean, "is-auto-rp-listen-enabled"},
    is_auto_rp_listen_sock_add{YType::boolean, "is-auto-rp-listen-sock-add"},
    is_create_gin_b_and_mdt_interface{YType::boolean, "is-create-gin-b-and-mdt-interface"},
    is_create_in_b_and_mdt_interface{YType::boolean, "is-create-in-b-and-mdt-interface"},
    is_create_ir_mdt_interface{YType::boolean, "is-create-ir-mdt-interface"},
    is_create_mdt_interface{YType::boolean, "is-create-mdt-interface"},
    is_create_mldp_mdt_interface{YType::boolean, "is-create-mldp-mdt-interface"},
    is_create_rsvp_te_mdt_interface{YType::boolean, "is-create-rsvp-te-mdt-interface"},
    is_default_granges{YType::boolean, "is-default-granges"},
    is_gin_b_and_mdt_owner{YType::boolean, "is-gin-b-and-mdt-owner"},
    is_in_b_and_mdt_owner{YType::boolean, "is-in-b-and-mdt-owner"},
    is_ir_mdt_owner{YType::boolean, "is-ir-mdt-owner"},
    is_lpts_socket_add_required{YType::boolean, "is-lpts-socket-add-required"},
    is_lpts_socket_added{YType::boolean, "is-lpts-socket-added"},
    is_m_host_publish_pending{YType::boolean, "is-m-host-publish-pending"},
    is_mdt_owner{YType::boolean, "is-mdt-owner"},
    is_mldp_mdt_owner{YType::boolean, "is-mldp-mdt-owner"},
    is_mrib_register{YType::boolean, "is-mrib-register"},
    is_multicast_rib_registration{YType::boolean, "is-multicast-rib-registration"},
    is_pim_nsf_rib_converge_received{YType::boolean, "is-pim-nsf-rib-converge-received"},
    is_pim_nsf_rib_converged{YType::boolean, "is-pim-nsf-rib-converged"},
    is_redistribution_reset{YType::boolean, "is-redistribution-reset"},
    is_register_injection_lpts_socket_add_required{YType::boolean, "is-register-injection-lpts-socket-add-required"},
    is_register_injection_lpts_socket_added{YType::boolean, "is-register-injection-lpts-socket-added"},
    is_register_injection_socket_add_required{YType::boolean, "is-register-injection-socket-add-required"},
    is_register_injection_socket_added{YType::boolean, "is-register-injection-socket-added"},
    is_rib_multipath_enabled{YType::boolean, "is-rib-multipath-enabled"},
    is_rib_multipath_interface_hash{YType::boolean, "is-rib-multipath-interface-hash"},
    is_rib_multipath_source_hash{YType::boolean, "is-rib-multipath-source-hash"},
    is_rib_multipath_source_next_hop_hash{YType::boolean, "is-rib-multipath-source-next-hop-hash"},
    is_routing_enabled{YType::boolean, "is-routing-enabled"},
    is_rsvp_te_mdt_owner{YType::boolean, "is-rsvp-te-mdt-owner"},
    is_socket_add_required{YType::boolean, "is-socket-add-required"},
    is_socket_added{YType::boolean, "is-socket-added"},
    is_udp_socket_add_required{YType::boolean, "is-udp-socket-add-required"},
    is_udp_socket_added{YType::boolean, "is-udp-socket-added"},
    is_udp_socket_bind{YType::boolean, "is-udp-socket-bind"},
    is_udp_socket_bind_required{YType::boolean, "is-udp-socket-bind-required"},
    is_unicast_rib_registration{YType::boolean, "is-unicast-rib-registration"},
    maximum_mdt_aggregation{YType::uint32, "maximum-mdt-aggregation"},
    mdt_data_announce_interval{YType::uint32, "mdt-data-announce-interval"},
    mdt_data_switchover_interval{YType::uint32, "mdt-data-switchover-interval"},
    mdt_default_group{YType::str, "mdt-default-group"},
    mdt_gre_remote_rpf_identifier{YType::uint32, "mdt-gre-remote-rpf-identifier"},
    mdt_gre_rpf_identifier{YType::uint32, "mdt-gre-rpf-identifier"},
    mdt_interface{YType::str, "mdt-interface"},
    mdt_mtu{YType::uint32, "mdt-mtu"},
    mdt_neighbor_filter_name{YType::str, "mdt-neighbor-filter-name"},
    mdt_partitioned_ir_control_identifier{YType::uint32, "mdt-partitioned-ir-control-identifier"},
    mdt_partitioned_mdt_control_identifier{YType::uint32, "mdt-partitioned-mdt-control-identifier"},
    mhost_default_interface_config{YType::str, "mhost-default-interface-config"},
    mhost_interface{YType::str, "mhost-interface"},
    mldp_auto_rp_announce_tree_added{YType::boolean, "mldp-auto-rp-announce-tree-added"},
    mldp_auto_rp_discovery_tree_added{YType::boolean, "mldp-auto-rp-discovery-tree-added"},
    mldp_bsr_control_tree_added{YType::boolean, "mldp-bsr-control-tree-added"},
    mldp_control_head_lsm_identifier{YType::uint32, "mldp-control-head-lsm-identifier"},
    mldp_head_local_label{YType::uint32, "mldp-head-local-label"},
    mldp_head_lsm_identifier{YType::uint32, "mldp-head-lsm-identifier"},
    mldp_maximum_mdt_aggregation{YType::uint32, "mldp-maximum-mdt-aggregation"},
    mldp_mdt_data_announce_interval{YType::uint32, "mldp-mdt-data-announce-interval"},
    mldp_mdt_data_switchover_interval{YType::uint32, "mldp-mdt-data-switchover-interval"},
    mldp_mdt_interface{YType::str, "mldp-mdt-interface"},
    mldp_mdt_mtu{YType::uint32, "mldp-mdt-mtu"},
    mldp_mdt_name{YType::str, "mldp-mdt-name"},
    mldp_mdt_remote_rpf_identifier{YType::uint32, "mldp-mdt-remote-rpf-identifier"},
    mldp_mdt_rpf_identifier{YType::uint32, "mldp-mdt-rpf-identifier"},
    mldp_partioned_mp2m_ptree{YType::boolean, "mldp-partioned-mp2m-ptree"},
    mldp_partitioned_head_lsm_identifier{YType::uint32, "mldp-partitioned-head-lsm-identifier"},
    mldp_partitioned_mdt_configured{YType::boolean, "mldp-partitioned-mdt-configured"},
    mldp_partitioned_mdt_identifier{YType::uint32, "mldp-partitioned-mdt-identifier"},
    mldp_remote_head_lsm_identifier{YType::uint32, "mldp-remote-head-lsm-identifier"},
    mldp_remote_partitioned_mdt_configured{YType::boolean, "mldp-remote-partitioned-mdt-configured"},
    mldp_root_address{YType::uint32, "mldp-root-address"},
    mldp_root_count{YType::uint32, "mldp-root-count"},
    murib_id{YType::uint32, "murib-id"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    non_default_vrf_count_on_socket{YType::uint32, "non-default-vrf-count-on-socket"},
    organization_unique_identifier{YType::uint32, "organization-unique-identifier"},
    p2mpte_li_drop{YType::uint32, "p2mpte-li-drop"},
    redistribution_reset_count{YType::uint32, "redistribution-reset-count"},
    remote_table_id{YType::uint32, "remote-table-id"},
    route_distinguisher{YType::str, "route-distinguisher"},
    rpf_id{YType::uint32, "rpf-id"},
    rpf_policy_name{YType::str, "rpf-policy-name"},
    rsvp_te_maximum_mdt_aggregation{YType::uint32, "rsvp-te-maximum-mdt-aggregation"},
    rsvp_te_mdt_data_announce_interval{YType::uint32, "rsvp-te-mdt-data-announce-interval"},
    rsvp_te_mdt_data_switchover_interval{YType::uint32, "rsvp-te-mdt-data-switchover-interval"},
    rsvp_te_mdt_interface{YType::str, "rsvp-te-mdt-interface"},
    rsvp_te_mdt_mtu{YType::uint32, "rsvp-te-mdt-mtu"},
    rsvp_te_mdt_name{YType::str, "rsvp-te-mdt-name"},
    rsvp_te_mdt_rpf_identifier{YType::uint32, "rsvp-te-mdt-rpf-identifier"},
    rsvp_te_mdt_static_p2mp_count{YType::uint32, "rsvp-te-mdt-static-p2mp-count"},
    rump_enabled{YType::boolean, "rump-enabled"},
    sg_expiry_time{YType::uint16, "sg-expiry-time"},
    sg_expiry_timer_configured{YType::boolean, "sg-expiry-timer-configured"},
    sg_expiry_timer_sg_list{YType::str, "sg-expiry-timer-sg-list"},
    stale_rd_present{YType::boolean, "stale-rd-present"},
    suppress_pim_data_mdt_tlv{YType::boolean, "suppress-pim-data-mdt-tlv"},
    suppress_shared_tree_join{YType::boolean, "suppress-shared-tree-join"},
    table_count{YType::uint32, "table-count"},
    table_id{YType::uint32, "table-id"},
    umh{YType::boolean, "umh"},
    valid_rd_present{YType::boolean, "valid-rd-present"},
    vpn_index{YType::uint32, "vpn-index"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    remote_default_group(std::make_shared<Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup>())
	,rpf_default_table(std::make_shared<Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable>())
{
    remote_default_group->parent = this;

    rpf_default_table->parent = this;

    yang_name = "context"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::Context::~Context()
{
}

bool Pim::Active::Vrfs::Vrf::Context::has_data() const
{
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<export_route_target.size(); index++)
    {
        if(export_route_target[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.size(); index++)
    {
        if(import_route_target[index]->has_data())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return active_table_count.is_set
	|| allow_rp_configured.is_set
	|| allow_rp_group_list.is_set
	|| allow_rp_rp_list.is_set
	|| anycast_rp_configured.is_set
	|| anycast_rp_policy_name.is_set
	|| bgp_auto_discovery_configured.is_set
	|| bgp_auto_discovery_type.is_set
	|| bgp_i_pmsi_added.is_set
	|| bgp_remote_address.is_set
	|| bgp_remote_interface.is_set
	|| bgp_remote_interface_name.is_set
	|| bgp_remote_on.is_set
	|| bgp_remote_state.is_set
	|| bgp_source_active_announce.is_set
	|| gin_b_and_mdt_data_announce_interval.is_set
	|| gin_b_and_mdt_data_switchover_interval.is_set
	|| gin_b_and_mdt_interface.is_set
	|| gin_b_and_mdt_mtu.is_set
	|| gin_b_and_mdt_name.is_set
	|| gin_b_and_mdt_rpf_identifier.is_set
	|| gin_band_maximum_mdt_aggregation.is_set
	|| in_b_and_mdt_data_announce_interval.is_set
	|| in_b_and_mdt_data_switchover_interval.is_set
	|| in_b_and_mdt_interface.is_set
	|| in_b_and_mdt_mtu.is_set
	|| in_b_and_mdt_name.is_set
	|| in_b_and_mdt_rpf_identifier.is_set
	|| in_band_maximum_mdt_aggregation.is_set
	|| in_band_signaling_local_enabled.is_set
	|| in_band_signaling_remote_enabled.is_set
	|| inter_autonomous_system_enabled.is_set
	|| ir_maximum_mdt_aggregation.is_set
	|| ir_mdt_data_announce_interval.is_set
	|| ir_mdt_data_switchover_interval.is_set
	|| ir_mdt_interface.is_set
	|| ir_mdt_mtu.is_set
	|| ir_mdt_name.is_set
	|| ir_mdt_rpf_identifier.is_set
	|| ir_mdt_tail_label.is_set
	|| is_active.is_set
	|| is_active_ital.is_set
	|| is_all_interface_disable_operation.is_set
	|| is_auto_rp_listen_enabled.is_set
	|| is_auto_rp_listen_sock_add.is_set
	|| is_create_gin_b_and_mdt_interface.is_set
	|| is_create_in_b_and_mdt_interface.is_set
	|| is_create_ir_mdt_interface.is_set
	|| is_create_mdt_interface.is_set
	|| is_create_mldp_mdt_interface.is_set
	|| is_create_rsvp_te_mdt_interface.is_set
	|| is_default_granges.is_set
	|| is_gin_b_and_mdt_owner.is_set
	|| is_in_b_and_mdt_owner.is_set
	|| is_ir_mdt_owner.is_set
	|| is_lpts_socket_add_required.is_set
	|| is_lpts_socket_added.is_set
	|| is_m_host_publish_pending.is_set
	|| is_mdt_owner.is_set
	|| is_mldp_mdt_owner.is_set
	|| is_mrib_register.is_set
	|| is_multicast_rib_registration.is_set
	|| is_pim_nsf_rib_converge_received.is_set
	|| is_pim_nsf_rib_converged.is_set
	|| is_redistribution_reset.is_set
	|| is_register_injection_lpts_socket_add_required.is_set
	|| is_register_injection_lpts_socket_added.is_set
	|| is_register_injection_socket_add_required.is_set
	|| is_register_injection_socket_added.is_set
	|| is_rib_multipath_enabled.is_set
	|| is_rib_multipath_interface_hash.is_set
	|| is_rib_multipath_source_hash.is_set
	|| is_rib_multipath_source_next_hop_hash.is_set
	|| is_routing_enabled.is_set
	|| is_rsvp_te_mdt_owner.is_set
	|| is_socket_add_required.is_set
	|| is_socket_added.is_set
	|| is_udp_socket_add_required.is_set
	|| is_udp_socket_added.is_set
	|| is_udp_socket_bind.is_set
	|| is_udp_socket_bind_required.is_set
	|| is_unicast_rib_registration.is_set
	|| maximum_mdt_aggregation.is_set
	|| mdt_data_announce_interval.is_set
	|| mdt_data_switchover_interval.is_set
	|| mdt_default_group.is_set
	|| mdt_gre_remote_rpf_identifier.is_set
	|| mdt_gre_rpf_identifier.is_set
	|| mdt_interface.is_set
	|| mdt_mtu.is_set
	|| mdt_neighbor_filter_name.is_set
	|| mdt_partitioned_ir_control_identifier.is_set
	|| mdt_partitioned_mdt_control_identifier.is_set
	|| mhost_default_interface_config.is_set
	|| mhost_interface.is_set
	|| mldp_auto_rp_announce_tree_added.is_set
	|| mldp_auto_rp_discovery_tree_added.is_set
	|| mldp_bsr_control_tree_added.is_set
	|| mldp_control_head_lsm_identifier.is_set
	|| mldp_head_local_label.is_set
	|| mldp_head_lsm_identifier.is_set
	|| mldp_maximum_mdt_aggregation.is_set
	|| mldp_mdt_data_announce_interval.is_set
	|| mldp_mdt_data_switchover_interval.is_set
	|| mldp_mdt_interface.is_set
	|| mldp_mdt_mtu.is_set
	|| mldp_mdt_name.is_set
	|| mldp_mdt_remote_rpf_identifier.is_set
	|| mldp_mdt_rpf_identifier.is_set
	|| mldp_partioned_mp2m_ptree.is_set
	|| mldp_partitioned_head_lsm_identifier.is_set
	|| mldp_partitioned_mdt_configured.is_set
	|| mldp_partitioned_mdt_identifier.is_set
	|| mldp_remote_head_lsm_identifier.is_set
	|| mldp_remote_partitioned_mdt_configured.is_set
	|| mldp_root_count.is_set
	|| murib_id.is_set
	|| neighbor_filter_name.is_set
	|| non_default_vrf_count_on_socket.is_set
	|| organization_unique_identifier.is_set
	|| p2mpte_li_drop.is_set
	|| redistribution_reset_count.is_set
	|| remote_table_id.is_set
	|| route_distinguisher.is_set
	|| rpf_id.is_set
	|| rpf_policy_name.is_set
	|| rsvp_te_maximum_mdt_aggregation.is_set
	|| rsvp_te_mdt_data_announce_interval.is_set
	|| rsvp_te_mdt_data_switchover_interval.is_set
	|| rsvp_te_mdt_interface.is_set
	|| rsvp_te_mdt_mtu.is_set
	|| rsvp_te_mdt_name.is_set
	|| rsvp_te_mdt_rpf_identifier.is_set
	|| rsvp_te_mdt_static_p2mp_count.is_set
	|| rump_enabled.is_set
	|| sg_expiry_time.is_set
	|| sg_expiry_timer_configured.is_set
	|| sg_expiry_timer_sg_list.is_set
	|| stale_rd_present.is_set
	|| suppress_pim_data_mdt_tlv.is_set
	|| suppress_shared_tree_join.is_set
	|| table_count.is_set
	|| table_id.is_set
	|| umh.is_set
	|| valid_rd_present.is_set
	|| vpn_index.is_set
	|| vrf_id.is_set
	|| (remote_default_group !=  nullptr && remote_default_group->has_data())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_data());
}

bool Pim::Active::Vrfs::Vrf::Context::has_operation() const
{
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<export_route_target.size(); index++)
    {
        if(export_route_target[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.size(); index++)
    {
        if(import_route_target[index]->has_operation())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(active_table_count.operation)
	|| is_set(allow_rp_configured.operation)
	|| is_set(allow_rp_group_list.operation)
	|| is_set(allow_rp_rp_list.operation)
	|| is_set(anycast_rp_configured.operation)
	|| is_set(anycast_rp_policy_name.operation)
	|| is_set(bgp_auto_discovery_configured.operation)
	|| is_set(bgp_auto_discovery_type.operation)
	|| is_set(bgp_i_pmsi_added.operation)
	|| is_set(bgp_remote_address.operation)
	|| is_set(bgp_remote_interface.operation)
	|| is_set(bgp_remote_interface_name.operation)
	|| is_set(bgp_remote_on.operation)
	|| is_set(bgp_remote_state.operation)
	|| is_set(bgp_source_active_announce.operation)
	|| is_set(gin_b_and_mdt_data_announce_interval.operation)
	|| is_set(gin_b_and_mdt_data_switchover_interval.operation)
	|| is_set(gin_b_and_mdt_interface.operation)
	|| is_set(gin_b_and_mdt_mtu.operation)
	|| is_set(gin_b_and_mdt_name.operation)
	|| is_set(gin_b_and_mdt_rpf_identifier.operation)
	|| is_set(gin_band_maximum_mdt_aggregation.operation)
	|| is_set(in_b_and_mdt_data_announce_interval.operation)
	|| is_set(in_b_and_mdt_data_switchover_interval.operation)
	|| is_set(in_b_and_mdt_interface.operation)
	|| is_set(in_b_and_mdt_mtu.operation)
	|| is_set(in_b_and_mdt_name.operation)
	|| is_set(in_b_and_mdt_rpf_identifier.operation)
	|| is_set(in_band_maximum_mdt_aggregation.operation)
	|| is_set(in_band_signaling_local_enabled.operation)
	|| is_set(in_band_signaling_remote_enabled.operation)
	|| is_set(inter_autonomous_system_enabled.operation)
	|| is_set(ir_maximum_mdt_aggregation.operation)
	|| is_set(ir_mdt_data_announce_interval.operation)
	|| is_set(ir_mdt_data_switchover_interval.operation)
	|| is_set(ir_mdt_interface.operation)
	|| is_set(ir_mdt_mtu.operation)
	|| is_set(ir_mdt_name.operation)
	|| is_set(ir_mdt_rpf_identifier.operation)
	|| is_set(ir_mdt_tail_label.operation)
	|| is_set(is_active.operation)
	|| is_set(is_active_ital.operation)
	|| is_set(is_all_interface_disable_operation.operation)
	|| is_set(is_auto_rp_listen_enabled.operation)
	|| is_set(is_auto_rp_listen_sock_add.operation)
	|| is_set(is_create_gin_b_and_mdt_interface.operation)
	|| is_set(is_create_in_b_and_mdt_interface.operation)
	|| is_set(is_create_ir_mdt_interface.operation)
	|| is_set(is_create_mdt_interface.operation)
	|| is_set(is_create_mldp_mdt_interface.operation)
	|| is_set(is_create_rsvp_te_mdt_interface.operation)
	|| is_set(is_default_granges.operation)
	|| is_set(is_gin_b_and_mdt_owner.operation)
	|| is_set(is_in_b_and_mdt_owner.operation)
	|| is_set(is_ir_mdt_owner.operation)
	|| is_set(is_lpts_socket_add_required.operation)
	|| is_set(is_lpts_socket_added.operation)
	|| is_set(is_m_host_publish_pending.operation)
	|| is_set(is_mdt_owner.operation)
	|| is_set(is_mldp_mdt_owner.operation)
	|| is_set(is_mrib_register.operation)
	|| is_set(is_multicast_rib_registration.operation)
	|| is_set(is_pim_nsf_rib_converge_received.operation)
	|| is_set(is_pim_nsf_rib_converged.operation)
	|| is_set(is_redistribution_reset.operation)
	|| is_set(is_register_injection_lpts_socket_add_required.operation)
	|| is_set(is_register_injection_lpts_socket_added.operation)
	|| is_set(is_register_injection_socket_add_required.operation)
	|| is_set(is_register_injection_socket_added.operation)
	|| is_set(is_rib_multipath_enabled.operation)
	|| is_set(is_rib_multipath_interface_hash.operation)
	|| is_set(is_rib_multipath_source_hash.operation)
	|| is_set(is_rib_multipath_source_next_hop_hash.operation)
	|| is_set(is_routing_enabled.operation)
	|| is_set(is_rsvp_te_mdt_owner.operation)
	|| is_set(is_socket_add_required.operation)
	|| is_set(is_socket_added.operation)
	|| is_set(is_udp_socket_add_required.operation)
	|| is_set(is_udp_socket_added.operation)
	|| is_set(is_udp_socket_bind.operation)
	|| is_set(is_udp_socket_bind_required.operation)
	|| is_set(is_unicast_rib_registration.operation)
	|| is_set(maximum_mdt_aggregation.operation)
	|| is_set(mdt_data_announce_interval.operation)
	|| is_set(mdt_data_switchover_interval.operation)
	|| is_set(mdt_default_group.operation)
	|| is_set(mdt_gre_remote_rpf_identifier.operation)
	|| is_set(mdt_gre_rpf_identifier.operation)
	|| is_set(mdt_interface.operation)
	|| is_set(mdt_mtu.operation)
	|| is_set(mdt_neighbor_filter_name.operation)
	|| is_set(mdt_partitioned_ir_control_identifier.operation)
	|| is_set(mdt_partitioned_mdt_control_identifier.operation)
	|| is_set(mhost_default_interface_config.operation)
	|| is_set(mhost_interface.operation)
	|| is_set(mldp_auto_rp_announce_tree_added.operation)
	|| is_set(mldp_auto_rp_discovery_tree_added.operation)
	|| is_set(mldp_bsr_control_tree_added.operation)
	|| is_set(mldp_control_head_lsm_identifier.operation)
	|| is_set(mldp_head_local_label.operation)
	|| is_set(mldp_head_lsm_identifier.operation)
	|| is_set(mldp_maximum_mdt_aggregation.operation)
	|| is_set(mldp_mdt_data_announce_interval.operation)
	|| is_set(mldp_mdt_data_switchover_interval.operation)
	|| is_set(mldp_mdt_interface.operation)
	|| is_set(mldp_mdt_mtu.operation)
	|| is_set(mldp_mdt_name.operation)
	|| is_set(mldp_mdt_remote_rpf_identifier.operation)
	|| is_set(mldp_mdt_rpf_identifier.operation)
	|| is_set(mldp_partioned_mp2m_ptree.operation)
	|| is_set(mldp_partitioned_head_lsm_identifier.operation)
	|| is_set(mldp_partitioned_mdt_configured.operation)
	|| is_set(mldp_partitioned_mdt_identifier.operation)
	|| is_set(mldp_remote_head_lsm_identifier.operation)
	|| is_set(mldp_remote_partitioned_mdt_configured.operation)
	|| is_set(mldp_root_address.operation)
	|| is_set(mldp_root_count.operation)
	|| is_set(murib_id.operation)
	|| is_set(neighbor_filter_name.operation)
	|| is_set(non_default_vrf_count_on_socket.operation)
	|| is_set(organization_unique_identifier.operation)
	|| is_set(p2mpte_li_drop.operation)
	|| is_set(redistribution_reset_count.operation)
	|| is_set(remote_table_id.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(rpf_id.operation)
	|| is_set(rpf_policy_name.operation)
	|| is_set(rsvp_te_maximum_mdt_aggregation.operation)
	|| is_set(rsvp_te_mdt_data_announce_interval.operation)
	|| is_set(rsvp_te_mdt_data_switchover_interval.operation)
	|| is_set(rsvp_te_mdt_interface.operation)
	|| is_set(rsvp_te_mdt_mtu.operation)
	|| is_set(rsvp_te_mdt_name.operation)
	|| is_set(rsvp_te_mdt_rpf_identifier.operation)
	|| is_set(rsvp_te_mdt_static_p2mp_count.operation)
	|| is_set(rump_enabled.operation)
	|| is_set(sg_expiry_time.operation)
	|| is_set(sg_expiry_timer_configured.operation)
	|| is_set(sg_expiry_timer_sg_list.operation)
	|| is_set(stale_rd_present.operation)
	|| is_set(suppress_pim_data_mdt_tlv.operation)
	|| is_set(suppress_shared_tree_join.operation)
	|| is_set(table_count.operation)
	|| is_set(table_id.operation)
	|| is_set(umh.operation)
	|| is_set(valid_rd_present.operation)
	|| is_set(vpn_index.operation)
	|| is_set(vrf_id.operation)
	|| (remote_default_group !=  nullptr && remote_default_group->has_operation())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_table_count.is_set || is_set(active_table_count.operation)) leaf_name_data.push_back(active_table_count.get_name_leafdata());
    if (allow_rp_configured.is_set || is_set(allow_rp_configured.operation)) leaf_name_data.push_back(allow_rp_configured.get_name_leafdata());
    if (allow_rp_group_list.is_set || is_set(allow_rp_group_list.operation)) leaf_name_data.push_back(allow_rp_group_list.get_name_leafdata());
    if (allow_rp_rp_list.is_set || is_set(allow_rp_rp_list.operation)) leaf_name_data.push_back(allow_rp_rp_list.get_name_leafdata());
    if (anycast_rp_configured.is_set || is_set(anycast_rp_configured.operation)) leaf_name_data.push_back(anycast_rp_configured.get_name_leafdata());
    if (anycast_rp_policy_name.is_set || is_set(anycast_rp_policy_name.operation)) leaf_name_data.push_back(anycast_rp_policy_name.get_name_leafdata());
    if (bgp_auto_discovery_configured.is_set || is_set(bgp_auto_discovery_configured.operation)) leaf_name_data.push_back(bgp_auto_discovery_configured.get_name_leafdata());
    if (bgp_auto_discovery_type.is_set || is_set(bgp_auto_discovery_type.operation)) leaf_name_data.push_back(bgp_auto_discovery_type.get_name_leafdata());
    if (bgp_i_pmsi_added.is_set || is_set(bgp_i_pmsi_added.operation)) leaf_name_data.push_back(bgp_i_pmsi_added.get_name_leafdata());
    if (bgp_remote_address.is_set || is_set(bgp_remote_address.operation)) leaf_name_data.push_back(bgp_remote_address.get_name_leafdata());
    if (bgp_remote_interface.is_set || is_set(bgp_remote_interface.operation)) leaf_name_data.push_back(bgp_remote_interface.get_name_leafdata());
    if (bgp_remote_interface_name.is_set || is_set(bgp_remote_interface_name.operation)) leaf_name_data.push_back(bgp_remote_interface_name.get_name_leafdata());
    if (bgp_remote_on.is_set || is_set(bgp_remote_on.operation)) leaf_name_data.push_back(bgp_remote_on.get_name_leafdata());
    if (bgp_remote_state.is_set || is_set(bgp_remote_state.operation)) leaf_name_data.push_back(bgp_remote_state.get_name_leafdata());
    if (bgp_source_active_announce.is_set || is_set(bgp_source_active_announce.operation)) leaf_name_data.push_back(bgp_source_active_announce.get_name_leafdata());
    if (gin_b_and_mdt_data_announce_interval.is_set || is_set(gin_b_and_mdt_data_announce_interval.operation)) leaf_name_data.push_back(gin_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (gin_b_and_mdt_data_switchover_interval.is_set || is_set(gin_b_and_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(gin_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (gin_b_and_mdt_interface.is_set || is_set(gin_b_and_mdt_interface.operation)) leaf_name_data.push_back(gin_b_and_mdt_interface.get_name_leafdata());
    if (gin_b_and_mdt_mtu.is_set || is_set(gin_b_and_mdt_mtu.operation)) leaf_name_data.push_back(gin_b_and_mdt_mtu.get_name_leafdata());
    if (gin_b_and_mdt_name.is_set || is_set(gin_b_and_mdt_name.operation)) leaf_name_data.push_back(gin_b_and_mdt_name.get_name_leafdata());
    if (gin_b_and_mdt_rpf_identifier.is_set || is_set(gin_b_and_mdt_rpf_identifier.operation)) leaf_name_data.push_back(gin_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (gin_band_maximum_mdt_aggregation.is_set || is_set(gin_band_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(gin_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_b_and_mdt_data_announce_interval.is_set || is_set(in_b_and_mdt_data_announce_interval.operation)) leaf_name_data.push_back(in_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (in_b_and_mdt_data_switchover_interval.is_set || is_set(in_b_and_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(in_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (in_b_and_mdt_interface.is_set || is_set(in_b_and_mdt_interface.operation)) leaf_name_data.push_back(in_b_and_mdt_interface.get_name_leafdata());
    if (in_b_and_mdt_mtu.is_set || is_set(in_b_and_mdt_mtu.operation)) leaf_name_data.push_back(in_b_and_mdt_mtu.get_name_leafdata());
    if (in_b_and_mdt_name.is_set || is_set(in_b_and_mdt_name.operation)) leaf_name_data.push_back(in_b_and_mdt_name.get_name_leafdata());
    if (in_b_and_mdt_rpf_identifier.is_set || is_set(in_b_and_mdt_rpf_identifier.operation)) leaf_name_data.push_back(in_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (in_band_maximum_mdt_aggregation.is_set || is_set(in_band_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(in_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_band_signaling_local_enabled.is_set || is_set(in_band_signaling_local_enabled.operation)) leaf_name_data.push_back(in_band_signaling_local_enabled.get_name_leafdata());
    if (in_band_signaling_remote_enabled.is_set || is_set(in_band_signaling_remote_enabled.operation)) leaf_name_data.push_back(in_band_signaling_remote_enabled.get_name_leafdata());
    if (inter_autonomous_system_enabled.is_set || is_set(inter_autonomous_system_enabled.operation)) leaf_name_data.push_back(inter_autonomous_system_enabled.get_name_leafdata());
    if (ir_maximum_mdt_aggregation.is_set || is_set(ir_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(ir_maximum_mdt_aggregation.get_name_leafdata());
    if (ir_mdt_data_announce_interval.is_set || is_set(ir_mdt_data_announce_interval.operation)) leaf_name_data.push_back(ir_mdt_data_announce_interval.get_name_leafdata());
    if (ir_mdt_data_switchover_interval.is_set || is_set(ir_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(ir_mdt_data_switchover_interval.get_name_leafdata());
    if (ir_mdt_interface.is_set || is_set(ir_mdt_interface.operation)) leaf_name_data.push_back(ir_mdt_interface.get_name_leafdata());
    if (ir_mdt_mtu.is_set || is_set(ir_mdt_mtu.operation)) leaf_name_data.push_back(ir_mdt_mtu.get_name_leafdata());
    if (ir_mdt_name.is_set || is_set(ir_mdt_name.operation)) leaf_name_data.push_back(ir_mdt_name.get_name_leafdata());
    if (ir_mdt_rpf_identifier.is_set || is_set(ir_mdt_rpf_identifier.operation)) leaf_name_data.push_back(ir_mdt_rpf_identifier.get_name_leafdata());
    if (ir_mdt_tail_label.is_set || is_set(ir_mdt_tail_label.operation)) leaf_name_data.push_back(ir_mdt_tail_label.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_active_ital.is_set || is_set(is_active_ital.operation)) leaf_name_data.push_back(is_active_ital.get_name_leafdata());
    if (is_all_interface_disable_operation.is_set || is_set(is_all_interface_disable_operation.operation)) leaf_name_data.push_back(is_all_interface_disable_operation.get_name_leafdata());
    if (is_auto_rp_listen_enabled.is_set || is_set(is_auto_rp_listen_enabled.operation)) leaf_name_data.push_back(is_auto_rp_listen_enabled.get_name_leafdata());
    if (is_auto_rp_listen_sock_add.is_set || is_set(is_auto_rp_listen_sock_add.operation)) leaf_name_data.push_back(is_auto_rp_listen_sock_add.get_name_leafdata());
    if (is_create_gin_b_and_mdt_interface.is_set || is_set(is_create_gin_b_and_mdt_interface.operation)) leaf_name_data.push_back(is_create_gin_b_and_mdt_interface.get_name_leafdata());
    if (is_create_in_b_and_mdt_interface.is_set || is_set(is_create_in_b_and_mdt_interface.operation)) leaf_name_data.push_back(is_create_in_b_and_mdt_interface.get_name_leafdata());
    if (is_create_ir_mdt_interface.is_set || is_set(is_create_ir_mdt_interface.operation)) leaf_name_data.push_back(is_create_ir_mdt_interface.get_name_leafdata());
    if (is_create_mdt_interface.is_set || is_set(is_create_mdt_interface.operation)) leaf_name_data.push_back(is_create_mdt_interface.get_name_leafdata());
    if (is_create_mldp_mdt_interface.is_set || is_set(is_create_mldp_mdt_interface.operation)) leaf_name_data.push_back(is_create_mldp_mdt_interface.get_name_leafdata());
    if (is_create_rsvp_te_mdt_interface.is_set || is_set(is_create_rsvp_te_mdt_interface.operation)) leaf_name_data.push_back(is_create_rsvp_te_mdt_interface.get_name_leafdata());
    if (is_default_granges.is_set || is_set(is_default_granges.operation)) leaf_name_data.push_back(is_default_granges.get_name_leafdata());
    if (is_gin_b_and_mdt_owner.is_set || is_set(is_gin_b_and_mdt_owner.operation)) leaf_name_data.push_back(is_gin_b_and_mdt_owner.get_name_leafdata());
    if (is_in_b_and_mdt_owner.is_set || is_set(is_in_b_and_mdt_owner.operation)) leaf_name_data.push_back(is_in_b_and_mdt_owner.get_name_leafdata());
    if (is_ir_mdt_owner.is_set || is_set(is_ir_mdt_owner.operation)) leaf_name_data.push_back(is_ir_mdt_owner.get_name_leafdata());
    if (is_lpts_socket_add_required.is_set || is_set(is_lpts_socket_add_required.operation)) leaf_name_data.push_back(is_lpts_socket_add_required.get_name_leafdata());
    if (is_lpts_socket_added.is_set || is_set(is_lpts_socket_added.operation)) leaf_name_data.push_back(is_lpts_socket_added.get_name_leafdata());
    if (is_m_host_publish_pending.is_set || is_set(is_m_host_publish_pending.operation)) leaf_name_data.push_back(is_m_host_publish_pending.get_name_leafdata());
    if (is_mdt_owner.is_set || is_set(is_mdt_owner.operation)) leaf_name_data.push_back(is_mdt_owner.get_name_leafdata());
    if (is_mldp_mdt_owner.is_set || is_set(is_mldp_mdt_owner.operation)) leaf_name_data.push_back(is_mldp_mdt_owner.get_name_leafdata());
    if (is_mrib_register.is_set || is_set(is_mrib_register.operation)) leaf_name_data.push_back(is_mrib_register.get_name_leafdata());
    if (is_multicast_rib_registration.is_set || is_set(is_multicast_rib_registration.operation)) leaf_name_data.push_back(is_multicast_rib_registration.get_name_leafdata());
    if (is_pim_nsf_rib_converge_received.is_set || is_set(is_pim_nsf_rib_converge_received.operation)) leaf_name_data.push_back(is_pim_nsf_rib_converge_received.get_name_leafdata());
    if (is_pim_nsf_rib_converged.is_set || is_set(is_pim_nsf_rib_converged.operation)) leaf_name_data.push_back(is_pim_nsf_rib_converged.get_name_leafdata());
    if (is_redistribution_reset.is_set || is_set(is_redistribution_reset.operation)) leaf_name_data.push_back(is_redistribution_reset.get_name_leafdata());
    if (is_register_injection_lpts_socket_add_required.is_set || is_set(is_register_injection_lpts_socket_add_required.operation)) leaf_name_data.push_back(is_register_injection_lpts_socket_add_required.get_name_leafdata());
    if (is_register_injection_lpts_socket_added.is_set || is_set(is_register_injection_lpts_socket_added.operation)) leaf_name_data.push_back(is_register_injection_lpts_socket_added.get_name_leafdata());
    if (is_register_injection_socket_add_required.is_set || is_set(is_register_injection_socket_add_required.operation)) leaf_name_data.push_back(is_register_injection_socket_add_required.get_name_leafdata());
    if (is_register_injection_socket_added.is_set || is_set(is_register_injection_socket_added.operation)) leaf_name_data.push_back(is_register_injection_socket_added.get_name_leafdata());
    if (is_rib_multipath_enabled.is_set || is_set(is_rib_multipath_enabled.operation)) leaf_name_data.push_back(is_rib_multipath_enabled.get_name_leafdata());
    if (is_rib_multipath_interface_hash.is_set || is_set(is_rib_multipath_interface_hash.operation)) leaf_name_data.push_back(is_rib_multipath_interface_hash.get_name_leafdata());
    if (is_rib_multipath_source_hash.is_set || is_set(is_rib_multipath_source_hash.operation)) leaf_name_data.push_back(is_rib_multipath_source_hash.get_name_leafdata());
    if (is_rib_multipath_source_next_hop_hash.is_set || is_set(is_rib_multipath_source_next_hop_hash.operation)) leaf_name_data.push_back(is_rib_multipath_source_next_hop_hash.get_name_leafdata());
    if (is_routing_enabled.is_set || is_set(is_routing_enabled.operation)) leaf_name_data.push_back(is_routing_enabled.get_name_leafdata());
    if (is_rsvp_te_mdt_owner.is_set || is_set(is_rsvp_te_mdt_owner.operation)) leaf_name_data.push_back(is_rsvp_te_mdt_owner.get_name_leafdata());
    if (is_socket_add_required.is_set || is_set(is_socket_add_required.operation)) leaf_name_data.push_back(is_socket_add_required.get_name_leafdata());
    if (is_socket_added.is_set || is_set(is_socket_added.operation)) leaf_name_data.push_back(is_socket_added.get_name_leafdata());
    if (is_udp_socket_add_required.is_set || is_set(is_udp_socket_add_required.operation)) leaf_name_data.push_back(is_udp_socket_add_required.get_name_leafdata());
    if (is_udp_socket_added.is_set || is_set(is_udp_socket_added.operation)) leaf_name_data.push_back(is_udp_socket_added.get_name_leafdata());
    if (is_udp_socket_bind.is_set || is_set(is_udp_socket_bind.operation)) leaf_name_data.push_back(is_udp_socket_bind.get_name_leafdata());
    if (is_udp_socket_bind_required.is_set || is_set(is_udp_socket_bind_required.operation)) leaf_name_data.push_back(is_udp_socket_bind_required.get_name_leafdata());
    if (is_unicast_rib_registration.is_set || is_set(is_unicast_rib_registration.operation)) leaf_name_data.push_back(is_unicast_rib_registration.get_name_leafdata());
    if (maximum_mdt_aggregation.is_set || is_set(maximum_mdt_aggregation.operation)) leaf_name_data.push_back(maximum_mdt_aggregation.get_name_leafdata());
    if (mdt_data_announce_interval.is_set || is_set(mdt_data_announce_interval.operation)) leaf_name_data.push_back(mdt_data_announce_interval.get_name_leafdata());
    if (mdt_data_switchover_interval.is_set || is_set(mdt_data_switchover_interval.operation)) leaf_name_data.push_back(mdt_data_switchover_interval.get_name_leafdata());
    if (mdt_default_group.is_set || is_set(mdt_default_group.operation)) leaf_name_data.push_back(mdt_default_group.get_name_leafdata());
    if (mdt_gre_remote_rpf_identifier.is_set || is_set(mdt_gre_remote_rpf_identifier.operation)) leaf_name_data.push_back(mdt_gre_remote_rpf_identifier.get_name_leafdata());
    if (mdt_gre_rpf_identifier.is_set || is_set(mdt_gre_rpf_identifier.operation)) leaf_name_data.push_back(mdt_gre_rpf_identifier.get_name_leafdata());
    if (mdt_interface.is_set || is_set(mdt_interface.operation)) leaf_name_data.push_back(mdt_interface.get_name_leafdata());
    if (mdt_mtu.is_set || is_set(mdt_mtu.operation)) leaf_name_data.push_back(mdt_mtu.get_name_leafdata());
    if (mdt_neighbor_filter_name.is_set || is_set(mdt_neighbor_filter_name.operation)) leaf_name_data.push_back(mdt_neighbor_filter_name.get_name_leafdata());
    if (mdt_partitioned_ir_control_identifier.is_set || is_set(mdt_partitioned_ir_control_identifier.operation)) leaf_name_data.push_back(mdt_partitioned_ir_control_identifier.get_name_leafdata());
    if (mdt_partitioned_mdt_control_identifier.is_set || is_set(mdt_partitioned_mdt_control_identifier.operation)) leaf_name_data.push_back(mdt_partitioned_mdt_control_identifier.get_name_leafdata());
    if (mhost_default_interface_config.is_set || is_set(mhost_default_interface_config.operation)) leaf_name_data.push_back(mhost_default_interface_config.get_name_leafdata());
    if (mhost_interface.is_set || is_set(mhost_interface.operation)) leaf_name_data.push_back(mhost_interface.get_name_leafdata());
    if (mldp_auto_rp_announce_tree_added.is_set || is_set(mldp_auto_rp_announce_tree_added.operation)) leaf_name_data.push_back(mldp_auto_rp_announce_tree_added.get_name_leafdata());
    if (mldp_auto_rp_discovery_tree_added.is_set || is_set(mldp_auto_rp_discovery_tree_added.operation)) leaf_name_data.push_back(mldp_auto_rp_discovery_tree_added.get_name_leafdata());
    if (mldp_bsr_control_tree_added.is_set || is_set(mldp_bsr_control_tree_added.operation)) leaf_name_data.push_back(mldp_bsr_control_tree_added.get_name_leafdata());
    if (mldp_control_head_lsm_identifier.is_set || is_set(mldp_control_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_control_head_lsm_identifier.get_name_leafdata());
    if (mldp_head_local_label.is_set || is_set(mldp_head_local_label.operation)) leaf_name_data.push_back(mldp_head_local_label.get_name_leafdata());
    if (mldp_head_lsm_identifier.is_set || is_set(mldp_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_head_lsm_identifier.get_name_leafdata());
    if (mldp_maximum_mdt_aggregation.is_set || is_set(mldp_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(mldp_maximum_mdt_aggregation.get_name_leafdata());
    if (mldp_mdt_data_announce_interval.is_set || is_set(mldp_mdt_data_announce_interval.operation)) leaf_name_data.push_back(mldp_mdt_data_announce_interval.get_name_leafdata());
    if (mldp_mdt_data_switchover_interval.is_set || is_set(mldp_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(mldp_mdt_data_switchover_interval.get_name_leafdata());
    if (mldp_mdt_interface.is_set || is_set(mldp_mdt_interface.operation)) leaf_name_data.push_back(mldp_mdt_interface.get_name_leafdata());
    if (mldp_mdt_mtu.is_set || is_set(mldp_mdt_mtu.operation)) leaf_name_data.push_back(mldp_mdt_mtu.get_name_leafdata());
    if (mldp_mdt_name.is_set || is_set(mldp_mdt_name.operation)) leaf_name_data.push_back(mldp_mdt_name.get_name_leafdata());
    if (mldp_mdt_remote_rpf_identifier.is_set || is_set(mldp_mdt_remote_rpf_identifier.operation)) leaf_name_data.push_back(mldp_mdt_remote_rpf_identifier.get_name_leafdata());
    if (mldp_mdt_rpf_identifier.is_set || is_set(mldp_mdt_rpf_identifier.operation)) leaf_name_data.push_back(mldp_mdt_rpf_identifier.get_name_leafdata());
    if (mldp_partioned_mp2m_ptree.is_set || is_set(mldp_partioned_mp2m_ptree.operation)) leaf_name_data.push_back(mldp_partioned_mp2m_ptree.get_name_leafdata());
    if (mldp_partitioned_head_lsm_identifier.is_set || is_set(mldp_partitioned_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_partitioned_head_lsm_identifier.get_name_leafdata());
    if (mldp_partitioned_mdt_configured.is_set || is_set(mldp_partitioned_mdt_configured.operation)) leaf_name_data.push_back(mldp_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_partitioned_mdt_identifier.is_set || is_set(mldp_partitioned_mdt_identifier.operation)) leaf_name_data.push_back(mldp_partitioned_mdt_identifier.get_name_leafdata());
    if (mldp_remote_head_lsm_identifier.is_set || is_set(mldp_remote_head_lsm_identifier.operation)) leaf_name_data.push_back(mldp_remote_head_lsm_identifier.get_name_leafdata());
    if (mldp_remote_partitioned_mdt_configured.is_set || is_set(mldp_remote_partitioned_mdt_configured.operation)) leaf_name_data.push_back(mldp_remote_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_root_count.is_set || is_set(mldp_root_count.operation)) leaf_name_data.push_back(mldp_root_count.get_name_leafdata());
    if (murib_id.is_set || is_set(murib_id.operation)) leaf_name_data.push_back(murib_id.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.operation)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (non_default_vrf_count_on_socket.is_set || is_set(non_default_vrf_count_on_socket.operation)) leaf_name_data.push_back(non_default_vrf_count_on_socket.get_name_leafdata());
    if (organization_unique_identifier.is_set || is_set(organization_unique_identifier.operation)) leaf_name_data.push_back(organization_unique_identifier.get_name_leafdata());
    if (p2mpte_li_drop.is_set || is_set(p2mpte_li_drop.operation)) leaf_name_data.push_back(p2mpte_li_drop.get_name_leafdata());
    if (redistribution_reset_count.is_set || is_set(redistribution_reset_count.operation)) leaf_name_data.push_back(redistribution_reset_count.get_name_leafdata());
    if (remote_table_id.is_set || is_set(remote_table_id.operation)) leaf_name_data.push_back(remote_table_id.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (rpf_id.is_set || is_set(rpf_id.operation)) leaf_name_data.push_back(rpf_id.get_name_leafdata());
    if (rpf_policy_name.is_set || is_set(rpf_policy_name.operation)) leaf_name_data.push_back(rpf_policy_name.get_name_leafdata());
    if (rsvp_te_maximum_mdt_aggregation.is_set || is_set(rsvp_te_maximum_mdt_aggregation.operation)) leaf_name_data.push_back(rsvp_te_maximum_mdt_aggregation.get_name_leafdata());
    if (rsvp_te_mdt_data_announce_interval.is_set || is_set(rsvp_te_mdt_data_announce_interval.operation)) leaf_name_data.push_back(rsvp_te_mdt_data_announce_interval.get_name_leafdata());
    if (rsvp_te_mdt_data_switchover_interval.is_set || is_set(rsvp_te_mdt_data_switchover_interval.operation)) leaf_name_data.push_back(rsvp_te_mdt_data_switchover_interval.get_name_leafdata());
    if (rsvp_te_mdt_interface.is_set || is_set(rsvp_te_mdt_interface.operation)) leaf_name_data.push_back(rsvp_te_mdt_interface.get_name_leafdata());
    if (rsvp_te_mdt_mtu.is_set || is_set(rsvp_te_mdt_mtu.operation)) leaf_name_data.push_back(rsvp_te_mdt_mtu.get_name_leafdata());
    if (rsvp_te_mdt_name.is_set || is_set(rsvp_te_mdt_name.operation)) leaf_name_data.push_back(rsvp_te_mdt_name.get_name_leafdata());
    if (rsvp_te_mdt_rpf_identifier.is_set || is_set(rsvp_te_mdt_rpf_identifier.operation)) leaf_name_data.push_back(rsvp_te_mdt_rpf_identifier.get_name_leafdata());
    if (rsvp_te_mdt_static_p2mp_count.is_set || is_set(rsvp_te_mdt_static_p2mp_count.operation)) leaf_name_data.push_back(rsvp_te_mdt_static_p2mp_count.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.operation)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (sg_expiry_time.is_set || is_set(sg_expiry_time.operation)) leaf_name_data.push_back(sg_expiry_time.get_name_leafdata());
    if (sg_expiry_timer_configured.is_set || is_set(sg_expiry_timer_configured.operation)) leaf_name_data.push_back(sg_expiry_timer_configured.get_name_leafdata());
    if (sg_expiry_timer_sg_list.is_set || is_set(sg_expiry_timer_sg_list.operation)) leaf_name_data.push_back(sg_expiry_timer_sg_list.get_name_leafdata());
    if (stale_rd_present.is_set || is_set(stale_rd_present.operation)) leaf_name_data.push_back(stale_rd_present.get_name_leafdata());
    if (suppress_pim_data_mdt_tlv.is_set || is_set(suppress_pim_data_mdt_tlv.operation)) leaf_name_data.push_back(suppress_pim_data_mdt_tlv.get_name_leafdata());
    if (suppress_shared_tree_join.is_set || is_set(suppress_shared_tree_join.operation)) leaf_name_data.push_back(suppress_shared_tree_join.get_name_leafdata());
    if (table_count.is_set || is_set(table_count.operation)) leaf_name_data.push_back(table_count.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (umh.is_set || is_set(umh.operation)) leaf_name_data.push_back(umh.get_name_leafdata());
    if (valid_rd_present.is_set || is_set(valid_rd_present.operation)) leaf_name_data.push_back(valid_rd_present.get_name_leafdata());
    if (vpn_index.is_set || is_set(vpn_index.operation)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto mldp_root_address_name_datas = mldp_root_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mldp_root_address_name_datas.begin(), mldp_root_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anycast-rp-range")
    {
        for(auto const & c : anycast_rp_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Context::AnycastRpRange>();
        c->parent = this;
        anycast_rp_range.push_back(c);
        return c;
    }

    if(child_yang_name == "export-route-target")
    {
        for(auto const & c : export_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget>();
        c->parent = this;
        export_route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "import-route-target")
    {
        for(auto const & c : import_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget>();
        c->parent = this;
        import_route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-default-group")
    {
        if(remote_default_group == nullptr)
        {
            remote_default_group = std::make_shared<Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup>();
        }
        return remote_default_group;
    }

    if(child_yang_name == "rpf-default-table")
    {
        if(rpf_default_table == nullptr)
        {
            rpf_default_table = std::make_shared<Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable>();
        }
        return rpf_default_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : anycast_rp_range)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : export_route_target)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import_route_target)
    {
        children[c->get_segment_path()] = c;
    }

    if(remote_default_group != nullptr)
    {
        children["remote-default-group"] = remote_default_group;
    }

    if(rpf_default_table != nullptr)
    {
        children["rpf-default-table"] = rpf_default_table;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Context::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-table-count")
    {
        active_table_count = value;
    }
    if(value_path == "allow-rp-configured")
    {
        allow_rp_configured = value;
    }
    if(value_path == "allow-rp-group-list")
    {
        allow_rp_group_list = value;
    }
    if(value_path == "allow-rp-rp-list")
    {
        allow_rp_rp_list = value;
    }
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured = value;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name = value;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured = value;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type = value;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added = value;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address = value;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface = value;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name = value;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on = value;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state = value;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce = value;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval = value;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval = value;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface = value;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu = value;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name = value;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier = value;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation = value;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval = value;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval = value;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface = value;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu = value;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name = value;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier = value;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation = value;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled = value;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled = value;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled = value;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation = value;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval = value;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval = value;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface = value;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu = value;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name = value;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier = value;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital = value;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation = value;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled = value;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add = value;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface = value;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface = value;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface = value;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface = value;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface = value;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface = value;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges = value;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner = value;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner = value;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner = value;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required = value;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added = value;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending = value;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner = value;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner = value;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register = value;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration = value;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received = value;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged = value;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset = value;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required = value;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added = value;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required = value;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added = value;
    }
    if(value_path == "is-rib-multipath-enabled")
    {
        is_rib_multipath_enabled = value;
    }
    if(value_path == "is-rib-multipath-interface-hash")
    {
        is_rib_multipath_interface_hash = value;
    }
    if(value_path == "is-rib-multipath-source-hash")
    {
        is_rib_multipath_source_hash = value;
    }
    if(value_path == "is-rib-multipath-source-next-hop-hash")
    {
        is_rib_multipath_source_next_hop_hash = value;
    }
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled = value;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner = value;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required = value;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added = value;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required = value;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added = value;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind = value;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required = value;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration = value;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation = value;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval = value;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval = value;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group = value;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier = value;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier = value;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface = value;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu = value;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name = value;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier = value;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier = value;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config = value;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface = value;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added = value;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added = value;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added = value;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier = value;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label = value;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier = value;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation = value;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval = value;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval = value;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface = value;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu = value;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name = value;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier = value;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier = value;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree = value;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier = value;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured = value;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier = value;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier = value;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured = value;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.append(value);
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count = value;
    }
    if(value_path == "murib-id")
    {
        murib_id = value;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket = value;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier = value;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop = value;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count = value;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "rpf-id")
    {
        rpf_id = value;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name = value;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation = value;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval = value;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval = value;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface = value;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu = value;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name = value;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier = value;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count = value;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time = value;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured = value;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list = value;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present = value;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv = value;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join = value;
    }
    if(value_path == "table-count")
    {
        table_count = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "umh")
    {
        umh = value;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present = value;
    }
    if(value_path == "vpn-index")
    {
        vpn_index = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::RemoteDefaultGroup()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "remote-default-group"; yang_parent_name = "context";
}

Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::~RemoteDefaultGroup()
{
}

bool Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-default-group";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteDefaultGroup' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::RpfDefaultTable()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "rpf-default-table"; yang_parent_name = "context";
}

Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::~RpfDefaultTable()
{
}

bool Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(is_active.operation)
	|| is_set(is_ital_registration_done.operation)
	|| is_set(is_rib_convergence.operation)
	|| is_set(is_rib_convergence_received.operation)
	|| is_set(is_rib_registration_done.operation)
	|| is_set(rpf_registrations.operation)
	|| is_set(safi.operation)
	|| is_set(table_id.operation)
	|| is_set(table_name.operation)
	|| is_set(vrf_id.operation);
}

std::string Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-default-table";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfDefaultTable' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.operation)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.operation)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.operation)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.operation)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.operation)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.operation)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (safi.is_set || is_set(safi.operation)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.operation)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "is-active")
    {
        is_active = value;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
    }
    if(value_path == "safi")
    {
        safi = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "table-name")
    {
        table_name = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::ExportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{
    yang_name = "export-route-target"; yang_parent_name = "context";
}

Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::~ExportRouteTarget()
{
}

bool Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(anycast_rp.operation)
	|| is_set(anycast_rp_marked.operation)
	|| is_set(bgp_auto_discovery.operation)
	|| is_set(configured.operation)
	|| is_set(route_target.operation)
	|| is_set(segment_border.operation)
	|| is_set(update_pending.operation);
}

std::string Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-target";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExportRouteTarget' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.operation)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.operation)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.operation)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.operation)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.operation)) leaf_name_data.push_back(update_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::ImportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{
    yang_name = "import-route-target"; yang_parent_name = "context";
}

Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::~ImportRouteTarget()
{
}

bool Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(anycast_rp.operation)
	|| is_set(anycast_rp_marked.operation)
	|| is_set(bgp_auto_discovery.operation)
	|| is_set(configured.operation)
	|| is_set(route_target.operation)
	|| is_set(segment_border.operation)
	|| is_set(update_pending.operation);
}

std::string Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-target";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ImportRouteTarget' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.operation)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.operation)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.operation)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.operation)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.operation)) leaf_name_data.push_back(update_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
    }
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::AnycastRpRange()
    :
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;

    yang_name = "anycast-rp-range"; yang_parent_name = "context";
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_data() const
{
    return ancast_rp_marked.is_set
	|| prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_operation() const
{
    return is_set(operation)
	|| is_set(ancast_rp_marked.operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AnycastRpRange' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ancast_rp_marked.is_set || is_set(ancast_rp_marked.operation)) leaf_name_data.push_back(ancast_rp_marked.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "anycast-rp-range";
}

Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{
    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "vrf";
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyEntryFlagRouteCounts' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-entry-flag-route-count")
    {
        for(auto const & c : topology_entry_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_entry_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts";
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    return entry_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(operation)
	|| is_set(entry_flag.operation)
	|| is_set(active_group_ranges.operation)
	|| is_set(group_ranges.operation)
	|| is_set(groute_count.operation)
	|| is_set(is_node_low_memory.operation)
	|| is_set(sg_route_count.operation)
	|| is_set(sgr_route_count.operation)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyEntryFlagRouteCount' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.operation)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.operation)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.operation)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.operation)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.operation)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.operation)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.operation)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>();
        }
        return group_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
    }
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-entry-flag-route-count";
}

Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}


}
}

