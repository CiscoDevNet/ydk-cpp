
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iarm_v4_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iarm_v4_oper {

Ipv4Arm::Ipv4Arm()
    :
    multicast_host_interface{YType::str, "multicast-host-interface"}
    	,
    addresses(std::make_shared<Ipv4Arm::Addresses>())
	,summary(std::make_shared<Ipv4Arm::Summary>())
	,vrf_summaries(std::make_shared<Ipv4Arm::VrfSummaries>())
	,router_id(std::make_shared<Ipv4Arm::RouterId>())
{
    addresses->parent = this;
    summary->parent = this;
    vrf_summaries->parent = this;
    router_id->parent = this;

    yang_name = "ipv4arm"; yang_parent_name = "Cisco-IOS-XR-ip-iarm-v4-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ipv4Arm::~Ipv4Arm()
{
}

bool Ipv4Arm::has_data() const
{
    return multicast_host_interface.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data())
	|| (router_id !=  nullptr && router_id->has_data());
}

bool Ipv4Arm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_host_interface.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation());
}

std::string Ipv4Arm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_host_interface.is_set || is_set(multicast_host_interface.yfilter)) leaf_name_data.push_back(multicast_host_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Ipv4Arm::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ipv4Arm::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries == nullptr)
        {
            vrf_summaries = std::make_shared<Ipv4Arm::VrfSummaries>();
        }
        return vrf_summaries;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Ipv4Arm::RouterId>();
        }
        return router_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(addresses != nullptr)
    {
        children["addresses"] = addresses;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(vrf_summaries != nullptr)
    {
        children["vrf-summaries"] = vrf_summaries;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    return children;
}

void Ipv4Arm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface = value;
        multicast_host_interface.value_namespace = name_space;
        multicast_host_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> Ipv4Arm::clone_ptr() const
{
    return std::make_shared<Ipv4Arm>();
}

std::string Ipv4Arm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Arm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Arm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv4Arm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv4Arm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "summary" || name == "vrf-summaries" || name == "router-id" || name == "multicast-host-interface")
        return true;
    return false;
}

