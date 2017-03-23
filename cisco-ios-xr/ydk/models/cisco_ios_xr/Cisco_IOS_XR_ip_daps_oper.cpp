
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_daps_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_daps_oper {

AddressPoolService::AddressPoolService()
    :
    nodes(std::make_shared<AddressPoolService::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "address-pool-service"; yang_parent_name = "Cisco-IOS-XR-ip-daps-oper";
}

AddressPoolService::~AddressPoolService()
{
}

bool AddressPoolService::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool AddressPoolService::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string AddressPoolService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-oper:address-pool-service";

    return path_buffer.str();

}

EntityPath AddressPoolService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<AddressPoolService::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void AddressPoolService::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> AddressPoolService::clone_ptr() const
{
    return std::make_shared<AddressPoolService>();
}

std::string AddressPoolService::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AddressPoolService::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AddressPoolService::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

AddressPoolService::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "address-pool-service";
}

AddressPoolService::Nodes::~Nodes()
{
}

bool AddressPoolService::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AddressPoolService::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-daps-oper:address-pool-service/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AddressPoolService::Nodes::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    pools(std::make_shared<AddressPoolService::Nodes::Node::Pools>())
	,total_utilization(std::make_shared<AddressPoolService::Nodes::Node::TotalUtilization>())
	,vrfs(std::make_shared<AddressPoolService::Nodes::Node::Vrfs>())
{
    pools->parent = this;
    children["pools"] = pools;

    total_utilization->parent = this;
    children["total-utilization"] = total_utilization;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "node"; yang_parent_name = "nodes";
}

AddressPoolService::Nodes::Node::~Node()
{
}

