
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_arp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_arp_oper {

ArpGmp::ArpGmp()
    :
    vrf_infos(std::make_shared<ArpGmp::VrfInfos>())
	,vrfs(std::make_shared<ArpGmp::Vrfs>())
{
    vrf_infos->parent = this;
    children["vrf-infos"] = vrf_infos;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "arp-gmp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-oper";
}

ArpGmp::~ArpGmp()
{
}

bool ArpGmp::has_data() const
{
    return (vrf_infos !=  nullptr && vrf_infos->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool ArpGmp::has_operation() const
{
    return is_set(operation)
	|| (vrf_infos !=  nullptr && vrf_infos->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string ArpGmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp";

    return path_buffer.str();

}

EntityPath ArpGmp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> ArpGmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-infos")
    {
        if(vrf_infos != nullptr)
        {
            children["vrf-infos"] = vrf_infos;
        }
        else
        {
            vrf_infos = std::make_shared<ArpGmp::VrfInfos>();
            vrf_infos->parent = this;
            children["vrf-infos"] = vrf_infos;
        }
        return children.at("vrf-infos");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<ArpGmp::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::get_children()
{
    if(children.find("vrf-infos") == children.end())
    {
        if(vrf_infos != nullptr)
        {
            children["vrf-infos"] = vrf_infos;
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

void ArpGmp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ArpGmp::clone_ptr() const
{
    return std::make_shared<ArpGmp>();
}

std::string ArpGmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ArpGmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ArpGmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

ArpGmp::VrfInfos::VrfInfos()
{
    yang_name = "vrf-infos"; yang_parent_name = "arp-gmp";
}

ArpGmp::VrfInfos::~VrfInfos()
{
}

bool ArpGmp::VrfInfos::has_data() const
{
    for (std::size_t index=0; index<vrf_info.size(); index++)
    {
        if(vrf_info[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::VrfInfos::has_operation() const
{
    for (std::size_t index=0; index<vrf_info.size(); index++)
    {
        if(vrf_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpGmp::VrfInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-infos";

    return path_buffer.str();

}

EntityPath ArpGmp::VrfInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::VrfInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf-info")
    {
        for(auto const & c : vrf_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ArpGmp::VrfInfos::VrfInfo>();
        c->parent = this;
        vrf_info.push_back(std::move(c));
        children[segment_path] = vrf_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::VrfInfos::get_children()
{
    for (auto const & c : vrf_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ArpGmp::VrfInfos::set_value(const std::string & value_path, std::string value)
{
}

ArpGmp::VrfInfos::VrfInfo::VrfInfo()
    :
    vrf_name{YType::str, "vrf-name"},
    rsi_handle{YType::uint32, "rsi-handle"},
    rsi_handle_high{YType::uint32, "rsi-handle-high"},
    table_id{YType::uint32, "table-id"},
    vrf_id_number{YType::uint32, "vrf-id-number"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "vrf-info"; yang_parent_name = "vrf-infos";
}

ArpGmp::VrfInfos::VrfInfo::~VrfInfo()
{
}

bool ArpGmp::VrfInfos::VrfInfo::has_data() const
{
    return vrf_name.is_set
	|| rsi_handle.is_set
	|| rsi_handle_high.is_set
	|| table_id.is_set
	|| vrf_id_number.is_set
	|| vrf_name_xr.is_set;
}

bool ArpGmp::VrfInfos::VrfInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(rsi_handle.operation)
	|| is_set(rsi_handle_high.operation)
	|| is_set(table_id.operation)
	|| is_set(vrf_id_number.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string ArpGmp::VrfInfos::VrfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-info" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath ArpGmp::VrfInfos::VrfInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/vrf-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (rsi_handle.is_set || is_set(rsi_handle.operation)) leaf_name_data.push_back(rsi_handle.get_name_leafdata());
    if (rsi_handle_high.is_set || is_set(rsi_handle_high.operation)) leaf_name_data.push_back(rsi_handle_high.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (vrf_id_number.is_set || is_set(vrf_id_number.operation)) leaf_name_data.push_back(vrf_id_number.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::VrfInfos::VrfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::VrfInfos::VrfInfo::get_children()
{
    return children;
}

void ArpGmp::VrfInfos::VrfInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "rsi-handle")
    {
        rsi_handle = value;
    }
    if(value_path == "rsi-handle-high")
    {
        rsi_handle_high = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "vrf-id-number")
    {
        vrf_id_number = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

ArpGmp::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "arp-gmp";
}

ArpGmp::Vrfs::~Vrfs()
{
}

bool ArpGmp::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpGmp::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::get_children()
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

void ArpGmp::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

ArpGmp::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    configured_ip_addresses(std::make_shared<ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses>())
	,interface_configured_ips(std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps>())
	,routes(std::make_shared<ArpGmp::Vrfs::Vrf::Routes>())
{
    configured_ip_addresses->parent = this;
    children["configured-ip-addresses"] = configured_ip_addresses;

    interface_configured_ips->parent = this;
    children["interface-configured-ips"] = interface_configured_ips;

    routes->parent = this;
    children["routes"] = routes;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

ArpGmp::Vrfs::Vrf::~Vrf()
{
}

bool ArpGmp::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (configured_ip_addresses !=  nullptr && configured_ip_addresses->has_data())
	|| (interface_configured_ips !=  nullptr && interface_configured_ips->has_data())
	|| (routes !=  nullptr && routes->has_data());
}

bool ArpGmp::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (configured_ip_addresses !=  nullptr && configured_ip_addresses->has_operation())
	|| (interface_configured_ips !=  nullptr && interface_configured_ips->has_operation())
	|| (routes !=  nullptr && routes->has_operation());
}

std::string ArpGmp::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp-gmp/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-ip-addresses")
    {
        if(configured_ip_addresses != nullptr)
        {
            children["configured-ip-addresses"] = configured_ip_addresses;
        }
        else
        {
            configured_ip_addresses = std::make_shared<ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses>();
            configured_ip_addresses->parent = this;
            children["configured-ip-addresses"] = configured_ip_addresses;
        }
        return children.at("configured-ip-addresses");
    }

    if(child_yang_name == "interface-configured-ips")
    {
        if(interface_configured_ips != nullptr)
        {
            children["interface-configured-ips"] = interface_configured_ips;
        }
        else
        {
            interface_configured_ips = std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps>();
            interface_configured_ips->parent = this;
            children["interface-configured-ips"] = interface_configured_ips;
        }
        return children.at("interface-configured-ips");
    }

    if(child_yang_name == "routes")
    {
        if(routes != nullptr)
        {
            children["routes"] = routes;
        }
        else
        {
            routes = std::make_shared<ArpGmp::Vrfs::Vrf::Routes>();
            routes->parent = this;
            children["routes"] = routes;
        }
        return children.at("routes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::get_children()
{
    if(children.find("configured-ip-addresses") == children.end())
    {
        if(configured_ip_addresses != nullptr)
        {
            children["configured-ip-addresses"] = configured_ip_addresses;
        }
    }

    if(children.find("interface-configured-ips") == children.end())
    {
        if(interface_configured_ips != nullptr)
        {
            children["interface-configured-ips"] = interface_configured_ips;
        }
    }

    if(children.find("routes") == children.end())
    {
        if(routes != nullptr)
        {
            children["routes"] = routes;
        }
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddresses()
{
    yang_name = "configured-ip-addresses"; yang_parent_name = "vrf";
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::~ConfiguredIpAddresses()
{
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::has_data() const
{
    for (std::size_t index=0; index<configured_ip_address.size(); index++)
    {
        if(configured_ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::has_operation() const
{
    for (std::size_t index=0; index<configured_ip_address.size(); index++)
    {
        if(configured_ip_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-ip-addresses";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredIpAddresses' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configured-ip-address")
    {
        for(auto const & c : configured_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress>();
        c->parent = this;
        configured_ip_address.push_back(std::move(c));
        children[segment_path] = configured_ip_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::get_children()
{
    for (auto const & c : configured_ip_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::set_value(const std::string & value_path, std::string value)
{
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::ConfiguredIpAddress()
    :
    address{YType::str, "address"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    entry_type{YType::enumeration, "entry-type"},
    hardware_address{YType::str, "hardware-address"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "configured-ip-address"; yang_parent_name = "configured-ip-addresses";
}

ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::~ConfiguredIpAddress()
{
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::has_data() const
{
    return address.is_set
	|| encapsulation_type.is_set
	|| entry_type.is_set
	|| hardware_address.is_set
	|| ip_address.is_set;
}

bool ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(entry_type.operation)
	|| is_set(hardware_address.operation)
	|| is_set(ip_address.operation);
}

std::string ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-ip-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredIpAddress' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.operation)) leaf_name_data.push_back(entry_type.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.operation)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::get_children()
{
    return children;
}

void ArpGmp::Vrfs::Vrf::ConfiguredIpAddresses::ConfiguredIpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

ArpGmp::Vrfs::Vrf::Routes::Routes()
{
    yang_name = "routes"; yang_parent_name = "vrf";
}

ArpGmp::Vrfs::Vrf::Routes::~Routes()
{
}

bool ArpGmp::Vrfs::Vrf::Routes::has_data() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::Vrf::Routes::has_operation() const
{
    for (std::size_t index=0; index<route.size(); index++)
    {
        if(route[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpGmp::Vrfs::Vrf::Routes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routes";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::Routes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routes' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::Routes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route")
    {
        for(auto const & c : route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf::Routes::Route>();
        c->parent = this;
        route.push_back(std::move(c));
        children[segment_path] = route.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::Routes::get_children()
{
    for (auto const & c : route)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::Routes::set_value(const std::string & value_path, std::string value)
{
}

ArpGmp::Vrfs::Vrf::Routes::Route::Route()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    ip_address{YType::str, "ip-address"},
    prefix_length{YType::uint32, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"}
{
    yang_name = "route"; yang_parent_name = "routes";
}

ArpGmp::Vrfs::Vrf::Routes::Route::~Route()
{
}

bool ArpGmp::Vrfs::Vrf::Routes::Route::has_data() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return address.is_set
	|| interface_name_xr.is_set
	|| ip_address.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set;
}

bool ArpGmp::Vrfs::Vrf::Routes::Route::has_operation() const
{
    for (auto const & leaf : interface_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(ip_address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(prefix_length_xr.operation);
}

std::string ArpGmp::Vrfs::Vrf::Routes::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::Routes::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.operation)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());

    auto interface_name_name_datas = interface_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_name_name_datas.begin(), interface_name_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::Routes::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::Routes::Route::get_children()
{
    return children;
}

void ArpGmp::Vrfs::Vrf::Routes::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name.append(value);
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
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

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIps()
{
    yang_name = "interface-configured-ips"; yang_parent_name = "vrf";
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::~InterfaceConfiguredIps()
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::has_data() const
{
    for (std::size_t index=0; index<interface_configured_ip.size(); index++)
    {
        if(interface_configured_ip[index]->has_data())
            return true;
    }
    return false;
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::has_operation() const
{
    for (std::size_t index=0; index<interface_configured_ip.size(); index++)
    {
        if(interface_configured_ip[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configured-ips";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceConfiguredIps' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-configured-ip")
    {
        for(auto const & c : interface_configured_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp>();
        c->parent = this;
        interface_configured_ip.push_back(std::move(c));
        children[segment_path] = interface_configured_ip.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::get_children()
{
    for (auto const & c : interface_configured_ip)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::set_value(const std::string & value_path, std::string value)
{
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::InterfaceConfiguredIp()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    reference_count{YType::uint32, "reference-count"}
    	,
    associated_configuration_entry(std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry>())
{
    associated_configuration_entry->parent = this;
    children["associated-configuration-entry"] = associated_configuration_entry;

    yang_name = "interface-configured-ip"; yang_parent_name = "interface-configured-ips";
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::~InterfaceConfiguredIp()
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::has_data() const
{
    return address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| reference_count.is_set
	|| (associated_configuration_entry !=  nullptr && associated_configuration_entry->has_data());
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(reference_count.operation)
	|| (associated_configuration_entry !=  nullptr && associated_configuration_entry->has_operation());
}

std::string ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-configured-ip";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceConfiguredIp' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.operation)) leaf_name_data.push_back(reference_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "associated-configuration-entry")
    {
        if(associated_configuration_entry != nullptr)
        {
            children["associated-configuration-entry"] = associated_configuration_entry;
        }
        else
        {
            associated_configuration_entry = std::make_shared<ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry>();
            associated_configuration_entry->parent = this;
            children["associated-configuration-entry"] = associated_configuration_entry;
        }
        return children.at("associated-configuration-entry");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::get_children()
{
    if(children.find("associated-configuration-entry") == children.end())
    {
        if(associated_configuration_entry != nullptr)
        {
            children["associated-configuration-entry"] = associated_configuration_entry;
        }
    }

    return children;
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
    }
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::AssociatedConfigurationEntry()
    :
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    entry_type{YType::enumeration, "entry-type"},
    hardware_address{YType::str, "hardware-address"},
    ip_address{YType::str, "ip-address"}
{
    yang_name = "associated-configuration-entry"; yang_parent_name = "interface-configured-ip";
}

ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::~AssociatedConfigurationEntry()
{
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::has_data() const
{
    return encapsulation_type.is_set
	|| entry_type.is_set
	|| hardware_address.is_set
	|| ip_address.is_set;
}

bool ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(entry_type.operation)
	|| is_set(hardware_address.operation)
	|| is_set(ip_address.operation);
}

std::string ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "associated-configuration-entry";

    return path_buffer.str();

}

EntityPath ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssociatedConfigurationEntry' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (entry_type.is_set || is_set(entry_type.operation)) leaf_name_data.push_back(entry_type.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.operation)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::get_children()
{
    return children;
}

void ArpGmp::Vrfs::Vrf::InterfaceConfiguredIps::InterfaceConfiguredIp::AssociatedConfigurationEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "entry-type")
    {
        entry_type = value;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Arp::Arp()
    :
    nodes(std::make_shared<Arp::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XR-ipv4-arp-oper";
}

Arp::~Arp()
{
}

bool Arp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Arp::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp";

    return path_buffer.str();

}

EntityPath Arp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<Arp::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::get_children()
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

void Arp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Arp::clone_ptr() const
{
    return std::make_shared<Arp>();
}

std::string Arp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Arp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Arp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Arp::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "arp";
}

Arp::Nodes::~Nodes()
{
}

bool Arp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Arp::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Arp::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::get_children()
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

void Arp::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Arp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    entries(std::make_shared<Arp::Nodes::Node::Entries>())
	,resolution_history_client(std::make_shared<Arp::Nodes::Node::ResolutionHistoryClient>())
	,resolution_history_dynamic(std::make_shared<Arp::Nodes::Node::ResolutionHistoryDynamic>())
	,traffic_interfaces(std::make_shared<Arp::Nodes::Node::TrafficInterfaces>())
	,traffic_node(std::make_shared<Arp::Nodes::Node::TrafficNode>())
	,traffic_vrfs(std::make_shared<Arp::Nodes::Node::TrafficVrfs>())
{
    entries->parent = this;
    children["entries"] = entries;

    resolution_history_client->parent = this;
    children["resolution-history-client"] = resolution_history_client;

    resolution_history_dynamic->parent = this;
    children["resolution-history-dynamic"] = resolution_history_dynamic;

    traffic_interfaces->parent = this;
    children["traffic-interfaces"] = traffic_interfaces;

    traffic_node->parent = this;
    children["traffic-node"] = traffic_node;

    traffic_vrfs->parent = this;
    children["traffic-vrfs"] = traffic_vrfs;

    yang_name = "node"; yang_parent_name = "nodes";
}

Arp::Nodes::Node::~Node()
{
}

bool Arp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (entries !=  nullptr && entries->has_data())
	|| (resolution_history_client !=  nullptr && resolution_history_client->has_data())
	|| (resolution_history_dynamic !=  nullptr && resolution_history_dynamic->has_data())
	|| (traffic_interfaces !=  nullptr && traffic_interfaces->has_data())
	|| (traffic_node !=  nullptr && traffic_node->has_data())
	|| (traffic_vrfs !=  nullptr && traffic_vrfs->has_data());
}

bool Arp::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (entries !=  nullptr && entries->has_operation())
	|| (resolution_history_client !=  nullptr && resolution_history_client->has_operation())
	|| (resolution_history_dynamic !=  nullptr && resolution_history_dynamic->has_operation())
	|| (traffic_interfaces !=  nullptr && traffic_interfaces->has_operation())
	|| (traffic_node !=  nullptr && traffic_node->has_operation())
	|| (traffic_vrfs !=  nullptr && traffic_vrfs->has_operation());
}

std::string Arp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-arp-oper:arp/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Arp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "entries")
    {
        if(entries != nullptr)
        {
            children["entries"] = entries;
        }
        else
        {
            entries = std::make_shared<Arp::Nodes::Node::Entries>();
            entries->parent = this;
            children["entries"] = entries;
        }
        return children.at("entries");
    }

    if(child_yang_name == "resolution-history-client")
    {
        if(resolution_history_client != nullptr)
        {
            children["resolution-history-client"] = resolution_history_client;
        }
        else
        {
            resolution_history_client = std::make_shared<Arp::Nodes::Node::ResolutionHistoryClient>();
            resolution_history_client->parent = this;
            children["resolution-history-client"] = resolution_history_client;
        }
        return children.at("resolution-history-client");
    }

    if(child_yang_name == "resolution-history-dynamic")
    {
        if(resolution_history_dynamic != nullptr)
        {
            children["resolution-history-dynamic"] = resolution_history_dynamic;
        }
        else
        {
            resolution_history_dynamic = std::make_shared<Arp::Nodes::Node::ResolutionHistoryDynamic>();
            resolution_history_dynamic->parent = this;
            children["resolution-history-dynamic"] = resolution_history_dynamic;
        }
        return children.at("resolution-history-dynamic");
    }

    if(child_yang_name == "traffic-interfaces")
    {
        if(traffic_interfaces != nullptr)
        {
            children["traffic-interfaces"] = traffic_interfaces;
        }
        else
        {
            traffic_interfaces = std::make_shared<Arp::Nodes::Node::TrafficInterfaces>();
            traffic_interfaces->parent = this;
            children["traffic-interfaces"] = traffic_interfaces;
        }
        return children.at("traffic-interfaces");
    }

    if(child_yang_name == "traffic-node")
    {
        if(traffic_node != nullptr)
        {
            children["traffic-node"] = traffic_node;
        }
        else
        {
            traffic_node = std::make_shared<Arp::Nodes::Node::TrafficNode>();
            traffic_node->parent = this;
            children["traffic-node"] = traffic_node;
        }
        return children.at("traffic-node");
    }

    if(child_yang_name == "traffic-vrfs")
    {
        if(traffic_vrfs != nullptr)
        {
            children["traffic-vrfs"] = traffic_vrfs;
        }
        else
        {
            traffic_vrfs = std::make_shared<Arp::Nodes::Node::TrafficVrfs>();
            traffic_vrfs->parent = this;
            children["traffic-vrfs"] = traffic_vrfs;
        }
        return children.at("traffic-vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::get_children()
{
    if(children.find("entries") == children.end())
    {
        if(entries != nullptr)
        {
            children["entries"] = entries;
        }
    }

    if(children.find("resolution-history-client") == children.end())
    {
        if(resolution_history_client != nullptr)
        {
            children["resolution-history-client"] = resolution_history_client;
        }
    }

    if(children.find("resolution-history-dynamic") == children.end())
    {
        if(resolution_history_dynamic != nullptr)
        {
            children["resolution-history-dynamic"] = resolution_history_dynamic;
        }
    }

    if(children.find("traffic-interfaces") == children.end())
    {
        if(traffic_interfaces != nullptr)
        {
            children["traffic-interfaces"] = traffic_interfaces;
        }
    }

    if(children.find("traffic-node") == children.end())
    {
        if(traffic_node != nullptr)
        {
            children["traffic-node"] = traffic_node;
        }
    }

    if(children.find("traffic-vrfs") == children.end())
    {
        if(traffic_vrfs != nullptr)
        {
            children["traffic-vrfs"] = traffic_vrfs;
        }
    }

    return children;
}

void Arp::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Arp::Nodes::Node::ResolutionHistoryDynamic::ResolutionHistoryDynamic()
{
    yang_name = "resolution-history-dynamic"; yang_parent_name = "node";
}

Arp::Nodes::Node::ResolutionHistoryDynamic::~ResolutionHistoryDynamic()
{
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::has_data() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arp::Nodes::Node::ResolutionHistoryDynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution-history-dynamic";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::ResolutionHistoryDynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResolutionHistoryDynamic' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryDynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arp-entry")
    {
        for(auto const & c : arp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry>();
        c->parent = this;
        arp_entry.push_back(std::move(c));
        children[segment_path] = arp_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::ResolutionHistoryDynamic::get_children()
{
    for (auto const & c : arp_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Arp::Nodes::Node::ResolutionHistoryDynamic::set_value(const std::string & value_path, std::string value)
{
}

Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::ArpEntry()
    :
    client_id{YType::int32, "client-id"},
    entry_state{YType::int32, "entry-state"},
    idb_interface_name{YType::str, "idb-interface-name"},
    ipv4_address{YType::str, "ipv4-address"},
    mac_address{YType::str, "mac-address"},
    nsec_timestamp{YType::uint64, "nsec-timestamp"},
    resolution_request_count{YType::uint32, "resolution-request-count"},
    status{YType::enumeration, "status"}
{
    yang_name = "arp-entry"; yang_parent_name = "resolution-history-dynamic";
}

Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::~ArpEntry()
{
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::has_data() const
{
    return client_id.is_set
	|| entry_state.is_set
	|| idb_interface_name.is_set
	|| ipv4_address.is_set
	|| mac_address.is_set
	|| nsec_timestamp.is_set
	|| resolution_request_count.is_set
	|| status.is_set;
}

bool Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(entry_state.operation)
	|| is_set(idb_interface_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(nsec_timestamp.operation)
	|| is_set(resolution_request_count.operation)
	|| is_set(status.operation);
}

std::string Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArpEntry' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (entry_state.is_set || is_set(entry_state.operation)) leaf_name_data.push_back(entry_state.get_name_leafdata());
    if (idb_interface_name.is_set || is_set(idb_interface_name.operation)) leaf_name_data.push_back(idb_interface_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nsec_timestamp.is_set || is_set(nsec_timestamp.operation)) leaf_name_data.push_back(nsec_timestamp.get_name_leafdata());
    if (resolution_request_count.is_set || is_set(resolution_request_count.operation)) leaf_name_data.push_back(resolution_request_count.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::get_children()
{
    return children;
}

void Arp::Nodes::Node::ResolutionHistoryDynamic::ArpEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "entry-state")
    {
        entry_state = value;
    }
    if(value_path == "idb-interface-name")
    {
        idb_interface_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "nsec-timestamp")
    {
        nsec_timestamp = value;
    }
    if(value_path == "resolution-request-count")
    {
        resolution_request_count = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Arp::Nodes::Node::TrafficVrfs::TrafficVrfs()
{
    yang_name = "traffic-vrfs"; yang_parent_name = "node";
}

Arp::Nodes::Node::TrafficVrfs::~TrafficVrfs()
{
}

bool Arp::Nodes::Node::TrafficVrfs::has_data() const
{
    for (std::size_t index=0; index<traffic_vrf.size(); index++)
    {
        if(traffic_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::TrafficVrfs::has_operation() const
{
    for (std::size_t index=0; index<traffic_vrf.size(); index++)
    {
        if(traffic_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arp::Nodes::Node::TrafficVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-vrfs";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::TrafficVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficVrfs' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "traffic-vrf")
    {
        for(auto const & c : traffic_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::TrafficVrfs::TrafficVrf>();
        c->parent = this;
        traffic_vrf.push_back(std::move(c));
        children[segment_path] = traffic_vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::TrafficVrfs::get_children()
{
    for (auto const & c : traffic_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Arp::Nodes::Node::TrafficVrfs::set_value(const std::string & value_path, std::string value)
{
}

Arp::Nodes::Node::TrafficVrfs::TrafficVrf::TrafficVrf()
    :
    vrf_name{YType::str, "vrf-name"},
    alias_entries{YType::uint32, "alias-entries"},
    arp_packet_interface_out_of_subnet{YType::uint32, "arp-packet-interface-out-of-subnet"},
    arp_packet_node_out_of_subnet{YType::uint32, "arp-packet-node-out-of-subnet"},
    dhcp_entries{YType::uint32, "dhcp-entries"},
    dynamic_entries{YType::uint32, "dynamic-entries"},
    gratuitous_replies_sent{YType::uint32, "gratuitous-replies-sent"},
    idb_structures{YType::uint32, "idb-structures"},
    interface_entries{YType::uint32, "interface-entries"},
    ip_packets_dropped_interface{YType::uint32, "ip-packets-dropped-interface"},
    ip_packets_dropped_node{YType::uint32, "ip-packets-dropped-node"},
    local_proxy_replies_sent{YType::uint32, "local-proxy-replies-sent"},
    no_buffer_errors{YType::uint32, "no-buffer-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    proxy_replies_sent{YType::uint32, "proxy-replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    replies_sent{YType::uint32, "replies-sent"},
    requests_received{YType::uint32, "requests-received"},
    requests_sent{YType::uint32, "requests-sent"},
    resolution_replies_received{YType::uint32, "resolution-replies-received"},
    resolution_requests_dropped{YType::uint32, "resolution-requests-dropped"},
    resolution_requests_received{YType::uint32, "resolution-requests-received"},
    standby_entries{YType::uint32, "standby-entries"},
    static_entries{YType::uint32, "static-entries"},
    subscr_replies_gratg_sent{YType::uint32, "subscr-replies-gratg-sent"},
    subscr_replies_sent{YType::uint32, "subscr-replies-sent"},
    subscr_requests_received{YType::uint32, "subscr-requests-received"},
    total_entries{YType::uint32, "total-entries"},
    vxlan_entries{YType::uint32, "vxlan-entries"}
{
    yang_name = "traffic-vrf"; yang_parent_name = "traffic-vrfs";
}

Arp::Nodes::Node::TrafficVrfs::TrafficVrf::~TrafficVrf()
{
}

bool Arp::Nodes::Node::TrafficVrfs::TrafficVrf::has_data() const
{
    return vrf_name.is_set
	|| alias_entries.is_set
	|| arp_packet_interface_out_of_subnet.is_set
	|| arp_packet_node_out_of_subnet.is_set
	|| dhcp_entries.is_set
	|| dynamic_entries.is_set
	|| gratuitous_replies_sent.is_set
	|| idb_structures.is_set
	|| interface_entries.is_set
	|| ip_packets_dropped_interface.is_set
	|| ip_packets_dropped_node.is_set
	|| local_proxy_replies_sent.is_set
	|| no_buffer_errors.is_set
	|| out_of_memory_errors.is_set
	|| proxy_replies_sent.is_set
	|| replies_received.is_set
	|| replies_sent.is_set
	|| requests_received.is_set
	|| requests_sent.is_set
	|| resolution_replies_received.is_set
	|| resolution_requests_dropped.is_set
	|| resolution_requests_received.is_set
	|| standby_entries.is_set
	|| static_entries.is_set
	|| subscr_replies_gratg_sent.is_set
	|| subscr_replies_sent.is_set
	|| subscr_requests_received.is_set
	|| total_entries.is_set
	|| vxlan_entries.is_set;
}

bool Arp::Nodes::Node::TrafficVrfs::TrafficVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(alias_entries.operation)
	|| is_set(arp_packet_interface_out_of_subnet.operation)
	|| is_set(arp_packet_node_out_of_subnet.operation)
	|| is_set(dhcp_entries.operation)
	|| is_set(dynamic_entries.operation)
	|| is_set(gratuitous_replies_sent.operation)
	|| is_set(idb_structures.operation)
	|| is_set(interface_entries.operation)
	|| is_set(ip_packets_dropped_interface.operation)
	|| is_set(ip_packets_dropped_node.operation)
	|| is_set(local_proxy_replies_sent.operation)
	|| is_set(no_buffer_errors.operation)
	|| is_set(out_of_memory_errors.operation)
	|| is_set(proxy_replies_sent.operation)
	|| is_set(replies_received.operation)
	|| is_set(replies_sent.operation)
	|| is_set(requests_received.operation)
	|| is_set(requests_sent.operation)
	|| is_set(resolution_replies_received.operation)
	|| is_set(resolution_requests_dropped.operation)
	|| is_set(resolution_requests_received.operation)
	|| is_set(standby_entries.operation)
	|| is_set(static_entries.operation)
	|| is_set(subscr_replies_gratg_sent.operation)
	|| is_set(subscr_replies_sent.operation)
	|| is_set(subscr_requests_received.operation)
	|| is_set(total_entries.operation)
	|| is_set(vxlan_entries.operation);
}

std::string Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficVrf' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (alias_entries.is_set || is_set(alias_entries.operation)) leaf_name_data.push_back(alias_entries.get_name_leafdata());
    if (arp_packet_interface_out_of_subnet.is_set || is_set(arp_packet_interface_out_of_subnet.operation)) leaf_name_data.push_back(arp_packet_interface_out_of_subnet.get_name_leafdata());
    if (arp_packet_node_out_of_subnet.is_set || is_set(arp_packet_node_out_of_subnet.operation)) leaf_name_data.push_back(arp_packet_node_out_of_subnet.get_name_leafdata());
    if (dhcp_entries.is_set || is_set(dhcp_entries.operation)) leaf_name_data.push_back(dhcp_entries.get_name_leafdata());
    if (dynamic_entries.is_set || is_set(dynamic_entries.operation)) leaf_name_data.push_back(dynamic_entries.get_name_leafdata());
    if (gratuitous_replies_sent.is_set || is_set(gratuitous_replies_sent.operation)) leaf_name_data.push_back(gratuitous_replies_sent.get_name_leafdata());
    if (idb_structures.is_set || is_set(idb_structures.operation)) leaf_name_data.push_back(idb_structures.get_name_leafdata());
    if (interface_entries.is_set || is_set(interface_entries.operation)) leaf_name_data.push_back(interface_entries.get_name_leafdata());
    if (ip_packets_dropped_interface.is_set || is_set(ip_packets_dropped_interface.operation)) leaf_name_data.push_back(ip_packets_dropped_interface.get_name_leafdata());
    if (ip_packets_dropped_node.is_set || is_set(ip_packets_dropped_node.operation)) leaf_name_data.push_back(ip_packets_dropped_node.get_name_leafdata());
    if (local_proxy_replies_sent.is_set || is_set(local_proxy_replies_sent.operation)) leaf_name_data.push_back(local_proxy_replies_sent.get_name_leafdata());
    if (no_buffer_errors.is_set || is_set(no_buffer_errors.operation)) leaf_name_data.push_back(no_buffer_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.operation)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (proxy_replies_sent.is_set || is_set(proxy_replies_sent.operation)) leaf_name_data.push_back(proxy_replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.operation)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.operation)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (requests_received.is_set || is_set(requests_received.operation)) leaf_name_data.push_back(requests_received.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.operation)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (resolution_replies_received.is_set || is_set(resolution_replies_received.operation)) leaf_name_data.push_back(resolution_replies_received.get_name_leafdata());
    if (resolution_requests_dropped.is_set || is_set(resolution_requests_dropped.operation)) leaf_name_data.push_back(resolution_requests_dropped.get_name_leafdata());
    if (resolution_requests_received.is_set || is_set(resolution_requests_received.operation)) leaf_name_data.push_back(resolution_requests_received.get_name_leafdata());
    if (standby_entries.is_set || is_set(standby_entries.operation)) leaf_name_data.push_back(standby_entries.get_name_leafdata());
    if (static_entries.is_set || is_set(static_entries.operation)) leaf_name_data.push_back(static_entries.get_name_leafdata());
    if (subscr_replies_gratg_sent.is_set || is_set(subscr_replies_gratg_sent.operation)) leaf_name_data.push_back(subscr_replies_gratg_sent.get_name_leafdata());
    if (subscr_replies_sent.is_set || is_set(subscr_replies_sent.operation)) leaf_name_data.push_back(subscr_replies_sent.get_name_leafdata());
    if (subscr_requests_received.is_set || is_set(subscr_requests_received.operation)) leaf_name_data.push_back(subscr_requests_received.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (vxlan_entries.is_set || is_set(vxlan_entries.operation)) leaf_name_data.push_back(vxlan_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::TrafficVrfs::TrafficVrf::get_children()
{
    return children;
}

void Arp::Nodes::Node::TrafficVrfs::TrafficVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "alias-entries")
    {
        alias_entries = value;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet = value;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet = value;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries = value;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries = value;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent = value;
    }
    if(value_path == "idb-structures")
    {
        idb_structures = value;
    }
    if(value_path == "interface-entries")
    {
        interface_entries = value;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface = value;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node = value;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent = value;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors = value;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent = value;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
    }
    if(value_path == "requests-received")
    {
        requests_received = value;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received = value;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped = value;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received = value;
    }
    if(value_path == "standby-entries")
    {
        standby_entries = value;
    }
    if(value_path == "static-entries")
    {
        static_entries = value;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent = value;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent = value;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries = value;
    }
}

Arp::Nodes::Node::TrafficNode::TrafficNode()
    :
    alias_entries{YType::uint32, "alias-entries"},
    arp_packet_interface_out_of_subnet{YType::uint32, "arp-packet-interface-out-of-subnet"},
    arp_packet_node_out_of_subnet{YType::uint32, "arp-packet-node-out-of-subnet"},
    dhcp_entries{YType::uint32, "dhcp-entries"},
    dynamic_entries{YType::uint32, "dynamic-entries"},
    gratuitous_replies_sent{YType::uint32, "gratuitous-replies-sent"},
    idb_structures{YType::uint32, "idb-structures"},
    interface_entries{YType::uint32, "interface-entries"},
    ip_packets_dropped_interface{YType::uint32, "ip-packets-dropped-interface"},
    ip_packets_dropped_node{YType::uint32, "ip-packets-dropped-node"},
    local_proxy_replies_sent{YType::uint32, "local-proxy-replies-sent"},
    no_buffer_errors{YType::uint32, "no-buffer-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    proxy_replies_sent{YType::uint32, "proxy-replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    replies_sent{YType::uint32, "replies-sent"},
    requests_received{YType::uint32, "requests-received"},
    requests_sent{YType::uint32, "requests-sent"},
    resolution_replies_received{YType::uint32, "resolution-replies-received"},
    resolution_requests_dropped{YType::uint32, "resolution-requests-dropped"},
    resolution_requests_received{YType::uint32, "resolution-requests-received"},
    standby_entries{YType::uint32, "standby-entries"},
    static_entries{YType::uint32, "static-entries"},
    subscr_replies_gratg_sent{YType::uint32, "subscr-replies-gratg-sent"},
    subscr_replies_sent{YType::uint32, "subscr-replies-sent"},
    subscr_requests_received{YType::uint32, "subscr-requests-received"},
    total_entries{YType::uint32, "total-entries"},
    vxlan_entries{YType::uint32, "vxlan-entries"}
{
    yang_name = "traffic-node"; yang_parent_name = "node";
}

Arp::Nodes::Node::TrafficNode::~TrafficNode()
{
}

bool Arp::Nodes::Node::TrafficNode::has_data() const
{
    return alias_entries.is_set
	|| arp_packet_interface_out_of_subnet.is_set
	|| arp_packet_node_out_of_subnet.is_set
	|| dhcp_entries.is_set
	|| dynamic_entries.is_set
	|| gratuitous_replies_sent.is_set
	|| idb_structures.is_set
	|| interface_entries.is_set
	|| ip_packets_dropped_interface.is_set
	|| ip_packets_dropped_node.is_set
	|| local_proxy_replies_sent.is_set
	|| no_buffer_errors.is_set
	|| out_of_memory_errors.is_set
	|| proxy_replies_sent.is_set
	|| replies_received.is_set
	|| replies_sent.is_set
	|| requests_received.is_set
	|| requests_sent.is_set
	|| resolution_replies_received.is_set
	|| resolution_requests_dropped.is_set
	|| resolution_requests_received.is_set
	|| standby_entries.is_set
	|| static_entries.is_set
	|| subscr_replies_gratg_sent.is_set
	|| subscr_replies_sent.is_set
	|| subscr_requests_received.is_set
	|| total_entries.is_set
	|| vxlan_entries.is_set;
}

bool Arp::Nodes::Node::TrafficNode::has_operation() const
{
    return is_set(operation)
	|| is_set(alias_entries.operation)
	|| is_set(arp_packet_interface_out_of_subnet.operation)
	|| is_set(arp_packet_node_out_of_subnet.operation)
	|| is_set(dhcp_entries.operation)
	|| is_set(dynamic_entries.operation)
	|| is_set(gratuitous_replies_sent.operation)
	|| is_set(idb_structures.operation)
	|| is_set(interface_entries.operation)
	|| is_set(ip_packets_dropped_interface.operation)
	|| is_set(ip_packets_dropped_node.operation)
	|| is_set(local_proxy_replies_sent.operation)
	|| is_set(no_buffer_errors.operation)
	|| is_set(out_of_memory_errors.operation)
	|| is_set(proxy_replies_sent.operation)
	|| is_set(replies_received.operation)
	|| is_set(replies_sent.operation)
	|| is_set(requests_received.operation)
	|| is_set(requests_sent.operation)
	|| is_set(resolution_replies_received.operation)
	|| is_set(resolution_requests_dropped.operation)
	|| is_set(resolution_requests_received.operation)
	|| is_set(standby_entries.operation)
	|| is_set(static_entries.operation)
	|| is_set(subscr_replies_gratg_sent.operation)
	|| is_set(subscr_replies_sent.operation)
	|| is_set(subscr_requests_received.operation)
	|| is_set(total_entries.operation)
	|| is_set(vxlan_entries.operation);
}

std::string Arp::Nodes::Node::TrafficNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-node";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::TrafficNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficNode' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias_entries.is_set || is_set(alias_entries.operation)) leaf_name_data.push_back(alias_entries.get_name_leafdata());
    if (arp_packet_interface_out_of_subnet.is_set || is_set(arp_packet_interface_out_of_subnet.operation)) leaf_name_data.push_back(arp_packet_interface_out_of_subnet.get_name_leafdata());
    if (arp_packet_node_out_of_subnet.is_set || is_set(arp_packet_node_out_of_subnet.operation)) leaf_name_data.push_back(arp_packet_node_out_of_subnet.get_name_leafdata());
    if (dhcp_entries.is_set || is_set(dhcp_entries.operation)) leaf_name_data.push_back(dhcp_entries.get_name_leafdata());
    if (dynamic_entries.is_set || is_set(dynamic_entries.operation)) leaf_name_data.push_back(dynamic_entries.get_name_leafdata());
    if (gratuitous_replies_sent.is_set || is_set(gratuitous_replies_sent.operation)) leaf_name_data.push_back(gratuitous_replies_sent.get_name_leafdata());
    if (idb_structures.is_set || is_set(idb_structures.operation)) leaf_name_data.push_back(idb_structures.get_name_leafdata());
    if (interface_entries.is_set || is_set(interface_entries.operation)) leaf_name_data.push_back(interface_entries.get_name_leafdata());
    if (ip_packets_dropped_interface.is_set || is_set(ip_packets_dropped_interface.operation)) leaf_name_data.push_back(ip_packets_dropped_interface.get_name_leafdata());
    if (ip_packets_dropped_node.is_set || is_set(ip_packets_dropped_node.operation)) leaf_name_data.push_back(ip_packets_dropped_node.get_name_leafdata());
    if (local_proxy_replies_sent.is_set || is_set(local_proxy_replies_sent.operation)) leaf_name_data.push_back(local_proxy_replies_sent.get_name_leafdata());
    if (no_buffer_errors.is_set || is_set(no_buffer_errors.operation)) leaf_name_data.push_back(no_buffer_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.operation)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (proxy_replies_sent.is_set || is_set(proxy_replies_sent.operation)) leaf_name_data.push_back(proxy_replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.operation)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.operation)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (requests_received.is_set || is_set(requests_received.operation)) leaf_name_data.push_back(requests_received.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.operation)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (resolution_replies_received.is_set || is_set(resolution_replies_received.operation)) leaf_name_data.push_back(resolution_replies_received.get_name_leafdata());
    if (resolution_requests_dropped.is_set || is_set(resolution_requests_dropped.operation)) leaf_name_data.push_back(resolution_requests_dropped.get_name_leafdata());
    if (resolution_requests_received.is_set || is_set(resolution_requests_received.operation)) leaf_name_data.push_back(resolution_requests_received.get_name_leafdata());
    if (standby_entries.is_set || is_set(standby_entries.operation)) leaf_name_data.push_back(standby_entries.get_name_leafdata());
    if (static_entries.is_set || is_set(static_entries.operation)) leaf_name_data.push_back(static_entries.get_name_leafdata());
    if (subscr_replies_gratg_sent.is_set || is_set(subscr_replies_gratg_sent.operation)) leaf_name_data.push_back(subscr_replies_gratg_sent.get_name_leafdata());
    if (subscr_replies_sent.is_set || is_set(subscr_replies_sent.operation)) leaf_name_data.push_back(subscr_replies_sent.get_name_leafdata());
    if (subscr_requests_received.is_set || is_set(subscr_requests_received.operation)) leaf_name_data.push_back(subscr_requests_received.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (vxlan_entries.is_set || is_set(vxlan_entries.operation)) leaf_name_data.push_back(vxlan_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::TrafficNode::get_children()
{
    return children;
}

void Arp::Nodes::Node::TrafficNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alias-entries")
    {
        alias_entries = value;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet = value;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet = value;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries = value;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries = value;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent = value;
    }
    if(value_path == "idb-structures")
    {
        idb_structures = value;
    }
    if(value_path == "interface-entries")
    {
        interface_entries = value;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface = value;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node = value;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent = value;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors = value;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent = value;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
    }
    if(value_path == "requests-received")
    {
        requests_received = value;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received = value;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped = value;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received = value;
    }
    if(value_path == "standby-entries")
    {
        standby_entries = value;
    }
    if(value_path == "static-entries")
    {
        static_entries = value;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent = value;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent = value;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries = value;
    }
}

Arp::Nodes::Node::ResolutionHistoryClient::ResolutionHistoryClient()
{
    yang_name = "resolution-history-client"; yang_parent_name = "node";
}

Arp::Nodes::Node::ResolutionHistoryClient::~ResolutionHistoryClient()
{
}

bool Arp::Nodes::Node::ResolutionHistoryClient::has_data() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::ResolutionHistoryClient::has_operation() const
{
    for (std::size_t index=0; index<arp_entry.size(); index++)
    {
        if(arp_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arp::Nodes::Node::ResolutionHistoryClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution-history-client";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::ResolutionHistoryClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResolutionHistoryClient' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "arp-entry")
    {
        for(auto const & c : arp_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry>();
        c->parent = this;
        arp_entry.push_back(std::move(c));
        children[segment_path] = arp_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::ResolutionHistoryClient::get_children()
{
    for (auto const & c : arp_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Arp::Nodes::Node::ResolutionHistoryClient::set_value(const std::string & value_path, std::string value)
{
}

Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::ArpEntry()
    :
    client_id{YType::int32, "client-id"},
    entry_state{YType::int32, "entry-state"},
    idb_interface_name{YType::str, "idb-interface-name"},
    ipv4_address{YType::str, "ipv4-address"},
    mac_address{YType::str, "mac-address"},
    nsec_timestamp{YType::uint64, "nsec-timestamp"},
    resolution_request_count{YType::uint32, "resolution-request-count"},
    status{YType::enumeration, "status"}
{
    yang_name = "arp-entry"; yang_parent_name = "resolution-history-client";
}

Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::~ArpEntry()
{
}

bool Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::has_data() const
{
    return client_id.is_set
	|| entry_state.is_set
	|| idb_interface_name.is_set
	|| ipv4_address.is_set
	|| mac_address.is_set
	|| nsec_timestamp.is_set
	|| resolution_request_count.is_set
	|| status.is_set;
}

bool Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(entry_state.operation)
	|| is_set(idb_interface_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(mac_address.operation)
	|| is_set(nsec_timestamp.operation)
	|| is_set(resolution_request_count.operation)
	|| is_set(status.operation);
}

std::string Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArpEntry' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (entry_state.is_set || is_set(entry_state.operation)) leaf_name_data.push_back(entry_state.get_name_leafdata());
    if (idb_interface_name.is_set || is_set(idb_interface_name.operation)) leaf_name_data.push_back(idb_interface_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nsec_timestamp.is_set || is_set(nsec_timestamp.operation)) leaf_name_data.push_back(nsec_timestamp.get_name_leafdata());
    if (resolution_request_count.is_set || is_set(resolution_request_count.operation)) leaf_name_data.push_back(resolution_request_count.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::get_children()
{
    return children;
}

void Arp::Nodes::Node::ResolutionHistoryClient::ArpEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "entry-state")
    {
        entry_state = value;
    }
    if(value_path == "idb-interface-name")
    {
        idb_interface_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "nsec-timestamp")
    {
        nsec_timestamp = value;
    }
    if(value_path == "resolution-request-count")
    {
        resolution_request_count = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
}

Arp::Nodes::Node::Entries::Entries()
{
    yang_name = "entries"; yang_parent_name = "node";
}

Arp::Nodes::Node::Entries::~Entries()
{
}

bool Arp::Nodes::Node::Entries::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arp::Nodes::Node::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::Entries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Entries' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "entry")
    {
        for(auto const & c : entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::Entries::Entry>();
        c->parent = this;
        entry.push_back(std::move(c));
        children[segment_path] = entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::Entries::get_children()
{
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Arp::Nodes::Node::Entries::set_value(const std::string & value_path, std::string value)
{
}

Arp::Nodes::Node::Entries::Entry::Entry()
    :
    address{YType::str, "address"},
    interface_name{YType::str, "interface-name"},
    age{YType::uint64, "age"},
    encapsulation_type{YType::enumeration, "encapsulation-type"},
    flag{YType::enumeration, "flag"},
    hardware_address{YType::str, "hardware-address"},
    hardware_length{YType::uint8, "hardware-length"},
    media_type{YType::enumeration, "media-type"},
    state{YType::enumeration, "state"}
{
    yang_name = "entry"; yang_parent_name = "entries";
}

Arp::Nodes::Node::Entries::Entry::~Entry()
{
}

bool Arp::Nodes::Node::Entries::Entry::has_data() const
{
    return address.is_set
	|| interface_name.is_set
	|| age.is_set
	|| encapsulation_type.is_set
	|| flag.is_set
	|| hardware_address.is_set
	|| hardware_length.is_set
	|| media_type.is_set
	|| state.is_set;
}

bool Arp::Nodes::Node::Entries::Entry::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(interface_name.operation)
	|| is_set(age.operation)
	|| is_set(encapsulation_type.operation)
	|| is_set(flag.operation)
	|| is_set(hardware_address.operation)
	|| is_set(hardware_length.operation)
	|| is_set(media_type.operation)
	|| is_set(state.operation);
}

std::string Arp::Nodes::Node::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[address='" <<address <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::Entries::Entry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Entry' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.operation)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (flag.is_set || is_set(flag.operation)) leaf_name_data.push_back(flag.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.operation)) leaf_name_data.push_back(hardware_address.get_name_leafdata());
    if (hardware_length.is_set || is_set(hardware_length.operation)) leaf_name_data.push_back(hardware_length.get_name_leafdata());
    if (media_type.is_set || is_set(media_type.operation)) leaf_name_data.push_back(media_type.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::Entries::Entry::get_children()
{
    return children;
}

void Arp::Nodes::Node::Entries::Entry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
    }
    if(value_path == "flag")
    {
        flag = value;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
    }
    if(value_path == "hardware-length")
    {
        hardware_length = value;
    }
    if(value_path == "media-type")
    {
        media_type = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Arp::Nodes::Node::TrafficInterfaces::TrafficInterfaces()
{
    yang_name = "traffic-interfaces"; yang_parent_name = "node";
}

Arp::Nodes::Node::TrafficInterfaces::~TrafficInterfaces()
{
}

bool Arp::Nodes::Node::TrafficInterfaces::has_data() const
{
    for (std::size_t index=0; index<traffic_interface.size(); index++)
    {
        if(traffic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Arp::Nodes::Node::TrafficInterfaces::has_operation() const
{
    for (std::size_t index=0; index<traffic_interface.size(); index++)
    {
        if(traffic_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Arp::Nodes::Node::TrafficInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-interfaces";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::TrafficInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficInterfaces' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "traffic-interface")
    {
        for(auto const & c : traffic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Arp::Nodes::Node::TrafficInterfaces::TrafficInterface>();
        c->parent = this;
        traffic_interface.push_back(std::move(c));
        children[segment_path] = traffic_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::TrafficInterfaces::get_children()
{
    for (auto const & c : traffic_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Arp::Nodes::Node::TrafficInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::TrafficInterface()
    :
    interface_name{YType::str, "interface-name"},
    alias_entries{YType::uint32, "alias-entries"},
    arp_packet_interface_out_of_subnet{YType::uint32, "arp-packet-interface-out-of-subnet"},
    arp_packet_node_out_of_subnet{YType::uint32, "arp-packet-node-out-of-subnet"},
    dhcp_entries{YType::uint32, "dhcp-entries"},
    dynamic_entries{YType::uint32, "dynamic-entries"},
    gratuitous_replies_sent{YType::uint32, "gratuitous-replies-sent"},
    idb_structures{YType::uint32, "idb-structures"},
    interface_entries{YType::uint32, "interface-entries"},
    ip_packets_dropped_interface{YType::uint32, "ip-packets-dropped-interface"},
    ip_packets_dropped_node{YType::uint32, "ip-packets-dropped-node"},
    local_proxy_replies_sent{YType::uint32, "local-proxy-replies-sent"},
    no_buffer_errors{YType::uint32, "no-buffer-errors"},
    out_of_memory_errors{YType::uint32, "out-of-memory-errors"},
    proxy_replies_sent{YType::uint32, "proxy-replies-sent"},
    replies_received{YType::uint32, "replies-received"},
    replies_sent{YType::uint32, "replies-sent"},
    requests_received{YType::uint32, "requests-received"},
    requests_sent{YType::uint32, "requests-sent"},
    resolution_replies_received{YType::uint32, "resolution-replies-received"},
    resolution_requests_dropped{YType::uint32, "resolution-requests-dropped"},
    resolution_requests_received{YType::uint32, "resolution-requests-received"},
    standby_entries{YType::uint32, "standby-entries"},
    static_entries{YType::uint32, "static-entries"},
    subscr_replies_gratg_sent{YType::uint32, "subscr-replies-gratg-sent"},
    subscr_replies_sent{YType::uint32, "subscr-replies-sent"},
    subscr_requests_received{YType::uint32, "subscr-requests-received"},
    total_entries{YType::uint32, "total-entries"},
    vxlan_entries{YType::uint32, "vxlan-entries"}
{
    yang_name = "traffic-interface"; yang_parent_name = "traffic-interfaces";
}

Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::~TrafficInterface()
{
}

bool Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::has_data() const
{
    return interface_name.is_set
	|| alias_entries.is_set
	|| arp_packet_interface_out_of_subnet.is_set
	|| arp_packet_node_out_of_subnet.is_set
	|| dhcp_entries.is_set
	|| dynamic_entries.is_set
	|| gratuitous_replies_sent.is_set
	|| idb_structures.is_set
	|| interface_entries.is_set
	|| ip_packets_dropped_interface.is_set
	|| ip_packets_dropped_node.is_set
	|| local_proxy_replies_sent.is_set
	|| no_buffer_errors.is_set
	|| out_of_memory_errors.is_set
	|| proxy_replies_sent.is_set
	|| replies_received.is_set
	|| replies_sent.is_set
	|| requests_received.is_set
	|| requests_sent.is_set
	|| resolution_replies_received.is_set
	|| resolution_requests_dropped.is_set
	|| resolution_requests_received.is_set
	|| standby_entries.is_set
	|| static_entries.is_set
	|| subscr_replies_gratg_sent.is_set
	|| subscr_replies_sent.is_set
	|| subscr_requests_received.is_set
	|| total_entries.is_set
	|| vxlan_entries.is_set;
}

bool Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(alias_entries.operation)
	|| is_set(arp_packet_interface_out_of_subnet.operation)
	|| is_set(arp_packet_node_out_of_subnet.operation)
	|| is_set(dhcp_entries.operation)
	|| is_set(dynamic_entries.operation)
	|| is_set(gratuitous_replies_sent.operation)
	|| is_set(idb_structures.operation)
	|| is_set(interface_entries.operation)
	|| is_set(ip_packets_dropped_interface.operation)
	|| is_set(ip_packets_dropped_node.operation)
	|| is_set(local_proxy_replies_sent.operation)
	|| is_set(no_buffer_errors.operation)
	|| is_set(out_of_memory_errors.operation)
	|| is_set(proxy_replies_sent.operation)
	|| is_set(replies_received.operation)
	|| is_set(replies_sent.operation)
	|| is_set(requests_received.operation)
	|| is_set(requests_sent.operation)
	|| is_set(resolution_replies_received.operation)
	|| is_set(resolution_requests_dropped.operation)
	|| is_set(resolution_requests_received.operation)
	|| is_set(standby_entries.operation)
	|| is_set(static_entries.operation)
	|| is_set(subscr_replies_gratg_sent.operation)
	|| is_set(subscr_replies_sent.operation)
	|| is_set(subscr_requests_received.operation)
	|| is_set(total_entries.operation)
	|| is_set(vxlan_entries.operation);
}

std::string Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficInterface' in Cisco_IOS_XR_ipv4_arp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (alias_entries.is_set || is_set(alias_entries.operation)) leaf_name_data.push_back(alias_entries.get_name_leafdata());
    if (arp_packet_interface_out_of_subnet.is_set || is_set(arp_packet_interface_out_of_subnet.operation)) leaf_name_data.push_back(arp_packet_interface_out_of_subnet.get_name_leafdata());
    if (arp_packet_node_out_of_subnet.is_set || is_set(arp_packet_node_out_of_subnet.operation)) leaf_name_data.push_back(arp_packet_node_out_of_subnet.get_name_leafdata());
    if (dhcp_entries.is_set || is_set(dhcp_entries.operation)) leaf_name_data.push_back(dhcp_entries.get_name_leafdata());
    if (dynamic_entries.is_set || is_set(dynamic_entries.operation)) leaf_name_data.push_back(dynamic_entries.get_name_leafdata());
    if (gratuitous_replies_sent.is_set || is_set(gratuitous_replies_sent.operation)) leaf_name_data.push_back(gratuitous_replies_sent.get_name_leafdata());
    if (idb_structures.is_set || is_set(idb_structures.operation)) leaf_name_data.push_back(idb_structures.get_name_leafdata());
    if (interface_entries.is_set || is_set(interface_entries.operation)) leaf_name_data.push_back(interface_entries.get_name_leafdata());
    if (ip_packets_dropped_interface.is_set || is_set(ip_packets_dropped_interface.operation)) leaf_name_data.push_back(ip_packets_dropped_interface.get_name_leafdata());
    if (ip_packets_dropped_node.is_set || is_set(ip_packets_dropped_node.operation)) leaf_name_data.push_back(ip_packets_dropped_node.get_name_leafdata());
    if (local_proxy_replies_sent.is_set || is_set(local_proxy_replies_sent.operation)) leaf_name_data.push_back(local_proxy_replies_sent.get_name_leafdata());
    if (no_buffer_errors.is_set || is_set(no_buffer_errors.operation)) leaf_name_data.push_back(no_buffer_errors.get_name_leafdata());
    if (out_of_memory_errors.is_set || is_set(out_of_memory_errors.operation)) leaf_name_data.push_back(out_of_memory_errors.get_name_leafdata());
    if (proxy_replies_sent.is_set || is_set(proxy_replies_sent.operation)) leaf_name_data.push_back(proxy_replies_sent.get_name_leafdata());
    if (replies_received.is_set || is_set(replies_received.operation)) leaf_name_data.push_back(replies_received.get_name_leafdata());
    if (replies_sent.is_set || is_set(replies_sent.operation)) leaf_name_data.push_back(replies_sent.get_name_leafdata());
    if (requests_received.is_set || is_set(requests_received.operation)) leaf_name_data.push_back(requests_received.get_name_leafdata());
    if (requests_sent.is_set || is_set(requests_sent.operation)) leaf_name_data.push_back(requests_sent.get_name_leafdata());
    if (resolution_replies_received.is_set || is_set(resolution_replies_received.operation)) leaf_name_data.push_back(resolution_replies_received.get_name_leafdata());
    if (resolution_requests_dropped.is_set || is_set(resolution_requests_dropped.operation)) leaf_name_data.push_back(resolution_requests_dropped.get_name_leafdata());
    if (resolution_requests_received.is_set || is_set(resolution_requests_received.operation)) leaf_name_data.push_back(resolution_requests_received.get_name_leafdata());
    if (standby_entries.is_set || is_set(standby_entries.operation)) leaf_name_data.push_back(standby_entries.get_name_leafdata());
    if (static_entries.is_set || is_set(static_entries.operation)) leaf_name_data.push_back(static_entries.get_name_leafdata());
    if (subscr_replies_gratg_sent.is_set || is_set(subscr_replies_gratg_sent.operation)) leaf_name_data.push_back(subscr_replies_gratg_sent.get_name_leafdata());
    if (subscr_replies_sent.is_set || is_set(subscr_replies_sent.operation)) leaf_name_data.push_back(subscr_replies_sent.get_name_leafdata());
    if (subscr_requests_received.is_set || is_set(subscr_requests_received.operation)) leaf_name_data.push_back(subscr_requests_received.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (vxlan_entries.is_set || is_set(vxlan_entries.operation)) leaf_name_data.push_back(vxlan_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::get_children()
{
    return children;
}

void Arp::Nodes::Node::TrafficInterfaces::TrafficInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "alias-entries")
    {
        alias_entries = value;
    }
    if(value_path == "arp-packet-interface-out-of-subnet")
    {
        arp_packet_interface_out_of_subnet = value;
    }
    if(value_path == "arp-packet-node-out-of-subnet")
    {
        arp_packet_node_out_of_subnet = value;
    }
    if(value_path == "dhcp-entries")
    {
        dhcp_entries = value;
    }
    if(value_path == "dynamic-entries")
    {
        dynamic_entries = value;
    }
    if(value_path == "gratuitous-replies-sent")
    {
        gratuitous_replies_sent = value;
    }
    if(value_path == "idb-structures")
    {
        idb_structures = value;
    }
    if(value_path == "interface-entries")
    {
        interface_entries = value;
    }
    if(value_path == "ip-packets-dropped-interface")
    {
        ip_packets_dropped_interface = value;
    }
    if(value_path == "ip-packets-dropped-node")
    {
        ip_packets_dropped_node = value;
    }
    if(value_path == "local-proxy-replies-sent")
    {
        local_proxy_replies_sent = value;
    }
    if(value_path == "no-buffer-errors")
    {
        no_buffer_errors = value;
    }
    if(value_path == "out-of-memory-errors")
    {
        out_of_memory_errors = value;
    }
    if(value_path == "proxy-replies-sent")
    {
        proxy_replies_sent = value;
    }
    if(value_path == "replies-received")
    {
        replies_received = value;
    }
    if(value_path == "replies-sent")
    {
        replies_sent = value;
    }
    if(value_path == "requests-received")
    {
        requests_received = value;
    }
    if(value_path == "requests-sent")
    {
        requests_sent = value;
    }
    if(value_path == "resolution-replies-received")
    {
        resolution_replies_received = value;
    }
    if(value_path == "resolution-requests-dropped")
    {
        resolution_requests_dropped = value;
    }
    if(value_path == "resolution-requests-received")
    {
        resolution_requests_received = value;
    }
    if(value_path == "standby-entries")
    {
        standby_entries = value;
    }
    if(value_path == "static-entries")
    {
        static_entries = value;
    }
    if(value_path == "subscr-replies-gratg-sent")
    {
        subscr_replies_gratg_sent = value;
    }
    if(value_path == "subscr-replies-sent")
    {
        subscr_replies_sent = value;
    }
    if(value_path == "subscr-requests-received")
    {
        subscr_requests_received = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
    if(value_path == "vxlan-entries")
    {
        vxlan_entries = value;
    }
}

const Enum::YLeaf IpArpBagFlagsEnum::flag_none {0, "flag-none"};
const Enum::YLeaf IpArpBagFlagsEnum::flag_dynamic {1, "flag-dynamic"};
const Enum::YLeaf IpArpBagFlagsEnum::flag_evpn_sync {2, "flag-evpn-sync"};
const Enum::YLeaf IpArpBagFlagsEnum::flag_max {3, "flag-max"};

const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_none {0, "status-none"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolution_request {1, "status-resolution-request"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_reply {2, "status-resolved-reply"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_grat_arp {3, "status-resolved-grat-arp"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_request {4, "status-resolved-request"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_lc_sync {5, "status-resolved-lc-sync"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_lc_sync_purge_delay {6, "status-resolved-lc-sync-purge-delay"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_client {7, "status-resolved-client"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_removed_client {8, "status-removed-client"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_already_resolved {9, "status-already-resolved"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_failed {10, "status-failed"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_dropped_interface_down {11, "status-dropped-interface-down"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_dropped_broadcast_disabled {12, "status-dropped-broadcast-disabled"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_dropped_interface_unavailable {13, "status-dropped-interface-unavailable"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_dropped_bad_subnet {14, "status-dropped-bad-subnet"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_dropped_dynamic_learning_disabled {15, "status-dropped-dynamic-learning-disabled"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_dropped_out_of_subnet_disabled {16, "status-dropped-out-of-subnet-disabled"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_removed_client_sweep {17, "status-removed-client-sweep"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_added_client {18, "status-added-client"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_added_v1 {19, "status-added-v1"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_removed_v1 {20, "status-removed-v1"};
const Enum::YLeaf ArpResolutionHistoryStatusEnum::status_resolved_peer_sync {21, "status-resolved-peer-sync"};

const Enum::YLeaf IpArpBagEncapEnum::none {0, "none"};
const Enum::YLeaf IpArpBagEncapEnum::arpa {1, "arpa"};
const Enum::YLeaf IpArpBagEncapEnum::snap {2, "snap"};
const Enum::YLeaf IpArpBagEncapEnum::ieee802_1q {3, "ieee802-1q"};
const Enum::YLeaf IpArpBagEncapEnum::srp {4, "srp"};
const Enum::YLeaf IpArpBagEncapEnum::srpa {5, "srpa"};
const Enum::YLeaf IpArpBagEncapEnum::srpb {6, "srpb"};

const Enum::YLeaf ArpGmpBagEncapEnum::none {0, "none"};
const Enum::YLeaf ArpGmpBagEncapEnum::arpa {1, "arpa"};
const Enum::YLeaf ArpGmpBagEncapEnum::snap {2, "snap"};
const Enum::YLeaf ArpGmpBagEncapEnum::ieee802_1q {3, "ieee802-1q"};
const Enum::YLeaf ArpGmpBagEncapEnum::srp {4, "srp"};
const Enum::YLeaf ArpGmpBagEncapEnum::srpa {5, "srpa"};
const Enum::YLeaf ArpGmpBagEncapEnum::srpb {6, "srpb"};

const Enum::YLeaf IpArpBagMediaEnum::media_arpa {0, "media-arpa"};
const Enum::YLeaf IpArpBagMediaEnum::media_srp {1, "media-srp"};
const Enum::YLeaf IpArpBagMediaEnum::media_unknown {2, "media-unknown"};

const Enum::YLeaf ArpGmpBagEntryEnum::null {0, "null"};
const Enum::YLeaf ArpGmpBagEntryEnum::static_ {1, "static"};
const Enum::YLeaf ArpGmpBagEntryEnum::alias {2, "alias"};

const Enum::YLeaf IpArpBagStateEnum::state_none {0, "state-none"};
const Enum::YLeaf IpArpBagStateEnum::state_interface {1, "state-interface"};
const Enum::YLeaf IpArpBagStateEnum::state_standby {2, "state-standby"};
const Enum::YLeaf IpArpBagStateEnum::state_static {3, "state-static"};
const Enum::YLeaf IpArpBagStateEnum::state_alias {4, "state-alias"};
const Enum::YLeaf IpArpBagStateEnum::state_mobile {5, "state-mobile"};
const Enum::YLeaf IpArpBagStateEnum::state_incomplete {6, "state-incomplete"};
const Enum::YLeaf IpArpBagStateEnum::state_deleted {7, "state-deleted"};
const Enum::YLeaf IpArpBagStateEnum::state_dynamic {8, "state-dynamic"};
const Enum::YLeaf IpArpBagStateEnum::state_probe {9, "state-probe"};
const Enum::YLeaf IpArpBagStateEnum::state_purge_delayed {10, "state-purge-delayed"};
const Enum::YLeaf IpArpBagStateEnum::state_dhcp {11, "state-dhcp"};
const Enum::YLeaf IpArpBagStateEnum::state_vxlan {12, "state-vxlan"};
const Enum::YLeaf IpArpBagStateEnum::state_evpn_sync {13, "state-evpn-sync"};
const Enum::YLeaf IpArpBagStateEnum::state_sat {14, "state-sat"};
const Enum::YLeaf IpArpBagStateEnum::state_r_sync {15, "state-r-sync"};
const Enum::YLeaf IpArpBagStateEnum::state_max {16, "state-max"};


}
}

