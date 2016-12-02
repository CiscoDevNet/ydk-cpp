
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "ietf_system.hpp"

namespace ydk {
namespace ietf_system {

RadiusAuthenticationTypeIdentity::RadiusAuthenticationTypeIdentity()
     : Identity("ietf-system:radius-authentication-type")
{
}

RadiusAuthenticationTypeIdentity::~RadiusAuthenticationTypeIdentity()
{
}

AuthenticationMethodIdentity::AuthenticationMethodIdentity()
     : Identity("ietf-system:authentication-method")
{
}

AuthenticationMethodIdentity::~AuthenticationMethodIdentity()
{
}

System::Clock::Clock()
    :
    	timezone_name{YType::str, "timezone-name"},
	 timezone_utc_offset{YType::int16, "timezone-utc-offset"}
{
    yang_name = "clock"; yang_parent_name = "system";
}

System::Clock::~Clock()
{
}

bool System::Clock::has_data() const
{
    return timezone_name.is_set
	|| timezone_utc_offset.is_set;
}

bool System::Clock::has_operation() const
{
    return is_set(operation)
	|| is_set(timezone_name.operation)
	|| is_set(timezone_utc_offset.operation);
}

std::string System::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

EntityPath System::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timezone_name.is_set || is_set(timezone_name.operation)) leaf_name_data.push_back(timezone_name.get_name_leafdata());
    if (timezone_utc_offset.is_set || is_set(timezone_utc_offset.operation)) leaf_name_data.push_back(timezone_utc_offset.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::Clock::get_children()
{
    return children;
}

void System::Clock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timezone-name")
    {
        timezone_name = value;
    }
    if(value_path == "timezone-utc-offset")
    {
        timezone_utc_offset = value;
    }
}

System::Ntp::Server::Udp::Udp()
    :
    	address{YType::str, "address"},
	 port{YType::uint16, "port"}
{
    yang_name = "udp"; yang_parent_name = "server";
}

System::Ntp::Server::Udp::~Udp()
{
}

bool System::Ntp::Server::Udp::has_data() const
{
    return address.is_set
	|| port.is_set;
}

bool System::Ntp::Server::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(port.operation);
}

std::string System::Ntp::Server::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

EntityPath System::Ntp::Server::Udp::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Ntp::Server::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::Ntp::Server::Udp::get_children()
{
    return children;
}

void System::Ntp::Server::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

System::Ntp::Server::Server()
    :
    	name{YType::str, "name"},
	 association_type{YType::enumeration, "association-type"},
	 iburst{YType::boolean, "iburst"},
	 prefer{YType::boolean, "prefer"}
    	,
    udp(std::make_unique<System::Ntp::Server::Udp>())
{
    udp->parent = this;
    children["udp"] = udp.get();

    yang_name = "server"; yang_parent_name = "ntp";
}

System::Ntp::Server::~Server()
{
}

bool System::Ntp::Server::has_data() const
{
    return name.is_set
	|| association_type.is_set
	|| iburst.is_set
	|| prefer.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool System::Ntp::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(association_type.operation)
	|| is_set(iburst.operation)
	|| is_set(prefer.operation)
	|| (udp !=  nullptr && is_set(udp->operation));
}

std::string System::Ntp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath System::Ntp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/ntp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (association_type.is_set || is_set(association_type.operation)) leaf_name_data.push_back(association_type.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.operation)) leaf_name_data.push_back(prefer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Ntp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "udp")
    {
        if(udp != nullptr)
        {
            children["udp"] = udp.get();
        }
        else
        {
            udp = std::make_unique<System::Ntp::Server::Udp>();
            udp->parent = this;
            children["udp"] = udp.get();
        }
        return children.at("udp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::Ntp::Server::get_children()
{
    if(children.find("udp") == children.end())
    {
        if(udp != nullptr)
        {
            children["udp"] = udp.get();
        }
    }

    return children;
}

void System::Ntp::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "association-type")
    {
        association_type = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "prefer")
    {
        prefer = value;
    }
}

System::Ntp::Ntp()
    :
    	enabled{YType::boolean, "enabled"}
{
    yang_name = "ntp"; yang_parent_name = "system";
}

