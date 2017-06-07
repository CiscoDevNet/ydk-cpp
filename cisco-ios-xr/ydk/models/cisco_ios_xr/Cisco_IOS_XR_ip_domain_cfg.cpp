
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_domain_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_domain_cfg {

IpDomain::IpDomain()
    :
    vrfs(std::make_shared<IpDomain::Vrfs>())
{
    vrfs->parent = this;

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
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string IpDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain";

    return path_buffer.str();

}

const EntityPath IpDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<IpDomain::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void IpDomain::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> IpDomain::clone_ptr() const
{
    return std::make_shared<IpDomain>();
}

std::string IpDomain::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpDomain::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpDomain::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
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

const EntityPath IpDomain::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<IpDomain::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::set_value(const std::string & value_path, std::string value)
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
    ipv4_hosts(std::make_shared<IpDomain::Vrfs::Vrf::Ipv4Hosts>())
	,ipv6_hosts(std::make_shared<IpDomain::Vrfs::Vrf::Ipv6Hosts>())
	,lists(std::make_shared<IpDomain::Vrfs::Vrf::Lists>())
	,servers(std::make_shared<IpDomain::Vrfs::Vrf::Servers>())
{
    ipv4_hosts->parent = this;

    ipv6_hosts->parent = this;

    lists->parent = this;

    servers->parent = this;

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
	|| (ipv4_hosts !=  nullptr && ipv4_hosts->has_operation())
	|| (ipv6_hosts !=  nullptr && ipv6_hosts->has_operation())
	|| (lists !=  nullptr && lists->has_operation())
	|| (servers !=  nullptr && servers->has_operation());
}

std::string IpDomain::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath IpDomain::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
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

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-hosts")
    {
        if(ipv4_hosts == nullptr)
        {
            ipv4_hosts = std::make_shared<IpDomain::Vrfs::Vrf::Ipv4Hosts>();
        }
        return ipv4_hosts;
    }

    if(child_yang_name == "ipv6-hosts")
    {
        if(ipv6_hosts == nullptr)
        {
            ipv6_hosts = std::make_shared<IpDomain::Vrfs::Vrf::Ipv6Hosts>();
        }
        return ipv6_hosts;
    }

    if(child_yang_name == "lists")
    {
        if(lists == nullptr)
        {
            lists = std::make_shared<IpDomain::Vrfs::Vrf::Lists>();
        }
        return lists;
    }

    if(child_yang_name == "servers")
    {
        if(servers == nullptr)
        {
            servers = std::make_shared<IpDomain::Vrfs::Vrf::Servers>();
        }
        return servers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_hosts != nullptr)
    {
        children["ipv4-hosts"] = ipv4_hosts;
    }

    if(ipv6_hosts != nullptr)
    {
        children["ipv6-hosts"] = ipv6_hosts;
    }

    if(lists != nullptr)
    {
        children["lists"] = lists;
    }

    if(servers != nullptr)
    {
        children["servers"] = servers;
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

const EntityPath IpDomain::Vrfs::Vrf::Ipv6Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Hosts' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Ipv6Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-host")
    {
        for(auto const & c : ipv6_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host>();
        c->parent = this;
        ipv6_host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Ipv6Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::set_value(const std::string & value_path, std::string value)
{
}

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
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return host_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(address.operation);
}

std::string IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Host' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath IpDomain::Vrfs::Vrf::Servers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Servers' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Servers::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Servers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Servers::set_value(const std::string & value_path, std::string value)
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
    path_buffer << "server" <<"[order='" <<order <<"']" <<"[server-address='" <<server_address <<"']";

    return path_buffer.str();

}

const EntityPath IpDomain::Vrfs::Vrf::Servers::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.operation)) leaf_name_data.push_back(order.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.operation)) leaf_name_data.push_back(server_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Servers::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

const EntityPath IpDomain::Vrfs::Vrf::Lists::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lists' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Lists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Lists::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Lists::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Lists::set_value(const std::string & value_path, std::string value)
{
}

IpDomain::Vrfs::Vrf::Lists::List::List()
    :
    order{YType::int32, "order"},
    list_name{YType::str, "list-name"}
{
    yang_name = "list"; yang_parent_name = "lists";
}

IpDomain::Vrfs::Vrf::Lists::List::~List()
{
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_data() const
{
    return order.is_set
	|| list_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_operation() const
{
    return is_set(operation)
	|| is_set(order.operation)
	|| is_set(list_name.operation);
}

std::string IpDomain::Vrfs::Vrf::Lists::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[order='" <<order <<"']" <<"[list-name='" <<list_name <<"']";

    return path_buffer.str();

}

const EntityPath IpDomain::Vrfs::Vrf::Lists::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.operation)) leaf_name_data.push_back(order.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.operation)) leaf_name_data.push_back(list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Lists::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Lists::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpDomain::Vrfs::Vrf::Lists::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "order")
    {
        order = value;
    }
    if(value_path == "list-name")
    {
        list_name = value;
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

const EntityPath IpDomain::Vrfs::Vrf::Ipv4Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Hosts' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Ipv4Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-host")
    {
        for(auto const & c : ipv4_host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host>();
        c->parent = this;
        ipv4_host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Ipv4Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::set_value(const std::string & value_path, std::string value)
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
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return host_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(host_name.operation)
	|| is_set(address.operation);
}

std::string IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host" <<"[host-name='" <<host_name <<"']";

    return path_buffer.str();

}

const EntityPath IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Host' in Cisco_IOS_XR_ip_domain_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.operation)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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


}
}