Ipv4Arm::Addresses::Addresses()
    :
    vrfs(std::make_shared<Ipv4Arm::Addresses::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv4arm"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::Addresses::~Addresses()
{
}

bool Ipv4Arm::Addresses::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Arm::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Arm::Addresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv4Arm::Addresses::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Ipv4Arm::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Arm::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Arm::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::Addresses::Vrfs::~Vrfs()
{
}

bool Ipv4Arm::Addresses::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Arm::Addresses::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Arm::Addresses::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::Addresses::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Arm::Addresses::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Arm::Addresses::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    networks(std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks>())
	,interfaces(std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces>())
{
    networks->parent = this;
    interfaces->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (networks !=  nullptr && networks->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (networks !=  nullptr && networks->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/addresses/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(networks != nullptr)
    {
        children["networks"] = networks;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "networks" || name == "interfaces" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Networks()
{

    yang_name = "networks"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::~Networks()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Networks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::Network()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    handle{YType::str, "handle"},
    interface_name{YType::str, "interface-name"},
    referenced_interface{YType::str, "referenced-interface"},
    vrf_name{YType::str, "vrf-name"}
    	,
    address_xr(std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr>())
{
    address_xr->parent = this;

    yang_name = "network"; yang_parent_name = "networks"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::~Network()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| handle.is_set
	|| interface_name.is_set
	|| referenced_interface.is_set
	|| vrf_name.is_set
	|| (address_xr !=  nullptr && address_xr->has_data());
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(handle.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(referenced_interface.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address_xr !=  nullptr && address_xr->has_operation());
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (handle.is_set || is_set(handle.yfilter)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (referenced_interface.is_set || is_set(referenced_interface.yfilter)) leaf_name_data.push_back(referenced_interface.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-xr")
    {
        if(address_xr == nullptr)
        {
            address_xr = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr>();
        }
        return address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_xr != nullptr)
    {
        children["address-xr"] = address_xr;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "handle")
    {
        handle = value;
        handle.value_namespace = name_space;
        handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-interface")
    {
        referenced_interface = value;
        referenced_interface.value_namespace = name_space;
        referenced_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "handle")
    {
        handle.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "referenced-interface")
    {
        referenced_interface.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-xr" || name == "address" || name == "prefix-length" || name == "handle" || name == "interface-name" || name == "referenced-interface" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::AddressXr()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    is_primary{YType::boolean, "is-primary"},
    is_tentative{YType::boolean, "is-tentative"},
    is_prefix_sid{YType::boolean, "is-prefix-sid"},
    producer{YType::str, "producer"}
    	,
    address(std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address>())
{
    address->parent = this;

    yang_name = "address-xr"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::~AddressXr()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_data() const
{
    return prefix_length.is_set
	|| route_tag.is_set
	|| is_primary.is_set
	|| is_tentative.is_set
	|| is_prefix_sid.is_set
	|| producer.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(is_primary.yfilter)
	|| ydk::is_set(is_tentative.yfilter)
	|| ydk::is_set(is_prefix_sid.yfilter)
	|| ydk::is_set(producer.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (is_primary.is_set || is_set(is_primary.yfilter)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (is_tentative.is_set || is_set(is_tentative.yfilter)) leaf_name_data.push_back(is_tentative.get_name_leafdata());
    if (is_prefix_sid.is_set || is_set(is_prefix_sid.yfilter)) leaf_name_data.push_back(is_prefix_sid.get_name_leafdata());
    if (producer.is_set || is_set(producer.yfilter)) leaf_name_data.push_back(producer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary")
    {
        is_primary = value;
        is_primary.value_namespace = name_space;
        is_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tentative")
    {
        is_tentative = value;
        is_tentative.value_namespace = name_space;
        is_tentative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-sid")
    {
        is_prefix_sid = value;
        is_prefix_sid.value_namespace = name_space;
        is_prefix_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer")
    {
        producer = value;
        producer.value_namespace = name_space;
        producer.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "is-primary")
    {
        is_primary.yfilter = yfilter;
    }
    if(value_path == "is-tentative")
    {
        is_tentative.yfilter = yfilter;
    }
    if(value_path == "is-prefix-sid")
    {
        is_prefix_sid.yfilter = yfilter;
    }
    if(value_path == "producer")
    {
        producer.yfilter = yfilter;
    }
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag" || name == "is-primary" || name == "is-tentative" || name == "is-prefix-sid" || name == "producer")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::Address()
    :
    afi{YType::int32, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "address-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::~Address()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
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

bool Ipv4Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    referenced_interface{YType::str, "referenced-interface"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return interface.is_set
	|| referenced_interface.is_set
	|| vrf_name.is_set;
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(referenced_interface.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (referenced_interface.is_set || is_set(referenced_interface.yfilter)) leaf_name_data.push_back(referenced_interface.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referenced-interface")
    {
        referenced_interface = value;
        referenced_interface.value_namespace = name_space;
        referenced_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "referenced-interface")
    {
        referenced_interface.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface" || name == "referenced-interface" || name == "vrf-name")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    is_primary{YType::boolean, "is-primary"},
    is_tentative{YType::boolean, "is-tentative"},
    is_prefix_sid{YType::boolean, "is-prefix-sid"},
    producer{YType::str, "producer"}
    	,
    address(std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_>())
{
    address->parent = this;

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::~Address()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_data() const
{
    return prefix_length.is_set
	|| route_tag.is_set
	|| is_primary.is_set
	|| is_tentative.is_set
	|| is_prefix_sid.is_set
	|| producer.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(route_tag.yfilter)
	|| ydk::is_set(is_primary.yfilter)
	|| ydk::is_set(is_tentative.yfilter)
	|| ydk::is_set(is_prefix_sid.yfilter)
	|| ydk::is_set(producer.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.yfilter)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (is_primary.is_set || is_set(is_primary.yfilter)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (is_tentative.is_set || is_set(is_tentative.yfilter)) leaf_name_data.push_back(is_tentative.get_name_leafdata());
    if (is_prefix_sid.is_set || is_set(is_prefix_sid.yfilter)) leaf_name_data.push_back(is_prefix_sid.get_name_leafdata());
    if (producer.is_set || is_set(producer.yfilter)) leaf_name_data.push_back(producer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
        route_tag.value_namespace = name_space;
        route_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-primary")
    {
        is_primary = value;
        is_primary.value_namespace = name_space;
        is_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tentative")
    {
        is_tentative = value;
        is_tentative.value_namespace = name_space;
        is_tentative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-sid")
    {
        is_prefix_sid = value;
        is_prefix_sid.value_namespace = name_space;
        is_prefix_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "producer")
    {
        producer = value;
        producer.value_namespace = name_space;
        producer.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "route-tag")
    {
        route_tag.yfilter = yfilter;
    }
    if(value_path == "is-primary")
    {
        is_primary.yfilter = yfilter;
    }
    if(value_path == "is-tentative")
    {
        is_tentative.yfilter = yfilter;
    }
    if(value_path == "is-prefix-sid")
    {
        is_prefix_sid.yfilter = yfilter;
    }
    if(value_path == "producer")
    {
        producer.yfilter = yfilter;
    }
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag" || name == "is-primary" || name == "is-tentative" || name == "is-prefix-sid" || name == "producer")
        return true;
    return false;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::Address_()
    :
    afi{YType::int32, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::~Address_()
{
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
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

bool Ipv4Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv4Arm::Summary::Summary()
    :
    producer_count{YType::int32, "producer-count"},
    address_conflict_count{YType::int32, "address-conflict-count"},
    unnumbered_conflict_count{YType::int32, "unnumbered-conflict-count"},
    db_master_version{YType::uint32, "db-master-version"},
    vrf_count{YType::int32, "vrf-count"}
{

    yang_name = "summary"; yang_parent_name = "ipv4arm"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::Summary::~Summary()
{
}

bool Ipv4Arm::Summary::has_data() const
{
    return producer_count.is_set
	|| address_conflict_count.is_set
	|| unnumbered_conflict_count.is_set
	|| db_master_version.is_set
	|| vrf_count.is_set;
}

bool Ipv4Arm::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(producer_count.yfilter)
	|| ydk::is_set(address_conflict_count.yfilter)
	|| ydk::is_set(unnumbered_conflict_count.yfilter)
	|| ydk::is_set(db_master_version.yfilter)
	|| ydk::is_set(vrf_count.yfilter);
}

std::string Ipv4Arm::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_count.is_set || is_set(producer_count.yfilter)) leaf_name_data.push_back(producer_count.get_name_leafdata());
    if (address_conflict_count.is_set || is_set(address_conflict_count.yfilter)) leaf_name_data.push_back(address_conflict_count.get_name_leafdata());
    if (unnumbered_conflict_count.is_set || is_set(unnumbered_conflict_count.yfilter)) leaf_name_data.push_back(unnumbered_conflict_count.get_name_leafdata());
    if (db_master_version.is_set || is_set(db_master_version.yfilter)) leaf_name_data.push_back(db_master_version.get_name_leafdata());
    if (vrf_count.is_set || is_set(vrf_count.yfilter)) leaf_name_data.push_back(vrf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Arm::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "producer-count")
    {
        producer_count = value;
        producer_count.value_namespace = name_space;
        producer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-conflict-count")
    {
        address_conflict_count = value;
        address_conflict_count.value_namespace = name_space;
        address_conflict_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered-conflict-count")
    {
        unnumbered_conflict_count = value;
        unnumbered_conflict_count.value_namespace = name_space;
        unnumbered_conflict_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "db-master-version")
    {
        db_master_version = value;
        db_master_version.value_namespace = name_space;
        db_master_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-count")
    {
        vrf_count = value;
        vrf_count.value_namespace = name_space;
        vrf_count.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "producer-count")
    {
        producer_count.yfilter = yfilter;
    }
    if(value_path == "address-conflict-count")
    {
        address_conflict_count.yfilter = yfilter;
    }
    if(value_path == "unnumbered-conflict-count")
    {
        unnumbered_conflict_count.yfilter = yfilter;
    }
    if(value_path == "db-master-version")
    {
        db_master_version.yfilter = yfilter;
    }
    if(value_path == "vrf-count")
    {
        vrf_count.yfilter = yfilter;
    }
}

bool Ipv4Arm::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producer-count" || name == "address-conflict-count" || name == "unnumbered-conflict-count" || name == "db-master-version" || name == "vrf-count")
        return true;
    return false;
}

Ipv4Arm::VrfSummaries::VrfSummaries()
{

    yang_name = "vrf-summaries"; yang_parent_name = "ipv4arm"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::VrfSummaries::~VrfSummaries()
{
}

bool Ipv4Arm::VrfSummaries::has_data() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Arm::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv4Arm::VrfSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::VrfSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        for(auto const & c : vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv4Arm::VrfSummaries::VrfSummary>();
        c->parent = this;
        vrf_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::VrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv4Arm::VrfSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv4Arm::VrfSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv4Arm::VrfSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary")
        return true;
    return false;
}

Ipv4Arm::VrfSummaries::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Ipv4Arm::VrfSummaries::VrfSummary::has_data() const
{
    return vrf_name.is_set
	|| vrf_id.is_set
	|| vrf_name_xr.is_set;
}

bool Ipv4Arm::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter);
}

std::string Ipv4Arm::VrfSummaries::VrfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/vrf-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::VrfSummaries::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::VrfSummaries::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Arm::VrfSummaries::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::VrfSummaries::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
}

bool Ipv4Arm::VrfSummaries::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "vrf-id" || name == "vrf-name-xr")
        return true;
    return false;
}

Ipv4Arm::RouterId::RouterId()
    :
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name{YType::str, "vrf-name"},
    interface_name{YType::str, "interface-name"},
    router_id{YType::str, "router-id"}
{

    yang_name = "router-id"; yang_parent_name = "ipv4arm"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv4Arm::RouterId::~RouterId()
{
}

bool Ipv4Arm::RouterId::has_data() const
{
    return vrf_id.is_set
	|| vrf_name.is_set
	|| interface_name.is_set
	|| router_id.is_set;
}

bool Ipv4Arm::RouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string Ipv4Arm::RouterId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v4-oper:ipv4arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv4Arm::RouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv4Arm::RouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv4Arm::RouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv4Arm::RouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv4Arm::RouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv4Arm::RouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool Ipv4Arm::RouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-id" || name == "vrf-name" || name == "interface-name" || name == "router-id")
        return true;
    return false;
}


}
}