System::Ntp::~Ntp()
{
}

bool System::Ntp::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return enabled.is_set;
}

bool System::Ntp::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enabled.operation);
}

std::string System::Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp";

    return path_buffer.str();

}

EntityPath System::Ntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<System::Ntp::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::Ntp::get_children()
{
    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void System::Ntp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

System::DnsResolver::Server::UdpAndTcp::UdpAndTcp()
    :
    	address{YType::str, "address"},
	 port{YType::uint16, "port"}
{
    yang_name = "udp-and-tcp"; yang_parent_name = "server";
}

System::DnsResolver::Server::UdpAndTcp::~UdpAndTcp()
{
}

bool System::DnsResolver::Server::UdpAndTcp::has_data() const
{
    return address.is_set
	|| port.is_set;
}

bool System::DnsResolver::Server::UdpAndTcp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(port.operation);
}

std::string System::DnsResolver::Server::UdpAndTcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-and-tcp";

    return path_buffer.str();

}

EntityPath System::DnsResolver::Server::UdpAndTcp::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::DnsResolver::Server::UdpAndTcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::DnsResolver::Server::UdpAndTcp::get_children()
{
    return children;
}

void System::DnsResolver::Server::UdpAndTcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

System::DnsResolver::Server::Server()
    :
    	name{YType::str, "name"}
    	,
    udp_and_tcp(std::make_unique<System::DnsResolver::Server::UdpAndTcp>())
{
    udp_and_tcp->parent = this;
    children["udp-and-tcp"] = udp_and_tcp.get();

    yang_name = "server"; yang_parent_name = "dns-resolver";
}

System::DnsResolver::Server::~Server()
{
}

bool System::DnsResolver::Server::has_data() const
{
    return name.is_set
	|| (udp_and_tcp !=  nullptr && udp_and_tcp->has_data());
}

bool System::DnsResolver::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (udp_and_tcp !=  nullptr && is_set(udp_and_tcp->operation));
}

std::string System::DnsResolver::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath System::DnsResolver::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/dns-resolver/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::DnsResolver::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "udp-and-tcp")
    {
        if(udp_and_tcp != nullptr)
        {
            children["udp-and-tcp"] = udp_and_tcp.get();
        }
        else
        {
            udp_and_tcp = std::make_unique<System::DnsResolver::Server::UdpAndTcp>();
            udp_and_tcp->parent = this;
            children["udp-and-tcp"] = udp_and_tcp.get();
        }
        return children.at("udp-and-tcp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::DnsResolver::Server::get_children()
{
    if(children.find("udp-and-tcp") == children.end())
    {
        if(udp_and_tcp != nullptr)
        {
            children["udp-and-tcp"] = udp_and_tcp.get();
        }
    }

    return children;
}

void System::DnsResolver::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

System::DnsResolver::Options::Options()
    :
    	attempts{YType::uint8, "attempts"},
	 timeout{YType::uint8, "timeout"}
{
    yang_name = "options"; yang_parent_name = "dns-resolver";
}

System::DnsResolver::Options::~Options()
{
}

bool System::DnsResolver::Options::has_data() const
{
    return attempts.is_set
	|| timeout.is_set;
}

bool System::DnsResolver::Options::has_operation() const
{
    return is_set(operation)
	|| is_set(attempts.operation)
	|| is_set(timeout.operation);
}

std::string System::DnsResolver::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

EntityPath System::DnsResolver::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/dns-resolver/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.operation)) leaf_name_data.push_back(attempts.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::DnsResolver::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::DnsResolver::Options::get_children()
{
    return children;
}

void System::DnsResolver::Options::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attempts")
    {
        attempts = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

System::DnsResolver::DnsResolver()
    :
    	search{YType::str, "search"}
    	,
    options(std::make_unique<System::DnsResolver::Options>())
{
    options->parent = this;
    children["options"] = options.get();

    yang_name = "dns-resolver"; yang_parent_name = "system";
}

System::DnsResolver::~DnsResolver()
{
}

bool System::DnsResolver::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    for (auto const & leaf : search.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return (options !=  nullptr && options->has_data());
}

bool System::DnsResolver::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    for (auto const & leaf : search.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| (options !=  nullptr && is_set(options->operation));
}

std::string System::DnsResolver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-resolver";

    return path_buffer.str();

}

EntityPath System::DnsResolver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto search_name_datas = search.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), search_name_datas.begin(), search_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::DnsResolver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "options")
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
        else
        {
            options = std::make_unique<System::DnsResolver::Options>();
            options->parent = this;
            children["options"] = options.get();
        }
        return children.at("options");
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<System::DnsResolver::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::DnsResolver::get_children()
{
    if(children.find("options") == children.end())
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
    }

    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void System::DnsResolver::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "search")
    {
        search.append(value);
    }
}

