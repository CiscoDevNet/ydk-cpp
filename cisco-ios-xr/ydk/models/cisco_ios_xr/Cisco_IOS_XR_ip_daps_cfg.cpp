
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_daps_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_daps_cfg {

AddressPoolService::AddressPoolService()
    :
    vrfs(std::make_shared<AddressPoolService::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "address-pool-service"; yang_parent_name = "Cisco-IOS-XR-ip-daps-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

AddressPoolService::~AddressPoolService()
{
}

bool AddressPoolService::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool AddressPoolService::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string AddressPoolService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-cfg:address-pool-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<AddressPoolService::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void AddressPoolService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> AddressPoolService::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AddressPoolService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "address-pool-service"; is_top_level_class = false; has_list_ancestor = false;
}

AddressPoolService::Vrfs::~Vrfs()
{
}

bool AddressPoolService::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-cfg:address-pool-service/" << get_segment_path();
    return path_buffer.str();
}

std::string AddressPoolService::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4>())
	,ipv6(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

AddressPoolService::Vrfs::Vrf::~Vrf()
{
}

bool AddressPoolService::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool AddressPoolService::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string AddressPoolService::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-daps-cfg:address-pool-service/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string AddressPoolService::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6" || name == "vrf-name")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Ipv4()
    :
    pools(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools>())
{
    pools->parent = this;

    yang_name = "ipv4"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::has_data() const
{
    return (pools !=  nullptr && pools->has_data());
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (pools !=  nullptr && pools->has_operation());
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pools")
    {
        if(pools == nullptr)
        {
            pools = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools>();
        }
        return pools;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pools != nullptr)
    {
        children["pools"] = pools;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pools()
{

    yang_name = "pools"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::~Pools()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Pool()
    :
    pool_name{YType::str, "pool-name"}
    	,
    address_ranges(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges>())
	,excludes(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes>())
	,networks(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks>())
	,utilization_mark(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark>())
{
    address_ranges->parent = this;
    excludes->parent = this;
    networks->parent = this;
    utilization_mark->parent = this;

    yang_name = "pool"; yang_parent_name = "pools"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::~Pool()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::has_data() const
{
    return pool_name.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (excludes !=  nullptr && excludes->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (utilization_mark !=  nullptr && utilization_mark->has_data());
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_name.yfilter)
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (excludes !=  nullptr && excludes->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (utilization_mark !=  nullptr && utilization_mark->has_operation());
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[pool-name='" <<pool_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_name.is_set || is_set(pool_name.yfilter)) leaf_name_data.push_back(pool_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "excludes")
    {
        if(excludes == nullptr)
        {
            excludes = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes>();
        }
        return excludes;
    }

    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "utilization-mark")
    {
        if(utilization_mark == nullptr)
        {
            utilization_mark = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark>();
        }
        return utilization_mark;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_ranges != nullptr)
    {
        children["address-ranges"] = address_ranges;
    }

    if(excludes != nullptr)
    {
        children["excludes"] = excludes;
    }

    if(networks != nullptr)
    {
        children["networks"] = networks;
    }

    if(utilization_mark != nullptr)
    {
        children["utilization-mark"] = utilization_mark;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-name")
    {
        pool_name = value;
        pool_name.value_namespace = name_space;
        pool_name.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-name")
    {
        pool_name.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-ranges" || name == "excludes" || name == "networks" || name == "utilization-mark" || name == "pool-name")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRanges()
{

    yang_name = "address-ranges"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::~AddressRanges()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    blocked{YType::int32, "blocked"},
    end_address{YType::str, "end-address"}
{

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::~AddressRange()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::has_data() const
{
    return start_address.is_set
	|| blocked.is_set
	|| end_address.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(blocked.yfilter)
	|| ydk::is_set(end_address.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (blocked.is_set || is_set(blocked.yfilter)) leaf_name_data.push_back(blocked.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocked")
    {
        blocked = value;
        blocked.value_namespace = name_space;
        blocked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "blocked")
    {
        blocked.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "blocked" || name == "end-address")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Excludes()
{

    yang_name = "excludes"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::~Excludes()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::has_data() const
{
    for (std::size_t index=0; index<exclude.size(); index++)
    {
        if(exclude[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::has_operation() const
{
    for (std::size_t index=0; index<exclude.size(); index++)
    {
        if(exclude[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excludes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        for(auto const & c : exclude)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude>();
        c->parent = this;
        exclude.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::Exclude()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"}
{

    yang_name = "exclude"; yang_parent_name = "excludes"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::~Exclude()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::has_data() const
{
    return start_address.is_set
	|| end_address.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude" <<"[start-address='" <<start_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Excludes::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Networks()
{

    yang_name = "networks"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::~Networks()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::Network()
    :
    ipv4_prefix{YType::str, "ipv4-prefix"},
    blocked{YType::int32, "blocked"},
    default_router{YType::str, "default-router"},
    prefix_length{YType::int32, "prefix-length"}
{

    yang_name = "network"; yang_parent_name = "networks"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::~Network()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::has_data() const
{
    return ipv4_prefix.is_set
	|| blocked.is_set
	|| default_router.is_set
	|| prefix_length.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(blocked.yfilter)
	|| ydk::is_set(default_router.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[ipv4-prefix='" <<ipv4_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (blocked.is_set || is_set(blocked.yfilter)) leaf_name_data.push_back(blocked.get_name_leafdata());
    if (default_router.is_set || is_set(default_router.yfilter)) leaf_name_data.push_back(default_router.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocked")
    {
        blocked = value;
        blocked.value_namespace = name_space;
        blocked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-router")
    {
        default_router = value;
        default_router.value_namespace = name_space;
        default_router.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "blocked")
    {
        blocked.yfilter = yfilter;
    }
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::Networks::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix" || name == "blocked" || name == "default-router" || name == "prefix-length")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::UtilizationMark()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{

    yang_name = "utilization-mark"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::~UtilizationMark()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high.yfilter)
	|| ydk::is_set(low.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilization-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv4::Pools::Pool::UtilizationMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high" || name == "low")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Ipv6()
    :
    pools(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools>())
{
    pools->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::has_data() const
{
    return (pools !=  nullptr && pools->has_data());
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (pools !=  nullptr && pools->has_operation());
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pools")
    {
        if(pools == nullptr)
        {
            pools = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools>();
        }
        return pools;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pools != nullptr)
    {
        children["pools"] = pools;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pools()
{

    yang_name = "pools"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::~Pools()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pools";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Pool()
    :
    ipv6_pool_name{YType::str, "ipv6-pool-name"},
    prefix_length{YType::uint32, "prefix-length"}
    	,
    address_ranges(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges>())
	,excludes(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes>())
	,networks(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks>())
	,prefix_ranges(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges>())
	,utilization_mark(std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark>())
{
    address_ranges->parent = this;
    excludes->parent = this;
    networks->parent = this;
    prefix_ranges->parent = this;
    utilization_mark->parent = this;

    yang_name = "pool"; yang_parent_name = "pools"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::~Pool()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::has_data() const
{
    return ipv6_pool_name.is_set
	|| prefix_length.is_set
	|| (address_ranges !=  nullptr && address_ranges->has_data())
	|| (excludes !=  nullptr && excludes->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (prefix_ranges !=  nullptr && prefix_ranges->has_data())
	|| (utilization_mark !=  nullptr && utilization_mark->has_data());
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_pool_name.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (address_ranges !=  nullptr && address_ranges->has_operation())
	|| (excludes !=  nullptr && excludes->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (prefix_ranges !=  nullptr && prefix_ranges->has_operation())
	|| (utilization_mark !=  nullptr && utilization_mark->has_operation());
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[ipv6-pool-name='" <<ipv6_pool_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_pool_name.is_set || is_set(ipv6_pool_name.yfilter)) leaf_name_data.push_back(ipv6_pool_name.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-ranges")
    {
        if(address_ranges == nullptr)
        {
            address_ranges = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges>();
        }
        return address_ranges;
    }

    if(child_yang_name == "excludes")
    {
        if(excludes == nullptr)
        {
            excludes = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes>();
        }
        return excludes;
    }

    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "prefix-ranges")
    {
        if(prefix_ranges == nullptr)
        {
            prefix_ranges = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges>();
        }
        return prefix_ranges;
    }

    if(child_yang_name == "utilization-mark")
    {
        if(utilization_mark == nullptr)
        {
            utilization_mark = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark>();
        }
        return utilization_mark;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_ranges != nullptr)
    {
        children["address-ranges"] = address_ranges;
    }

    if(excludes != nullptr)
    {
        children["excludes"] = excludes;
    }

    if(networks != nullptr)
    {
        children["networks"] = networks;
    }

    if(prefix_ranges != nullptr)
    {
        children["prefix-ranges"] = prefix_ranges;
    }

    if(utilization_mark != nullptr)
    {
        children["utilization-mark"] = utilization_mark;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-pool-name")
    {
        ipv6_pool_name = value;
        ipv6_pool_name.value_namespace = name_space;
        ipv6_pool_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-pool-name")
    {
        ipv6_pool_name.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-ranges" || name == "excludes" || name == "networks" || name == "prefix-ranges" || name == "utilization-mark" || name == "ipv6-pool-name" || name == "prefix-length")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRanges()
{

    yang_name = "address-ranges"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::~AddressRanges()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::has_data() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::has_operation() const
{
    for (std::size_t index=0; index<address_range.size(); index++)
    {
        if(address_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-range")
    {
        for(auto const & c : address_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange>();
        c->parent = this;
        address_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-range")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::AddressRange()
    :
    start_address{YType::str, "start-address"},
    blocked{YType::int32, "blocked"},
    end_address{YType::str, "end-address"}
{

    yang_name = "address-range"; yang_parent_name = "address-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::~AddressRange()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::has_data() const
{
    return start_address.is_set
	|| blocked.is_set
	|| end_address.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(blocked.yfilter)
	|| ydk::is_set(end_address.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-range" <<"[start-address='" <<start_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (blocked.is_set || is_set(blocked.yfilter)) leaf_name_data.push_back(blocked.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocked")
    {
        blocked = value;
        blocked.value_namespace = name_space;
        blocked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "blocked")
    {
        blocked.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::AddressRanges::AddressRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "blocked" || name == "end-address")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Excludes()
{

    yang_name = "excludes"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::~Excludes()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::has_data() const
{
    for (std::size_t index=0; index<exclude.size(); index++)
    {
        if(exclude[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::has_operation() const
{
    for (std::size_t index=0; index<exclude.size(); index++)
    {
        if(exclude[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excludes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        for(auto const & c : exclude)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude>();
        c->parent = this;
        exclude.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exclude)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::Exclude()
    :
    start_address{YType::str, "start-address"},
    end_address{YType::str, "end-address"}
{

    yang_name = "exclude"; yang_parent_name = "excludes"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::~Exclude()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::has_data() const
{
    return start_address.is_set
	|| end_address.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_address.yfilter)
	|| ydk::is_set(end_address.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude" <<"[start-address='" <<start_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_address.is_set || is_set(start_address.yfilter)) leaf_name_data.push_back(start_address.get_name_leafdata());
    if (end_address.is_set || is_set(end_address.yfilter)) leaf_name_data.push_back(end_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-address")
    {
        start_address = value;
        start_address.value_namespace = name_space;
        start_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-address")
    {
        end_address = value;
        end_address.value_namespace = name_space;
        end_address.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-address")
    {
        start_address.yfilter = yfilter;
    }
    if(value_path == "end-address")
    {
        end_address.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Excludes::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-address" || name == "end-address")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Networks()
{

    yang_name = "networks"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::~Networks()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::Network()
    :
    prefix{YType::str, "prefix"},
    blocked{YType::int32, "blocked"},
    prefix_length{YType::uint32, "prefix-length"}
{

    yang_name = "network"; yang_parent_name = "networks"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::~Network()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::has_data() const
{
    return prefix.is_set
	|| blocked.is_set
	|| prefix_length.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(blocked.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (blocked.is_set || is_set(blocked.yfilter)) leaf_name_data.push_back(blocked.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocked")
    {
        blocked = value;
        blocked.value_namespace = name_space;
        blocked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "blocked")
    {
        blocked.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::Networks::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "blocked" || name == "prefix-length")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRanges()
{

    yang_name = "prefix-ranges"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::~PrefixRanges()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::has_data() const
{
    for (std::size_t index=0; index<prefix_range.size(); index++)
    {
        if(prefix_range[index]->has_data())
            return true;
    }
    return false;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::has_operation() const
{
    for (std::size_t index=0; index<prefix_range.size(); index++)
    {
        if(prefix_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-range")
    {
        for(auto const & c : prefix_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange>();
        c->parent = this;
        prefix_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-range")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::PrefixRange()
    :
    start_prefix{YType::str, "start-prefix"},
    blocked{YType::int32, "blocked"},
    end_prefix{YType::str, "end-prefix"}
{

    yang_name = "prefix-range"; yang_parent_name = "prefix-ranges"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::~PrefixRange()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::has_data() const
{
    return start_prefix.is_set
	|| blocked.is_set
	|| end_prefix.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_prefix.yfilter)
	|| ydk::is_set(blocked.yfilter)
	|| ydk::is_set(end_prefix.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-range" <<"[start-prefix='" <<start_prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_prefix.is_set || is_set(start_prefix.yfilter)) leaf_name_data.push_back(start_prefix.get_name_leafdata());
    if (blocked.is_set || is_set(blocked.yfilter)) leaf_name_data.push_back(blocked.get_name_leafdata());
    if (end_prefix.is_set || is_set(end_prefix.yfilter)) leaf_name_data.push_back(end_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-prefix")
    {
        start_prefix = value;
        start_prefix.value_namespace = name_space;
        start_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "blocked")
    {
        blocked = value;
        blocked.value_namespace = name_space;
        blocked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-prefix")
    {
        end_prefix = value;
        end_prefix.value_namespace = name_space;
        end_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-prefix")
    {
        start_prefix.yfilter = yfilter;
    }
    if(value_path == "blocked")
    {
        blocked.yfilter = yfilter;
    }
    if(value_path == "end-prefix")
    {
        end_prefix.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::PrefixRanges::PrefixRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-prefix" || name == "blocked" || name == "end-prefix")
        return true;
    return false;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::UtilizationMark()
    :
    high_mark{YType::uint32, "high-mark"},
    low_mark{YType::uint32, "low-mark"}
{

    yang_name = "utilization-mark"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::~UtilizationMark()
{
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::has_data() const
{
    return high_mark.is_set
	|| low_mark.is_set;
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(high_mark.yfilter)
	|| ydk::is_set(low_mark.yfilter);
}

std::string AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utilization-mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_mark.is_set || is_set(high_mark.yfilter)) leaf_name_data.push_back(high_mark.get_name_leafdata());
    if (low_mark.is_set || is_set(low_mark.yfilter)) leaf_name_data.push_back(low_mark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "high-mark")
    {
        high_mark = value;
        high_mark.value_namespace = name_space;
        high_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-mark")
    {
        low_mark = value;
        low_mark.value_namespace = name_space;
        low_mark.value_namespace_prefix = name_space_prefix;
    }
}

void AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "high-mark")
    {
        high_mark.yfilter = yfilter;
    }
    if(value_path == "low-mark")
    {
        low_mark.yfilter = yfilter;
    }
}

bool AddressPoolService::Vrfs::Vrf::Ipv6::Pools::Pool::UtilizationMark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high-mark" || name == "low-mark")
        return true;
    return false;
}


}
}

