
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iarm_v6_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_iarm_v6_oper {

Ipv6Arm::Ipv6Arm()
    :
    multicast_host_interface{YType::str, "multicast-host-interface"}
    	,
    addresses(std::make_shared<Ipv6Arm::Addresses>())
	,summary(std::make_shared<Ipv6Arm::Summary>())
	,vrf_summaries(std::make_shared<Ipv6Arm::VrfSummaries>())
{
    addresses->parent = this;
    children["addresses"] = addresses;

    summary->parent = this;
    children["summary"] = summary;

    vrf_summaries->parent = this;
    children["vrf-summaries"] = vrf_summaries;

    yang_name = "ipv6arm"; yang_parent_name = "Cisco-IOS-XR-ip-iarm-v6-oper";
}

Ipv6Arm::~Ipv6Arm()
{
}

bool Ipv6Arm::has_data() const
{
    return multicast_host_interface.is_set
	|| (addresses !=  nullptr && addresses->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data());
}

bool Ipv6Arm::has_operation() const
{
    return is_set(operation)
	|| is_set(multicast_host_interface.operation)
	|| (addresses !=  nullptr && addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation());
}

std::string Ipv6Arm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm";

    return path_buffer.str();

}

EntityPath Ipv6Arm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_host_interface.is_set || is_set(multicast_host_interface.operation)) leaf_name_data.push_back(multicast_host_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "addresses")
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses;
        }
        else
        {
            addresses = std::make_shared<Ipv6Arm::Addresses>();
            addresses->parent = this;
            children["addresses"] = addresses;
        }
        return children.at("addresses");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Ipv6Arm::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries != nullptr)
        {
            children["vrf-summaries"] = vrf_summaries;
        }
        else
        {
            vrf_summaries = std::make_shared<Ipv6Arm::VrfSummaries>();
            vrf_summaries->parent = this;
            children["vrf-summaries"] = vrf_summaries;
        }
        return children.at("vrf-summaries");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::get_children()
{
    if(children.find("addresses") == children.end())
    {
        if(addresses != nullptr)
        {
            children["addresses"] = addresses;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("vrf-summaries") == children.end())
    {
        if(vrf_summaries != nullptr)
        {
            children["vrf-summaries"] = vrf_summaries;
        }
    }

    return children;
}

void Ipv6Arm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface = value;
    }
}

std::shared_ptr<Entity> Ipv6Arm::clone_ptr() const
{
    return std::make_shared<Ipv6Arm>();
}

std::string Ipv6Arm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Arm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Arm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv6Arm::Addresses::Addresses()
    :
    vrfs(std::make_shared<Ipv6Arm::Addresses::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "addresses"; yang_parent_name = "ipv6arm";
}

Ipv6Arm::Addresses::~Addresses()
{
}