System::Radius::Server::Udp::Udp()
    :
    	address{YType::str, "address"},
	 authentication_port{YType::uint16, "authentication-port"},
	 shared_secret{YType::str, "shared-secret"}
{
    yang_name = "udp"; yang_parent_name = "server";
}

System::Radius::Server::Udp::~Udp()
{
}

bool System::Radius::Server::Udp::has_data() const
{
    return address.is_set
	|| authentication_port.is_set
	|| shared_secret.is_set;
}

bool System::Radius::Server::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(authentication_port.operation)
	|| is_set(shared_secret.operation);
}

std::string System::Radius::Server::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

EntityPath System::Radius::Server::Udp::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (authentication_port.is_set || is_set(authentication_port.operation)) leaf_name_data.push_back(authentication_port.get_name_leafdata());
    if (shared_secret.is_set || is_set(shared_secret.operation)) leaf_name_data.push_back(shared_secret.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Radius::Server::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::Radius::Server::Udp::get_children()
{
    return children;
}

void System::Radius::Server::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "authentication-port")
    {
        authentication_port = value;
    }
    if(value_path == "shared-secret")
    {
        shared_secret = value;
    }
}

System::Radius::Server::Server()
    :
    	name{YType::str, "name"},
	 authentication_type{YType::identityref, "authentication-type"}
    	,
    udp(std::make_unique<System::Radius::Server::Udp>())
{
    udp->parent = this;
    children["udp"] = udp.get();

    yang_name = "server"; yang_parent_name = "radius";
}

System::Radius::Server::~Server()
{
}

bool System::Radius::Server::has_data() const
{
    return name.is_set
	|| authentication_type.is_set
	|| (udp !=  nullptr && udp->has_data());
}

bool System::Radius::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(authentication_type.operation)
	|| (udp !=  nullptr && is_set(udp->operation));
}

std::string System::Radius::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath System::Radius::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (authentication_type.is_set || is_set(authentication_type.operation)) leaf_name_data.push_back(authentication_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Radius::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "udp")
    {
        if(udp != nullptr)
        {
            children["udp"] = udp.get();
        }
        else
        {
            udp = std::make_unique<System::Radius::Server::Udp>();
            udp->parent = this;
            children["udp"] = udp.get();
        }
        return children.at("udp");
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::Radius::Server::get_children()
{
    if(children.find("udp") == children.end())
    {
        if(udp != nullptr)
        {
            children["udp"] = udp.get();
        }
    }

    return children;
}

void System::Radius::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "authentication-type")
    {
        authentication_type = value;
    }
}

System::Radius::Options::Options()
    :
    	attempts{YType::uint8, "attempts"},
	 timeout{YType::uint8, "timeout"}
{
    yang_name = "options"; yang_parent_name = "radius";
}

System::Radius::Options::~Options()
{
}

bool System::Radius::Options::has_data() const
{
    return attempts.is_set
	|| timeout.is_set;
}

bool System::Radius::Options::has_operation() const
{
    return is_set(operation)
	|| is_set(attempts.operation)
	|| is_set(timeout.operation);
}

std::string System::Radius::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

