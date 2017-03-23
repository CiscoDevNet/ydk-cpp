
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_smiap_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_smiap_cfg {

Ipv4Virtual::Ipv4Virtual()
    :
    use_as_source_address{YType::empty, "use-as-source-address"}
    	,
    vrfs(std::make_shared<Ipv4Virtual::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "ipv4-virtual"; yang_parent_name = "Cisco-IOS-XR-ipv4-smiap-cfg";
}

Ipv4Virtual::~Ipv4Virtual()
{
}

bool Ipv4Virtual::has_data() const
{
    return use_as_source_address.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Virtual::has_operation() const
{
    return is_set(operation)
	|| is_set(use_as_source_address.operation)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Virtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual";

    return path_buffer.str();

}

EntityPath Ipv4Virtual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_as_source_address.is_set || is_set(use_as_source_address.operation)) leaf_name_data.push_back(use_as_source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Virtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            vrfs = std::make_shared<Ipv4Virtual::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Virtual::get_children()
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

void Ipv4Virtual::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "use-as-source-address")
    {
        use_as_source_address = value;
    }
}

std::shared_ptr<Entity> Ipv4Virtual::clone_ptr() const
{
    return std::make_shared<Ipv4Virtual>();
}

std::string Ipv4Virtual::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv4Virtual::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv4Virtual::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv4Virtual::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ipv4-virtual";
}

Ipv4Virtual::Vrfs::~Vrfs()
{
}

bool Ipv4Virtual::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Virtual::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Virtual::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Virtual::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Virtual::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ipv4Virtual::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Virtual::Vrfs::get_children()
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

void Ipv4Virtual::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Virtual::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address(nullptr) // presence node
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Virtual::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Virtual::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Ipv4Virtual::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Ipv4Virtual::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Virtual::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-smiap-cfg:ipv4-virtual/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> Ipv4Virtual::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            address = std::make_shared<Ipv4Virtual::Vrfs::Vrf::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Virtual::Vrfs::Vrf::get_children()
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

void Ipv4Virtual::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Virtual::Vrfs::Vrf::Address::Address()
    :
    address{YType::str, "address"},
    netmask{YType::uint8, "netmask"}
{
    yang_name = "address"; yang_parent_name = "vrf";
}

Ipv4Virtual::Vrfs::Vrf::Address::~Address()
{
}

bool Ipv4Virtual::Vrfs::Vrf::Address::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool Ipv4Virtual::Vrfs::Vrf::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation);
}

std::string Ipv4Virtual::Vrfs::Vrf::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv4Virtual::Vrfs::Vrf::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_smiap_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv4Virtual::Vrfs::Vrf::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv4Virtual::Vrfs::Vrf::Address::get_children()
{
    return children;
}

void Ipv4Virtual::Vrfs::Vrf::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
}


}
}

