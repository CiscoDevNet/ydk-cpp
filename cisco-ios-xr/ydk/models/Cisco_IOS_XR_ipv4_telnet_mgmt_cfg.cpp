
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_telnet_mgmt_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_telnet_mgmt_cfg {

Telnet::Vrfs::Vrf::Ipv4::Ipv4()
    :
    	dscp{YType::uint32, "dscp"}
{
    yang_name = "ipv4"; yang_parent_name = "vrf";
}

Telnet::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool Telnet::Vrfs::Vrf::Ipv4::has_data() const
{
    return dscp.is_set;
}

bool Telnet::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp.operation);
}

std::string Telnet::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Telnet::Vrfs::Vrf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Telnet::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Telnet::Vrfs::Vrf::Ipv4::get_children()
{
    return children;
}

void Telnet::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp")
    {
        dscp = value;
    }
}

Telnet::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_unique<Telnet::Vrfs::Vrf::Ipv4>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Telnet::Vrfs::Vrf::~Vrf()
{
}

bool Telnet::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Telnet::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (ipv4 !=  nullptr && is_set(ipv4->operation));
}

std::string Telnet::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Telnet::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-telnet-mgmt-cfg:telnet/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Telnet::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["ipv4"] = ipv4.get();
        }
        else
        {
            ipv4 = std::make_unique<Telnet::Vrfs::Vrf::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4.get();
        }
        return children.at("ipv4");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Telnet::Vrfs::Vrf::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4.get();
        }
    }

    return children;
}

void Telnet::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Telnet::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "telnet";
}

Telnet::Vrfs::~Vrfs()
{
}

bool Telnet::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Telnet::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Telnet::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Telnet::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-telnet-mgmt-cfg:telnet/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Telnet::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Telnet::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Telnet::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Telnet::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Telnet::Telnet()
    :
    vrfs(std::make_unique<Telnet::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "telnet"; yang_parent_name = "Cisco-IOS-XR-ipv4-telnet-mgmt-cfg";
}

Telnet::~Telnet()
{
}

bool Telnet::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool Telnet::has_operation() const
{
    return is_set(operation)
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-telnet-mgmt-cfg:telnet";

    return path_buffer.str();

}

EntityPath Telnet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Telnet::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Telnet::get_children()
{
    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Telnet::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Telnet::clone_ptr()
{
    return std::make_unique<Telnet>();
}


}
}