EntityPath System::Radius::Options::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/radius/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attempts.is_set || is_set(attempts.operation)) leaf_name_data.push_back(attempts.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Radius::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::Radius::Options::get_children()
{
    return children;
}

void System::Radius::Options::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attempts")
    {
        attempts = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

System::Radius::Radius()
    :
    options(std::make_unique<System::Radius::Options>())
{
    options->parent = this;
    children["options"] = options.get();

    yang_name = "radius"; yang_parent_name = "system";
}

System::Radius::~Radius()
{
}

bool System::Radius::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (options !=  nullptr && options->has_data());
}

bool System::Radius::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (options !=  nullptr && is_set(options->operation));
}

std::string System::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";

    return path_buffer.str();

}

EntityPath System::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "options")
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
        else
        {
            options = std::make_unique<System::Radius::Options>();
            options->parent = this;
            children["options"] = options.get();
        }
        return children.at("options");
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<System::Radius::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::Radius::get_children()
{
    if(children.find("options") == children.end())
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
    }

    for (auto const & c : server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void System::Radius::set_value(const std::string & value_path, std::string value)
{
}

System::Authentication::User::AuthorizedKey::AuthorizedKey()
    :
    	name{YType::str, "name"},
	 algorithm{YType::str, "algorithm"},
	 key_data{YType::str, "key-data"}
{
    yang_name = "authorized-key"; yang_parent_name = "user";
}

System::Authentication::User::AuthorizedKey::~AuthorizedKey()
{
}

bool System::Authentication::User::AuthorizedKey::has_data() const
{
    return name.is_set
	|| algorithm.is_set
	|| key_data.is_set;
}

bool System::Authentication::User::AuthorizedKey::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(algorithm.operation)
	|| is_set(key_data.operation);
}

std::string System::Authentication::User::AuthorizedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorized-key" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath System::Authentication::User::AuthorizedKey::get_entity_path(Entity* ancestor) const
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

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (key_data.is_set || is_set(key_data.operation)) leaf_name_data.push_back(key_data.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Authentication::User::AuthorizedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & System::Authentication::User::AuthorizedKey::get_children()
{
    return children;
}

void System::Authentication::User::AuthorizedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "key-data")
    {
        key_data = value;
    }
}

System::Authentication::User::User()
    :
    	name{YType::str, "name"},
	 password{YType::str, "password"}
{
    yang_name = "user"; yang_parent_name = "authentication";
}

System::Authentication::User::~User()
{
}

bool System::Authentication::User::has_data() const
{
    for (std::size_t index=0; index<authorized_key.size(); index++)
    {
        if(authorized_key[index]->has_data())
            return true;
    }
    return name.is_set
	|| password.is_set;
}

