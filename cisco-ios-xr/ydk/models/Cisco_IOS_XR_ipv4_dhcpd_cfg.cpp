
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_dhcpd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_dhcpd_cfg {

Ipv4Dhcpd::Vrfs::Vrf::Profile::Profile()
    :
    	mode{YType::enumeration, "mode"},
	 vrf_profile_name{YType::str, "vrf-profile-name"}
{
    yang_name = "profile"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Vrfs::Vrf::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_data() const
{
    return mode.is_set
	|| vrf_profile_name.is_set;
}

bool Ipv4Dhcpd::Vrfs::Vrf::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(vrf_profile_name.operation);
}

std::string Ipv4Dhcpd::Vrfs::Vrf::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Vrfs::Vrf::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (vrf_profile_name.is_set || is_set(vrf_profile_name.operation)) leaf_name_data.push_back(vrf_profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Vrfs::Vrf::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Vrfs::Vrf::Profile::get_children()
{
    return children;
}

void Ipv4Dhcpd::Vrfs::Vrf::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "vrf-profile-name")
    {
        vrf_profile_name = value;
    }
}

Ipv4Dhcpd::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    profile(nullptr) // presence node
{
    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (profile !=  nullptr && profile->has_data());
}

bool Ipv4Dhcpd::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Ipv4Dhcpd::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/vrfs/" << get_segment_path();
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

