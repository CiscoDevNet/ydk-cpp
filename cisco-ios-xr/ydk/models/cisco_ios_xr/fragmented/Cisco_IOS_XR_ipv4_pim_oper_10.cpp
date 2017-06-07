
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_10.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::AnycastRpRange()
    :
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;

    yang_name = "anycast-rp-range"; yang_parent_name = "context";
}

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_data() const
{
    return ancast_rp_marked.is_set
	|| prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_operation() const
{
    return is_set(operation)
	|| is_set(ancast_rp_marked.operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "anycast-rp-range";
}

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{
    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "vrf";
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_entry_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts";
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
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

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
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

std::string Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>();
        }
        return group_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-entry-flag-route-count";
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RpfRedirect()
    :
    bundle_interfaces(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces>())
	,redirect_route_databases(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>())
{
    bundle_interfaces->parent = this;

    redirect_route_databases->parent = this;

    yang_name = "rpf-redirect"; yang_parent_name = "vrf";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::~RpfRedirect()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::has_data() const
{
    return (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::has_operation() const
{
    return is_set(operation)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfRedirect' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    if(child_yang_name == "redirect-route-databases")
    {
        if(redirect_route_databases == nullptr)
        {
            redirect_route_databases = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>();
        }
        return redirect_route_databases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    if(redirect_route_databases != nullptr)
    {
        children["redirect-route-databases"] = redirect_route_databases;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabases()
{
    yang_name = "redirect-route-databases"; yang_parent_name = "rpf-redirect";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::~RedirectRouteDatabases()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_data() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_operation() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-databases";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedirectRouteDatabases' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-database")
    {
        for(auto const & c : redirect_route_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase>();
        c->parent = this;
        redirect_route_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redirect_route_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::RedirectRouteDatabase()
    :
    bandwidth{YType::uint32, "bandwidth"},
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>())
	,source_address_xr(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;

    source_address_xr->parent = this;

    yang_name = "redirect-route-database"; yang_parent_name = "redirect-route-databases";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::~RedirectRouteDatabase()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| group_address.is_set
	|| source_address.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth.operation)
	|| is_set(group_address.operation)
	|| is_set(source_address.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-database";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RedirectRouteDatabase' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

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
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "redirect-route-database";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "redirect-route-database";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::Interface()
    :
    expiry{YType::uint64, "expiry"},
    interface_name{YType::str, "interface-name"},
    is_outgoing_interface{YType::boolean, "is-outgoing-interface"},
    is_rpf_interface{YType::boolean, "is-rpf-interface"},
    is_snoop_interface{YType::boolean, "is-snoop-interface"},
    uptime{YType::uint64, "uptime"}
    	,
    rpf_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>())
{
    rpf_address->parent = this;

    yang_name = "interface"; yang_parent_name = "redirect-route-database";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::~Interface()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_data() const
{
    return expiry.is_set
	|| interface_name.is_set
	|| is_outgoing_interface.is_set
	|| is_rpf_interface.is_set
	|| is_snoop_interface.is_set
	|| uptime.is_set
	|| (rpf_address !=  nullptr && rpf_address->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(expiry.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_outgoing_interface.operation)
	|| is_set(is_rpf_interface.operation)
	|| is_set(is_snoop_interface.operation)
	|| is_set(uptime.operation)
	|| (rpf_address !=  nullptr && rpf_address->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_entity_path(Entity* ancestor) const
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

    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_outgoing_interface.is_set || is_set(is_outgoing_interface.operation)) leaf_name_data.push_back(is_outgoing_interface.get_name_leafdata());
    if (is_rpf_interface.is_set || is_set(is_rpf_interface.operation)) leaf_name_data.push_back(is_rpf_interface.get_name_leafdata());
    if (is_snoop_interface.is_set || is_set(is_snoop_interface.operation)) leaf_name_data.push_back(is_snoop_interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-address")
    {
        if(rpf_address == nullptr)
        {
            rpf_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>();
        }
        return rpf_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_address != nullptr)
    {
        children["rpf-address"] = rpf_address;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiry")
    {
        expiry = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface = value;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface = value;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::RpfAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-address"; yang_parent_name = "interface";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::~RpfAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-address";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "rpf-redirect";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::~BundleInterfaces()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInterfaces' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::BundleInterface()
    :
    allocated_bandwidth{YType::int32, "allocated-bandwidth"},
    allocated_threshold_bandwidth{YType::int32, "allocated-threshold-bandwidth"},
    available_bandwidth{YType::int32, "available-bandwidth"},
    available_threshold_bandwidth{YType::int32, "available-threshold-bandwidth"},
    bundle_name{YType::str, "bundle-name"},
    interface_name{YType::str, "interface-name"},
    rpf_redirect_bundle_name{YType::str, "rpf-redirect-bundle-name"},
    rpf_redirect_interface_name{YType::str, "rpf-redirect-interface-name"},
    snooping_bandwidth_used{YType::int32, "snooping-bandwidth-used"},
    topology_bandwidth_used{YType::int32, "topology-bandwidth-used"},
    total_bandwidth{YType::int32, "total-bandwidth"}
{
    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_data() const
{
    return allocated_bandwidth.is_set
	|| allocated_threshold_bandwidth.is_set
	|| available_bandwidth.is_set
	|| available_threshold_bandwidth.is_set
	|| bundle_name.is_set
	|| interface_name.is_set
	|| rpf_redirect_bundle_name.is_set
	|| rpf_redirect_interface_name.is_set
	|| snooping_bandwidth_used.is_set
	|| topology_bandwidth_used.is_set
	|| total_bandwidth.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(allocated_bandwidth.operation)
	|| is_set(allocated_threshold_bandwidth.operation)
	|| is_set(available_bandwidth.operation)
	|| is_set(available_threshold_bandwidth.operation)
	|| is_set(bundle_name.operation)
	|| is_set(interface_name.operation)
	|| is_set(rpf_redirect_bundle_name.operation)
	|| is_set(rpf_redirect_interface_name.operation)
	|| is_set(snooping_bandwidth_used.operation)
	|| is_set(topology_bandwidth_used.operation)
	|| is_set(total_bandwidth.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BundleInterface' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bandwidth.is_set || is_set(allocated_bandwidth.operation)) leaf_name_data.push_back(allocated_bandwidth.get_name_leafdata());
    if (allocated_threshold_bandwidth.is_set || is_set(allocated_threshold_bandwidth.operation)) leaf_name_data.push_back(allocated_threshold_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.operation)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (available_threshold_bandwidth.is_set || is_set(available_threshold_bandwidth.operation)) leaf_name_data.push_back(available_threshold_bandwidth.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_redirect_bundle_name.is_set || is_set(rpf_redirect_bundle_name.operation)) leaf_name_data.push_back(rpf_redirect_bundle_name.get_name_leafdata());
    if (rpf_redirect_interface_name.is_set || is_set(rpf_redirect_interface_name.operation)) leaf_name_data.push_back(rpf_redirect_interface_name.get_name_leafdata());
    if (snooping_bandwidth_used.is_set || is_set(snooping_bandwidth_used.operation)) leaf_name_data.push_back(snooping_bandwidth_used.get_name_leafdata());
    if (topology_bandwidth_used.is_set || is_set(topology_bandwidth_used.operation)) leaf_name_data.push_back(topology_bandwidth_used.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.operation)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth = value;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth = value;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth = value;
    }
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name = value;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name = value;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used = value;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used = value;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
    }
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "vrf";
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::~Tunnels()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnels' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>())
	,source_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;

    rp_address->parent = this;

    source_address->parent = this;

    source_address_netio->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::~Tunnel()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| is_set(vrf_name.operation)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_children() const
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

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "tunnel";
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "tunnel";
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-netio"; yang_parent_name = "tunnel";
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-netio"; yang_parent_name = "tunnel";
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoutes()
{
    yang_name = "multicast-static-routes"; yang_parent_name = "vrf";
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::~MulticastStaticRoutes()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-routes";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastStaticRoutes' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-static-route")
    {
        for(auto const & c : multicast_static_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute>();
        c->parent = this;
        multicast_static_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_static_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::MulticastStaticRoute()
    :
    address{YType::str, "address"},
    distance{YType::uint32, "distance"},
    interface_name{YType::str, "interface-name"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"}
    	,
    nexthop(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>())
	,prefix(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>())
{
    nexthop->parent = this;

    prefix->parent = this;

    yang_name = "multicast-static-route"; yang_parent_name = "multicast-static-routes";
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::~MulticastStaticRoute()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_data() const
{
    return address.is_set
	|| distance.is_set
	|| interface_name.is_set
	|| is_via_lsm.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(distance.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_via_lsm.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-route";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastStaticRoute' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.operation)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
    }
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "multicast-static-route";
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::~Prefix()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::Nexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "nexthop"; yang_parent_name = "multicast-static-route";
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::~Nexthop()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSources()
{
    yang_name = "group-map-match-sources"; yang_parent_name = "vrf";
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::~GroupMapMatchSources()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::has_data() const
{
    for (std::size_t index=0; index<group_map_match_source.size(); index++)
    {
        if(group_map_match_source[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_match_source.size(); index++)
    {
        if(group_map_match_source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-sources";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapMatchSources' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-match-source")
    {
        for(auto const & c : group_map_match_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource>();
        c->parent = this;
        group_map_match_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_match_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapMatchSource()
    :
    group_address{YType::str, "group-address"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation>())
{
    group_map_information->parent = this;

    source_of_information->parent = this;

    yang_name = "group-map-match-source"; yang_parent_name = "group-map-match-sources";
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::~GroupMapMatchSource()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::has_data() const
{
    return group_address.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(expires.operation)
	|| is_set(holdtime.operation)
	|| is_set(uptime.operation)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-source" <<"[group-address='" <<group_address <<"']";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapMatchSource' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (expires.is_set || is_set(expires.operation)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::get_children() const
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

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "expires")
    {
        expires = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-map-match-source";
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::GroupMapInformation()
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
    prefix(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-match-source";
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_data() const
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

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_operation() const
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

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_children() const
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

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "vrf";
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
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
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
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

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
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

std::string Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_address_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
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

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor";
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

const EntityPath Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Pim6Ma()
    :
    active(std::make_shared<Pim6Ma::Active>())
	,standby(std::make_shared<Pim6Ma::Standby>())
{
    active->parent = this;

    standby->parent = this;

    yang_name = "pim6-ma"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper";
}

Pim6Ma::~Pim6Ma()
{
}

bool Pim6Ma::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Pim6Ma::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Pim6Ma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma";

    return path_buffer.str();

}

const EntityPath Pim6Ma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Pim6Ma::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Pim6Ma::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Pim6Ma::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Pim6Ma::clone_ptr() const
{
    return std::make_shared<Pim6Ma>();
}

std::string Pim6Ma::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pim6Ma::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pim6Ma::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Pim6Ma::Active::Active()
    :
    interface_table(std::make_shared<Pim6Ma::Active::InterfaceTable>())
	,pim_ma_summary(std::make_shared<Pim6Ma::Active::PimMaSummary>())
{
    interface_table->parent = this;

    pim_ma_summary->parent = this;

    yang_name = "active"; yang_parent_name = "pim6-ma";
}

Pim6Ma::Active::~Active()
{
}

bool Pim6Ma::Active::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool Pim6Ma::Active::has_operation() const
{
    return is_set(operation)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string Pim6Ma::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Pim6Ma::Active::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<Pim6Ma::Active::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void Pim6Ma::Active::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Active::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;

    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "active";
}

Pim6Ma::Active::InterfaceTable::~InterfaceTable()
{
}

bool Pim6Ma::Active::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool Pim6Ma::Active::InterfaceTable::has_operation() const
{
    return is_set(operation)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{
    yang_name = "interface-by-handles"; yang_parent_name = "interface-table";
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;

    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles";
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/interface-by-handles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-handle";
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-handle";
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByNames()
{
    yang_name = "interface-by-names"; yang_parent_name = "interface-table";
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;

    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names";
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/interface-by-names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-name";
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-name";
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Active::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{
    yang_name = "pim-ma-summary"; yang_parent_name = "active";
}

Pim6Ma::Active::PimMaSummary::~PimMaSummary()
{
}

bool Pim6Ma::Active::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool Pim6Ma::Active::PimMaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(decap_interface_count.operation)
	|| is_set(encap_interface_count.operation)
	|| is_set(is_edm_connection_open.operation)
	|| is_set(is_im_connection_open.operation)
	|| is_set(is_netio_connection_open.operation)
	|| is_set(is_standby_edm_connection_open.operation)
	|| is_set(mdt_interface_count.operation);
}

std::string Pim6Ma::Active::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Active::PimMaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.operation)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.operation)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.operation)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.operation)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.operation)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.operation)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.operation)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Active::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Active::PimMaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
    }
}

Pim6Ma::Standby::Standby()
    :
    interface_table(std::make_shared<Pim6Ma::Standby::InterfaceTable>())
	,pim_ma_summary(std::make_shared<Pim6Ma::Standby::PimMaSummary>())
{
    interface_table->parent = this;

    pim_ma_summary->parent = this;

    yang_name = "standby"; yang_parent_name = "pim6-ma";
}

Pim6Ma::Standby::~Standby()
{
}

bool Pim6Ma::Standby::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool Pim6Ma::Standby::has_operation() const
{
    return is_set(operation)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string Pim6Ma::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Pim6Ma::Standby::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<Pim6Ma::Standby::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void Pim6Ma::Standby::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Standby::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;

    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "standby";
}

Pim6Ma::Standby::InterfaceTable::~InterfaceTable()
{
}

bool Pim6Ma::Standby::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::has_operation() const
{
    return is_set(operation)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{
    yang_name = "interface-by-handles"; yang_parent_name = "interface-table";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        for(auto const & c : interface_by_handle)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_handle)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;

    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/interface-by-handles/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-handle";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-handle";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByNames()
{
    yang_name = "interface-by-names"; yang_parent_name = "interface-table";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        for(auto const & c : interface_by_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_by_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, std::string value)
{
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_type{YType::enumeration, "interface-type"},
    vrf_name{YType::str, "vrf-name"}
    	,
    rp_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;

    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_type.is_set
	|| vrf_name.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(interface_type.operation)
	|| is_set(vrf_name.operation)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/interface-by-names/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.operation)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "interface-by-name";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "interface-by-name";
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, std::string value)
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

Pim6Ma::Standby::PimMaSummary::PimMaSummary()
    :
    decap_interface_count{YType::uint32, "decap-interface-count"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{
    yang_name = "pim-ma-summary"; yang_parent_name = "standby";
}

Pim6Ma::Standby::PimMaSummary::~PimMaSummary()
{
}

bool Pim6Ma::Standby::PimMaSummary::has_data() const
{
    return decap_interface_count.is_set
	|| encap_interface_count.is_set
	|| is_edm_connection_open.is_set
	|| is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| mdt_interface_count.is_set;
}

bool Pim6Ma::Standby::PimMaSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(decap_interface_count.operation)
	|| is_set(encap_interface_count.operation)
	|| is_set(is_edm_connection_open.operation)
	|| is_set(is_im_connection_open.operation)
	|| is_set(is_netio_connection_open.operation)
	|| is_set(is_standby_edm_connection_open.operation)
	|| is_set(mdt_interface_count.operation);
}

std::string Pim6Ma::Standby::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";

    return path_buffer.str();

}

const EntityPath Pim6Ma::Standby::PimMaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (decap_interface_count.is_set || is_set(decap_interface_count.operation)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.operation)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.operation)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_im_connection_open.is_set || is_set(is_im_connection_open.operation)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.operation)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.operation)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.operation)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim6Ma::Standby::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim6Ma::Standby::PimMaSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
    }
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
    }
}


}
}