bool System::Authentication::User::has_operation() const
{
    for (std::size_t index=0; index<authorized_key.size(); index++)
    {
        if(authorized_key[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(password.operation);
}

std::string System::Authentication::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath System::Authentication::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/authentication/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Authentication::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authorized-key")
    {
        for(auto const & c : authorized_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<System::Authentication::User::AuthorizedKey>();
        c->parent = this;
        authorized_key.push_back(std::move(c));
        children[segment_path] = authorized_key.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::Authentication::User::get_children()
{
    for (auto const & c : authorized_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void System::Authentication::User::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

System::Authentication::Authentication()
    :
    	user_authentication_order{YType::identityref, "user-authentication-order"}
{
    yang_name = "authentication"; yang_parent_name = "system";
}

System::Authentication::~Authentication()
{
}

bool System::Authentication::has_data() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_data())
            return true;
    }
    for (auto const & leaf : user_authentication_order.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool System::Authentication::has_operation() const
{
    for (std::size_t index=0; index<user.size(); index++)
    {
        if(user[index]->has_operation())
            return true;
    }
    for (auto const & leaf : user_authentication_order.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string System::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath System::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto user_authentication_order_name_datas = user_authentication_order.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_authentication_order_name_datas.begin(), user_authentication_order_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "user")
    {
        for(auto const & c : user)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<System::Authentication::User>();
        c->parent = this;
        user.push_back(std::move(c));
        children[segment_path] = user.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::Authentication::get_children()
{
    for (auto const & c : user)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void System::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "user-authentication-order")
    {
        user_authentication_order.append(value);
    }
}

System::System()
    :
    	contact{YType::str, "contact"},
	 hostname{YType::str, "hostname"},
	 location{YType::str, "location"}
    	,
    authentication(std::make_unique<System::Authentication>())
	,clock(std::make_unique<System::Clock>())
	,dns_resolver(std::make_unique<System::DnsResolver>())
	,ntp(nullptr) // presence node
	,radius(std::make_unique<System::Radius>())
{
    authentication->parent = this;
    children["authentication"] = authentication.get();

    clock->parent = this;
    children["clock"] = clock.get();

    dns_resolver->parent = this;
    children["dns-resolver"] = dns_resolver.get();

    radius->parent = this;
    children["radius"] = radius.get();

    yang_name = "system"; yang_parent_name = "ietf-system";
}

System::~System()
{
}

bool System::has_data() const
{
    return contact.is_set
	|| hostname.is_set
	|| location.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (clock !=  nullptr && clock->has_data())
	|| (dns_resolver !=  nullptr && dns_resolver->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (radius !=  nullptr && radius->has_data());
}

bool System::has_operation() const
{
    return is_set(operation)
	|| is_set(contact.operation)
	|| is_set(hostname.operation)
	|| is_set(location.operation)
	|| (authentication !=  nullptr && is_set(authentication->operation))
	|| (clock !=  nullptr && is_set(clock->operation))
	|| (dns_resolver !=  nullptr && is_set(dns_resolver->operation))
	|| (ntp !=  nullptr && is_set(ntp->operation))
	|| (radius !=  nullptr && is_set(radius->operation));
}

std::string System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-system:system";

    return path_buffer.str();

}

EntityPath System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contact.is_set || is_set(contact.operation)) leaf_name_data.push_back(contact.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
        else
        {
            authentication = std::make_unique<System::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication.get();
        }
        return children.at("authentication");
    }

    if(child_yang_name == "clock")
    {
        if(clock != nullptr)
        {
            children["clock"] = clock.get();
        }
        else
        {
            clock = std::make_unique<System::Clock>();
            clock->parent = this;
            children["clock"] = clock.get();
        }
        return children.at("clock");
    }

    if(child_yang_name == "dns-resolver")
    {
        if(dns_resolver != nullptr)
        {
            children["dns-resolver"] = dns_resolver.get();
        }
        else
        {
            dns_resolver = std::make_unique<System::DnsResolver>();
            dns_resolver->parent = this;
            children["dns-resolver"] = dns_resolver.get();
        }
        return children.at("dns-resolver");
    }

    if(child_yang_name == "ntp")
    {
        if(ntp != nullptr)
        {
            children["ntp"] = ntp.get();
        }
        else
        {
            ntp = std::make_unique<System::Ntp>();
            ntp->parent = this;
            children["ntp"] = ntp.get();
        }
        return children.at("ntp");
    }

    if(child_yang_name == "radius")
    {
        if(radius != nullptr)
        {
            children["radius"] = radius.get();
        }
        else
        {
            radius = std::make_unique<System::Radius>();
            radius->parent = this;
            children["radius"] = radius.get();
        }
        return children.at("radius");
    }

    return nullptr;
}

std::map<std::string, Entity*> & System::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication.get();
        }
    }

    if(children.find("clock") == children.end())
    {
        if(clock != nullptr)
        {
            children["clock"] = clock.get();
        }
    }

    if(children.find("dns-resolver") == children.end())
    {
        if(dns_resolver != nullptr)
        {
            children["dns-resolver"] = dns_resolver.get();
        }
    }

    if(children.find("ntp") == children.end())
    {
        if(ntp != nullptr)
        {
            children["ntp"] = ntp.get();
        }
    }

    if(children.find("radius") == children.end())
    {
        if(radius != nullptr)
        {
            children["radius"] = radius.get();
        }
    }

    return children;
}

void System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "contact")
    {
        contact = value;
    }
    if(value_path == "hostname")
    {
        hostname = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
}

std::unique_ptr<Entity> System::clone_ptr()
{
    return std::make_unique<System>();
}
SystemState::Platform::Platform()
    :
    	machine{YType::str, "machine"},
	 os_name{YType::str, "os-name"},
	 os_release{YType::str, "os-release"},
	 os_version{YType::str, "os-version"}
{
    yang_name = "platform"; yang_parent_name = "system-state";
}

SystemState::Platform::~Platform()
{
}

bool SystemState::Platform::has_data() const
{
    return machine.is_set
	|| os_name.is_set
	|| os_release.is_set
	|| os_version.is_set;
}

bool SystemState::Platform::has_operation() const
{
    return is_set(operation)
	|| is_set(machine.operation)
	|| is_set(os_name.operation)
	|| is_set(os_release.operation)
	|| is_set(os_version.operation);
}

std::string SystemState::Platform::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "platform";

    return path_buffer.str();

}