Entity* Ipv4Dhcpd::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        if(profile != nullptr)
        {
            children["profile"] = profile.get();
        }
        else
        {
            profile = std::make_unique<Ipv4Dhcpd::Vrfs::Vrf::Profile>();
            profile->parent = this;
            children["profile"] = profile.get();
        }
        return children.at("profile");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Vrfs::Vrf::get_children()
{
    if(children.find("profile") == children.end())
    {
        if(profile != nullptr)
        {
            children["profile"] = profile.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Dhcpd::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Vrfs::get_children()
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

void Ipv4Dhcpd::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::Server()
{
    yang_name = "server"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::~Server()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_data() const
{
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::GiAddrPolicy()
    :
    	policy{YType::enumeration, "policy"}
{
    yang_name = "gi-addr-policy"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::~GiAddrPolicy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gi-addr-policy";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::HelperAddress()
    :
    	ip_address{YType::str, "ip-address"},
	 enable{YType::empty, "enable"},
	 gateway_address{YType::str, "gateway-address"}
{
    yang_name = "helper-address"; yang_parent_name = "helper-addresses";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::~HelperAddress()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_data() const
{
    return ip_address.is_set
	|| enable.is_set
	|| gateway_address.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(enable.operation)
	|| is_set(gateway_address.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[ip-address='" <<ip_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.operation)) leaf_name_data.push_back(gateway_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddresses()
{
    yang_name = "helper-addresses"; yang_parent_name = "vrf";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::~HelperAddresses()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-addresses";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::HelperAddress>();
        c->parent = this;
        helper_address.push_back(std::move(c));
        children[segment_path] = helper_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::get_children()
{
    for (auto const & c : helper_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    helper_addresses(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses>())
{
    helper_addresses->parent = this;
    children["helper-addresses"] = helper_addresses.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (helper_addresses !=  nullptr && helper_addresses->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (helper_addresses !=  nullptr && helper_addresses->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
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

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "helper-addresses")
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
        else
        {
            helper_addresses = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::HelperAddresses>();
            helper_addresses->parent = this;
            children["helper-addresses"] = helper_addresses.get();
        }
        return children.at("helper-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::get_children()
{
    if(children.find("helper-addresses") == children.end())
    {
        if(helper_addresses != nullptr)
        {
            children["helper-addresses"] = helper_addresses.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::~Vrfs()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::get_children()
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

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::RelayInformationOption()
    :
    	allow_untrusted{YType::empty, "allow-untrusted"},
	 check{YType::empty, "check"},
	 insert{YType::empty, "insert"},
	 policy{YType::enumeration, "policy"},
	 subscriber_id{YType::str, "subscriber-id"},
	 vpn{YType::empty, "vpn"},
	 vpn_mode{YType::enumeration, "vpn-mode"}
{
    yang_name = "relay-information-option"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::~RelayInformationOption()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_data() const
{
    return allow_untrusted.is_set
	|| check.is_set
	|| insert.is_set
	|| policy.is_set
	|| subscriber_id.is_set
	|| vpn.is_set
	|| vpn_mode.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_untrusted.operation)
	|| is_set(check.operation)
	|| is_set(insert.operation)
	|| is_set(policy.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(vpn.operation)
	|| is_set(vpn_mode.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-information-option";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.operation)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());
    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());
    if (insert.is_set || is_set(insert.operation)) leaf_name_data.push_back(insert.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (vpn_mode.is_set || is_set(vpn_mode.operation)) leaf_name_data.push_back(vpn_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
    }
    if(value_path == "check")
    {
        check = value;
    }
    if(value_path == "insert")
    {
        insert = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "vpn")
    {
        vpn = value;
    }
    if(value_path == "vpn-mode")
    {
        vpn_mode = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::BroadcastPolicy()
    :
    	policy{YType::enumeration, "policy"}
{
    yang_name = "broadcast-policy"; yang_parent_name = "relay";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::~BroadcastPolicy()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_data() const
{
    return policy.is_set;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy.operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-policy";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::get_children()
{
    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy")
    {
        policy = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Relay()
    :
    broadcast_policy(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy>())
	,gi_addr_policy(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy>())
	,relay_information_option(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption>())
	,vrfs(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs>())
{
    broadcast_policy->parent = this;
    children["broadcast-policy"] = broadcast_policy.get();

    gi_addr_policy->parent = this;
    children["gi-addr-policy"] = gi_addr_policy.get();

    relay_information_option->parent = this;
    children["relay-information-option"] = relay_information_option.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "relay"; yang_parent_name = "mode";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::~Relay()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_data() const
{
    return (broadcast_policy !=  nullptr && broadcast_policy->has_data())
	|| (gi_addr_policy !=  nullptr && gi_addr_policy->has_data())
	|| (relay_information_option !=  nullptr && relay_information_option->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::has_operation() const
{
    return is_set(operation)
	|| (broadcast_policy !=  nullptr && broadcast_policy->has_operation())
	|| (gi_addr_policy !=  nullptr && gi_addr_policy->has_operation())
	|| (relay_information_option !=  nullptr && relay_information_option->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast-policy")
    {
        if(broadcast_policy != nullptr)
        {
            children["broadcast-policy"] = broadcast_policy.get();
        }
        else
        {
            broadcast_policy = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::BroadcastPolicy>();
            broadcast_policy->parent = this;
            children["broadcast-policy"] = broadcast_policy.get();
        }
        return children.at("broadcast-policy");
    }

    if(child_yang_name == "gi-addr-policy")
    {
        if(gi_addr_policy != nullptr)
        {
            children["gi-addr-policy"] = gi_addr_policy.get();
        }
        else
        {
            gi_addr_policy = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::GiAddrPolicy>();
            gi_addr_policy->parent = this;
            children["gi-addr-policy"] = gi_addr_policy.get();
        }
        return children.at("gi-addr-policy");
    }

    if(child_yang_name == "relay-information-option")
    {
        if(relay_information_option != nullptr)
        {
            children["relay-information-option"] = relay_information_option.get();
        }
        else
        {
            relay_information_option = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::RelayInformationOption>();
            relay_information_option->parent = this;
            children["relay-information-option"] = relay_information_option.get();
        }
        return children.at("relay-information-option");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::get_children()
{
    if(children.find("broadcast-policy") == children.end())
    {
        if(broadcast_policy != nullptr)
        {
            children["broadcast-policy"] = broadcast_policy.get();
        }
    }

    if(children.find("gi-addr-policy") == children.end())
    {
        if(gi_addr_policy != nullptr)
        {
            children["gi-addr-policy"] = gi_addr_policy.get();
        }
    }

    if(children.find("relay-information-option") == children.end())
    {
        if(relay_information_option != nullptr)
        {
            children["relay-information-option"] = relay_information_option.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Mode()
    :
    	mode{YType::enumeration, "mode"},
	 enable{YType::empty, "enable"}
    	,
    relay(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay>())
	,server(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server>())
{
    relay->parent = this;
    children["relay"] = relay.get();

    server->parent = this;
    children["server"] = server.get();

    yang_name = "mode"; yang_parent_name = "modes";
}

Ipv4Dhcpd::Profiles::Profile::Modes::Mode::~Mode()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_data() const
{
    return mode.is_set
	|| enable.is_set
	|| (relay !=  nullptr && relay->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::Mode::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(enable.operation)
	|| (relay !=  nullptr && relay->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode" <<"[mode='" <<mode.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relay")
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
        else
        {
            relay = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Relay>();
            relay->parent = this;
            children["relay"] = relay.get();
        }
        return children.at("relay");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::Mode::get_children()
{
    if(children.find("relay") == children.end())
    {
        if(relay != nullptr)
        {
            children["relay"] = relay.get();
        }
    }

    if(children.find("server") == children.end())
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::Mode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Ipv4Dhcpd::Profiles::Profile::Modes::Modes()
{
    yang_name = "modes"; yang_parent_name = "profile";
}

Ipv4Dhcpd::Profiles::Profile::Modes::~Modes()
{
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_data() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::Profile::Modes::has_operation() const
{
    for (std::size_t index=0; index<mode.size(); index++)
    {
        if(mode[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::Profile::Modes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modes";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::Modes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::Modes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mode")
    {
        for(auto const & c : mode)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes::Mode>();
        c->parent = this;
        mode.push_back(std::move(c));
        children[segment_path] = mode.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::Modes::get_children()
{
    for (auto const & c : mode)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::Modes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Profiles::Profile::Profile()
    :
    	profile_name{YType::str, "profile-name"}
    	,
    modes(std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes>())
{
    modes->parent = this;
    children["modes"] = modes.get();

    yang_name = "profile"; yang_parent_name = "profiles";
}

Ipv4Dhcpd::Profiles::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Profiles::Profile::has_data() const
{
    return profile_name.is_set
	|| (modes !=  nullptr && modes->has_data());
}

bool Ipv4Dhcpd::Profiles::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| (modes !=  nullptr && modes->has_operation());
}

std::string Ipv4Dhcpd::Profiles::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[profile-name='" <<profile_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/profiles/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "modes")
    {
        if(modes != nullptr)
        {
            children["modes"] = modes.get();
        }
        else
        {
            modes = std::make_unique<Ipv4Dhcpd::Profiles::Profile::Modes>();
            modes->parent = this;
            children["modes"] = modes.get();
        }
        return children.at("modes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::Profile::get_children()
{
    if(children.find("modes") == children.end())
    {
        if(modes != nullptr)
        {
            children["modes"] = modes.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Ipv4Dhcpd::Profiles::Profiles()
{
    yang_name = "profiles"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Profiles::~Profiles()
{
}

bool Ipv4Dhcpd::Profiles::has_data() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Profiles::has_operation() const
{
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Profiles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profiles";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Profiles::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Profiles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4Dhcpd::Profiles::Profile>();
        c->parent = this;
        profile.push_back(std::move(c));
        children[segment_path] = profile.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Profiles::get_children()
{
    for (auto const & c : profile)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Profiles::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Database::Database()
    :
    	full_write_interval{YType::uint32, "full-write-interval"},
	 incremental_write_interval{YType::uint32, "incremental-write-interval"},
	 proxy{YType::empty, "proxy"},
	 server{YType::empty, "server"},
	 snoop{YType::empty, "snoop"}
{
    yang_name = "database"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Database::~Database()
{
}

bool Ipv4Dhcpd::Database::has_data() const
{
    return full_write_interval.is_set
	|| incremental_write_interval.is_set
	|| proxy.is_set
	|| server.is_set
	|| snoop.is_set;
}

bool Ipv4Dhcpd::Database::has_operation() const
{
    return is_set(operation)
	|| is_set(full_write_interval.operation)
	|| is_set(incremental_write_interval.operation)
	|| is_set(proxy.operation)
	|| is_set(server.operation)
	|| is_set(snoop.operation);
}

std::string Ipv4Dhcpd::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_write_interval.is_set || is_set(full_write_interval.operation)) leaf_name_data.push_back(full_write_interval.get_name_leafdata());
    if (incremental_write_interval.is_set || is_set(incremental_write_interval.operation)) leaf_name_data.push_back(incremental_write_interval.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.operation)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());
    if (snoop.is_set || is_set(snoop.operation)) leaf_name_data.push_back(snoop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Database::get_children()
{
    return children;
}

void Ipv4Dhcpd::Database::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-write-interval")
    {
        full_write_interval = value;
    }
    if(value_path == "incremental-write-interval")
    {
        incremental_write_interval = value;
    }
    if(value_path == "proxy")
    {
        proxy = value;
    }
    if(value_path == "server")
    {
        server = value;
    }
    if(value_path == "snoop")
    {
        snoop = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::DhcpCircuitId()
    :
    	argument1{YType::enumeration, "argument1"},
	 argument10{YType::enumeration, "argument10"},
	 argument11{YType::enumeration, "argument11"},
	 argument12{YType::enumeration, "argument12"},
	 argument13{YType::enumeration, "argument13"},
	 argument14{YType::enumeration, "argument14"},
	 argument15{YType::enumeration, "argument15"},
	 argument16{YType::enumeration, "argument16"},
	 argument2{YType::enumeration, "argument2"},
	 argument3{YType::enumeration, "argument3"},
	 argument4{YType::enumeration, "argument4"},
	 argument5{YType::enumeration, "argument5"},
	 argument6{YType::enumeration, "argument6"},
	 argument7{YType::enumeration, "argument7"},
	 argument8{YType::enumeration, "argument8"},
	 argument9{YType::enumeration, "argument9"},
	 circuit_id{YType::str, "circuit-id"},
	 format{YType::enumeration, "format"}
{
    yang_name = "dhcp-circuit-id"; yang_parent_name = "proxy-interface";
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::~DhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(argument1.operation)
	|| is_set(argument10.operation)
	|| is_set(argument11.operation)
	|| is_set(argument12.operation)
	|| is_set(argument13.operation)
	|| is_set(argument14.operation)
	|| is_set(argument15.operation)
	|| is_set(argument16.operation)
	|| is_set(argument2.operation)
	|| is_set(argument3.operation)
	|| is_set(argument4.operation)
	|| is_set(argument5.operation)
	|| is_set(argument6.operation)
	|| is_set(argument7.operation)
	|| is_set(argument8.operation)
	|| is_set(argument9.operation)
	|| is_set(circuit_id.operation)
	|| is_set(format.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.operation)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.operation)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.operation)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.operation)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.operation)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.operation)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.operation)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.operation)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.operation)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.operation)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.operation)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.operation)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.operation)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.operation)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.operation)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.operation)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "argument1")
    {
        argument1 = value;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::ProxyInterface()
    :
    	profile{YType::str, "profile"}
    	,
    dhcp_circuit_id(nullptr) // presence node
{
    yang_name = "proxy-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::~ProxyInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_data() const
{
    return profile.is_set
	|| (dhcp_circuit_id !=  nullptr && dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| (dhcp_circuit_id !=  nullptr && dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dhcp-circuit-id")
    {
        if(dhcp_circuit_id != nullptr)
        {
            children["dhcp-circuit-id"] = dhcp_circuit_id.get();
        }
        else
        {
            dhcp_circuit_id = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::DhcpCircuitId>();
            dhcp_circuit_id->parent = this;
            children["dhcp-circuit-id"] = dhcp_circuit_id.get();
        }
        return children.at("dhcp-circuit-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::get_children()
{
    if(children.find("dhcp-circuit-id") == children.end())
    {
        if(dhcp_circuit_id != nullptr)
        {
            children["dhcp-circuit-id"] = dhcp_circuit_id.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ProxyInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::BaseInterface()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "base-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::BaseInterface::~BaseInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_data() const
{
    return profile.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::BaseInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::BaseInterface::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::BaseInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::RelayDhcpCircuitId()
    :
    	argument1{YType::enumeration, "argument1"},
	 argument10{YType::enumeration, "argument10"},
	 argument11{YType::enumeration, "argument11"},
	 argument12{YType::enumeration, "argument12"},
	 argument13{YType::enumeration, "argument13"},
	 argument14{YType::enumeration, "argument14"},
	 argument15{YType::enumeration, "argument15"},
	 argument16{YType::enumeration, "argument16"},
	 argument2{YType::enumeration, "argument2"},
	 argument3{YType::enumeration, "argument3"},
	 argument4{YType::enumeration, "argument4"},
	 argument5{YType::enumeration, "argument5"},
	 argument6{YType::enumeration, "argument6"},
	 argument7{YType::enumeration, "argument7"},
	 argument8{YType::enumeration, "argument8"},
	 argument9{YType::enumeration, "argument9"},
	 circuit_id{YType::str, "circuit-id"},
	 format{YType::enumeration, "format"}
{
    yang_name = "relay-dhcp-circuit-id"; yang_parent_name = "relay-interface";
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::~RelayDhcpCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_data() const
{
    return argument1.is_set
	|| argument10.is_set
	|| argument11.is_set
	|| argument12.is_set
	|| argument13.is_set
	|| argument14.is_set
	|| argument15.is_set
	|| argument16.is_set
	|| argument2.is_set
	|| argument3.is_set
	|| argument4.is_set
	|| argument5.is_set
	|| argument6.is_set
	|| argument7.is_set
	|| argument8.is_set
	|| argument9.is_set
	|| circuit_id.is_set
	|| format.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(argument1.operation)
	|| is_set(argument10.operation)
	|| is_set(argument11.operation)
	|| is_set(argument12.operation)
	|| is_set(argument13.operation)
	|| is_set(argument14.operation)
	|| is_set(argument15.operation)
	|| is_set(argument16.operation)
	|| is_set(argument2.operation)
	|| is_set(argument3.operation)
	|| is_set(argument4.operation)
	|| is_set(argument5.operation)
	|| is_set(argument6.operation)
	|| is_set(argument7.operation)
	|| is_set(argument8.operation)
	|| is_set(argument9.operation)
	|| is_set(circuit_id.operation)
	|| is_set(format.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-dhcp-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (argument1.is_set || is_set(argument1.operation)) leaf_name_data.push_back(argument1.get_name_leafdata());
    if (argument10.is_set || is_set(argument10.operation)) leaf_name_data.push_back(argument10.get_name_leafdata());
    if (argument11.is_set || is_set(argument11.operation)) leaf_name_data.push_back(argument11.get_name_leafdata());
    if (argument12.is_set || is_set(argument12.operation)) leaf_name_data.push_back(argument12.get_name_leafdata());
    if (argument13.is_set || is_set(argument13.operation)) leaf_name_data.push_back(argument13.get_name_leafdata());
    if (argument14.is_set || is_set(argument14.operation)) leaf_name_data.push_back(argument14.get_name_leafdata());
    if (argument15.is_set || is_set(argument15.operation)) leaf_name_data.push_back(argument15.get_name_leafdata());
    if (argument16.is_set || is_set(argument16.operation)) leaf_name_data.push_back(argument16.get_name_leafdata());
    if (argument2.is_set || is_set(argument2.operation)) leaf_name_data.push_back(argument2.get_name_leafdata());
    if (argument3.is_set || is_set(argument3.operation)) leaf_name_data.push_back(argument3.get_name_leafdata());
    if (argument4.is_set || is_set(argument4.operation)) leaf_name_data.push_back(argument4.get_name_leafdata());
    if (argument5.is_set || is_set(argument5.operation)) leaf_name_data.push_back(argument5.get_name_leafdata());
    if (argument6.is_set || is_set(argument6.operation)) leaf_name_data.push_back(argument6.get_name_leafdata());
    if (argument7.is_set || is_set(argument7.operation)) leaf_name_data.push_back(argument7.get_name_leafdata());
    if (argument8.is_set || is_set(argument8.operation)) leaf_name_data.push_back(argument8.get_name_leafdata());
    if (argument9.is_set || is_set(argument9.operation)) leaf_name_data.push_back(argument9.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.operation)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "argument1")
    {
        argument1 = value;
    }
    if(value_path == "argument10")
    {
        argument10 = value;
    }
    if(value_path == "argument11")
    {
        argument11 = value;
    }
    if(value_path == "argument12")
    {
        argument12 = value;
    }
    if(value_path == "argument13")
    {
        argument13 = value;
    }
    if(value_path == "argument14")
    {
        argument14 = value;
    }
    if(value_path == "argument15")
    {
        argument15 = value;
    }
    if(value_path == "argument16")
    {
        argument16 = value;
    }
    if(value_path == "argument2")
    {
        argument2 = value;
    }
    if(value_path == "argument3")
    {
        argument3 = value;
    }
    if(value_path == "argument4")
    {
        argument4 = value;
    }
    if(value_path == "argument5")
    {
        argument5 = value;
    }
    if(value_path == "argument6")
    {
        argument6 = value;
    }
    if(value_path == "argument7")
    {
        argument7 = value;
    }
    if(value_path == "argument8")
    {
        argument8 = value;
    }
    if(value_path == "argument9")
    {
        argument9 = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayInterface()
    :
    relay_dhcp_circuit_id(nullptr) // presence node
{
    yang_name = "relay-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::RelayInterface::~RelayInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_data() const
{
    return (relay_dhcp_circuit_id !=  nullptr && relay_dhcp_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::RelayInterface::has_operation() const
{
    return is_set(operation)
	|| (relay_dhcp_circuit_id !=  nullptr && relay_dhcp_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "relay-dhcp-circuit-id")
    {
        if(relay_dhcp_circuit_id != nullptr)
        {
            children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id.get();
        }
        else
        {
            relay_dhcp_circuit_id = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::RelayInterface::RelayDhcpCircuitId>();
            relay_dhcp_circuit_id->parent = this;
            children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id.get();
        }
        return children.at("relay-dhcp-circuit-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::RelayInterface::get_children()
{
    if(children.find("relay-dhcp-circuit-id") == children.end())
    {
        if(relay_dhcp_circuit_id != nullptr)
        {
            children["relay-dhcp-circuit-id"] = relay_dhcp_circuit_id.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::RelayInterface::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::Profile::Profile()
    :
    	mode{YType::enumeration, "mode"},
	 profile_name{YType::str, "profile-name"}
{
    yang_name = "profile"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::Profile::~Profile()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_data() const
{
    return mode.is_set
	|| profile_name.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| is_set(profile_name.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::Profile::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::ServerInterface()
    :
    	profile{YType::str, "profile"}
{
    yang_name = "server-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::ServerInterface::~ServerInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_data() const
{
    return profile.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::ServerInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::ServerInterface::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::ServerInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::SnoopCircuitId()
    :
    	circuit_id_value{YType::str, "circuit-id-value"},
	 format_type{YType::uint32, "format-type"}
{
    yang_name = "snoop-circuit-id"; yang_parent_name = "snoop-interface";
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::~SnoopCircuitId()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_data() const
{
    return circuit_id_value.is_set
	|| format_type.is_set;
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(circuit_id_value.operation)
	|| is_set(format_type.operation);
}

std::string Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop-circuit-id";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (circuit_id_value.is_set || is_set(circuit_id_value.operation)) leaf_name_data.push_back(circuit_id_value.get_name_leafdata());
    if (format_type.is_set || is_set(format_type.operation)) leaf_name_data.push_back(format_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::get_children()
{
    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "circuit-id-value")
    {
        circuit_id_value = value;
    }
    if(value_path == "format-type")
    {
        format_type = value;
    }
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopInterface()
    :
    snoop_circuit_id(std::make_unique<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId>())
{
    snoop_circuit_id->parent = this;
    children["snoop-circuit-id"] = snoop_circuit_id.get();

    yang_name = "snoop-interface"; yang_parent_name = "interface";
}

Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::~SnoopInterface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_data() const
{
    return (snoop_circuit_id !=  nullptr && snoop_circuit_id->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::has_operation() const
{
    return is_set(operation)
	|| (snoop_circuit_id !=  nullptr && snoop_circuit_id->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snoop-interface";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "snoop-circuit-id")
    {
        if(snoop_circuit_id != nullptr)
        {
            children["snoop-circuit-id"] = snoop_circuit_id.get();
        }
        else
        {
            snoop_circuit_id = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::SnoopCircuitId>();
            snoop_circuit_id->parent = this;
            children["snoop-circuit-id"] = snoop_circuit_id.get();
        }
        return children.at("snoop-circuit-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::get_children()
{
    if(children.find("snoop-circuit-id") == children.end())
    {
        if(snoop_circuit_id != nullptr)
        {
            children["snoop-circuit-id"] = snoop_circuit_id.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::SnoopInterface::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 none{YType::empty, "none"}
    	,
    base_interface(std::make_unique<Ipv4Dhcpd::Interfaces::Interface::BaseInterface>())
	,profile(nullptr) // presence node
	,proxy_interface(std::make_unique<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface>())
	,relay_interface(std::make_unique<Ipv4Dhcpd::Interfaces::Interface::RelayInterface>())
	,server_interface(std::make_unique<Ipv4Dhcpd::Interfaces::Interface::ServerInterface>())
	,snoop_interface(std::make_unique<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface>())
{
    base_interface->parent = this;
    children["base-interface"] = base_interface.get();

    proxy_interface->parent = this;
    children["proxy-interface"] = proxy_interface.get();

    relay_interface->parent = this;
    children["relay-interface"] = relay_interface.get();

    server_interface->parent = this;
    children["server-interface"] = server_interface.get();

    snoop_interface->parent = this;
    children["snoop-interface"] = snoop_interface.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv4Dhcpd::Interfaces::Interface::~Interface()
{
}

bool Ipv4Dhcpd::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| none.is_set
	|| (base_interface !=  nullptr && base_interface->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (proxy_interface !=  nullptr && proxy_interface->has_data())
	|| (relay_interface !=  nullptr && relay_interface->has_data())
	|| (server_interface !=  nullptr && server_interface->has_data())
	|| (snoop_interface !=  nullptr && snoop_interface->has_data());
}

bool Ipv4Dhcpd::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(none.operation)
	|| (base_interface !=  nullptr && base_interface->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (proxy_interface !=  nullptr && proxy_interface->has_operation())
	|| (relay_interface !=  nullptr && relay_interface->has_operation())
	|| (server_interface !=  nullptr && server_interface->has_operation())
	|| (snoop_interface !=  nullptr && snoop_interface->has_operation());
}

std::string Ipv4Dhcpd::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/interfaces/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-interface")
    {
        if(base_interface != nullptr)
        {
            children["base-interface"] = base_interface.get();
        }
        else
        {
            base_interface = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::BaseInterface>();
            base_interface->parent = this;
            children["base-interface"] = base_interface.get();
        }
        return children.at("base-interface");
    }

    if(child_yang_name == "profile")
    {
        if(profile != nullptr)
        {
            children["profile"] = profile.get();
        }
        else
        {
            profile = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::Profile>();
            profile->parent = this;
            children["profile"] = profile.get();
        }
        return children.at("profile");
    }

    if(child_yang_name == "proxy-interface")
    {
        if(proxy_interface != nullptr)
        {
            children["proxy-interface"] = proxy_interface.get();
        }
        else
        {
            proxy_interface = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::ProxyInterface>();
            proxy_interface->parent = this;
            children["proxy-interface"] = proxy_interface.get();
        }
        return children.at("proxy-interface");
    }

    if(child_yang_name == "relay-interface")
    {
        if(relay_interface != nullptr)
        {
            children["relay-interface"] = relay_interface.get();
        }
        else
        {
            relay_interface = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::RelayInterface>();
            relay_interface->parent = this;
            children["relay-interface"] = relay_interface.get();
        }
        return children.at("relay-interface");
    }

    if(child_yang_name == "server-interface")
    {
        if(server_interface != nullptr)
        {
            children["server-interface"] = server_interface.get();
        }
        else
        {
            server_interface = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::ServerInterface>();
            server_interface->parent = this;
            children["server-interface"] = server_interface.get();
        }
        return children.at("server-interface");
    }

    if(child_yang_name == "snoop-interface")
    {
        if(snoop_interface != nullptr)
        {
            children["snoop-interface"] = snoop_interface.get();
        }
        else
        {
            snoop_interface = std::make_unique<Ipv4Dhcpd::Interfaces::Interface::SnoopInterface>();
            snoop_interface->parent = this;
            children["snoop-interface"] = snoop_interface.get();
        }
        return children.at("snoop-interface");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::Interface::get_children()
{
    if(children.find("base-interface") == children.end())
    {
        if(base_interface != nullptr)
        {
            children["base-interface"] = base_interface.get();
        }
    }

    if(children.find("profile") == children.end())
    {
        if(profile != nullptr)
        {
            children["profile"] = profile.get();
        }
    }

    if(children.find("proxy-interface") == children.end())
    {
        if(proxy_interface != nullptr)
        {
            children["proxy-interface"] = proxy_interface.get();
        }
    }

    if(children.find("relay-interface") == children.end())
    {
        if(relay_interface != nullptr)
        {
            children["relay-interface"] = relay_interface.get();
        }
    }

    if(children.find("server-interface") == children.end())
    {
        if(server_interface != nullptr)
        {
            children["server-interface"] = server_interface.get();
        }
    }

    if(children.find("snoop-interface") == children.end())
    {
        if(snoop_interface != nullptr)
        {
            children["snoop-interface"] = snoop_interface.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Ipv4Dhcpd::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::Interfaces::~Interfaces()
{
}

bool Ipv4Dhcpd::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Dhcpd::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Dhcpd::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4Dhcpd::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Dhcpd::DuplicateMacAllowed::DuplicateMacAllowed()
    :
    	duplicate_mac{YType::empty, "duplicate-mac"},
	 exclude_vlan{YType::empty, "exclude-vlan"}
{
    yang_name = "duplicate-mac-allowed"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::DuplicateMacAllowed::~DuplicateMacAllowed()
{
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_data() const
{
    return duplicate_mac.is_set
	|| exclude_vlan.is_set;
}

bool Ipv4Dhcpd::DuplicateMacAllowed::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicate_mac.operation)
	|| is_set(exclude_vlan.operation);
}

std::string Ipv4Dhcpd::DuplicateMacAllowed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "duplicate-mac-allowed";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::DuplicateMacAllowed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicate_mac.is_set || is_set(duplicate_mac.operation)) leaf_name_data.push_back(duplicate_mac.get_name_leafdata());
    if (exclude_vlan.is_set || is_set(exclude_vlan.operation)) leaf_name_data.push_back(exclude_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::DuplicateMacAllowed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::DuplicateMacAllowed::get_children()
{
    return children;
}

void Ipv4Dhcpd::DuplicateMacAllowed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicate-mac")
    {
        duplicate_mac = value;
    }
    if(value_path == "exclude-vlan")
    {
        exclude_vlan = value;
    }
}

Ipv4Dhcpd::RateLimit::RateLimit()
    :
    	num_discover{YType::uint32, "num-discover"},
	 num_period{YType::uint32, "num-period"}
{
    yang_name = "rate-limit"; yang_parent_name = "ipv4-dhcpd";
}

Ipv4Dhcpd::RateLimit::~RateLimit()
{
}

bool Ipv4Dhcpd::RateLimit::has_data() const
{
    return num_discover.is_set
	|| num_period.is_set;
}

bool Ipv4Dhcpd::RateLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(num_discover.operation)
	|| is_set(num_period.operation);
}

std::string Ipv4Dhcpd::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_discover.is_set || is_set(num_discover.operation)) leaf_name_data.push_back(num_discover.get_name_leafdata());
    if (num_period.is_set || is_set(num_period.operation)) leaf_name_data.push_back(num_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Dhcpd::RateLimit::get_children()
{
    return children;
}

void Ipv4Dhcpd::RateLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-discover")
    {
        num_discover = value;
    }
    if(value_path == "num-period")
    {
        num_period = value;
    }
}

Ipv4Dhcpd::Ipv4Dhcpd()
    :
    	allow_client_id_change{YType::empty, "allow-client-id-change"},
	 enable{YType::empty, "enable"}
    	,
    database(std::make_unique<Ipv4Dhcpd::Database>())
	,duplicate_mac_allowed(nullptr) // presence node
	,interfaces(std::make_unique<Ipv4Dhcpd::Interfaces>())
	,profiles(std::make_unique<Ipv4Dhcpd::Profiles>())
	,rate_limit(std::make_unique<Ipv4Dhcpd::RateLimit>())
	,vrfs(std::make_unique<Ipv4Dhcpd::Vrfs>())
{
    database->parent = this;
    children["database"] = database.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    profiles->parent = this;
    children["profiles"] = profiles.get();

    rate_limit->parent = this;
    children["rate-limit"] = rate_limit.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "ipv4-dhcpd"; yang_parent_name = "Cisco-IOS-XR-ipv4-dhcpd-cfg";
}

Ipv4Dhcpd::~Ipv4Dhcpd()
{
}

bool Ipv4Dhcpd::has_data() const
{
    return allow_client_id_change.is_set
	|| enable.is_set
	|| (database !=  nullptr && database->has_data())
	|| (duplicate_mac_allowed !=  nullptr && duplicate_mac_allowed->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (profiles !=  nullptr && profiles->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Dhcpd::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_client_id_change.operation)
	|| is_set(enable.operation)
	|| (database !=  nullptr && database->has_operation())
	|| (duplicate_mac_allowed !=  nullptr && duplicate_mac_allowed->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (profiles !=  nullptr && profiles->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ipv4Dhcpd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-dhcpd-cfg:ipv4-dhcpd";

    return path_buffer.str();

}

EntityPath Ipv4Dhcpd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_client_id_change.is_set || is_set(allow_client_id_change.operation)) leaf_name_data.push_back(allow_client_id_change.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Dhcpd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database.get();
        }
        else
        {
            database = std::make_unique<Ipv4Dhcpd::Database>();
            database->parent = this;
            children["database"] = database.get();
        }
        return children.at("database");
    }

    if(child_yang_name == "duplicate-mac-allowed")
    {
        if(duplicate_mac_allowed != nullptr)
        {
            children["duplicate-mac-allowed"] = duplicate_mac_allowed.get();
        }
        else
        {
            duplicate_mac_allowed = std::make_unique<Ipv4Dhcpd::DuplicateMacAllowed>();
            duplicate_mac_allowed->parent = this;
            children["duplicate-mac-allowed"] = duplicate_mac_allowed.get();
        }
        return children.at("duplicate-mac-allowed");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Ipv4Dhcpd::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "profiles")
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
        else
        {
            profiles = std::make_unique<Ipv4Dhcpd::Profiles>();
            profiles->parent = this;
            children["profiles"] = profiles.get();
        }
        return children.at("profiles");
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit != nullptr)
        {
            children["rate-limit"] = rate_limit.get();
        }
        else
        {
            rate_limit = std::make_unique<Ipv4Dhcpd::RateLimit>();
            rate_limit->parent = this;
            children["rate-limit"] = rate_limit.get();
        }
        return children.at("rate-limit");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Ipv4Dhcpd::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Dhcpd::get_children()
{
    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database.get();
        }
    }

    if(children.find("duplicate-mac-allowed") == children.end())
    {
        if(duplicate_mac_allowed != nullptr)
        {
            children["duplicate-mac-allowed"] = duplicate_mac_allowed.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("profiles") == children.end())
    {
        if(profiles != nullptr)
        {
            children["profiles"] = profiles.get();
        }
    }

    if(children.find("rate-limit") == children.end())
    {
        if(rate_limit != nullptr)
        {
            children["rate-limit"] = rate_limit.get();
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Ipv4Dhcpd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-client-id-change")
    {
        allow_client_id_change = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::unique_ptr<Entity> Ipv4Dhcpd::clone_ptr()
{
    return std::make_unique<Ipv4Dhcpd>();
}

const Enum::YLeaf Ipv4DhcpdFmtEnum::no_format {0, "no-format"};
const Enum::YLeaf Ipv4DhcpdFmtEnum::format {1, "format"};

const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_chassis {1, "physical-chassis"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_slot {2, "physical-slot"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_sub_slot {3, "physical-sub-slot"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_port {4, "physical-port"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::physical_sub_port {5, "physical-sub-port"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::inner_vlan_id {6, "inner-vlan-id"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::outer_vlan_id {7, "outer-vlan-id"};
const Enum::YLeaf Ipv4DhcpdFmtSpecifierEnum::l2_interface {8, "l2-interface"};

const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::replace {0, "replace"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::keep {1, "keep"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::drop {2, "drop"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionPolicyEnum::encapsulate {3, "encapsulate"};

const Enum::YLeaf Ipv4DhcpdBroadcastFlagPolicyEnum::ignore {0, "ignore"};
const Enum::YLeaf Ipv4DhcpdBroadcastFlagPolicyEnum::check {1, "check"};
const Enum::YLeaf Ipv4DhcpdBroadcastFlagPolicyEnum::unicast_always {2, "unicast-always"};

const Enum::YLeaf Ipv4DhcpdModeEnum::base {0, "base"};
const Enum::YLeaf Ipv4DhcpdModeEnum::relay {1, "relay"};
const Enum::YLeaf Ipv4DhcpdModeEnum::snoop {2, "snoop"};
const Enum::YLeaf Ipv4DhcpdModeEnum::server {3, "server"};
const Enum::YLeaf Ipv4DhcpdModeEnum::proxy {4, "proxy"};
const Enum::YLeaf Ipv4DhcpdModeEnum::base2 {5, "base2"};

const Enum::YLeaf Ipv4DhcpdGiaddrPolicyEnum::keep {0, "keep"};
const Enum::YLeaf Ipv4DhcpdGiaddrPolicyEnum::replace {1, "replace"};
const Enum::YLeaf Ipv4DhcpdGiaddrPolicyEnum::drop {2, "drop"};

const Enum::YLeaf Ipv4DhcpdRelayInfoOptionvpnModeEnum::rfc {0, "rfc"};
const Enum::YLeaf Ipv4DhcpdRelayInfoOptionvpnModeEnum::cisco {1, "cisco"};


}
}

