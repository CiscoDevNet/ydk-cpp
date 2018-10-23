
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_domain_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_domain_cfg {

IpDomain::IpDomain()
    :
    vrfs(std::make_shared<IpDomain::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "ip-domain"; yang_parent_name = "Cisco-IOS-XR-ip-domain-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

IpDomain::~IpDomain()
{
}

bool IpDomain::has_data() const
{
    if (is_presence_container) return true;
    return (vrfs !=  nullptr && vrfs->has_data());
}

bool IpDomain::has_operation() const
{
    return is_set(yfilter)
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string IpDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    return _children;
}

void IpDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IpDomain::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> IpDomain::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrfs")
        return true;
    return false;
}

IpDomain::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "ip-domain"; is_top_level_class = false; has_list_ancestor = false; 
}

IpDomain::Vrfs::~Vrfs()
{
}

bool IpDomain::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string IpDomain::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<IpDomain::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::get_children() const
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

void IpDomain::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    lookup{YType::empty, "lookup"},
    multicast_domain{YType::str, "multicast-domain"},
    source_interface{YType::str, "source-interface"},
    name{YType::str, "name"}
        ,
    ipv6_hosts(std::make_shared<IpDomain::Vrfs::Vrf::Ipv6Hosts>())
    , servers(std::make_shared<IpDomain::Vrfs::Vrf::Servers>())
    , lists(std::make_shared<IpDomain::Vrfs::Vrf::Lists>())
    , ipv4_hosts(std::make_shared<IpDomain::Vrfs::Vrf::Ipv4Hosts>())
{
    ipv6_hosts->parent = this;
    servers->parent = this;
    lists->parent = this;
    ipv4_hosts->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

IpDomain::Vrfs::Vrf::~Vrf()
{
}

bool IpDomain::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| lookup.is_set
	|| multicast_domain.is_set
	|| source_interface.is_set
	|| name.is_set
	|| (ipv6_hosts !=  nullptr && ipv6_hosts->has_data())
	|| (servers !=  nullptr && servers->has_data())
	|| (lists !=  nullptr && lists->has_data())
	|| (ipv4_hosts !=  nullptr && ipv4_hosts->has_data());
}

bool IpDomain::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(lookup.yfilter)
	|| ydk::is_set(multicast_domain.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (ipv6_hosts !=  nullptr && ipv6_hosts->has_operation())
	|| (servers !=  nullptr && servers->has_operation())
	|| (lists !=  nullptr && lists->has_operation())
	|| (ipv4_hosts !=  nullptr && ipv4_hosts->has_operation());
}

std::string IpDomain::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-domain-cfg:ip-domain/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string IpDomain::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (lookup.is_set || is_set(lookup.yfilter)) leaf_name_data.push_back(lookup.get_name_leafdata());
    if (multicast_domain.is_set || is_set(multicast_domain.yfilter)) leaf_name_data.push_back(multicast_domain.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-hosts")
    {
        if(ipv6_hosts == nullptr)
        {
            ipv6_hosts = std::make_shared<IpDomain::Vrfs::Vrf::Ipv6Hosts>();
        }
        return ipv6_hosts;
    }

    if(child_yang_name == "servers")
    {
        if(servers == nullptr)
        {
            servers = std::make_shared<IpDomain::Vrfs::Vrf::Servers>();
        }
        return servers;
    }

    if(child_yang_name == "lists")
    {
        if(lists == nullptr)
        {
            lists = std::make_shared<IpDomain::Vrfs::Vrf::Lists>();
        }
        return lists;
    }

    if(child_yang_name == "ipv4-hosts")
    {
        if(ipv4_hosts == nullptr)
        {
            ipv4_hosts = std::make_shared<IpDomain::Vrfs::Vrf::Ipv4Hosts>();
        }
        return ipv4_hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv6_hosts != nullptr)
    {
        _children["ipv6-hosts"] = ipv6_hosts;
    }

    if(servers != nullptr)
    {
        _children["servers"] = servers;
    }

    if(lists != nullptr)
    {
        _children["lists"] = lists;
    }

    if(ipv4_hosts != nullptr)
    {
        _children["ipv4-hosts"] = ipv4_hosts;
    }

    return _children;
}