EntityPath SystemState::Platform::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (machine.is_set || is_set(machine.operation)) leaf_name_data.push_back(machine.get_name_leafdata());
    if (os_name.is_set || is_set(os_name.operation)) leaf_name_data.push_back(os_name.get_name_leafdata());
    if (os_release.is_set || is_set(os_release.operation)) leaf_name_data.push_back(os_release.get_name_leafdata());
    if (os_version.is_set || is_set(os_version.operation)) leaf_name_data.push_back(os_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SystemState::Platform::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SystemState::Platform::get_children()
{
    return children;
}

void SystemState::Platform::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "machine")
    {
        machine = value;
    }
    if(value_path == "os-name")
    {
        os_name = value;
    }
    if(value_path == "os-release")
    {
        os_release = value;
    }
    if(value_path == "os-version")
    {
        os_version = value;
    }
}

SystemState::Clock::Clock()
    :
    	boot_datetime{YType::str, "boot-datetime"},
	 current_datetime{YType::str, "current-datetime"}
{
    yang_name = "clock"; yang_parent_name = "system-state";
}

SystemState::Clock::~Clock()
{
}

bool SystemState::Clock::has_data() const
{
    return boot_datetime.is_set
	|| current_datetime.is_set;
}

bool SystemState::Clock::has_operation() const
{
    return is_set(operation)
	|| is_set(boot_datetime.operation)
	|| is_set(current_datetime.operation);
}

std::string SystemState::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";

    return path_buffer.str();

}

EntityPath SystemState::Clock::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "ietf-system:system-state/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_datetime.is_set || is_set(boot_datetime.operation)) leaf_name_data.push_back(boot_datetime.get_name_leafdata());
    if (current_datetime.is_set || is_set(current_datetime.operation)) leaf_name_data.push_back(current_datetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SystemState::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SystemState::Clock::get_children()
{
    return children;
}

void SystemState::Clock::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot-datetime")
    {
        boot_datetime = value;
    }
    if(value_path == "current-datetime")
    {
        current_datetime = value;
    }
}

SystemState::SystemState()
    :
    clock(std::make_unique<SystemState::Clock>())
	,platform(std::make_unique<SystemState::Platform>())
{
    clock->parent = this;
    children["clock"] = clock.get();

    platform->parent = this;
    children["platform"] = platform.get();

    yang_name = "system-state"; yang_parent_name = "ietf-system";
}

SystemState::~SystemState()
{
}

bool SystemState::has_data() const
{
    return (clock !=  nullptr && clock->has_data())
	|| (platform !=  nullptr && platform->has_data());
}

bool SystemState::has_operation() const
{
    return is_set(operation)
	|| (clock !=  nullptr && is_set(clock->operation))
	|| (platform !=  nullptr && is_set(platform->operation));
}

std::string SystemState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-system:system-state";

    return path_buffer.str();

}

EntityPath SystemState::get_entity_path(Entity* ancestor) const
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

