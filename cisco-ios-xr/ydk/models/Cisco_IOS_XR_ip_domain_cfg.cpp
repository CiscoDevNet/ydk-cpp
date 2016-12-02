
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_domain_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_domain_cfg {

IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::Ipv6Host()
    :
    	host_name{YType::str, "host-name"},
	 address{YType::str, "address"}
{
    yang_name = "ipv6-host"; yang_parent_name = "ipv6-hosts";
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::~Ipv6Host()
{
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::has_data() const
{
    for (auto const & leaf : address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return host_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::has_operation() const
{
    for (auto const & leaf : address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(host_name.operation);
}

std::string IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host" <<"[host-name='" <<host_name.get() <<"']";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_entity_path(Entity* ancestor) const
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

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Hosts()
{
    yang_name = "ipv6-hosts"; yang_parent_name = "vrf";
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::~Ipv6Hosts()
{
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::has_data() const
{
    for (std::size_t index=0; index<ipv6_host.size(); index++)
    {
        if(ipv6_host[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::has_operation() const
{
    for (std::size_t index=0; index<ipv6_host.size(); index++)
    {
        if(ipv6_host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpDomain::Vrfs::Vrf::Ipv6Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-hosts";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Ipv6Hosts::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Ipv6Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-host")
    {
        for(auto const & c : ipv6_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host>();
        c->parent = this;
        ipv6_host.push_back(std::move(c));
        children[segment_path] = ipv6_host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Ipv6Hosts::get_children()
{
    for (auto const & c : ipv6_host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::Vrfs::Vrf::Servers::Server::Server()
    :
    	order{YType::int32, "order"},
	 server_address{YType::str, "server-address"}
{
    yang_name = "server"; yang_parent_name = "servers";
}

IpDomain::Vrfs::Vrf::Servers::Server::~Server()
{
}

bool IpDomain::Vrfs::Vrf::Servers::Server::has_data() const
{
    return order.is_set
	|| server_address.is_set;
}

bool IpDomain::Vrfs::Vrf::Servers::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(order.operation)
	|| is_set(server_address.operation);
}

std::string IpDomain::Vrfs::Vrf::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server" <<"[order='" <<order.get() <<"']" <<"[server-address='" <<server_address.get() <<"']";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Servers::Server::get_entity_path(Entity* ancestor) const
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

    if (order.is_set || is_set(order.operation)) leaf_name_data.push_back(order.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.operation)) leaf_name_data.push_back(server_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Servers::Server::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Servers::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order")
    {
        order = value;
    }
    if(value_path == "server-address")
    {
        server_address = value;
    }
}

IpDomain::Vrfs::Vrf::Servers::Servers()
{
    yang_name = "servers"; yang_parent_name = "vrf";
}

IpDomain::Vrfs::Vrf::Servers::~Servers()
{
}

bool IpDomain::Vrfs::Vrf::Servers::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpDomain::Vrfs::Vrf::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Servers::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Servers::Server>();
        c->parent = this;
        server.push_back(std::move(c));
        children[segment_path] = server.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Servers::get_children()
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

void IpDomain::Vrfs::Vrf::Servers::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::Vrfs::Vrf::Lists::List::List()
    :
    	list_name{YType::str, "list-name"},
	 order{YType::int32, "order"}
{
    yang_name = "list"; yang_parent_name = "lists";
}

IpDomain::Vrfs::Vrf::Lists::List::~List()
{
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_data() const
{
    return list_name.is_set
	|| order.is_set;
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_operation() const
{
    return is_set(operation)
	|| is_set(list_name.operation)
	|| is_set(order.operation);
}

std::string IpDomain::Vrfs::Vrf::Lists::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[list-name='" <<list_name.get() <<"']" <<"[order='" <<order.get() <<"']";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Lists::List::get_entity_path(Entity* ancestor) const
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

    if (list_name.is_set || is_set(list_name.operation)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (order.is_set || is_set(order.operation)) leaf_name_data.push_back(order.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Lists::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Lists::List::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Lists::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list-name")
    {
        list_name = value;
    }
    if(value_path == "order")
    {
        order = value;
    }
}

IpDomain::Vrfs::Vrf::Lists::Lists()
{
    yang_name = "lists"; yang_parent_name = "vrf";
}

IpDomain::Vrfs::Vrf::Lists::~Lists()
{
}

bool IpDomain::Vrfs::Vrf::Lists::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Lists::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpDomain::Vrfs::Vrf::Lists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lists";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Lists::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Lists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Lists::List>();
        c->parent = this;
        list.push_back(std::move(c));
        children[segment_path] = list.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Lists::get_children()
{
    for (auto const & c : list)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Lists::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::Ipv4Host()
    :
    	host_name{YType::str, "host-name"},
	 address{YType::str, "address"}
{
    yang_name = "ipv4-host"; yang_parent_name = "ipv4-hosts";
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::~Ipv4Host()
{
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::has_data() const
{
    for (auto const & leaf : address.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return host_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::has_operation() const
{
    for (auto const & leaf : address.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(host_name.operation);
}

std::string IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host" <<"[host-name='" <<host_name.get() <<"']";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_entity_path(Entity* ancestor) const
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

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_children()
{
    return children;
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-name")
    {
        host_name = value;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Hosts()
{
    yang_name = "ipv4-hosts"; yang_parent_name = "vrf";
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::~Ipv4Hosts()
{
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::has_data() const
{
    for (std::size_t index=0; index<ipv4_host.size(); index++)
    {
        if(ipv4_host[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::has_operation() const
{
    for (std::size_t index=0; index<ipv4_host.size(); index++)
    {
        if(ipv4_host[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IpDomain::Vrfs::Vrf::Ipv4Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-hosts";

    return path_buffer.str();

}

EntityPath IpDomain::Vrfs::Vrf::Ipv4Hosts::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IpDomain::Vrfs::Vrf::Ipv4Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-host")
    {
        for(auto const & c : ipv4_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host>();
        c->parent = this;
        ipv4_host.push_back(std::move(c));
        children[segment_path] = ipv4_host.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::Ipv4Hosts::get_children()
{
    for (auto const & c : ipv4_host)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"},
	 lookup{YType::empty, "lookup"},
	 multicast_domain{YType::str, "multicast-domain"},
	 name{YType::str, "name"},
	 source_interface{YType::str, "source-interface"}
    	,
    ipv4_hosts(std::make_unique<IpDomain::Vrfs::Vrf::Ipv4Hosts>())
	,ipv6_hosts(std::make_unique<IpDomain::Vrfs::Vrf::Ipv6Hosts>())
	,lists(std::make_unique<IpDomain::Vrfs::Vrf::Lists>())
	,servers(std::make_unique<IpDomain::Vrfs::Vrf::Servers>())
{
    ipv4_hosts->parent = this;
    children["ipv4-hosts"] = ipv4_hosts.get();

    ipv6_hosts->parent = this;
    children["ipv6-hosts"] = ipv6_hosts.get();

    lists->parent = this;
    children["lists"] = lists.get();

    servers->parent = this;
    children["servers"] = servers.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

IpDomain::Vrfs::Vrf::~Vrf()
{
}

bool IpDomain::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| lookup.is_set
	|| multicast_domain.is_set
	|| name.is_set
	|| source_interface.is_set
	|| (ipv4_hosts !=  nullptr && ipv4_hosts->has_data())
	|| (ipv6_hosts !=  nullptr && ipv6_hosts->has_data())
	|| (lists !=  nullptr && lists->has_data())
	|| (servers !=  nullptr && servers->has_data());
}

bool IpDomain::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(lookup.operation)
	|| is_set(multicast_domain.operation)
	|| is_set(name.operation)
	|| is_set(source_interface.operation)
	|| (ipv4_hosts !=  nullptr && is_set(ipv4_hosts->operation))
	|| (ipv6_hosts !=  nullptr && is_set(ipv6_hosts->operation))
	|| (lists !=  nullptr && is_set(lists->operation))
	|| (servers !=  nullptr && is_set(servers->operation));
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
        path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain/vrfs/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (lookup.is_set || is_set(lookup.operation)) leaf_name_data.push_back(lookup.get_name_leafdata());
    if (multicast_domain.is_set || is_set(multicast_domain.operation)) leaf_name_data.push_back(multicast_domain.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


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

    if(child_yang_name == "ipv4-hosts")
    {
        if(ipv4_hosts != nullptr)
        {
            children["ipv4-hosts"] = ipv4_hosts.get();
        }
        else
        {
            ipv4_hosts = std::make_unique<IpDomain::Vrfs::Vrf::Ipv4Hosts>();
            ipv4_hosts->parent = this;
            children["ipv4-hosts"] = ipv4_hosts.get();
        }
        return children.at("ipv4-hosts");
    }

    if(child_yang_name == "ipv6-hosts")
    {
        if(ipv6_hosts != nullptr)
        {
            children["ipv6-hosts"] = ipv6_hosts.get();
        }
        else
        {
            ipv6_hosts = std::make_unique<IpDomain::Vrfs::Vrf::Ipv6Hosts>();
            ipv6_hosts->parent = this;
            children["ipv6-hosts"] = ipv6_hosts.get();
        }
        return children.at("ipv6-hosts");
    }

    if(child_yang_name == "lists")
    {
        if(lists != nullptr)
        {
            children["lists"] = lists.get();
        }
        else
        {
            lists = std::make_unique<IpDomain::Vrfs::Vrf::Lists>();
            lists->parent = this;
            children["lists"] = lists.get();
        }
        return children.at("lists");
    }

    if(child_yang_name == "servers")
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
        }
        else
        {
            servers = std::make_unique<IpDomain::Vrfs::Vrf::Servers>();
            servers->parent = this;
            children["servers"] = servers.get();
        }
        return children.at("servers");
    }

    return nullptr;
}

std::map<std::string, Entity*> & IpDomain::Vrfs::Vrf::get_children()
{
    if(children.find("ipv4-hosts") == children.end())
    {
        if(ipv4_hosts != nullptr)
        {
            children["ipv4-hosts"] = ipv4_hosts.get();
        }
    }

    if(children.find("ipv6-hosts") == children.end())
    {
        if(ipv6_hosts != nullptr)
        {
            children["ipv6-hosts"] = ipv6_hosts.get();
        }
    }

    if(children.find("lists") == children.end())
    {
        if(lists != nullptr)
        {
            children["lists"] = lists.get();
        }
    }

    if(children.find("servers") == children.end())
    {
        if(servers != nullptr)
        {
            children["servers"] = servers.get();
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
    if(value_path == "lookup")
    {
        lookup = value;
    }
    if(value_path == "multicast-domain")
    {
        multicast_domain = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
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
        path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain/" << get_segment_path();
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

    yang_name = "ip-domain"; yang_parent_name = "Cisco-IOS-XR-ip-domain-cfg";
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
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string IpDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain";

    return path_buffer.str();

}

EntityPath IpDomain::get_entity_path(Entity* ancestor) const
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


}
}