bool Ipv6Arm::Addresses::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv6Arm::Addresses::has_operation() const
{
    return is_set(operation)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv6Arm::Addresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "addresses";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ipv6Arm::Addresses::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::get_children()
{
    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ipv6Arm::Addresses::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Arm::Addresses::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "addresses";
}

Ipv6Arm::Addresses::Vrfs::~Vrfs()
{
}

bool Ipv6Arm::Addresses::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Arm::Addresses::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Arm::Addresses::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::get_children()
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

void Ipv6Arm::Addresses::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Arm::Addresses::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    interfaces(std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces>())
	,networks(std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    networks->parent = this;
    children["networks"] = networks;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv6Arm::Addresses::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (networks !=  nullptr && networks->has_data());
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (networks !=  nullptr && networks->has_operation());
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/addresses/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "networks")
    {
        if(networks != nullptr)
        {
            children["networks"] = networks;
        }
        else
        {
            networks = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks>();
            networks->parent = this;
            children["networks"] = networks;
        }
        return children.at("networks");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("networks") == children.end())
    {
        if(networks != nullptr)
        {
            children["networks"] = networks;
        }
    }

    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Networks()
{
    yang_name = "networks"; yang_parent_name = "vrf";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::~Networks()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::has_data() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::has_operation() const
{
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Networks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "networks";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Networks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Networks' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Networks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network>();
        c->parent = this;
        network.push_back(std::move(c));
        children[segment_path] = network.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Networks::get_children()
{
    for (auto const & c : network)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::Networks::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::Network()
    :
    address{YType::str, "address"},
    handle{YType::str, "handle"},
    interface_name{YType::str, "interface-name"},
    prefix_length{YType::uint32, "prefix-length"},
    referenced_interface{YType::str, "referenced-interface"},
    vrf_name{YType::str, "vrf-name"}
    	,
    address_xr(std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr>())
{
    address_xr->parent = this;
    children["address-xr"] = address_xr;

    yang_name = "network"; yang_parent_name = "networks";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::~Network()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::has_data() const
{
    return address.is_set
	|| handle.is_set
	|| interface_name.is_set
	|| prefix_length.is_set
	|| referenced_interface.is_set
	|| vrf_name.is_set
	|| (address_xr !=  nullptr && address_xr->has_data());
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(handle.operation)
	|| is_set(interface_name.operation)
	|| is_set(prefix_length.operation)
	|| is_set(referenced_interface.operation)
	|| is_set(vrf_name.operation)
	|| (address_xr !=  nullptr && address_xr->has_operation());
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (handle.is_set || is_set(handle.operation)) leaf_name_data.push_back(handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (referenced_interface.is_set || is_set(referenced_interface.operation)) leaf_name_data.push_back(referenced_interface.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-xr")
    {
        if(address_xr != nullptr)
        {
            children["address-xr"] = address_xr;
        }
        else
        {
            address_xr = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr>();
            address_xr->parent = this;
            children["address-xr"] = address_xr;
        }
        return children.at("address-xr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::get_children()
{
    if(children.find("address-xr") == children.end())
    {
        if(address_xr != nullptr)
        {
            children["address-xr"] = address_xr;
        }
    }

    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "handle")
    {
        handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "referenced-interface")
    {
        referenced_interface = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::AddressXr()
    :
    is_prefix_sid{YType::boolean, "is-prefix-sid"},
    is_primary{YType::boolean, "is-primary"},
    is_tentative{YType::boolean, "is-tentative"},
    prefix_length{YType::uint32, "prefix-length"},
    producer{YType::str, "producer"},
    route_tag{YType::uint32, "route-tag"}
    	,
    address(std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "address-xr"; yang_parent_name = "network";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::~AddressXr()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_data() const
{
    return is_prefix_sid.is_set
	|| is_primary.is_set
	|| is_tentative.is_set
	|| prefix_length.is_set
	|| producer.is_set
	|| route_tag.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(is_prefix_sid.operation)
	|| is_set(is_primary.operation)
	|| is_set(is_tentative.operation)
	|| is_set(prefix_length.operation)
	|| is_set(producer.operation)
	|| is_set(route_tag.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-xr";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressXr' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prefix_sid.is_set || is_set(is_prefix_sid.operation)) leaf_name_data.push_back(is_prefix_sid.get_name_leafdata());
    if (is_primary.is_set || is_set(is_primary.operation)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (is_tentative.is_set || is_set(is_tentative.operation)) leaf_name_data.push_back(is_tentative.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (producer.is_set || is_set(producer.operation)) leaf_name_data.push_back(producer.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::get_children()
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

void Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-prefix-sid")
    {
        is_prefix_sid = value;
    }
    if(value_path == "is-primary")
    {
        is_primary = value;
    }
    if(value_path == "is-tentative")
    {
        is_tentative = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "producer")
    {
        producer = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::Address()
    :
    afi{YType::int32, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "address-xr";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::~Address()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::get_children()
{
    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::Networks::Network::AddressXr::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
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

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface{YType::str, "interface"},
    referenced_interface{YType::str, "referenced-interface"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_data() const
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

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(referenced_interface.operation)
	|| is_set(vrf_name.operation);
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (referenced_interface.is_set || is_set(referenced_interface.operation)) leaf_name_data.push_back(referenced_interface.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "referenced-interface")
    {
        referenced_interface = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address()
    :
    is_prefix_sid{YType::boolean, "is-prefix-sid"},
    is_primary{YType::boolean, "is-primary"},
    is_tentative{YType::boolean, "is-tentative"},
    prefix_length{YType::uint32, "prefix-length"},
    producer{YType::str, "producer"},
    route_tag{YType::uint32, "route-tag"}
    	,
    address(std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "address"; yang_parent_name = "interface";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::~Address()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_data() const
{
    return is_prefix_sid.is_set
	|| is_primary.is_set
	|| is_tentative.is_set
	|| prefix_length.is_set
	|| producer.is_set
	|| route_tag.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(is_prefix_sid.operation)
	|| is_set(is_primary.operation)
	|| is_set(is_tentative.operation)
	|| is_set(prefix_length.operation)
	|| is_set(producer.operation)
	|| is_set(route_tag.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prefix_sid.is_set || is_set(is_prefix_sid.operation)) leaf_name_data.push_back(is_prefix_sid.get_name_leafdata());
    if (is_primary.is_set || is_set(is_primary.operation)) leaf_name_data.push_back(is_primary.get_name_leafdata());
    if (is_tentative.is_set || is_set(is_tentative.operation)) leaf_name_data.push_back(is_tentative.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (producer.is_set || is_set(producer.operation)) leaf_name_data.push_back(producer.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_shared<Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::get_children()
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

void Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-prefix-sid")
    {
        is_prefix_sid = value;
    }
    if(value_path == "is-primary")
    {
        is_primary = value;
    }
    if(value_path == "is-tentative")
    {
        is_tentative = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "producer")
    {
        producer = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::Address_()
    :
    afi{YType::int32, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "address";
}

Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::~Address_()
{
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address_' in Cisco_IOS_XR_ip_iarm_v6_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::get_children()
{
    return children;
}

void Ipv6Arm::Addresses::Vrfs::Vrf::Interfaces::Interface::Address::Address_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
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

Ipv6Arm::Summary::Summary()
    :
    address_conflict_count{YType::int32, "address-conflict-count"},
    db_master_version{YType::uint32, "db-master-version"},
    producer_count{YType::int32, "producer-count"},
    unnumbered_conflict_count{YType::int32, "unnumbered-conflict-count"},
    vrf_count{YType::int32, "vrf-count"}
{
    yang_name = "summary"; yang_parent_name = "ipv6arm";
}

Ipv6Arm::Summary::~Summary()
{
}

bool Ipv6Arm::Summary::has_data() const
{
    return address_conflict_count.is_set
	|| db_master_version.is_set
	|| producer_count.is_set
	|| unnumbered_conflict_count.is_set
	|| vrf_count.is_set;
}

bool Ipv6Arm::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(address_conflict_count.operation)
	|| is_set(db_master_version.operation)
	|| is_set(producer_count.operation)
	|| is_set(unnumbered_conflict_count.operation)
	|| is_set(vrf_count.operation);
}

std::string Ipv6Arm::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Ipv6Arm::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_conflict_count.is_set || is_set(address_conflict_count.operation)) leaf_name_data.push_back(address_conflict_count.get_name_leafdata());
    if (db_master_version.is_set || is_set(db_master_version.operation)) leaf_name_data.push_back(db_master_version.get_name_leafdata());
    if (producer_count.is_set || is_set(producer_count.operation)) leaf_name_data.push_back(producer_count.get_name_leafdata());
    if (unnumbered_conflict_count.is_set || is_set(unnumbered_conflict_count.operation)) leaf_name_data.push_back(unnumbered_conflict_count.get_name_leafdata());
    if (vrf_count.is_set || is_set(vrf_count.operation)) leaf_name_data.push_back(vrf_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::Summary::get_children()
{
    return children;
}

void Ipv6Arm::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-conflict-count")
    {
        address_conflict_count = value;
    }
    if(value_path == "db-master-version")
    {
        db_master_version = value;
    }
    if(value_path == "producer-count")
    {
        producer_count = value;
    }
    if(value_path == "unnumbered-conflict-count")
    {
        unnumbered_conflict_count = value;
    }
    if(value_path == "vrf-count")
    {
        vrf_count = value;
    }
}

Ipv6Arm::VrfSummaries::VrfSummaries()
{
    yang_name = "vrf-summaries"; yang_parent_name = "ipv6arm";
}

Ipv6Arm::VrfSummaries::~VrfSummaries()
{
}

bool Ipv6Arm::VrfSummaries::has_data() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Arm::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Arm::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";

    return path_buffer.str();

}

EntityPath Ipv6Arm::VrfSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-summary")
    {
        for(auto const & c : vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6Arm::VrfSummaries::VrfSummary>();
        c->parent = this;
        vrf_summary.push_back(std::move(c));
        children[segment_path] = vrf_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::VrfSummaries::get_children()
{
    for (auto const & c : vrf_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6Arm::VrfSummaries::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Arm::VrfSummaries::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries";
}

Ipv6Arm::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Ipv6Arm::VrfSummaries::VrfSummary::has_data() const
{
    return vrf_name.is_set
	|| vrf_id.is_set
	|| vrf_name_xr.is_set;
}

bool Ipv6Arm::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string Ipv6Arm::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Arm::VrfSummaries::VrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-iarm-v6-oper:ipv6arm/vrf-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Arm::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Arm::VrfSummaries::VrfSummary::get_children()
{
    return children;
}

void Ipv6Arm::VrfSummaries::VrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}


}
}