void IpDomain::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup")
    {
        lookup = value;
        lookup.value_namespace = name_space;
        lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-domain")
    {
        multicast_domain = value;
        multicast_domain.value_namespace = name_space;
        multicast_domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "lookup")
    {
        lookup.yfilter = yfilter;
    }
    if(value_path == "multicast-domain")
    {
        multicast_domain.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-hosts" || name == "servers" || name == "lists" || name == "ipv4-hosts" || name == "vrf-name" || name == "lookup" || name == "multicast-domain" || name == "source-interface" || name == "name")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Hosts()
    :
    ipv6_host(this, {"host_name"})
{

    yang_name = "ipv6-hosts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::~Ipv6Hosts()
{
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv6_host.len(); index++)
    {
        if(ipv6_host[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::has_operation() const
{
    for (std::size_t index=0; index<ipv6_host.len(); index++)
    {
        if(ipv6_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::Vrf::Ipv6Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Ipv6Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Ipv6Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-host")
    {
        auto ent_ = std::make_shared<IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host>();
        ent_->parent = this;
        ipv6_host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Ipv6Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv6_host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::Ipv6Host()
    :
    host_name{YType::str, "host-name"},
    address{YType::str, "address"}
{

    yang_name = "ipv6-host"; yang_parent_name = "ipv6-hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::~Ipv6Host()
{
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "address")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Servers::Servers()
    :
    server(this, {"order", "server_address"})
{

    yang_name = "servers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Servers::~Servers()
{
}

bool IpDomain::Vrfs::Vrf::Servers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Servers::has_operation() const
{
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::Vrf::Servers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "servers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Servers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Servers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        auto ent_ = std::make_shared<IpDomain::Vrfs::Vrf::Servers::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Servers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IpDomain::Vrfs::Vrf::Servers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::Vrf::Servers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::Vrf::Servers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Servers::Server::Server()
    :
    order{YType::uint32, "order"},
    server_address{YType::str, "server-address"}
{

    yang_name = "server"; yang_parent_name = "servers"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Servers::Server::~Server()
{
}

bool IpDomain::Vrfs::Vrf::Servers::Server::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| server_address.is_set;
}

bool IpDomain::Vrfs::Vrf::Servers::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(server_address.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Servers::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    ADD_KEY_TOKEN(order, "order");
    ADD_KEY_TOKEN(server_address, "server-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Servers::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Servers::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Servers::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpDomain::Vrfs::Vrf::Servers::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::Servers::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Servers::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "server-address")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Lists::Lists()
    :
    list(this, {"order", "list_name"})
{

    yang_name = "lists"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Lists::~Lists()
{
}

bool IpDomain::Vrfs::Vrf::Lists::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Lists::has_operation() const
{
    for (std::size_t index=0; index<list.len(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::Vrf::Lists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lists";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Lists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Lists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        auto ent_ = std::make_shared<IpDomain::Vrfs::Vrf::Lists::List>();
        ent_->parent = this;
        list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Lists::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IpDomain::Vrfs::Vrf::Lists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::Vrf::Lists::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::Vrf::Lists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Lists::List::List()
    :
    order{YType::uint32, "order"},
    list_name{YType::str, "list-name"}
{

    yang_name = "list"; yang_parent_name = "lists"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Lists::List::~List()
{
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_data() const
{
    if (is_presence_container) return true;
    return order.is_set
	|| list_name.is_set;
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(order.yfilter)
	|| ydk::is_set(list_name.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Lists::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    ADD_KEY_TOKEN(order, "order");
    ADD_KEY_TOKEN(list_name, "list-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Lists::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (order.is_set || is_set(order.yfilter)) leaf_name_data.push_back(order.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Lists::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Lists::List::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpDomain::Vrfs::Vrf::Lists::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "order")
    {
        order = value;
        order.value_namespace = name_space;
        order.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
}

void IpDomain::Vrfs::Vrf::Lists::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "order")
    {
        order.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Lists::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "order" || name == "list-name")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Hosts()
    :
    ipv4_host(this, {"host_name"})
{

    yang_name = "ipv4-hosts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::~Ipv4Hosts()
{
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_host.len(); index++)
    {
        if(ipv4_host[index]->has_data())
            return true;
    }
    return false;
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::has_operation() const
{
    for (std::size_t index=0; index<ipv4_host.len(); index++)
    {
        if(ipv4_host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IpDomain::Vrfs::Vrf::Ipv4Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Ipv4Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Ipv4Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-host")
    {
        auto ent_ = std::make_shared<IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host>();
        ent_->parent = this;
        ipv4_host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Ipv4Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-host")
        return true;
    return false;
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::Ipv4Host()
    :
    host_name{YType::str, "host-name"},
    address{YType::str, "address"}
{

    yang_name = "ipv4-host"; yang_parent_name = "ipv4-hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::~Ipv4Host()
{
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::has_data() const
{
    if (is_presence_container) return true;
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
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-host";
    ADD_KEY_TOKEN(host_name, "host-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());

    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address.append(value);
    }
}

void IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-name" || name == "address")
        return true;
    return false;
}


}
}

