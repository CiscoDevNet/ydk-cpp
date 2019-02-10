
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iarm_v6_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iarm_v6_oper {

Ipv6arm::Ipv6arm()
    :
    multicast_host_interface{YType::str, "multicast-host-interface"}
        ,
    addresses(std::make_shared<Ipv6arm::Addresses>())
    , summary(std::make_shared<Ipv6arm::Summary>())
    , vrf_summaries(std::make_shared<Ipv6arm::VrfSummaries>())
{
    addresses->parent = this;
    summary->parent = this;
    vrf_summaries->parent = this;

    yang_name = "ipv6arm"; yang_parent_name = "Cisco-IOS-XR-ip-iarm-v6-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Ipv6arm::~Ipv6arm()
{
}

bool Ipv6arm::has_data() const
{
    if (is_presence_container) return true;
    return multicast_host_interface.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data());
}

bool Ipv6arm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_host_interface.yfilter)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation());
}

std::string Ipv6arm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_host_interface.is_set || is_set(multicast_host_interface.yfilter)) leaf_name_data.push_back(multicast_host_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "addresses")
    {
        if(addresses == nullptr)
        {
            addresses = std::make_shared<Ipv6arm::Addresses>();
        }
        return addresses;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ipv6arm::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries == nullptr)
        {
            vrf_summaries = std::make_shared<Ipv6arm::VrfSummaries>();
        }
        return vrf_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(addresses != nullptr)
    {
        _children["addresses"] = addresses;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(vrf_summaries != nullptr)
    {
        _children["vrf-summaries"] = vrf_summaries;
    }

    return _children;
}

void Ipv6arm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface = value;
        multicast_host_interface.value_namespace = name_space;
        multicast_host_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6arm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Ipv6arm::clone_ptr() const
{
    return std::make_shared<Ipv6arm>();
}

std::string Ipv6arm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6arm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6arm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ipv6arm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6arm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses" || name == "summary" || name == "vrf-summaries" || name == "multicast-host-interface")
        return true;
    return false;
}