Entity* SystemState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clock")
    {
        if(clock != nullptr)
        {
            children["clock"] = clock.get();
        }
        else
        {
            clock = std::make_unique<SystemState::Clock>();
            clock->parent = this;
            children["clock"] = clock.get();
        }
        return children.at("clock");
    }

    if(child_yang_name == "platform")
    {
        if(platform != nullptr)
        {
            children["platform"] = platform.get();
        }
        else
        {
            platform = std::make_unique<SystemState::Platform>();
            platform->parent = this;
            children["platform"] = platform.get();
        }
        return children.at("platform");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SystemState::get_children()
{
    if(children.find("clock") == children.end())
    {
        if(clock != nullptr)
        {
            children["clock"] = clock.get();
        }
    }

    if(children.find("platform") == children.end())
    {
        if(platform != nullptr)
        {
            children["platform"] = platform.get();
        }
    }

    return children;
}

void SystemState::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SystemState::clone_ptr()
{
    return std::make_unique<SystemState>();
}
SetCurrentDatetimeRpc::SetCurrentDatetimeRpc()
    :
    	current_datetime{YType::str, "current-datetime"}
{
    yang_name = "set-current-datetime"; yang_parent_name = "ietf-system";
}

SetCurrentDatetimeRpc::~SetCurrentDatetimeRpc()
{
}

bool SetCurrentDatetimeRpc::has_data() const
{
    return current_datetime.is_set;
}

bool SetCurrentDatetimeRpc::has_operation() const
{
    return is_set(operation)
	|| is_set(current_datetime.operation);
}

std::string SetCurrentDatetimeRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-system:set-current-datetime";

    return path_buffer.str();

}

EntityPath SetCurrentDatetimeRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_datetime.is_set || is_set(current_datetime.operation)) leaf_name_data.push_back(current_datetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SetCurrentDatetimeRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SetCurrentDatetimeRpc::get_children()
{
    return children;
}

void SetCurrentDatetimeRpc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-datetime")
    {
        current_datetime = value;
    }
}

std::unique_ptr<Entity> SetCurrentDatetimeRpc::clone_ptr()
{
    return std::make_unique<SetCurrentDatetimeRpc>();
}
SystemRestartRpc::SystemRestartRpc()
{
    yang_name = "system-restart"; yang_parent_name = "ietf-system";
}

SystemRestartRpc::~SystemRestartRpc()
{
}

bool SystemRestartRpc::has_data() const
{
    return false;
}

bool SystemRestartRpc::has_operation() const
{
    return is_set(operation);
}

std::string SystemRestartRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-system:system-restart";

    return path_buffer.str();

}

EntityPath SystemRestartRpc::get_entity_path(Entity* ancestor) const
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

Entity* SystemRestartRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SystemRestartRpc::get_children()
{
    return children;
}

void SystemRestartRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SystemRestartRpc::clone_ptr()
{
    return std::make_unique<SystemRestartRpc>();
}
SystemShutdownRpc::SystemShutdownRpc()
{
    yang_name = "system-shutdown"; yang_parent_name = "ietf-system";
}

SystemShutdownRpc::~SystemShutdownRpc()
{
}

bool SystemShutdownRpc::has_data() const
{
    return false;
}

bool SystemShutdownRpc::has_operation() const
{
    return is_set(operation);
}

std::string SystemShutdownRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ietf-system:system-shutdown";

    return path_buffer.str();

}

EntityPath SystemShutdownRpc::get_entity_path(Entity* ancestor) const
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

Entity* SystemShutdownRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SystemShutdownRpc::get_children()
{
    return children;
}

void SystemShutdownRpc::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SystemShutdownRpc::clone_ptr()
{
    return std::make_unique<SystemShutdownRpc>();
}
RadiusChapIdentity::RadiusChapIdentity()
     : Identity("ietf-system:radius-chap")
{
}

RadiusChapIdentity::~RadiusChapIdentity()
{
}

RadiusIdentity::RadiusIdentity()
     : Identity("ietf-system:radius")
{
}

RadiusIdentity::~RadiusIdentity()
{
}

RadiusPapIdentity::RadiusPapIdentity()
     : Identity("ietf-system:radius-pap")
{
}

RadiusPapIdentity::~RadiusPapIdentity()
{
}

LocalUsersIdentity::LocalUsersIdentity()
     : Identity("ietf-system:local-users")
{
}

LocalUsersIdentity::~LocalUsersIdentity()
{
}


const Enum::Value System::Ntp::Server::AssociationTypeEnum::server {0, "server"};
const Enum::Value System::Ntp::Server::AssociationTypeEnum::peer {1, "peer"};
const Enum::Value System::Ntp::Server::AssociationTypeEnum::pool {2, "pool"};


}
}

