
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_domain_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_domain_oper {

HostAddressBaseIdentity::HostAddressBaseIdentity()
     : Identity("Cisco-IOS-XR-ip-domain-oper-sub1:Host-address-base")
{
}

HostAddressBaseIdentity::~HostAddressBaseIdentity()
{
}

IpDomain::Vrfs::Vrf::Server::ServerAddress::ServerAddress()
    :
    	af_name{YType::identityref, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "server-address"; yang_parent_name = "server";
}

IpDomain::Vrfs::Vrf::Server::ServerAddress::~ServerAddress()
{
}

bool IpDomain::Vrfs::Vrf::Server::ServerAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool IpDomain::Vrfs::Vrf::Server::ServerAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string IpDomain::Vrfs::Vrf::Server::ServerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-address";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Server::ServerAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Server::ServerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Server::ServerAddress::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Server::ServerAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

IpDomain::Vrfs::Vrf::Server::Server()
    :
    	domain{YType::str, "domain"},
	 domain_lookup{YType::enumeration, "domain-lookup"},
	 domain_name{YType::str, "domain-name"}
{
    yang_name = "server"; yang_parent_name = "vrf";
}

IpDomain::Vrfs::Vrf::Server::~Server()
{
}

bool IpDomain::Vrfs::Vrf::Server::has_data() const
{
    for (std::size_t index=0; index<server_address.size(); index++)
    {
        if(server_address[index]->has_data())
            return true;
    }
    for (auto const & leaf : domain.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return domain_lookup.is_set
	|| domain_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Server::has_operation() const
{
    for (std::size_t index=0; index<server_address.size(); index++)
    {
        if(server_address[index]->has_operation())
            return true;
    }
    for (auto const & leaf : domain.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(domain_lookup.operation)
	|| is_set(domain_name.operation);
}

std::string IpDomain::Vrfs::Vrf::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Server::get_entity_path(Entity* ancestor) const
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

    if (domain_lookup.is_set || is_set(domain_lookup.operation)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());

    auto domain_name_datas = domain.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), domain_name_datas.begin(), domain_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "server-address")
    {
        for(auto const & c : server_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Server::ServerAddress>();
        c->parent = this;
        server_address.push_back(std::move(c));
        children[segment_path] = server_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Server::get_children()
{
    for (auto const & c : server_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain.append(value);
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::HostAliasList()
    :
    	host_alias{YType::str, "host-alias"}
{
    yang_name = "host-alias-list"; yang_parent_name = "host";
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::~HostAliasList()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::has_data() const
{
    for (auto const & leaf : host_alias.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::has_operation() const
{
    for (auto const & leaf : host_alias.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(host_alias.operation);
}

std::string IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-alias-list";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_entity_path(Entity* ancestor) const
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


    auto host_alias_name_datas = host_alias.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), host_alias_name_datas.begin(), host_alias_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-alias")
    {
        host_alias.append(value);
    }
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::HostAddress()
    :
    	af_name{YType::identityref, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "host-address"; yang_parent_name = "host";
}

IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::~HostAddress()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

IpDomain::Vrfs::Vrf::Hosts::Host::Host()
    :
    	host_name{YType::str, "host-name"},
	 af_name{YType::identityref, "af-name"},
	 age{YType::uint16, "age"}
    	,
    host_alias_list(std::make_unique<IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList>())
{
    host_alias_list->parent = this;
    children["host-alias-list"] = host_alias_list.get();

    yang_name = "host"; yang_parent_name = "hosts";
}

IpDomain::Vrfs::Vrf::Hosts::Host::~Host()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::has_data() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_data())
            return true;
    }
    return host_name.is_set
	|| af_name.is_set
	|| age.is_set
	|| (host_alias_list !=  nullptr && host_alias_list->has_data());
}

bool IpDomain::Vrfs::Vrf::Hosts::Host::has_operation() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(af_name.operation)
	|| is_set(age.operation)
	|| (host_alias_list !=  nullptr && host_alias_list->has_operation());
}

std::string IpDomain::Vrfs::Vrf::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[host-name='" <<host_name.get() <<"']";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Hosts::Host::get_entity_path(Entity* ancestor) const
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

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host-address")
    {
        for(auto const & c : host_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress>();
        c->parent = this;
        host_address.push_back(std::move(c));
        children[segment_path] = host_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "host-alias-list")
    {
        if(host_alias_list != nullptr)
        {
            children["host-alias-list"] = host_alias_list.get();
        }
        else
        {
            host_alias_list = std::make_unique<IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList>();
            host_alias_list->parent = this;
            children["host-alias-list"] = host_alias_list.get();
        }
        return children.at("host-alias-list");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Hosts::Host::get_children()
{
    for (auto const & c : host_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("host-alias-list") == children.end())
    {
        if(host_alias_list != nullptr)
        {
            children["host-alias-list"] = host_alias_list.get();
        }
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
}

IpDomain::Vrfs::Vrf::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "vrf";
}

IpDomain::Vrfs::Vrf::Hosts::~Hosts()
{
}

bool IpDomain::Vrfs::Vrf::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpDomain::Vrfs::Vrf::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Hosts::get_entity_path(Entity* ancestor) const
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

Entity* IpDomain::Vrfs::Vrf::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Hosts::Host>();
        c->parent = this;
        host.push_back(std::move(c));
        children[segment_path] = host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Hosts::get_children()
{
    for (auto const & c : host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Hosts::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    hosts(std::make_unique<IpDomain::Vrfs::Vrf::Hosts>())
	,server(std::make_unique<IpDomain::Vrfs::Vrf::Server>())
{
    hosts->parent = this;
    children["hosts"] = hosts.get();

    server->parent = this;
    children["server"] = server.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

IpDomain::Vrfs::Vrf::~Vrf()
{
}

bool IpDomain::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (hosts !=  nullptr && hosts->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool IpDomain::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (hosts !=  nullptr && hosts->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string IpDomain::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-domain-oper:ip-domain/vrfs/" << get_segment_path();
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

Entity* IpDomain::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hosts")
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
        }
        else
        {
            hosts = std::make_unique<IpDomain::Vrfs::Vrf::Hosts>();
            hosts->parent = this;
            children["hosts"] = hosts.get();
        }
        return children.at("hosts");
    }

    if(child_yang_name == "server")
    {
        if(server != nullptr)
        {
            children["server"] = server.get();
        }
        else
        {
            server = std::make_unique<IpDomain::Vrfs::Vrf::Server>();
            server->parent = this;
            children["server"] = server.get();
        }
        return children.at("server");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::get_children()
{
    if(children.find("hosts") == children.end())
    {
        if(hosts != nullptr)
        {
            children["hosts"] = hosts.get();
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

void IpDomain::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

IpDomain::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "ip-domain";
}

IpDomain::Vrfs::~Vrfs()
{
}

bool IpDomain::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpDomain::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-domain-oper:ip-domain/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<IpDomain::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::get_children()
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

void IpDomain::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::IpDomain()
    :
    vrfs(std::make_unique<IpDomain::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "ip-domain"; yang_parent_name = "Cisco-IOS-XR-ip-domain-oper";
}

IpDomain::~IpDomain()
{
}

bool IpDomain::has_data() const
{
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool IpDomain::has_operation() const
{
    return is_set(operation)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string IpDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-oper:ip-domain";

    return path_buffer.str();

}

EntityPath IpDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            vrfs = std::make_unique<IpDomain::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::get_children()
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

void IpDomain::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> IpDomain::clone_ptr()
{
    return std::make_unique<IpDomain>();
}
Ipv4Identity::Ipv4Identity()
     : Identity("Cisco-IOS-XR-ip-domain-oper-sub1:ipv4")
{
}

Ipv4Identity::~Ipv4Identity()
{
}

Ipv6Identity::Ipv6Identity()
     : Identity("Cisco-IOS-XR-ip-domain-oper-sub1:ipv6")
{
}

Ipv6Identity::~Ipv6Identity()
{
}


const Enum::YLeaf ServerDomainLkupEnum::static_mapping {0, "static-mapping"};
const Enum::YLeaf ServerDomainLkupEnum::domain_service {1, "domain-service"};


}
}