Ipv6arm::Addresses::Addresses()
    :
    vrfs(std::make_shared<Ipv6arm::Addresses::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "addresses"; yang_parent_name = "ipv6arm"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6arm::Addresses::~Addresses()
{
}

bool Ipv6arm::Addresses::has_data() const
{
    if (is_presence_container) return true;
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv6arm::Addresses::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv6arm::Addresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6arm::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Ipv6arm::Addresses::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void Ipv6arm::Addresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6arm::Addresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6arm::Addresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6arm::Addresses::Vrfs::~Vrfs()
{
}

bool Ipv6arm::Addresses::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6arm::Addresses::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6arm::Addresses::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6arm::Addresses::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::get_children() const
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

void Ipv6arm::Addresses::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6arm::Addresses::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6arm::Addresses::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    networks(std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks>())
    , interfaces(std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Interfaces>())
{
    networks->parent = this;
    interfaces->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6arm::Addresses::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (networks !=  nullptr && networks->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Ipv6arm::Addresses::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (networks !=  nullptr && networks->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/addresses/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(networks != nullptr)
    {
        _children["networks"] = networks;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6arm::Addresses::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6arm::Addresses::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "networks" || name == "interfaces" || name == "vrf-name")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Networks()
    :
    network(this, {})
{

    yang_name = "networks"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::~Networks()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Networks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Networks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "network")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::Network()
    :
    address{YType::str, "address"},
    prefix_length{YType::uint32, "prefix-length"},
    handle{YType::str, "handle"},
    interface_name{YType::str, "interface-name"},
    referenced_interface{YType::str, "referenced-interface"},
    vrf_name{YType::str, "vrf-name"}
        ,
    address_xr(std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr>())
{
    address_xr->parent = this;

    yang_name = "network"; yang_parent_name = "networks"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::~Network()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_length.is_set
	|| handle.is_set
	|| interface_name.is_set
	|| referenced_interface.is_set
	|| vrf_name.is_set
	|| (address_xr !=  nullptr && address_xr->has_data());
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::has_operation() const
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

std::string Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-xr")
    {
        if(address_xr == nullptr)
        {
            address_xr = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr>();
        }
        return address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address_xr != nullptr)
    {
        _children["address-xr"] = address_xr;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-xr" || name == "address" || name == "prefix-length" || name == "handle" || name == "interface-name" || name == "referenced-interface" || name == "vrf-name")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::AddressXr()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    is_primary{YType::boolean, "is-primary"},
    is_tentative{YType::boolean, "is-tentative"},
    is_prefix_sid{YType::boolean, "is-prefix-sid"},
    producer{YType::str, "producer"}
        ,
    address(std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address>())
{
    address->parent = this;

    yang_name = "address-xr"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::~AddressXr()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| route_tag.is_set
	|| is_primary.is_set
	|| is_tentative.is_set
	|| is_prefix_sid.is_set
	|| producer.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_operation() const
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

std::string Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag" || name == "is-primary" || name == "is-tentative" || name == "is-prefix-sid" || name == "producer")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::Address()
    :
    afi{YType::int32, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::~Address()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interfaces()
    :
    interface(this, {"interface"})
{

    yang_name = "interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    referenced_interface{YType::str, "referenced-interface"},
    vrf_name{YType::str, "vrf-name"}
        ,
    address(this, {})
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return interface.is_set
	|| referenced_interface.is_set
	|| vrf_name.is_set;
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(referenced_interface.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (referenced_interface.is_set || is_set(referenced_interface.yfilter)) leaf_name_data.push_back(referenced_interface.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface" || name == "referenced-interface" || name == "vrf-name")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address()
    :
    prefix_length{YType::uint32, "prefix-length"},
    route_tag{YType::uint32, "route-tag"},
    is_primary{YType::boolean, "is-primary"},
    is_tentative{YType::boolean, "is-tentative"},
    is_prefix_sid{YType::boolean, "is-prefix-sid"},
    producer{YType::str, "producer"}
        ,
    address(std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_>())
{
    address->parent = this;

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::~Address()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| route_tag.is_set
	|| is_primary.is_set
	|| is_tentative.is_set
	|| is_prefix_sid.is_set
	|| producer.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_operation() const
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

std::string Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-length" || name == "route-tag" || name == "is-primary" || name == "is-tentative" || name == "is-prefix-sid" || name == "producer")
        return true;
    return false;
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::Address_()
    :
    afi{YType::int32, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::~Address_()
{
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6arm::Summary::Summary()
    :
    producer_count{YType::int32, "producer-count"},
    address_conflict_count{YType::int32, "address-conflict-count"},
    unnumbered_conflict_count{YType::int32, "unnumbered-conflict-count"},
    db_master_version{YType::uint32, "db-master-version"},
    vrf_count{YType::int32, "vrf-count"}
{

    yang_name = "summary"; yang_parent_name = "ipv6arm"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6arm::Summary::~Summary()
{
}

bool Ipv6arm::Summary::has_data() const
{
    if (is_presence_container) return true;
    return producer_count.is_set
	|| address_conflict_count.is_set
	|| unnumbered_conflict_count.is_set
	|| db_master_version.is_set
	|| vrf_count.is_set;
}

bool Ipv6arm::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(producer_count.yfilter)
	|| ydk::is_set(address_conflict_count.yfilter)
	|| ydk::is_set(unnumbered_conflict_count.yfilter)
	|| ydk::is_set(db_master_version.yfilter)
	|| ydk::is_set(vrf_count.yfilter);
}

std::string Ipv6arm::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6arm::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (producer_count.is_set || is_set(producer_count.yfilter)) leaf_name_data.push_back(producer_count.get_name_leafdata());
    if (address_conflict_count.is_set || is_set(address_conflict_count.yfilter)) leaf_name_data.push_back(address_conflict_count.get_name_leafdata());
    if (unnumbered_conflict_count.is_set || is_set(unnumbered_conflict_count.yfilter)) leaf_name_data.push_back(unnumbered_conflict_count.get_name_leafdata());
    if (db_master_version.is_set || is_set(db_master_version.yfilter)) leaf_name_data.push_back(db_master_version.get_name_leafdata());
    if (vrf_count.is_set || is_set(vrf_count.yfilter)) leaf_name_data.push_back(vrf_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6arm::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::Summary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "producer-count" || name == "address-conflict-count" || name == "unnumbered-conflict-count" || name == "db-master-version" || name == "vrf-count")
        return true;
    return false;
}

Ipv6arm::VrfSummaries::VrfSummaries()
    :
    vrf_summary(this, {"vrf_name"})
{

    yang_name = "vrf-summaries"; yang_parent_name = "ipv6arm"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6arm::VrfSummaries::~VrfSummaries()
{
}

bool Ipv6arm::VrfSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6arm::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6arm::VrfSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6arm::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::VrfSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        auto ent_ = std::make_shared<Ipv6arm::VrfSummaries::VrfSummary>();
        ent_->parent = this;
        vrf_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::VrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ipv6arm::VrfSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6arm::VrfSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6arm::VrfSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary")
        return true;
    return false;
}

Ipv6arm::VrfSummaries::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Ipv6arm::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Ipv6arm::VrfSummaries::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| vrf_id.is_set
	|| vrf_name_xr.is_set;
}

bool Ipv6arm::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter);
}

std::string Ipv6arm::VrfSummaries::VrfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/vrf-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6arm::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6arm::VrfSummaries::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ipv6arm::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ipv6arm::VrfSummaries::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ipv6arm::VrfSummaries::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Ipv6arm::VrfSummaries::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Ipv6arm::VrfSummaries::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "vrf-id" || name == "vrf-name-xr")
        return true;
    return false;
}


}
}

