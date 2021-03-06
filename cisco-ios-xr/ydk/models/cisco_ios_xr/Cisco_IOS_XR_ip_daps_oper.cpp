
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_daps_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_daps_oper {

AddressPoolService::AddressPoolService()
    :
    nodes(std::make_shared<AddressPoolService::Nodes>())
{
    nodes->parent = this;

    yang_name = "address-pool-service"; yang_parent_name = "Cisco-IOS-XR-ip-daps-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

AddressPoolService::~AddressPoolService()
{
}

bool AddressPoolService::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool AddressPoolService::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string AddressPoolService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-oper:address-pool-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<AddressPoolService::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void AddressPoolService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> AddressPoolService::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> AddressPoolService::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AddressPoolService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

AddressPoolService::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "address-pool-service"; is_top_level_class = false; has_list_ancestor = false; 
}

AddressPoolService::Nodes::~Nodes()
{
}

bool AddressPoolService::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-oper:address-pool-service/" << get_segment_path();
    return path_buffer.str();
}

std::string AddressPoolService::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    pools(std::make_shared<AddressPoolService::Nodes::Node::Pools>())
    , total_utilization(std::make_shared<AddressPoolService::Nodes::Node::TotalUtilization>())
    , vrfs(std::make_shared<AddressPoolService::Nodes::Node::Vrfs>())
{
    pools->parent = this;
    total_utilization->parent = this;
    vrfs->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

AddressPoolService::Nodes::Node::~Node()
{
}

bool AddressPoolService::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (pools !=  nullptr && pools->has_data())
	|| (total_utilization !=  nullptr && total_utilization->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool AddressPoolService::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (pools !=  nullptr && pools->has_operation())
	|| (total_utilization !=  nullptr && total_utilization->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string AddressPoolService::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-oper:address-pool-service/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string AddressPoolService::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pools")
    {
        if(pools == nullptr)
        {
            pools = std::make_shared<AddressPoolService::Nodes::Node::Pools>();
        }
        return pools;
    }

    if(child_yang_name == "total-utilization")
    {
        if(total_utilization == nullptr)
        {
            total_utilization = std::make_shared<AddressPoolService::Nodes::Node::TotalUtilization>();
        }
        return total_utilization;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<AddressPoolService::Nodes::Node::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pools != nullptr)
    {
        _children["pools"] = pools;
    }

    if(total_utilization != nullptr)
    {
        _children["total-utilization"] = total_utilization;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools" || name == "total-utilization" || name == "vrfs" || name == "node-name")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pools()
    :
    pool(this, {"pool_name"})
{

    yang_name = "pools"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::~Pools()
{
}

bool AddressPoolService::Nodes::Node::Pools::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::Node::Pools::has_operation() const
{
    for (std::size_t index=0; index<pool.len(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool>();
        ent_->parent = this;
        pool.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : pool.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"}
        ,
    address_ranges(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges>())
    , allocated_addresses(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses>())
    , configuration(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::Configuration>())
{
    address_ranges->parent = this;
    allocated_addresses->parent = this;
    configuration->parent = this;

    yang_name = "pool"; yang_parent_name = "pools"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::~Pool()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (allocated_addresses !=  nullptr && allocated_addresses->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (allocated_addresses !=  nullptr && allocated_addresses->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    ADD_KEY_TOKEN(pool_name, "pool-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "allocated-addresses")
    {
        if(allocated_addresses == nullptr)
        {
            allocated_addresses = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses>();
        }
        return allocated_addresses;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_ranges != nullptr)
    {
        _children["address-ranges"] = address_ranges;
    }

    if(allocated_addresses != nullptr)
    {
        _children["allocated-addresses"] = allocated_addresses;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-ranges" || name == "allocated-addresses" || name == "configuration" || name == "pool-name")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRanges()
    :
    address_range(this, {"start_address"})
{

    yang_name = "address-ranges"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::~AddressRanges()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange>();
        ent_->parent = this;
        address_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    pool_name{YType::str, "pool-name"},
    vrf_name{YType::str, "vrf-name"},
    allocated_addresses{YType::uint32, "allocated-addresses"},
    free_addresses{YType::uint32, "free-addresses"},
    excluded_addresses{YType::uint32, "excluded-addresses"},
    network_blocked_status{YType::uint32, "network-blocked-status"},
    network_blocked_status_trp{YType::uint32, "network-blocked-status-trp"}
        ,
    start_address_xr(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr>())
    , end_address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress>())
    , default_router(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter>())
{
    start_address_xr->parent = this;
    end_address->parent = this;
    default_router->parent = this;

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::~AddressRange()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::has_data() const
{
    if (is_presence_container) return true;
    return start_address.is_set
	|| pool_name.is_set
	|| vrf_name.is_set
	|| allocated_addresses.is_set
	|| free_addresses.is_set
	|| excluded_addresses.is_set
	|| network_blocked_status.is_set
	|| network_blocked_status_trp.is_set
	|| (start_address_xr !=  nullptr && start_address_xr->has_data())
	|| (end_address !=  nullptr && end_address->has_data())
	|| (default_router !=  nullptr && default_router->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(allocated_addresses.yfilter)
	|| ydk::is_set(free_addresses.yfilter)
	|| ydk::is_set(excluded_addresses.yfilter)
	|| ydk::is_set(network_blocked_status.yfilter)
	|| ydk::is_set(network_blocked_status_trp.yfilter)
	|| (start_address_xr !=  nullptr && start_address_xr->has_operation())
	|| (end_address !=  nullptr && end_address->has_operation())
	|| (default_router !=  nullptr && default_router->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range";
    ADD_KEY_TOKEN(start_address, "start-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (allocated_addresses.is_set || is_set(allocated_addresses.yfilter)) leaf_name_data.push_back(allocated_addresses.get_name_leafdata());
    if (free_addresses.is_set || is_set(free_addresses.yfilter)) leaf_name_data.push_back(free_addresses.get_name_leafdata());
    if (excluded_addresses.is_set || is_set(excluded_addresses.yfilter)) leaf_name_data.push_back(excluded_addresses.get_name_leafdata());
    if (network_blocked_status.is_set || is_set(network_blocked_status.yfilter)) leaf_name_data.push_back(network_blocked_status.get_name_leafdata());
    if (network_blocked_status_trp.is_set || is_set(network_blocked_status_trp.yfilter)) leaf_name_data.push_back(network_blocked_status_trp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-address-xr")
    {
        if(start_address_xr == nullptr)
        {
            start_address_xr = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr>();
        }
        return start_address_xr;
    }

    if(child_yang_name == "end-address")
    {
        if(end_address == nullptr)
        {
            end_address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress>();
        }
        return end_address;
    }

    if(child_yang_name == "default-router")
    {
        if(default_router == nullptr)
        {
            default_router = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter>();
        }
        return default_router;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_address_xr != nullptr)
    {
        _children["start-address-xr"] = start_address_xr;
    }

    if(end_address != nullptr)
    {
        _children["end-address"] = end_address;
    }

    if(default_router != nullptr)
    {
        _children["default-router"] = default_router;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-addresses")
    {
        allocated_addresses = value;
        allocated_addresses.value_namespace = name_space;
        allocated_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free-addresses")
    {
        free_addresses = value;
        free_addresses.value_namespace = name_space;
        free_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded-addresses")
    {
        excluded_addresses = value;
        excluded_addresses.value_namespace = name_space;
        excluded_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-blocked-status")
    {
        network_blocked_status = value;
        network_blocked_status.value_namespace = name_space;
        network_blocked_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network-blocked-status-trp")
    {
        network_blocked_status_trp = value;
        network_blocked_status_trp.value_namespace = name_space;
        network_blocked_status_trp.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "allocated-addresses")
    {
        allocated_addresses.yfilter = yfilter;
    }
    if(value_path == "free-addresses")
    {
        free_addresses.yfilter = yfilter;
    }
    if(value_path == "excluded-addresses")
    {
        excluded_addresses.yfilter = yfilter;
    }
    if(value_path == "network-blocked-status")
    {
        network_blocked_status.yfilter = yfilter;
    }
    if(value_path == "network-blocked-status-trp")
    {
        network_blocked_status_trp.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address-xr" || name == "end-address" || name == "default-router" || name == "start-address" || name == "pool-name" || name == "vrf-name" || name == "allocated-addresses" || name == "free-addresses" || name == "excluded-addresses" || name == "network-blocked-status" || name == "network-blocked-status-trp")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::StartAddressXr()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address>())
{
    address->parent = this;

    yang_name = "start-address-xr"; yang_parent_name = "address-range"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::~StartAddressXr()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "start-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
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
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::StartAddressXr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::EndAddress()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address>())
{
    address->parent = this;

    yang_name = "end-address"; yang_parent_name = "address-range"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::~EndAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "end-address"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
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
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::EndAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::DefaultRouter()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address>())
{
    address->parent = this;

    yang_name = "default-router"; yang_parent_name = "address-range"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::~DefaultRouter()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "default-router"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
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
}

void AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AddressRanges::AddressRange::DefaultRouter::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AllocatedAddresses()
    :
    pool_allocations(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations>())
    , address_range(this, {})
    , in_use_address(this, {})
{
    pool_allocations->parent = this;

    yang_name = "allocated-addresses"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::~AllocatedAddresses()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<in_use_address.len(); index++)
    {
        if(in_use_address[index]->has_data())
            return true;
    }
    return (pool_allocations !=  nullptr && pool_allocations->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::has_operation() const
{
    for (std::size_t index=0; index<address_range.len(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<in_use_address.len(); index++)
    {
        if(in_use_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (pool_allocations !=  nullptr && pool_allocations->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool-allocations")
    {
        if(pool_allocations == nullptr)
        {
            pool_allocations = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations>();
        }
        return pool_allocations;
    }

    if(child_yang_name == "address-range")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange>();
        ent_->parent = this;
        address_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "in-use-address")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress>();
        ent_->parent = this;
        in_use_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pool_allocations != nullptr)
    {
        _children["pool-allocations"] = pool_allocations;
    }

    count_ = 0;
    for (auto ent_ : address_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : in_use_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-allocations" || name == "address-range" || name == "in-use-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::PoolAllocations()
    :
    vrf_name{YType::str, "vrf-name"},
    used{YType::uint32, "used"},
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    total{YType::uint32, "total"},
    utilization{YType::uint32, "utilization"}
        ,
    high_threshold(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold>())
    , low_threshold(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold>())
{
    high_threshold->parent = this;
    low_threshold->parent = this;

    yang_name = "pool-allocations"; yang_parent_name = "allocated-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::~PoolAllocations()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| used.is_set
	|| excluded.is_set
	|| free.is_set
	|| total.is_set
	|| utilization.is_set
	|| (high_threshold !=  nullptr && high_threshold->has_data())
	|| (low_threshold !=  nullptr && low_threshold->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(excluded.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(utilization.yfilter)
	|| (high_threshold !=  nullptr && high_threshold->has_operation())
	|| (low_threshold !=  nullptr && low_threshold->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool-allocations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (excluded.is_set || is_set(excluded.yfilter)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high-threshold")
    {
        if(high_threshold == nullptr)
        {
            high_threshold = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold>();
        }
        return high_threshold;
    }

    if(child_yang_name == "low-threshold")
    {
        if(low_threshold == nullptr)
        {
            low_threshold = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold>();
        }
        return low_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(high_threshold != nullptr)
    {
        _children["high-threshold"] = high_threshold;
    }

    if(low_threshold != nullptr)
    {
        _children["low-threshold"] = low_threshold;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded")
    {
        excluded = value;
        excluded.value_namespace = name_space;
        excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "excluded")
    {
        excluded.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-threshold" || name == "low-threshold" || name == "vrf-name" || name == "used" || name == "excluded" || name == "free" || name == "total" || name == "utilization")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::HighThreshold()
    :
    threshold{YType::uint32, "threshold"},
    triggers{YType::uint32, "triggers"},
    time_last_crossed{YType::str, "time-last-crossed"}
{

    yang_name = "high-threshold"; yang_parent_name = "pool-allocations"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::~HighThreshold()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| triggers.is_set
	|| time_last_crossed.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(triggers.yfilter)
	|| ydk::is_set(time_last_crossed.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());
    if (time_last_crossed.is_set || is_set(time_last_crossed.yfilter)) leaf_name_data.push_back(time_last_crossed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-last-crossed")
    {
        time_last_crossed = value;
        time_last_crossed.value_namespace = name_space;
        time_last_crossed.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
    if(value_path == "time-last-crossed")
    {
        time_last_crossed.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::HighThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "triggers" || name == "time-last-crossed")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::LowThreshold()
    :
    threshold{YType::uint32, "threshold"},
    triggers{YType::uint32, "triggers"},
    time_last_crossed{YType::str, "time-last-crossed"}
{

    yang_name = "low-threshold"; yang_parent_name = "pool-allocations"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::~LowThreshold()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set
	|| triggers.is_set
	|| time_last_crossed.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(triggers.yfilter)
	|| ydk::is_set(time_last_crossed.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (triggers.is_set || is_set(triggers.yfilter)) leaf_name_data.push_back(triggers.get_name_leafdata());
    if (time_last_crossed.is_set || is_set(time_last_crossed.yfilter)) leaf_name_data.push_back(time_last_crossed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggers")
    {
        triggers = value;
        triggers.value_namespace = name_space;
        triggers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-last-crossed")
    {
        time_last_crossed = value;
        time_last_crossed.value_namespace = name_space;
        time_last_crossed.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "triggers")
    {
        triggers.yfilter = yfilter;
    }
    if(value_path == "time-last-crossed")
    {
        time_last_crossed.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::PoolAllocations::LowThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold" || name == "triggers" || name == "time-last-crossed")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::AddressRange()
    :
    used{YType::uint32, "used"},
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"}
        ,
    start_address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress>())
    , end_address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress>())
{
    start_address->parent = this;
    end_address->parent = this;

    yang_name = "address-range"; yang_parent_name = "allocated-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::~AddressRange()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::has_data() const
{
    if (is_presence_container) return true;
    return used.is_set
	|| excluded.is_set
	|| free.is_set
	|| (start_address !=  nullptr && start_address->has_data())
	|| (end_address !=  nullptr && end_address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(excluded.yfilter)
	|| ydk::is_set(free.yfilter)
	|| (start_address !=  nullptr && start_address->has_operation())
	|| (end_address !=  nullptr && end_address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (excluded.is_set || is_set(excluded.yfilter)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-address")
    {
        if(start_address == nullptr)
        {
            start_address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress>();
        }
        return start_address;
    }

    if(child_yang_name == "end-address")
    {
        if(end_address == nullptr)
        {
            end_address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress>();
        }
        return end_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_address != nullptr)
    {
        _children["start-address"] = start_address;
    }

    if(end_address != nullptr)
    {
        _children["end-address"] = end_address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded")
    {
        excluded = value;
        excluded.value_namespace = name_space;
        excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "excluded")
    {
        excluded.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address" || name == "used" || name == "excluded" || name == "free")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::StartAddress()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address>())
{
    address->parent = this;

    yang_name = "start-address"; yang_parent_name = "address-range"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::~StartAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "start-address"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
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
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::StartAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::EndAddress()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address>())
{
    address->parent = this;

    yang_name = "end-address"; yang_parent_name = "address-range"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::~EndAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "end-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::Address()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "end-address"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
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
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::AddressRange::EndAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::InUseAddress()
    :
    client_type{YType::enumeration, "client-type"}
        ,
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address>())
{
    address->parent = this;

    yang_name = "in-use-address"; yang_parent_name = "allocated-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::~InUseAddress()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::has_data() const
{
    if (is_presence_container) return true;
    return client_type.is_set
	|| (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client_type.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in-use-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_type.is_set || is_set(client_type.yfilter)) leaf_name_data.push_back(client_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-type")
    {
        client_type = value;
        client_type.value_namespace = name_space;
        client_type.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-type")
    {
        client_type.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "client-type")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address()
    :
    address(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_>())
{
    address->parent = this;

    yang_name = "address"; yang_parent_name = "in-use-address"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::~Address()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::has_data() const
{
    if (is_presence_container) return true;
    return (address !=  nullptr && address->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::Address_()
    :
    address_family{YType::enumeration, "address-family"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::~Address_()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
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
}

void AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::AllocatedAddresses::InUseAddress::Address::Address_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::Configuration::Configuration()
    :
    pool_name{YType::str, "pool-name"},
    pool_id{YType::uint32, "pool-id"},
    vrf_name{YType::str, "vrf-name"},
    pool_scope{YType::str, "pool-scope"},
    pool_prefix_length{YType::uint32, "pool-prefix-length"},
    high_utilization_mark{YType::uint8, "high-utilization-mark"},
    low_utilization_mark{YType::uint8, "low-utilization-mark"},
    current_utilization{YType::uint8, "current-utilization"},
    utilization_high_count{YType::uint32, "utilization-high-count"},
    utilization_low_count{YType::uint32, "utilization-low-count"}
        ,
    serg_info(std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo>())
{
    serg_info->parent = this;

    yang_name = "configuration"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::Configuration::~Configuration()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set
	|| pool_id.is_set
	|| vrf_name.is_set
	|| pool_scope.is_set
	|| pool_prefix_length.is_set
	|| high_utilization_mark.is_set
	|| low_utilization_mark.is_set
	|| current_utilization.is_set
	|| utilization_high_count.is_set
	|| utilization_low_count.is_set
	|| (serg_info !=  nullptr && serg_info->has_data());
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(pool_scope.yfilter)
	|| ydk::is_set(pool_prefix_length.yfilter)
	|| ydk::is_set(high_utilization_mark.yfilter)
	|| ydk::is_set(low_utilization_mark.yfilter)
	|| ydk::is_set(current_utilization.yfilter)
	|| ydk::is_set(utilization_high_count.yfilter)
	|| ydk::is_set(utilization_low_count.yfilter)
	|| (serg_info !=  nullptr && serg_info->has_operation());
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (pool_scope.is_set || is_set(pool_scope.yfilter)) leaf_name_data.push_back(pool_scope.get_name_leafdata());
    if (pool_prefix_length.is_set || is_set(pool_prefix_length.yfilter)) leaf_name_data.push_back(pool_prefix_length.get_name_leafdata());
    if (high_utilization_mark.is_set || is_set(high_utilization_mark.yfilter)) leaf_name_data.push_back(high_utilization_mark.get_name_leafdata());
    if (low_utilization_mark.is_set || is_set(low_utilization_mark.yfilter)) leaf_name_data.push_back(low_utilization_mark.get_name_leafdata());
    if (current_utilization.is_set || is_set(current_utilization.yfilter)) leaf_name_data.push_back(current_utilization.get_name_leafdata());
    if (utilization_high_count.is_set || is_set(utilization_high_count.yfilter)) leaf_name_data.push_back(utilization_high_count.get_name_leafdata());
    if (utilization_low_count.is_set || is_set(utilization_low_count.yfilter)) leaf_name_data.push_back(utilization_low_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "serg-info")
    {
        if(serg_info == nullptr)
        {
            serg_info = std::make_shared<AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo>();
        }
        return serg_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(serg_info != nullptr)
    {
        _children["serg-info"] = serg_info;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-scope")
    {
        pool_scope = value;
        pool_scope.value_namespace = name_space;
        pool_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-prefix-length")
    {
        pool_prefix_length = value;
        pool_prefix_length.value_namespace = name_space;
        pool_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-utilization-mark")
    {
        high_utilization_mark = value;
        high_utilization_mark.value_namespace = name_space;
        high_utilization_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-utilization-mark")
    {
        low_utilization_mark = value;
        low_utilization_mark.value_namespace = name_space;
        low_utilization_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-utilization")
    {
        current_utilization = value;
        current_utilization.value_namespace = name_space;
        current_utilization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization-high-count")
    {
        utilization_high_count = value;
        utilization_high_count.value_namespace = name_space;
        utilization_high_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization-low-count")
    {
        utilization_low_count = value;
        utilization_low_count.value_namespace = name_space;
        utilization_low_count.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "pool-id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "pool-scope")
    {
        pool_scope.yfilter = yfilter;
    }
    if(value_path == "pool-prefix-length")
    {
        pool_prefix_length.yfilter = yfilter;
    }
    if(value_path == "high-utilization-mark")
    {
        high_utilization_mark.yfilter = yfilter;
    }
    if(value_path == "low-utilization-mark")
    {
        low_utilization_mark.yfilter = yfilter;
    }
    if(value_path == "current-utilization")
    {
        current_utilization.yfilter = yfilter;
    }
    if(value_path == "utilization-high-count")
    {
        utilization_high_count.yfilter = yfilter;
    }
    if(value_path == "utilization-low-count")
    {
        utilization_low_count.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serg-info" || name == "pool-name" || name == "pool-id" || name == "vrf-name" || name == "pool-scope" || name == "pool-prefix-length" || name == "high-utilization-mark" || name == "low-utilization-mark" || name == "current-utilization" || name == "utilization-high-count" || name == "utilization-low-count")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::SergInfo()
    :
    preferred_role{YType::enumeration, "preferred-role"},
    peer_down{YType::boolean, "peer-down"},
    verify_pend{YType::boolean, "verify-pend"}
{

    yang_name = "serg-info"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::~SergInfo()
{
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::has_data() const
{
    if (is_presence_container) return true;
    return preferred_role.is_set
	|| peer_down.is_set
	|| verify_pend.is_set;
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(preferred_role.yfilter)
	|| ydk::is_set(peer_down.yfilter)
	|| ydk::is_set(verify_pend.yfilter);
}

std::string AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "serg-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preferred_role.is_set || is_set(preferred_role.yfilter)) leaf_name_data.push_back(preferred_role.get_name_leafdata());
    if (peer_down.is_set || is_set(peer_down.yfilter)) leaf_name_data.push_back(peer_down.get_name_leafdata());
    if (verify_pend.is_set || is_set(verify_pend.yfilter)) leaf_name_data.push_back(verify_pend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preferred-role")
    {
        preferred_role = value;
        preferred_role.value_namespace = name_space;
        preferred_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-down")
    {
        peer_down = value;
        peer_down.value_namespace = name_space;
        peer_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-pend")
    {
        verify_pend = value;
        verify_pend.value_namespace = name_space;
        verify_pend.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preferred-role")
    {
        preferred_role.yfilter = yfilter;
    }
    if(value_path == "peer-down")
    {
        peer_down.yfilter = yfilter;
    }
    if(value_path == "verify-pend")
    {
        verify_pend.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Pools::Pool::Configuration::SergInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-role" || name == "peer-down" || name == "verify-pend")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::TotalUtilization::TotalUtilization()
    :
    total_utilization_high_mark{YType::uint8, "total-utilization-high-mark"},
    total_utilization_low_mark{YType::uint8, "total-utilization-low-mark"},
    current_total_utilization{YType::uint8, "current-total-utilization"}
{

    yang_name = "total-utilization"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::TotalUtilization::~TotalUtilization()
{
}

bool AddressPoolService::Nodes::Node::TotalUtilization::has_data() const
{
    if (is_presence_container) return true;
    return total_utilization_high_mark.is_set
	|| total_utilization_low_mark.is_set
	|| current_total_utilization.is_set;
}

bool AddressPoolService::Nodes::Node::TotalUtilization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_utilization_high_mark.yfilter)
	|| ydk::is_set(total_utilization_low_mark.yfilter)
	|| ydk::is_set(current_total_utilization.yfilter);
}

std::string AddressPoolService::Nodes::Node::TotalUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-utilization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::TotalUtilization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_utilization_high_mark.is_set || is_set(total_utilization_high_mark.yfilter)) leaf_name_data.push_back(total_utilization_high_mark.get_name_leafdata());
    if (total_utilization_low_mark.is_set || is_set(total_utilization_low_mark.yfilter)) leaf_name_data.push_back(total_utilization_low_mark.get_name_leafdata());
    if (current_total_utilization.is_set || is_set(current_total_utilization.yfilter)) leaf_name_data.push_back(current_total_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::TotalUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::TotalUtilization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::TotalUtilization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-utilization-high-mark")
    {
        total_utilization_high_mark = value;
        total_utilization_high_mark.value_namespace = name_space;
        total_utilization_high_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-utilization-low-mark")
    {
        total_utilization_low_mark = value;
        total_utilization_low_mark.value_namespace = name_space;
        total_utilization_low_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-total-utilization")
    {
        current_total_utilization = value;
        current_total_utilization.value_namespace = name_space;
        current_total_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::TotalUtilization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-utilization-high-mark")
    {
        total_utilization_high_mark.yfilter = yfilter;
    }
    if(value_path == "total-utilization-low-mark")
    {
        total_utilization_low_mark.yfilter = yfilter;
    }
    if(value_path == "current-total-utilization")
    {
        current_total_utilization.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::TotalUtilization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-utilization-high-mark" || name == "total-utilization-low-mark" || name == "current-total-utilization")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::~Vrfs()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Nodes::Node::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Nodes::Node::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    ipv4(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4>())
    , ipv6(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::~Vrf()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "vrf-name")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Ipv4()
    :
    allocation_summary(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary>())
    , pools(this, {})
{
    allocation_summary->parent = this;

    yang_name = "ipv4"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pools.len(); index++)
    {
        if(pools[index]->has_data())
            return true;
    }
    return (allocation_summary !=  nullptr && allocation_summary->has_data());
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<pools.len(); index++)
    {
        if(pools[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (allocation_summary !=  nullptr && allocation_summary->has_operation());
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation-summary")
    {
        if(allocation_summary == nullptr)
        {
            allocation_summary = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary>();
        }
        return allocation_summary;
    }

    if(child_yang_name == "pools")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools>();
        ent_->parent = this;
        pools.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allocation_summary != nullptr)
    {
        _children["allocation-summary"] = allocation_summary;
    }

    count_ = 0;
    for (auto ent_ : pools.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-summary" || name == "pools")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::AllocationSummary()
    :
    used{YType::uint32, "used"},
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    total{YType::uint32, "total"},
    high_utilization_threshold{YType::uint8, "high-utilization-threshold"},
    low_utilization_threshold{YType::uint8, "low-utilization-threshold"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "allocation-summary"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::~AllocationSummary()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::has_data() const
{
    if (is_presence_container) return true;
    return used.is_set
	|| excluded.is_set
	|| free.is_set
	|| total.is_set
	|| high_utilization_threshold.is_set
	|| low_utilization_threshold.is_set
	|| utilization.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(excluded.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(high_utilization_threshold.yfilter)
	|| ydk::is_set(low_utilization_threshold.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (excluded.is_set || is_set(excluded.yfilter)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (high_utilization_threshold.is_set || is_set(high_utilization_threshold.yfilter)) leaf_name_data.push_back(high_utilization_threshold.get_name_leafdata());
    if (low_utilization_threshold.is_set || is_set(low_utilization_threshold.yfilter)) leaf_name_data.push_back(low_utilization_threshold.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded")
    {
        excluded = value;
        excluded.value_namespace = name_space;
        excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-utilization-threshold")
    {
        high_utilization_threshold = value;
        high_utilization_threshold.value_namespace = name_space;
        high_utilization_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-utilization-threshold")
    {
        low_utilization_threshold = value;
        low_utilization_threshold.value_namespace = name_space;
        low_utilization_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "excluded")
    {
        excluded.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "high-utilization-threshold")
    {
        high_utilization_threshold.yfilter = yfilter;
    }
    if(value_path == "low-utilization-threshold")
    {
        low_utilization_threshold.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::AllocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used" || name == "excluded" || name == "free" || name == "total" || name == "high-utilization-threshold" || name == "low-utilization-threshold" || name == "utilization")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::Pools()
    :
    pool_name{YType::str, "pool-name"},
    vrf_name{YType::str, "vrf-name"},
    used{YType::uint32, "used"},
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    total{YType::uint32, "total"}
{

    yang_name = "pools"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::~Pools()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set
	|| vrf_name.is_set
	|| used.is_set
	|| excluded.is_set
	|| free.is_set
	|| total.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(excluded.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (excluded.is_set || is_set(excluded.yfilter)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded")
    {
        excluded = value;
        excluded.value_namespace = name_space;
        excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "excluded")
    {
        excluded.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv4::Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name" || name == "vrf-name" || name == "used" || name == "excluded" || name == "free" || name == "total")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Ipv6()
    :
    allocation_summary(std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary>())
    , pools(this, {})
{
    allocation_summary->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pools.len(); index++)
    {
        if(pools[index]->has_data())
            return true;
    }
    return (allocation_summary !=  nullptr && allocation_summary->has_data());
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<pools.len(); index++)
    {
        if(pools[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (allocation_summary !=  nullptr && allocation_summary->has_operation());
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation-summary")
    {
        if(allocation_summary == nullptr)
        {
            allocation_summary = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary>();
        }
        return allocation_summary;
    }

    if(child_yang_name == "pools")
    {
        auto ent_ = std::make_shared<AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools>();
        ent_->parent = this;
        pools.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allocation_summary != nullptr)
    {
        _children["allocation-summary"] = allocation_summary;
    }

    count_ = 0;
    for (auto ent_ : pools.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation-summary" || name == "pools")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::AllocationSummary()
    :
    used{YType::uint32, "used"},
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    total{YType::uint32, "total"},
    high_utilization_threshold{YType::uint8, "high-utilization-threshold"},
    low_utilization_threshold{YType::uint8, "low-utilization-threshold"},
    utilization{YType::uint8, "utilization"}
{

    yang_name = "allocation-summary"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::~AllocationSummary()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::has_data() const
{
    if (is_presence_container) return true;
    return used.is_set
	|| excluded.is_set
	|| free.is_set
	|| total.is_set
	|| high_utilization_threshold.is_set
	|| low_utilization_threshold.is_set
	|| utilization.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(excluded.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(high_utilization_threshold.yfilter)
	|| ydk::is_set(low_utilization_threshold.yfilter)
	|| ydk::is_set(utilization.yfilter);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (excluded.is_set || is_set(excluded.yfilter)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (high_utilization_threshold.is_set || is_set(high_utilization_threshold.yfilter)) leaf_name_data.push_back(high_utilization_threshold.get_name_leafdata());
    if (low_utilization_threshold.is_set || is_set(low_utilization_threshold.yfilter)) leaf_name_data.push_back(low_utilization_threshold.get_name_leafdata());
    if (utilization.is_set || is_set(utilization.yfilter)) leaf_name_data.push_back(utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded")
    {
        excluded = value;
        excluded.value_namespace = name_space;
        excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-utilization-threshold")
    {
        high_utilization_threshold = value;
        high_utilization_threshold.value_namespace = name_space;
        high_utilization_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-utilization-threshold")
    {
        low_utilization_threshold = value;
        low_utilization_threshold.value_namespace = name_space;
        low_utilization_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "utilization")
    {
        utilization = value;
        utilization.value_namespace = name_space;
        utilization.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "excluded")
    {
        excluded.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "high-utilization-threshold")
    {
        high_utilization_threshold.yfilter = yfilter;
    }
    if(value_path == "low-utilization-threshold")
    {
        low_utilization_threshold.yfilter = yfilter;
    }
    if(value_path == "utilization")
    {
        utilization.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::AllocationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "used" || name == "excluded" || name == "free" || name == "total" || name == "high-utilization-threshold" || name == "low-utilization-threshold" || name == "utilization")
        return true;
    return false;
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::Pools()
    :
    pool_name{YType::str, "pool-name"},
    vrf_name{YType::str, "vrf-name"},
    used{YType::uint32, "used"},
    excluded{YType::uint32, "excluded"},
    free{YType::uint32, "free"},
    total{YType::uint32, "total"}
{

    yang_name = "pools"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::~Pools()
{
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::has_data() const
{
    if (is_presence_container) return true;
    return pool_name.is_set
	|| vrf_name.is_set
	|| used.is_set
	|| excluded.is_set
	|| free.is_set
	|| total.is_set;
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(used.yfilter)
	|| ydk::is_set(excluded.yfilter)
	|| ydk::is_set(free.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (used.is_set || is_set(used.yfilter)) leaf_name_data.push_back(used.get_name_leafdata());
    if (excluded.is_set || is_set(excluded.yfilter)) leaf_name_data.push_back(excluded.get_name_leafdata());
    if (free.is_set || is_set(free.yfilter)) leaf_name_data.push_back(free.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "used")
    {
        used = value;
        used.value_namespace = name_space;
        used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "excluded")
    {
        excluded = value;
        excluded.value_namespace = name_space;
        excluded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "free")
    {
        free = value;
        free.value_namespace = name_space;
        free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "used")
    {
        used.yfilter = yfilter;
    }
    if(value_path == "excluded")
    {
        excluded.yfilter = yfilter;
    }
    if(value_path == "free")
    {
        free.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool AddressPoolService::Nodes::Node::Vrfs::Vrf::Ipv6::Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-name" || name == "vrf-name" || name == "used" || name == "excluded" || name == "free" || name == "total")
        return true;
    return false;
}

const Enum::YLeaf DapsSergRole::none {0, "none"};
const Enum::YLeaf DapsSergRole::master {1, "master"};
const Enum::YLeaf DapsSergRole::slave {2, "slave"};

const Enum::YLeaf IpAddr::ipv4 {2, "ipv4"};
const Enum::YLeaf IpAddr::ipv6 {10, "ipv6"};

const Enum::YLeaf DapsClient::none {0, "none"};
const Enum::YLeaf DapsClient::ppp {1, "ppp"};
const Enum::YLeaf DapsClient::dhcp {2, "dhcp"};
const Enum::YLeaf DapsClient::dhcpv6 {4, "dhcpv6"};
const Enum::YLeaf DapsClient::ipv6nd {5, "ipv6nd"};


}
}