bool AddressPoolService::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (pools !=  nullptr && pools->has_data())
	|| (total_utilization !=  nullptr && total_utilization->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool AddressPoolService::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (pools !=  nullptr && pools->has_operation())
	|| (total_utilization !=  nullptr && total_utilization->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string AddressPoolService::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-daps-oper:address-pool-service/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pools")
    {
        if(pools != nullptr)
        {
            children["pools"] = pools;
        }
        else
        {
            pools = std::make_shared<AddressPoolService::Nodes::Node::Pools>();
            pools->parent = this;
            children["pools"] = pools;
        }
        return children.at("pools");
    }

    if(child_yang_name == "total-utilization")
    {
        if(total_utilization != nullptr)
        {
            children["total-utilization"] = total_utilization;
        }
        else
        {
            total_utilization = std::make_shared<AddressPoolService::Nodes::Node::TotalUtilization>();
            total_utilization->parent = this;
            children["total-utilization"] = total_utilization;
        }
        return children.at("total-utilization");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<AddressPoolService::Nodes::Node::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::get_children()
{
    if(children.find("pools") == children.end())
    {
        if(pools != nullptr)
        {
            children["pools"] = pools;
        }
    }

    if(children.find("total-utilization") == children.end())
    {
        if(total_utilization != nullptr)
        {
            children["total-utilization"] = total_utilization;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pools()
{
    yang_name = "pools"; yang_parent_name = "node";
}

AddressPoolService::Nodes::Node::Pools::~Pools()
{
}

bool AddressPoolService::Nodes::Node::Pools::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::Node::Pools::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AddressPoolService::Nodes::Node::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pools' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool>();
        c->parent = this;
        pool.push_back(std::move(c));
        children[segment_path] = pool.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::get_children()
{
    for (auto const & c : pool)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"}
    	,
    address_ranges(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges>())
	,allocated_addresses(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses>())
	,configuration(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::Configuration>())
{
    address_ranges->parent = this;
    children["address-ranges"] = address_ranges;

    allocated_addresses->parent = this;
    children["allocated-addresses"] = allocated_addresses;

    configuration->parent = this;
    children["configuration"] = configuration;

    yang_name = "pool"; yang_parent_name = "pools";
}

AddressPoolService::Nodes::Node::Pools::Pool::~Pool()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::has_data() const
{
    return pool_name.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (allocated_addresses !=  nullptr && allocated_addresses->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(pool_name.operation)
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (allocated_addresses !=  nullptr && allocated_addresses->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[pool-name='" <<pool_name <<"']";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pool' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.operation)) leaf_name_data.push_back(pool_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-ranges")
    {
        if(address_ranges != nullptr)
        {
            children["address-ranges"] = address_ranges;
        }
        else
        {
            address_ranges = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges>();
            address_ranges->parent = this;
            children["address-ranges"] = address_ranges;
        }
        return children.at("address-ranges");
    }

    if(child_yang_name == "allocated-addresses")
    {
        if(allocated_addresses != nullptr)
        {
            children["allocated-addresses"] = allocated_addresses;
        }
        else
        {
            allocated_addresses = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses>();
            allocated_addresses->parent = this;
            children["allocated-addresses"] = allocated_addresses;
        }
        return children.at("allocated-addresses");
    }

    if(child_yang_name == "configuration")
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration;
        }
        else
        {
            configuration = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::Configuration>();
            configuration->parent = this;
            children["configuration"] = configuration;
        }
        return children.at("configuration");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::get_children()
{
    if(children.find("address-ranges") == children.end())
    {
        if(address_ranges != nullptr)
        {
            children["address-ranges"] = address_ranges;
        }
    }

    if(children.find("allocated-addresses") == children.end())
    {
        if(allocated_addresses != nullptr)
        {
            children["allocated-addresses"] = allocated_addresses;
        }
    }

    if(children.find("configuration") == children.end())
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRanges()
{
    yang_name = "address-ranges"; yang_parent_name = "pool";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::~AddressRanges()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRanges' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(std::move(c));
        children[segment_path] = address_range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_children()
{
    for (auto const & c : address_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    allocated_addresses{YType::uint32, "allocated-addresses"},
    excluded_addresses{YType::uint32, "excluded-addresses"},
    free_addresses{YType::uint32, "free-addresses"},
    network_blocked_status{YType::uint32, "network-blocked-status"},
    network_blocked_status_trp{YType::uint32, "network-blocked-status-trp"},
    pool_name{YType::str, "pool-name"},
    pool_scope{YType::str, "pool-scope"},
    vrf_name{YType::str, "vrf-name"}
    	,
    default_router(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter>())
	,end_address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress>())
	,start_address_xr(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr>())
{
    default_router->parent = this;
    children["default-router"] = default_router;

    end_address->parent = this;
    children["end-address"] = end_address;

    start_address_xr->parent = this;
    children["start-address-xr"] = start_address_xr;

    yang_name = "address-range"; yang_parent_name = "address-ranges";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::~AddressRange()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::has_data() const
{
    return start_address.is_set
	|| allocated_addresses.is_set
	|| excluded_addresses.is_set
	|| free_addresses.is_set
	|| network_blocked_status.is_set
	|| network_blocked_status_trp.is_set
	|| pool_name.is_set
	|| pool_scope.is_set
	|| vrf_name.is_set
	|| (default_router !=  nullptr && default_router->has_data())
	|| (end_address !=  nullptr && end_address->has_data())
	|| (start_address_xr !=  nullptr && start_address_xr->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::has_operation() const
{
    return is_set(operation)
	|| is_set(start_address.operation)
	|| is_set(allocated_addresses.operation)
	|| is_set(excluded_addresses.operation)
	|| is_set(free_addresses.operation)
	|| is_set(network_blocked_status.operation)
	|| is_set(network_blocked_status_trp.operation)
	|| is_set(pool_name.operation)
	|| is_set(pool_scope.operation)
	|| is_set(vrf_name.operation)
	|| (default_router !=  nullptr && default_router->has_operation())
	|| (end_address !=  nullptr && end_address->has_operation())
	|| (start_address_xr !=  nullptr && start_address_xr->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRange' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.operation)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (allocated_addresses.is_set || is_set(allocated_addresses.operation)) leaf_name_data.push_back(allocated_addresses.get_name_leafdata());
    if (excluded_addresses.is_set || is_set(excluded_addresses.operation)) leaf_name_data.push_back(excluded_addresses.get_name_leafdata());
    if (free_addresses.is_set || is_set(free_addresses.operation)) leaf_name_data.push_back(free_addresses.get_name_leafdata());
    if (network_blocked_status.is_set || is_set(network_blocked_status.operation)) leaf_name_data.push_back(network_blocked_status.get_name_leafdata());
    if (network_blocked_status_trp.is_set || is_set(network_blocked_status_trp.operation)) leaf_name_data.push_back(network_blocked_status_trp.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.operation)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_scope.is_set || is_set(pool_scope.operation)) leaf_name_data.push_back(pool_scope.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-router")
    {
        if(default_router != nullptr)
        {
            children["default-router"] = default_router;
        }
        else
        {
            default_router = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter>();
            default_router->parent = this;
            children["default-router"] = default_router;
        }
        return children.at("default-router");
    }

    if(child_yang_name == "end-address")
    {
        if(end_address != nullptr)
        {
            children["end-address"] = end_address;
        }
        else
        {
            end_address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress>();
            end_address->parent = this;
            children["end-address"] = end_address;
        }
        return children.at("end-address");
    }

    if(child_yang_name == "start-address-xr")
    {
        if(start_address_xr != nullptr)
        {
            children["start-address-xr"] = start_address_xr;
        }
        else
        {
            start_address_xr = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr>();
            start_address_xr->parent = this;
            children["start-address-xr"] = start_address_xr;
        }
        return children.at("start-address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_children()
{
    if(children.find("default-router") == children.end())
    {
        if(default_router != nullptr)
        {
            children["default-router"] = default_router;
        }
    }

    if(children.find("end-address") == children.end())
    {
        if(end_address != nullptr)
        {
            children["end-address"] = end_address;
        }
    }

    if(children.find("start-address-xr") == children.end())
    {
        if(start_address_xr != nullptr)
        {
            children["start-address-xr"] = start_address_xr;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "start-address")
    {
        start_address = value;
    }
    if(value_path == "allocated-addresses")
    {
        allocated_addresses = value;
    }
    if(value_path == "excluded-addresses")
    {
        excluded_addresses = value;
    }
    if(value_path == "free-addresses")
    {
        free_addresses = value;
    }
    if(value_path == "network-blocked-status")
    {
        network_blocked_status = value;
    }
    if(value_path == "network-blocked-status-trp")
    {
        network_blocked_status_trp = value;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
    }
    if(value_path == "pool-scope")
    {
        pool_scope = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::StartAddressXr()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "start-address-xr"; yang_parent_name = "address-range";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::~StartAddressXr()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-address-xr";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartAddressXr' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "start-address-xr";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::has_data() const
{
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
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

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::EndAddress()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "end-address"; yang_parent_name = "address-range";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::~EndAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EndAddress' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "end-address";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::has_data() const
{
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
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

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::DefaultRouter()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "default-router"; yang_parent_name = "address-range";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::~DefaultRouter()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-router";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultRouter' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "default-router";
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::has_data() const
{
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
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

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AllocatedAddresses()
    :
    pool_allocations(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations>())
{
    pool_allocations->parent = this;
    children["pool-allocations"] = pool_allocations;

    yang_name = "allocated-addresses"; yang_parent_name = "pool";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::~AllocatedAddresses()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<in_use_address.size(); index++)
    {
        if(in_use_address[index]->has_data())
            return true;
    }
    return (pool_allocations !=  nullptr && pool_allocations->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<in_use_address.size(); index++)
    {
        if(in_use_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (pool_allocations !=  nullptr && pool_allocations->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-addresses";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocatedAddresses' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange>();
        c->parent = this;
        address_range.push_back(std::move(c));
        children[segment_path] = address_range.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "in-use-address")
    {
        for(auto const & c : in_use_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress>();
        c->parent = this;
        in_use_address.push_back(std::move(c));
        children[segment_path] = in_use_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pool-allocations")
    {
        if(pool_allocations != nullptr)
        {
            children["pool-allocations"] = pool_allocations;
        }
        else
        {
            pool_allocations = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations>();
            pool_allocations->parent = this;
            children["pool-allocations"] = pool_allocations;
        }
        return children.at("pool-allocations");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_children()
{
    for (auto const & c : address_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : in_use_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("pool-allocations") == children.end())
    {
        if(pool_allocations != nullptr)
        {
            children["pool-allocations"] = pool_allocations;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::PoolAllocations()
    :
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    total{YType::uint32, "total"},
    used{YType::uint32, "used"},
    utilization{YType::uint32, "utilization"},
    vrf_name{YType::str, "vrf-name"}
    	,
    high_threshold(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold>())
	,low_threshold(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold>())
{
    high_threshold->parent = this;
    children["high-threshold"] = high_threshold;

    low_threshold->parent = this;
    children["low-threshold"] = low_threshold;

    yang_name = "pool-allocations"; yang_parent_name = "allocated-addresses";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::~PoolAllocations()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::has_data() const
{
    return excluded.is_set
	|| free.is_set
	|| total.is_set
	|| used.is_set
	|| utilization.is_set
	|| vrf_name.is_set
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (low_threshold !=  nullptr && low_threshold->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::has_operation() const
{
    return is_set(operation)
	|| is_set(excluded.operation)
	|| is_set(free.operation)
	|| is_set(total.operation)
	|| is_set(used.operation)
	|| is_set(utilization.operation)
	|| is_set(vrf_name.operation)
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (low_threshold !=  nullptr && low_threshold->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-allocations";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PoolAllocations' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excluded.is_set || is_set(excluded.operation)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.operation)) leaf_name_data.push_back(utilization.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "high-threshold")
    {
        if(high_threshold != nullptr)
        {
            children["high-threshold"] = high_threshold;
        }
        else
        {
            high_threshold = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold>();
            high_threshold->parent = this;
            children["high-threshold"] = high_threshold;
        }
        return children.at("high-threshold");
    }

    if(child_yang_name == "low-threshold")
    {
        if(low_threshold != nullptr)
        {
            children["low-threshold"] = low_threshold;
        }
        else
        {
            low_threshold = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold>();
            low_threshold->parent = this;
            children["low-threshold"] = low_threshold;
        }
        return children.at("low-threshold");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_children()
{
    if(children.find("high-threshold") == children.end())
    {
        if(high_threshold != nullptr)
        {
            children["high-threshold"] = high_threshold;
        }
    }

    if(children.find("low-threshold") == children.end())
    {
        if(low_threshold != nullptr)
        {
            children["low-threshold"] = low_threshold;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excluded")
    {
        excluded = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
    if(value_path == "utilization")
    {
        utilization = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::HighThreshold()
    :
    threshold{YType::uint32, "threshold"},
    time_last_crossed{YType::str, "time-last-crossed"},
    triggers{YType::uint32, "triggers"}
{
    yang_name = "high-threshold"; yang_parent_name = "pool-allocations";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::~HighThreshold()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::has_data() const
{
    return threshold.is_set
	|| time_last_crossed.is_set
	|| triggers.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(time_last_crossed.operation)
	|| is_set(triggers.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HighThreshold' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (time_last_crossed.is_set || is_set(time_last_crossed.operation)) leaf_name_data.push_back(time_last_crossed.get_name_leafdata());
    if (triggers.is_set || is_set(triggers.operation)) leaf_name_data.push_back(triggers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "time-last-crossed")
    {
        time_last_crossed = value;
    }
    if(value_path == "triggers")
    {
        triggers = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::LowThreshold()
    :
    threshold{YType::uint32, "threshold"},
    time_last_crossed{YType::str, "time-last-crossed"},
    triggers{YType::uint32, "triggers"}
{
    yang_name = "low-threshold"; yang_parent_name = "pool-allocations";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::~LowThreshold()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::has_data() const
{
    return threshold.is_set
	|| time_last_crossed.is_set
	|| triggers.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation)
	|| is_set(time_last_crossed.operation)
	|| is_set(triggers.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-threshold";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LowThreshold' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (time_last_crossed.is_set || is_set(time_last_crossed.operation)) leaf_name_data.push_back(time_last_crossed.get_name_leafdata());
    if (triggers.is_set || is_set(triggers.operation)) leaf_name_data.push_back(triggers.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "time-last-crossed")
    {
        time_last_crossed = value;
    }
    if(value_path == "triggers")
    {
        triggers = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::AddressRange()
    :
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    used{YType::uint32, "used"}
    	,
    end_address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress>())
	,start_address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress>())
{
    end_address->parent = this;
    children["end-address"] = end_address;

    start_address->parent = this;
    children["start-address"] = start_address;

    yang_name = "address-range"; yang_parent_name = "allocated-addresses";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::~AddressRange()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::has_data() const
{
    return excluded.is_set
	|| free.is_set
	|| used.is_set
	|| (end_address !=  nullptr && end_address->has_data())
	|| (start_address !=  nullptr && start_address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::has_operation() const
{
    return is_set(operation)
	|| is_set(excluded.operation)
	|| is_set(free.operation)
	|| is_set(used.operation)
	|| (end_address !=  nullptr && end_address->has_operation())
	|| (start_address !=  nullptr && start_address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressRange' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excluded.is_set || is_set(excluded.operation)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "end-address")
    {
        if(end_address != nullptr)
        {
            children["end-address"] = end_address;
        }
        else
        {
            end_address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress>();
            end_address->parent = this;
            children["end-address"] = end_address;
        }
        return children.at("end-address");
    }

    if(child_yang_name == "start-address")
    {
        if(start_address != nullptr)
        {
            children["start-address"] = start_address;
        }
        else
        {
            start_address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress>();
            start_address->parent = this;
            children["start-address"] = start_address;
        }
        return children.at("start-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_children()
{
    if(children.find("end-address") == children.end())
    {
        if(end_address != nullptr)
        {
            children["end-address"] = end_address;
        }
    }

    if(children.find("start-address") == children.end())
    {
        if(start_address != nullptr)
        {
            children["start-address"] = start_address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excluded")
    {
        excluded = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::StartAddress()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "start-address"; yang_parent_name = "address-range";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::~StartAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartAddress' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "start-address";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::has_data() const
{
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
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

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::EndAddress()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "end-address"; yang_parent_name = "address-range";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::~EndAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EndAddress' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "end-address";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::has_data() const
{
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
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

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::InUseAddress()
    :
    client_type{YType::enumeration, "client-type"}
    	,
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "in-use-address"; yang_parent_name = "allocated-addresses";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::~InUseAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::has_data() const
{
    return client_type.is_set
	|| (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(client_type.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-use-address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InUseAddress' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_type.is_set || is_set(client_type.operation)) leaf_name_data.push_back(client_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-type")
    {
        client_type = value;
    }
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "address"; yang_parent_name = "in-use-address";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::Address_()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "address";
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::~Address_()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::has_data() const
{
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address_' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
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

AddressPoolService::Nodes::Node::Pools::Pool::Configuration::Configuration()
    :
    current_utilization{YType::uint8, "current-utilization"},
    high_utilization_mark{YType::uint8, "high-utilization-mark"},
    low_utilization_mark{YType::uint8, "low-utilization-mark"},
    pool_id{YType::uint32, "pool-id"},
    pool_name{YType::str, "pool-name"},
    pool_prefix_length{YType::uint32, "pool-prefix-length"},
    pool_scope{YType::str, "pool-scope"},
    utilization_high_count{YType::uint32, "utilization-high-count"},
    utilization_low_count{YType::uint32, "utilization-low-count"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "configuration"; yang_parent_name = "pool";
}

AddressPoolService::Nodes::Node::Pools::Pool::Configuration::~Configuration()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::has_data() const
{
    return current_utilization.is_set
	|| high_utilization_mark.is_set
	|| low_utilization_mark.is_set
	|| pool_id.is_set
	|| pool_name.is_set
	|| pool_prefix_length.is_set
	|| pool_scope.is_set
	|| utilization_high_count.is_set
	|| utilization_low_count.is_set
	|| vrf_name.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(current_utilization.operation)
	|| is_set(high_utilization_mark.operation)
	|| is_set(low_utilization_mark.operation)
	|| is_set(pool_id.operation)
	|| is_set(pool_name.operation)
	|| is_set(pool_prefix_length.operation)
	|| is_set(pool_scope.operation)
	|| is_set(utilization_high_count.operation)
	|| is_set(utilization_low_count.operation)
	|| is_set(vrf_name.operation);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_utilization.is_set || is_set(current_utilization.operation)) leaf_name_data.push_back(current_utilization.get_name_leafdata());
    if (high_utilization_mark.is_set || is_set(high_utilization_mark.operation)) leaf_name_data.push_back(high_utilization_mark.get_name_leafdata());
    if (low_utilization_mark.is_set || is_set(low_utilization_mark.operation)) leaf_name_data.push_back(low_utilization_mark.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.operation)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.operation)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_prefix_length.is_set || is_set(pool_prefix_length.operation)) leaf_name_data.push_back(pool_prefix_length.get_name_leafdata());
    if (pool_scope.is_set || is_set(pool_scope.operation)) leaf_name_data.push_back(pool_scope.get_name_leafdata());
    if (utilization_high_count.is_set || is_set(utilization_high_count.operation)) leaf_name_data.push_back(utilization_high_count.get_name_leafdata());
    if (utilization_low_count.is_set || is_set(utilization_low_count.operation)) leaf_name_data.push_back(utilization_low_count.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-utilization")
    {
        current_utilization = value;
    }
    if(value_path == "high-utilization-mark")
    {
        high_utilization_mark = value;
    }
    if(value_path == "low-utilization-mark")
    {
        low_utilization_mark = value;
    }
    if(value_path == "pool-id")
    {
        pool_id = value;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
    }
    if(value_path == "pool-prefix-length")
    {
        pool_prefix_length = value;
    }
    if(value_path == "pool-scope")
    {
        pool_scope = value;
    }
    if(value_path == "utilization-high-count")
    {
        utilization_high_count = value;
    }
    if(value_path == "utilization-low-count")
    {
        utilization_low_count = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

AddressPoolService::Nodes::Node::TotalUtilization::TotalUtilization()
    :
    current_total_utilization{YType::uint8, "current-total-utilization"},
    total_utilization_high_mark{YType::uint8, "total-utilization-high-mark"},
    total_utilization_low_mark{YType::uint8, "total-utilization-low-mark"}
{
    yang_name = "total-utilization"; yang_parent_name = "node";
}

AddressPoolService::Nodes::Node::TotalUtilization::~TotalUtilization()
{
}

bool AddressPoolService::Nodes::Node::TotalUtilization::has_data() const
{
    return current_total_utilization.is_set
	|| total_utilization_high_mark.is_set
	|| total_utilization_low_mark.is_set;
}

bool AddressPoolService::Nodes::Node::TotalUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(current_total_utilization.operation)
	|| is_set(total_utilization_high_mark.operation)
	|| is_set(total_utilization_low_mark.operation);
}

std::string AddressPoolService::Nodes::Node::TotalUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-utilization";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::TotalUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalUtilization' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_total_utilization.is_set || is_set(current_total_utilization.operation)) leaf_name_data.push_back(current_total_utilization.get_name_leafdata());
    if (total_utilization_high_mark.is_set || is_set(total_utilization_high_mark.operation)) leaf_name_data.push_back(total_utilization_high_mark.get_name_leafdata());
    if (total_utilization_low_mark.is_set || is_set(total_utilization_low_mark.operation)) leaf_name_data.push_back(total_utilization_low_mark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::TotalUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::TotalUtilization::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::TotalUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-total-utilization")
    {
        current_total_utilization = value;
    }
    if(value_path == "total-utilization-high-mark")
    {
        total_utilization_high_mark = value;
    }
    if(value_path == "total-utilization-low-mark")
    {
        total_utilization_low_mark = value;
    }
}

AddressPoolService::Nodes::Node::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "node";
}

AddressPoolService::Nodes::Node::Vrfs::~Vrfs()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::Node::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AddressPoolService::Nodes::Node::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4>())
	,ipv6(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::~Vrf()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Ipv4()
    :
    allocation_summary(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary>())
{
    allocation_summary->parent = this;
    children["allocation-summary"] = allocation_summary;

    yang_name = "ipv4"; yang_parent_name = "vrf";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::has_data() const
{
    for (std::size_t index=0; index<pools.size(); index++)
    {
        if(pools[index]->has_data())
            return true;
    }
    return (allocation_summary !=  nullptr && allocation_summary->has_data());
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<pools.size(); index++)
    {
        if(pools[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (allocation_summary !=  nullptr && allocation_summary->has_operation());
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allocation-summary")
    {
        if(allocation_summary != nullptr)
        {
            children["allocation-summary"] = allocation_summary;
        }
        else
        {
            allocation_summary = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary>();
            allocation_summary->parent = this;
            children["allocation-summary"] = allocation_summary;
        }
        return children.at("allocation-summary");
    }

    if(child_yang_name == "pools")
    {
        for(auto const & c : pools)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools>();
        c->parent = this;
        pools.push_back(std::move(c));
        children[segment_path] = pools.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_children()
{
    if(children.find("allocation-summary") == children.end())
    {
        if(allocation_summary != nullptr)
        {
            children["allocation-summary"] = allocation_summary;
        }
    }

    for (auto const & c : pools)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::AllocationSummary()
    :
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    high_utilization_threshold{YType::uint8, "high-utilization-threshold"},
    low_utilization_threshold{YType::uint8, "low-utilization-threshold"},
    total{YType::uint32, "total"},
    used{YType::uint32, "used"},
    utilization{YType::uint8, "utilization"}
{
    yang_name = "allocation-summary"; yang_parent_name = "ipv4";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::~AllocationSummary()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::has_data() const
{
    return excluded.is_set
	|| free.is_set
	|| high_utilization_threshold.is_set
	|| low_utilization_threshold.is_set
	|| total.is_set
	|| used.is_set
	|| utilization.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(excluded.operation)
	|| is_set(free.operation)
	|| is_set(high_utilization_threshold.operation)
	|| is_set(low_utilization_threshold.operation)
	|| is_set(total.operation)
	|| is_set(used.operation)
	|| is_set(utilization.operation);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-summary";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocationSummary' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excluded.is_set || is_set(excluded.operation)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (high_utilization_threshold.is_set || is_set(high_utilization_threshold.operation)) leaf_name_data.push_back(high_utilization_threshold.get_name_leafdata());
    if (low_utilization_threshold.is_set || is_set(low_utilization_threshold.operation)) leaf_name_data.push_back(low_utilization_threshold.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.operation)) leaf_name_data.push_back(utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excluded")
    {
        excluded = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "high-utilization-threshold")
    {
        high_utilization_threshold = value;
    }
    if(value_path == "low-utilization-threshold")
    {
        low_utilization_threshold = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
    if(value_path == "utilization")
    {
        utilization = value;
    }
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::Pools()
    :
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    pool_name{YType::str, "pool-name"},
    total{YType::uint32, "total"},
    used{YType::uint32, "used"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "pools"; yang_parent_name = "ipv4";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::~Pools()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::has_data() const
{
    return excluded.is_set
	|| free.is_set
	|| pool_name.is_set
	|| total.is_set
	|| used.is_set
	|| vrf_name.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::has_operation() const
{
    return is_set(operation)
	|| is_set(excluded.operation)
	|| is_set(free.operation)
	|| is_set(pool_name.operation)
	|| is_set(total.operation)
	|| is_set(used.operation)
	|| is_set(vrf_name.operation);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pools' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excluded.is_set || is_set(excluded.operation)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.operation)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excluded")
    {
        excluded = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Ipv6()
    :
    allocation_summary(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary>())
{
    allocation_summary->parent = this;
    children["allocation-summary"] = allocation_summary;

    yang_name = "ipv6"; yang_parent_name = "vrf";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::has_data() const
{
    for (std::size_t index=0; index<pools.size(); index++)
    {
        if(pools[index]->has_data())
            return true;
    }
    return (allocation_summary !=  nullptr && allocation_summary->has_data());
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<pools.size(); index++)
    {
        if(pools[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (allocation_summary !=  nullptr && allocation_summary->has_operation());
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "allocation-summary")
    {
        if(allocation_summary != nullptr)
        {
            children["allocation-summary"] = allocation_summary;
        }
        else
        {
            allocation_summary = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary>();
            allocation_summary->parent = this;
            children["allocation-summary"] = allocation_summary;
        }
        return children.at("allocation-summary");
    }

    if(child_yang_name == "pools")
    {
        for(auto const & c : pools)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools>();
        c->parent = this;
        pools.push_back(std::move(c));
        children[segment_path] = pools.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_children()
{
    if(children.find("allocation-summary") == children.end())
    {
        if(allocation_summary != nullptr)
        {
            children["allocation-summary"] = allocation_summary;
        }
    }

    for (auto const & c : pools)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::AllocationSummary()
    :
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    high_utilization_threshold{YType::uint8, "high-utilization-threshold"},
    low_utilization_threshold{YType::uint8, "low-utilization-threshold"},
    total{YType::uint32, "total"},
    used{YType::uint32, "used"},
    utilization{YType::uint8, "utilization"}
{
    yang_name = "allocation-summary"; yang_parent_name = "ipv6";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::~AllocationSummary()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::has_data() const
{
    return excluded.is_set
	|| free.is_set
	|| high_utilization_threshold.is_set
	|| low_utilization_threshold.is_set
	|| total.is_set
	|| used.is_set
	|| utilization.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(excluded.operation)
	|| is_set(free.operation)
	|| is_set(high_utilization_threshold.operation)
	|| is_set(low_utilization_threshold.operation)
	|| is_set(total.operation)
	|| is_set(used.operation)
	|| is_set(utilization.operation);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-summary";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocationSummary' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excluded.is_set || is_set(excluded.operation)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (high_utilization_threshold.is_set || is_set(high_utilization_threshold.operation)) leaf_name_data.push_back(high_utilization_threshold.get_name_leafdata());
    if (low_utilization_threshold.is_set || is_set(low_utilization_threshold.operation)) leaf_name_data.push_back(low_utilization_threshold.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.operation)) leaf_name_data.push_back(utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excluded")
    {
        excluded = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "high-utilization-threshold")
    {
        high_utilization_threshold = value;
    }
    if(value_path == "low-utilization-threshold")
    {
        low_utilization_threshold = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
    if(value_path == "utilization")
    {
        utilization = value;
    }
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::Pools()
    :
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    pool_name{YType::str, "pool-name"},
    total{YType::uint32, "total"},
    used{YType::uint32, "used"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "pools"; yang_parent_name = "ipv6";
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::~Pools()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::has_data() const
{
    return excluded.is_set
	|| free.is_set
	|| pool_name.is_set
	|| total.is_set
	|| used.is_set
	|| vrf_name.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::has_operation() const
{
    return is_set(operation)
	|| is_set(excluded.operation)
	|| is_set(free.operation)
	|| is_set(pool_name.operation)
	|| is_set(total.operation)
	|| is_set(used.operation)
	|| is_set(vrf_name.operation);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";

    return path_buffer.str();

}

EntityPath AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pools' in Cisco_IOS_XR_ip_daps_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (excluded.is_set || is_set(excluded.operation)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.operation)) leaf_name_data.push_back(free.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.operation)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());
    if (used.is_set || is_set(used.operation)) leaf_name_data.push_back(used.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_children()
{
    return children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "excluded")
    {
        excluded = value;
    }
    if(value_path == "free")
    {
        free = value;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
    if(value_path == "used")
    {
        used = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

const Enum::YLeaf DapsClientEnum::none {0, "none"};
const Enum::YLeaf DapsClientEnum::ppp {1, "ppp"};
const Enum::YLeaf DapsClientEnum::dhcp {2, "dhcp"};
const Enum::YLeaf DapsClientEnum::dhcpv6 {4, "dhcpv6"};
const Enum::YLeaf DapsClientEnum::ipv6nd {5, "ipv6nd"};

const Enum::YLeaf IpAddrEnum::ipv4 {2, "ipv4"};
const Enum::YLeaf IpAddrEnum::ipv6 {10, "ipv6"};


}
}

