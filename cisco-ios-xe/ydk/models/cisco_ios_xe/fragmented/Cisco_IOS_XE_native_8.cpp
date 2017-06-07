
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_8.hpp"
#include "Cisco_IOS_XE_native_9.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Ip::Route::Static_::Bfd::Bfd()
    :
    gateway_ip{YType::str, "gateway-ip"},
    interface{YType::str, "interface"}
{
    yang_name = "bfd"; yang_parent_name = "static";
}

Native::Ip::Route::Static_::Bfd::~Bfd()
{
}

bool Native::Ip::Route::Static_::Bfd::has_data() const
{
    return gateway_ip.is_set
	|| interface.is_set;
}

bool Native::Ip::Route::Static_::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(gateway_ip.operation)
	|| is_set(interface.operation);
}

std::string Native::Ip::Route::Static_::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::Static_::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gateway_ip.is_set || is_set(gateway_ip.operation)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Static_::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::InstallRoutesRecurseViaNexthop()
    :
    vrf{YType::str, "vrf"}
{
    yang_name = "install-routes-recurse-via-nexthop"; yang_parent_name = "static";
}

Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::~InstallRoutesRecurseViaNexthop()
{
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_data() const
{
    return vrf.is_set;
}

bool Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "install-routes-recurse-via-nexthop";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/route/static/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Route::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "route";
}

Native::Ip::Route::Vrf::~Vrf()
{
}

bool Native::Ip::Route::Vrf::has_data() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Route::Vrf::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::Route::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-route-interface-forwarding-list")
    {
        for(auto const & c : ip_route_interface_forwarding_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList>();
        c->parent = this;
        ip_route_interface_forwarding_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_route_interface_forwarding_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{
    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "vrf";
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_data() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::has_operation() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(mask.operation);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list" <<"[prefix='" <<prefix <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpRouteInterfaceForwardingList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fwd-list")
    {
        for(auto const & c : fwd_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList>();
        c->parent = this;
        fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::FwdList()
    :
    fwd{YType::str, "fwd"},
    dhcp{YType::empty, "dhcp"},
    forwarding_router_adr{YType::str, "forwarding-router-adr"},
    global{YType::empty, "global"},
    metric{YType::uint8, "metric"},
    multicast{YType::empty, "multicast"},
    name{YType::str, "name"},
    permanent{YType::empty, "permanent"},
    tag{YType::uint32, "tag"},
    track{YType::uint16, "track"}
{
    yang_name = "fwd-list"; yang_parent_name = "ip-route-interface-forwarding-list";
}

Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_data() const
{
    return fwd.is_set
	|| dhcp.is_set
	|| forwarding_router_adr.is_set
	|| global.is_set
	|| metric.is_set
	|| multicast.is_set
	|| name.is_set
	|| permanent.is_set
	|| tag.is_set
	|| track.is_set;
}

bool Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::has_operation() const
{
    return is_set(operation)
	|| is_set(fwd.operation)
	|| is_set(dhcp.operation)
	|| is_set(forwarding_router_adr.operation)
	|| is_set(global.operation)
	|| is_set(metric.operation)
	|| is_set(multicast.operation)
	|| is_set(name.operation)
	|| is_set(permanent.operation)
	|| is_set(tag.operation)
	|| is_set(track.operation);
}

std::string Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list" <<"[fwd='" <<fwd <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FwdList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fwd.is_set || is_set(fwd.operation)) leaf_name_data.push_back(fwd.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (forwarding_router_adr.is_set || is_set(forwarding_router_adr.operation)) leaf_name_data.push_back(forwarding_router_adr.get_name_leafdata());
    if (global.is_set || is_set(global.operation)) leaf_name_data.push_back(global.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (permanent.is_set || is_set(permanent.operation)) leaf_name_data.push_back(permanent.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fwd")
    {
        fwd = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "forwarding-router-adr")
    {
        forwarding_router_adr = value;
    }
    if(value_path == "global")
    {
        global = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "permanent")
    {
        permanent = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
    if(value_path == "track")
    {
        track = value;
    }
}

Native::Ip::ExplicitPath::ExplicitPath()
    :
    name{YType::str, "name"},
    exclude_address{YType::str, "exclude-address"},
    mode{YType::enumeration, "mode"},
    next_address{YType::str, "next-address"},
    next_label{YType::uint32, "next-label"}
{
    yang_name = "explicit-path"; yang_parent_name = "ip";
}

Native::Ip::ExplicitPath::~ExplicitPath()
{
}

bool Native::Ip::ExplicitPath::has_data() const
{
    for (auto const & leaf : exclude_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : next_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : next_label.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| mode.is_set;
}

bool Native::Ip::ExplicitPath::has_operation() const
{
    for (auto const & leaf : exclude_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : next_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : next_label.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(exclude_address.operation)
	|| is_set(mode.operation)
	|| is_set(next_address.operation)
	|| is_set(next_label.operation);
}

std::string Native::Ip::ExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-path" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());

    auto exclude_address_name_datas = exclude_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exclude_address_name_datas.begin(), exclude_address_name_datas.end());
    auto next_address_name_datas = next_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), next_address_name_datas.begin(), next_address_name_datas.end());
    auto next_label_name_datas = next_label.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), next_label_name_datas.begin(), next_label_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExplicitPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "exclude-address")
    {
        exclude_address.append(value);
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "next-address")
    {
        next_address.append(value);
    }
    if(value_path == "next-label")
    {
        next_label.append(value);
    }
}

Native::Ip::Scp::Scp()
    :
    server(std::make_shared<Native::Ip::Scp::Server>())
{
    server->parent = this;

    yang_name = "scp"; yang_parent_name = "ip";
}

Native::Ip::Scp::~Scp()
{
}

bool Native::Ip::Scp::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Scp::has_operation() const
{
    return is_set(operation)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Scp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Scp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Scp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Scp::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Scp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Scp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Scp::Server::Server()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "server"; yang_parent_name = "scp";
}

Native::Ip::Scp::Server::~Server()
{
}

bool Native::Ip::Scp::Server::has_data() const
{
    return enable.is_set;
}

bool Native::Ip::Scp::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Ip::Scp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Ip::Scp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/scp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Scp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Scp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Scp::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Ip::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ip::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ip";
}

Native::Ip::Spd::~Spd()
{
}

bool Native::Ip::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ip::Spd::has_operation() const
{
    return is_set(operation)
	|| is_set(mode.operation)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ip::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";

    return path_buffer.str();

}

const EntityPath Native::Ip::Spd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ip::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ip::Spd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Ip::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{
    yang_name = "queue"; yang_parent_name = "spd";
}

Native::Ip::Spd::Queue::~Queue()
{
}

bool Native::Ip::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ip::Spd::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string Native::Ip::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

const EntityPath Native::Ip::Spd::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/spd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Spd::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

Native::Ip::Bootp::Bootp()
    :
    server{YType::boolean, "server"}
{
    yang_name = "bootp"; yang_parent_name = "ip";
}

Native::Ip::Bootp::~Bootp()
{
}

bool Native::Ip::Bootp::has_data() const
{
    return server.is_set;
}

bool Native::Ip::Bootp::has_operation() const
{
    return is_set(operation)
	|| is_set(server.operation);
}

std::string Native::Ip::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Bootp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Bootp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "server")
    {
        server = value;
    }
}

Native::Ip::Ssh::Ssh()
    :
    authentication_retries{YType::uint8, "authentication-retries"},
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"},
    source_interface{YType::str, "source-interface"},
    time_out{YType::uint8, "time-out"},
    version{YType::uint8, "version"}
    	,
    logging(std::make_shared<Native::Ip::Ssh::Logging>())
	,pubkey_chain(std::make_shared<Native::Ip::Ssh::PubkeyChain>())
	,rsa(std::make_shared<Native::Ip::Ssh::Rsa>())
{
    logging->parent = this;

    pubkey_chain->parent = this;

    rsa->parent = this;

    yang_name = "ssh"; yang_parent_name = "ip";
}

Native::Ip::Ssh::~Ssh()
{
}

bool Native::Ip::Ssh::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return authentication_retries.is_set
	|| dscp.is_set
	|| precedence.is_set
	|| source_interface.is_set
	|| time_out.is_set
	|| version.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_data())
	|| (rsa !=  nullptr && rsa->has_data());
}

bool Native::Ip::Ssh::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(authentication_retries.operation)
	|| is_set(dscp.operation)
	|| is_set(precedence.operation)
	|| is_set(source_interface.operation)
	|| is_set(time_out.operation)
	|| is_set(version.operation)
	|| (logging !=  nullptr && logging->has_operation())
	|| (pubkey_chain !=  nullptr && pubkey_chain->has_operation())
	|| (rsa !=  nullptr && rsa->has_operation());
}

std::string Native::Ip::Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssh";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_retries.is_set || is_set(authentication_retries.operation)) leaf_name_data.push_back(authentication_retries.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (time_out.is_set || is_set(time_out.operation)) leaf_name_data.push_back(time_out.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Ssh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::Port>();
        c->parent = this;
        port.push_back(c);
        return c;
    }

    if(child_yang_name == "pubkey-chain")
    {
        if(pubkey_chain == nullptr)
        {
            pubkey_chain = std::make_shared<Native::Ip::Ssh::PubkeyChain>();
        }
        return pubkey_chain;
    }

    if(child_yang_name == "rsa")
    {
        if(rsa == nullptr)
        {
            rsa = std::make_shared<Native::Ip::Ssh::Rsa>();
        }
        return rsa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    for (auto const & c : port)
    {
        children[c->get_segment_path()] = c;
    }

    if(pubkey_chain != nullptr)
    {
        children["pubkey-chain"] = pubkey_chain;
    }

    if(rsa != nullptr)
    {
        children["rsa"] = rsa;
    }

    return children;
}

void Native::Ip::Ssh::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-retries")
    {
        authentication_retries = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "time-out")
    {
        time_out = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ip::Ssh::Logging::Logging()
    :
    events{YType::empty, "events"}
{
    yang_name = "logging"; yang_parent_name = "ssh";
}

Native::Ip::Ssh::Logging::~Logging()
{
}

bool Native::Ip::Ssh::Logging::has_data() const
{
    return events.is_set;
}

bool Native::Ip::Ssh::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(events.operation);
}

std::string Native::Ip::Ssh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events.is_set || is_set(events.operation)) leaf_name_data.push_back(events.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events")
    {
        events = value;
    }
}

Native::Ip::Ssh::PubkeyChain::PubkeyChain()
{
    yang_name = "pubkey-chain"; yang_parent_name = "ssh";
}

Native::Ip::Ssh::PubkeyChain::~PubkeyChain()
{
}

bool Native::Ip::Ssh::PubkeyChain::has_data() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Ssh::PubkeyChain::has_operation() const
{
    for (std::size_t index=0; index<username.size(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Ssh::PubkeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pubkey-chain";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::PubkeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username")
    {
        for(auto const & c : username)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username>();
        c->parent = this;
        username.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::PubkeyChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Ssh::PubkeyChain::Username::Username()
    :
    name{YType::str, "name"}
{
    yang_name = "username"; yang_parent_name = "pubkey-chain";
}

Native::Ip::Ssh::PubkeyChain::Username::~Username()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_data() const
{
    for (std::size_t index=0; index<key_hash.size(); index++)
    {
        if(key_hash[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::has_operation() const
{
    for (std::size_t index=0; index<key_hash.size(); index++)
    {
        if(key_hash[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::PubkeyChain::Username::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/pubkey-chain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::Username::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-hash")
    {
        for(auto const & c : key_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Ssh::PubkeyChain::Username::KeyHash>();
        c->parent = this;
        key_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::Username::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_hash)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Ssh::PubkeyChain::Username::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyHash()
    :
    key_type{YType::enumeration, "key-type"},
    key_hash_value{YType::str, "key-hash-value"}
{
    yang_name = "key-hash"; yang_parent_name = "username";
}

Native::Ip::Ssh::PubkeyChain::Username::KeyHash::~KeyHash()
{
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_data() const
{
    return key_type.is_set
	|| key_hash_value.is_set;
}

bool Native::Ip::Ssh::PubkeyChain::Username::KeyHash::has_operation() const
{
    return is_set(operation)
	|| is_set(key_type.operation)
	|| is_set(key_hash_value.operation);
}

std::string Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-hash" <<"[key-type='" <<key_type <<"']" <<"[key-hash-value='" <<key_hash_value <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyHash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_type.is_set || is_set(key_type.operation)) leaf_name_data.push_back(key_type.get_name_leafdata());
    if (key_hash_value.is_set || is_set(key_hash_value.operation)) leaf_name_data.push_back(key_hash_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::PubkeyChain::Username::KeyHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::PubkeyChain::Username::KeyHash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-type")
    {
        key_type = value;
    }
    if(value_path == "key-hash-value")
    {
        key_hash_value = value;
    }
}

Native::Ip::Ssh::Rsa::Rsa()
    :
    keypair_name{YType::str, "keypair-name"}
{
    yang_name = "rsa"; yang_parent_name = "ssh";
}

Native::Ip::Ssh::Rsa::~Rsa()
{
}

bool Native::Ip::Ssh::Rsa::has_data() const
{
    return keypair_name.is_set;
}

bool Native::Ip::Ssh::Rsa::has_operation() const
{
    return is_set(operation)
	|| is_set(keypair_name.operation);
}

std::string Native::Ip::Ssh::Rsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsa";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::Rsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keypair_name.is_set || is_set(keypair_name.operation)) leaf_name_data.push_back(keypair_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Rsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Rsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Rsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keypair-name")
    {
        keypair_name = value;
    }
}

Native::Ip::Ssh::Port::Port()
    :
    port_no{YType::uint16, "port-no"},
    high_rotary{YType::uint8, "high-rotary"},
    low_rotary{YType::uint8, "low-rotary"}
{
    yang_name = "port"; yang_parent_name = "ssh";
}

Native::Ip::Ssh::Port::~Port()
{
}

bool Native::Ip::Ssh::Port::has_data() const
{
    return port_no.is_set
	|| high_rotary.is_set
	|| low_rotary.is_set;
}

bool Native::Ip::Ssh::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(port_no.operation)
	|| is_set(high_rotary.operation)
	|| is_set(low_rotary.operation);
}

std::string Native::Ip::Ssh::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[port-no='" <<port_no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ssh::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ssh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_no.is_set || is_set(port_no.operation)) leaf_name_data.push_back(port_no.get_name_leafdata());
    if (high_rotary.is_set || is_set(high_rotary.operation)) leaf_name_data.push_back(high_rotary.get_name_leafdata());
    if (low_rotary.is_set || is_set(low_rotary.operation)) leaf_name_data.push_back(low_rotary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ssh::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ssh::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ssh::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-no")
    {
        port_no = value;
    }
    if(value_path == "high-rotary")
    {
        high_rotary = value;
    }
    if(value_path == "low-rotary")
    {
        low_rotary = value;
    }
}

Native::Ip::Tcp::Tcp()
    :
    selective_ack{YType::empty, "selective-ack"},
    synwait_time{YType::uint16, "synwait-time"},
    timestamp{YType::empty, "timestamp"},
    window_size{YType::uint32, "window-size"}
    	,
    path_mtu_discovery(nullptr) // presence node
{
    yang_name = "tcp"; yang_parent_name = "ip";
}

Native::Ip::Tcp::~Tcp()
{
}

bool Native::Ip::Tcp::has_data() const
{
    return selective_ack.is_set
	|| synwait_time.is_set
	|| timestamp.is_set
	|| window_size.is_set
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_data());
}

bool Native::Ip::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(selective_ack.operation)
	|| is_set(synwait_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(window_size.operation)
	|| (path_mtu_discovery !=  nullptr && path_mtu_discovery->has_operation());
}

std::string Native::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (selective_ack.is_set || is_set(selective_ack.operation)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.operation)) leaf_name_data.push_back(synwait_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-mtu-discovery")
    {
        if(path_mtu_discovery == nullptr)
        {
            path_mtu_discovery = std::make_shared<Native::Ip::Tcp::PathMtuDiscovery>();
        }
        return path_mtu_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_mtu_discovery != nullptr)
    {
        children["path-mtu-discovery"] = path_mtu_discovery;
    }

    return children;
}

void Native::Ip::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "selective-ack")
    {
        selective_ack = value;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Ip::Tcp::PathMtuDiscovery::PathMtuDiscovery()
    :
    age_timer{YType::str, "age-timer"}
{
    yang_name = "path-mtu-discovery"; yang_parent_name = "tcp";
}

Native::Ip::Tcp::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_data() const
{
    return age_timer.is_set;
}

bool Native::Ip::Tcp::PathMtuDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(age_timer.operation);
}

std::string Native::Ip::Tcp::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tcp::PathMtuDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_timer.is_set || is_set(age_timer.operation)) leaf_name_data.push_back(age_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tcp::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tcp::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tcp::PathMtuDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "age-timer")
    {
        age_timer = value;
    }
}

Native::Ip::Tftp::Tftp()
    :
    blocksize{YType::uint16, "blocksize"}
    	,
    boot_interface(std::make_shared<Native::Ip::Tftp::BootInterface>())
	,source_interface(std::make_shared<Native::Ip::Tftp::SourceInterface>())
{
    boot_interface->parent = this;

    source_interface->parent = this;

    yang_name = "tftp"; yang_parent_name = "ip";
}

Native::Ip::Tftp::~Tftp()
{
}

bool Native::Ip::Tftp::has_data() const
{
    return blocksize.is_set
	|| (boot_interface !=  nullptr && boot_interface->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tftp::has_operation() const
{
    return is_set(operation)
	|| is_set(blocksize.operation)
	|| (boot_interface !=  nullptr && boot_interface->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (blocksize.is_set || is_set(blocksize.operation)) leaf_name_data.push_back(blocksize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boot-interface")
    {
        if(boot_interface == nullptr)
        {
            boot_interface = std::make_shared<Native::Ip::Tftp::BootInterface>();
        }
        return boot_interface;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tftp::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(boot_interface != nullptr)
    {
        children["boot-interface"] = boot_interface;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Tftp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "blocksize")
    {
        blocksize = value;
    }
}

Native::Ip::Tftp::BootInterface::BootInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::BootInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "boot-interface"; yang_parent_name = "tftp";
}

Native::Ip::Tftp::BootInterface::~BootInterface()
{
}

bool Native::Ip::Tftp::BootInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tftp::BootInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tftp::BootInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::BootInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::BootInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::BootInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Tftp::BootInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Ip::Tftp::BootInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "boot-interface";
}

Native::Ip::Tftp::BootInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Tftp::BootInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Tftp::BootInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::BootInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "boot-interface";
}

Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Tftp::BootInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "boot-interface";
}

Native::Ip::Tftp::BootInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Tftp::BootInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Tftp::BootInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::BootInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "boot-interface";
}

Native::Ip::Tftp::BootInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Tftp::BootInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/boot-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::BootInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::BootInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Tftp::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tftp";
}

Native::Ip::Tftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tftp::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tftp::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Tftp::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Ip::Tftp::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tftp::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Tftp::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Tftp::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Tftp::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tftp::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Tftp::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Tftp::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/tftp/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"},
    persistent{YType::empty, "Cisco-IOS-XE-acl:persistent"}
    	,
    helper(std::make_shared<Native::Ip::AccessList::Helper>())
	,log_update(std::make_shared<Native::Ip::AccessList::LogUpdate>())
	,logging(std::make_shared<Native::Ip::AccessList::Logging>())
	,resequence(std::make_shared<Native::Ip::AccessList::Resequence>())
{
    helper->parent = this;

    log_update->parent = this;

    logging->parent = this;

    resequence->parent = this;

    yang_name = "access-list"; yang_parent_name = "ip";
}

Native::Ip::AccessList::~AccessList()
{
}

bool Native::Ip::AccessList::has_data() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<role_based.size(); index++)
    {
        if(role_based[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return match_local_traffic.is_set
	|| persistent.is_set
	|| (helper !=  nullptr && helper->has_data())
	|| (log_update !=  nullptr && log_update->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (resequence !=  nullptr && resequence->has_data());
}

bool Native::Ip::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<role_based.size(); index++)
    {
        if(role_based[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(match_local_traffic.operation)
	|| is_set(persistent.operation)
	|| (helper !=  nullptr && helper->has_operation())
	|| (log_update !=  nullptr && log_update->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (resequence !=  nullptr && resequence->has_operation());
}

std::string Native::Ip::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_local_traffic.is_set || is_set(match_local_traffic.operation)) leaf_name_data.push_back(match_local_traffic.get_name_leafdata());
    if (persistent.is_set || is_set(persistent.operation)) leaf_name_data.push_back(persistent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        for(auto const & c : extended)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
    }

    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Ip::AccessList::Helper>();
        }
        return helper;
    }

    if(child_yang_name == "log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Native::Ip::AccessList::LogUpdate>();
        }
        return log_update;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::AccessList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "resequence")
    {
        if(resequence == nullptr)
        {
            resequence = std::make_shared<Native::Ip::AccessList::Resequence>();
        }
        return resequence;
    }

    if(child_yang_name == "role-based")
    {
        for(auto const & c : role_based)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased>();
        c->parent = this;
        role_based.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended)
    {
        children[c->get_segment_path()] = c;
    }

    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    if(log_update != nullptr)
    {
        children["log-update"] = log_update;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(resequence != nullptr)
    {
        children["resequence"] = resequence;
    }

    for (auto const & c : role_based)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic = value;
    }
    if(value_path == "persistent")
    {
        persistent = value;
    }
}

Native::Ip::AccessList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::Standard::Default_>())
{
    default_->parent = this;

    yang_name = "standard"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::Standard::~Standard()
{
}

bool Native::Ip::AccessList::Standard::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Standard::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:standard" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Standard::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::AccessList::Standard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::AccessList::Standard::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    deny(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>())
	,permit(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "standard";
}

Native::Ip::AccessList::Standard::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(operation)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{
    yang_name = "std-ace"; yang_parent_name = "deny";
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(log.operation)
	|| is_set(mask.operation);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StdAce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(operation)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{
    yang_name = "std-ace"; yang_parent_name = "permit";
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(log.operation)
	|| is_set(mask.operation);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StdAce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Ip::AccessList::Standard::Default_::Default_()
{
    yang_name = "default"; yang_parent_name = "standard";
}

Native::Ip::AccessList::Standard::Default_::~Default_()
{
}

bool Native::Ip::AccessList::Standard::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Standard::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::AccessList::Standard::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    deny(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny>())
	,permit(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default";
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(operation)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{
    yang_name = "std-ace"; yang_parent_name = "deny";
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(log.operation)
	|| is_set(mask.operation);
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StdAce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(operation)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{
    yang_name = "std-ace"; yang_parent_name = "permit";
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(ipv4_prefix.operation)
	|| is_set(log.operation)
	|| is_set(mask.operation);
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StdAce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.operation)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
}

Native::Ip::AccessList::RoleBased::RoleBased()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::RoleBased::Default_>())
{
    default_->parent = this;

    yang_name = "role-based"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::RoleBased::~RoleBased()
{
}

bool Native::Ip::AccessList::RoleBased::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:role-based" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "role-based";
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    dscp{YType::str, "dscp"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;

    match_any->parent = this;

    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| dscp.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(dscp.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(fragments.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(object_group_str.operation)
	|| is_set(option.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(rst.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(tos.operation)
	|| is_set(urg.operation)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.operation)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.operation)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation)
	|| is_set(neq.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.operation)) leaf_name_data.push_back(neq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
    if(value_path == "neq")
    {
        neq = value;
    }
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{
    yang_name = "range"; yang_parent_name = "ttl";
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(value1.operation)
	|| is_set(value2.operation);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.operation)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.operation)) leaf_name_data.push_back(value2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value1")
    {
        value1 = value;
    }
    if(value_path == "value2")
    {
        value2 = value;
    }
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-all"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAll' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-any"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::RoleBased::Default_::Default_()
{
    yang_name = "default"; yang_parent_name = "role-based";
}

Native::Ip::AccessList::RoleBased::Default_::~Default_()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::RoleBased::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::AccessList::RoleBased::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default";
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    dscp{YType::str, "dscp"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;

    match_any->parent = this;

    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| dscp.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(dscp.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(fragments.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(object_group_str.operation)
	|| is_set(option.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(rst.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(tos.operation)
	|| is_set(urg.operation)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.operation)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.operation)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation)
	|| is_set(neq.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.operation)) leaf_name_data.push_back(neq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
    if(value_path == "neq")
    {
        neq = value;
    }
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{
    yang_name = "range"; yang_parent_name = "ttl";
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(value1.operation)
	|| is_set(value2.operation);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.operation)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.operation)) leaf_name_data.push_back(value2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value1")
    {
        value1 = value;
    }
    if(value_path == "value2")
    {
        value2 = value;
    }
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-all"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAll' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-any"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::Extended::Extended()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::Extended::Default_>())
{
    default_->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::Extended::~Extended()
{
}

bool Native::Ip::AccessList::Extended::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:extended" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Extended::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::AccessList::Extended::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "extended";
}

Native::Ip::AccessList::Extended::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dscp{YType::str, "dscp"},
    dst_any{YType::empty, "dst-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_host{YType::str, "dst-host"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    host{YType::str, "host"},
    ipv4_address{YType::str, "ipv4-address"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mask{YType::str, "mask"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group{YType::str, "object-group"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;

    match_any->parent = this;

    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dscp.is_set
	|| dst_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_host.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_object_group.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| host.is_set
	|| ipv4_address.is_set
	|| log.is_set
	|| log_input.is_set
	|| mask.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(any.operation)
	|| is_set(dest_ipv4_address.operation)
	|| is_set(dest_mask.operation)
	|| is_set(dscp.operation)
	|| is_set(dst_any.operation)
	|| is_set(dst_eq.operation)
	|| is_set(dst_gt.operation)
	|| is_set(dst_host.operation)
	|| is_set(dst_lt.operation)
	|| is_set(dst_neq.operation)
	|| is_set(dst_object_group.operation)
	|| is_set(dst_range1.operation)
	|| is_set(dst_range2.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(fragments.operation)
	|| is_set(host.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(mask.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(object_group.operation)
	|| is_set(object_group_str.operation)
	|| is_set(option.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(rst.operation)
	|| is_set(src_eq.operation)
	|| is_set(src_gt.operation)
	|| is_set(src_lt.operation)
	|| is_set(src_neq.operation)
	|| is_set(src_range1.operation)
	|| is_set(src_range2.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(tos.operation)
	|| is_set(urg.operation)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.operation)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.operation)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.operation)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.operation)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.operation)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.operation)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.operation)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.operation)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.operation)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.operation)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.operation)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.operation)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.operation)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.operation)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.operation)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.operation)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.operation)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.operation)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.operation)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.operation)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "object-group")
    {
        object_group = value;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation)
	|| is_set(neq.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.operation)) leaf_name_data.push_back(neq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
    if(value_path == "neq")
    {
        neq = value;
    }
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{
    yang_name = "range"; yang_parent_name = "ttl";
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(value1.operation)
	|| is_set(value2.operation);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.operation)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.operation)) leaf_name_data.push_back(value2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value1")
    {
        value1 = value;
    }
    if(value_path == "value2")
    {
        value2 = value;
    }
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-all"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAll' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-any"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::Extended::Default_::Default_()
{
    yang_name = "default"; yang_parent_name = "extended";
}

Native::Ip::AccessList::Extended::Default_::~Default_()
{
}

bool Native::Ip::AccessList::Extended::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Extended::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::AccessList::Extended::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default";
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(remark.operation)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessListSeqRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dscp{YType::str, "dscp"},
    dst_any{YType::empty, "dst-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_host{YType::str, "dst-host"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    host{YType::str, "host"},
    ipv4_address{YType::str, "ipv4-address"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mask{YType::str, "mask"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group{YType::str, "object-group"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;

    match_any->parent = this;

    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule";
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dscp.is_set
	|| dst_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_host.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_object_group.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| host.is_set
	|| ipv4_address.is_set
	|| log.is_set
	|| log_input.is_set
	|| mask.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(operation)
	|| is_set(ack.operation)
	|| is_set(action.operation)
	|| is_set(any.operation)
	|| is_set(dest_ipv4_address.operation)
	|| is_set(dest_mask.operation)
	|| is_set(dscp.operation)
	|| is_set(dst_any.operation)
	|| is_set(dst_eq.operation)
	|| is_set(dst_gt.operation)
	|| is_set(dst_host.operation)
	|| is_set(dst_lt.operation)
	|| is_set(dst_neq.operation)
	|| is_set(dst_object_group.operation)
	|| is_set(dst_range1.operation)
	|| is_set(dst_range2.operation)
	|| is_set(established.operation)
	|| is_set(fin.operation)
	|| is_set(fragments.operation)
	|| is_set(host.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(log.operation)
	|| is_set(log_input.operation)
	|| is_set(mask.operation)
	|| is_set(msg_code.operation)
	|| is_set(msg_type.operation)
	|| is_set(named_msg_type.operation)
	|| is_set(object_group.operation)
	|| is_set(object_group_str.operation)
	|| is_set(option.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(psh.operation)
	|| is_set(rst.operation)
	|| is_set(src_eq.operation)
	|| is_set(src_gt.operation)
	|| is_set(src_lt.operation)
	|| is_set(src_neq.operation)
	|| is_set(src_range1.operation)
	|| is_set(src_range2.operation)
	|| is_set(syn.operation)
	|| is_set(time_range.operation)
	|| is_set(tos.operation)
	|| is_set(urg.operation)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AceRule' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.operation)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.operation)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.operation)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.operation)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.operation)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.operation)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.operation)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.operation)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.operation)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.operation)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.operation)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.operation)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.operation)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.operation)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.operation)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.operation)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.operation)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.operation)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.operation)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.operation)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.operation)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.operation)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.operation)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.operation)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.operation)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.operation)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.operation)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.operation)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.operation)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.operation)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.operation)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.operation)) leaf_name_data.push_back(urg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack")
    {
        ack = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
    }
    if(value_path == "established")
    {
        established = value;
    }
    if(value_path == "fin")
    {
        fin = value;
    }
    if(value_path == "fragments")
    {
        fragments = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "log-input")
    {
        log_input = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
    }
    if(value_path == "object-group")
    {
        object_group = value;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
    }
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "psh")
    {
        psh = value;
    }
    if(value_path == "rst")
    {
        rst = value;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
    }
    if(value_path == "syn")
    {
        syn = value;
    }
    if(value_path == "time-range")
    {
        time_range = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "urg")
    {
        urg = value;
    }
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(operation)
	|| is_set(eq.operation)
	|| is_set(gt.operation)
	|| is_set(lt.operation)
	|| is_set(neq.operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ttl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.operation)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.operation)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.operation)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.operation)) leaf_name_data.push_back(neq.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eq")
    {
        eq = value;
    }
    if(value_path == "gt")
    {
        gt = value;
    }
    if(value_path == "lt")
    {
        lt = value;
    }
    if(value_path == "neq")
    {
        neq = value;
    }
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{
    yang_name = "range"; yang_parent_name = "ttl";
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(value1.operation)
	|| is_set(value2.operation);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.operation)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.operation)) leaf_name_data.push_back(value2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value1")
    {
        value1 = value;
    }
    if(value_path == "value2")
    {
        value2 = value;
    }
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-all"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAll' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{
    yang_name = "match-any"; yang_parent_name = "ace-rule";
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(operation)
	|| is_set(minusack.operation)
	|| is_set(minusfin.operation)
	|| is_set(minuspsh.operation)
	|| is_set(minusrst.operation)
	|| is_set(minussyn.operation)
	|| is_set(minusurg.operation)
	|| is_set(plusack.operation)
	|| is_set(plusfin.operation)
	|| is_set(pluspsh.operation)
	|| is_set(plusrst.operation)
	|| is_set(plussyn.operation)
	|| is_set(plusurg.operation);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MatchAny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.operation)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.operation)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.operation)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.operation)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.operation)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.operation)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.operation)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.operation)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.operation)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.operation)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.operation)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.operation)) leaf_name_data.push_back(plusurg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minusack")
    {
        minusack = value;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
    }
    if(value_path == "plusack")
    {
        plusack = value;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
    }
}

Native::Ip::AccessList::Helper::Helper()
    :
    check{YType::empty, "check"},
    egress{YType::empty, "egress"}
{
    yang_name = "helper"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::Helper::~Helper()
{
}

bool Native::Ip::AccessList::Helper::has_data() const
{
    return check.is_set
	|| egress.is_set;
}

bool Native::Ip::AccessList::Helper::has_operation() const
{
    return is_set(operation)
	|| is_set(check.operation)
	|| is_set(egress.operation);
}

std::string Native::Ip::AccessList::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:helper";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Helper::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.operation)) leaf_name_data.push_back(check.get_name_leafdata());
    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Helper::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check")
    {
        check = value;
    }
    if(value_path == "egress")
    {
        egress = value;
    }
}

Native::Ip::AccessList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint64, "threshold"}
{
    yang_name = "log-update"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::LogUpdate::~LogUpdate()
{
}

bool Native::Ip::AccessList::LogUpdate::has_data() const
{
    return threshold.is_set;
}

bool Native::Ip::AccessList::LogUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(threshold.operation);
}

std::string Native::Ip::AccessList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:log-update";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::LogUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::LogUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Ip::AccessList::Logging::Logging()
    :
    hash_generation{YType::empty, "hash-generation"},
    interval{YType::uint64, "interval"}
{
    yang_name = "logging"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::Logging::~Logging()
{
}

bool Native::Ip::AccessList::Logging::has_data() const
{
    return hash_generation.is_set
	|| interval.is_set;
}

bool Native::Ip::AccessList::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(hash_generation.operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::AccessList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:logging";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_generation.is_set || is_set(hash_generation.operation)) leaf_name_data.push_back(hash_generation.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hash-generation")
    {
        hash_generation = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::AccessList::Resequence::Resequence()
    :
    numbers{YType::str, "numbers"},
    start_seq_no{YType::uint64, "start-seq-no"},
    step_seq_no{YType::uint64, "step-seq-no"}
{
    yang_name = "resequence"; yang_parent_name = "access-list";
}

Native::Ip::AccessList::Resequence::~Resequence()
{
}

bool Native::Ip::AccessList::Resequence::has_data() const
{
    return numbers.is_set
	|| start_seq_no.is_set
	|| step_seq_no.is_set;
}

bool Native::Ip::AccessList::Resequence::has_operation() const
{
    return is_set(operation)
	|| is_set(numbers.operation)
	|| is_set(start_seq_no.operation)
	|| is_set(step_seq_no.operation);
}

std::string Native::Ip::AccessList::Resequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:resequence";

    return path_buffer.str();

}

const EntityPath Native::Ip::AccessList::Resequence::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numbers.is_set || is_set(numbers.operation)) leaf_name_data.push_back(numbers.get_name_leafdata());
    if (start_seq_no.is_set || is_set(start_seq_no.operation)) leaf_name_data.push_back(start_seq_no.get_name_leafdata());
    if (step_seq_no.is_set || is_set(step_seq_no.operation)) leaf_name_data.push_back(step_seq_no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Resequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Resequence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Resequence::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "numbers")
    {
        numbers = value;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no = value;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no = value;
    }
}

Native::Ip::Device::Device()
    :
    tracking(nullptr) // presence node
{
    yang_name = "device"; yang_parent_name = "ip";
}

Native::Ip::Device::~Device()
{
}

bool Native::Ip::Device::has_data() const
{
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::Ip::Device::has_operation() const
{
    return is_set(operation)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::Ip::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";

    return path_buffer.str();

}

const EntityPath Native::Ip::Device::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::Ip::Device::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::Ip::Device::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Device::Tracking::Tracking()
    :
    trace_buffer{YType::empty, "trace-buffer"}
    	,
    probe(std::make_shared<Native::Ip::Device::Tracking::Probe>())
{
    probe->parent = this;

    yang_name = "tracking"; yang_parent_name = "device";
}

Native::Ip::Device::Tracking::~Tracking()
{
}

bool Native::Ip::Device::Tracking::has_data() const
{
    return trace_buffer.is_set
	|| (probe !=  nullptr && probe->has_data());
}

bool Native::Ip::Device::Tracking::has_operation() const
{
    return is_set(operation)
	|| is_set(trace_buffer.operation)
	|| (probe !=  nullptr && probe->has_operation());
}

std::string Native::Ip::Device::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";

    return path_buffer.str();

}

const EntityPath Native::Ip::Device::Tracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/device/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_buffer.is_set || is_set(trace_buffer.operation)) leaf_name_data.push_back(trace_buffer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Ip::Device::Tracking::Probe>();
        }
        return probe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    return children;
}

void Native::Ip::Device::Tracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer = value;
    }
}

Native::Ip::Device::Tracking::Probe::Probe()
    :
    count{YType::uint8, "count"},
    delay{YType::uint8, "delay"},
    interval{YType::uint32, "interval"}
    	,
    auto_source(nullptr) // presence node
{
    yang_name = "probe"; yang_parent_name = "tracking";
}

Native::Ip::Device::Tracking::Probe::~Probe()
{
}

bool Native::Ip::Device::Tracking::Probe::has_data() const
{
    return count.is_set
	|| delay.is_set
	|| interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::Ip::Device::Tracking::Probe::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(delay.operation)
	|| is_set(interval.operation)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";

    return path_buffer.str();

}

const EntityPath Native::Ip::Device::Tracking::Probe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
}

void Native::Ip::Device::Tracking::Probe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "delay")
    {
        delay = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Device::Tracking::Probe::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
    	,
    fallback(std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "probe";
}

Native::Ip::Device::Tracking::Probe::AutoSource::~AutoSource()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_data() const
{
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_operation() const
{
    return is_set(operation)
	|| is_set(override.operation)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";

    return path_buffer.str();

}

const EntityPath Native::Ip::Device::Tracking::Probe::AutoSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.operation)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "override")
    {
        override = value;
    }
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::Fallback()
    :
    mask{YType::str, "mask"},
    src_ip{YType::str, "src-ip"}
{
    yang_name = "fallback"; yang_parent_name = "auto-source";
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::~Fallback()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_data() const
{
    return mask.is_set
	|| src_ip.is_set;
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(src_ip.operation);
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/auto-source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.operation)) leaf_name_data.push_back(src_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "src-ip")
    {
        src_ip = value;
    }
}

Native::Ip::Radius::Radius()
    :
    source_interface(std::make_shared<Native::Ip::Radius::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "radius"; yang_parent_name = "ip";
}

Native::Ip::Radius::~Radius()
{
}

bool Native::Ip::Radius::has_data() const
{
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Radius::has_operation() const
{
    return is_set(operation)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:radius";

    return path_buffer.str();

}

const EntityPath Native::Ip::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Radius::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Radius::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Radius::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Radius::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "radius";
}

Native::Ip::Radius::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Radius::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Radius::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Radius::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Radius::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Radius::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Radius::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Ip::Radius::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Radius::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Radius::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Radius::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Radius::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Radius::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Radius::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Radius::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Radius::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Radius::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Tacacs::Tacacs()
    :
    source_interface(std::make_shared<Native::Ip::Tacacs::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "tacacs"; yang_parent_name = "ip";
}

Native::Ip::Tacacs::~Tacacs()
{
}

bool Native::Ip::Tacacs::has_data() const
{
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tacacs::has_operation() const
{
    return is_set(operation)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:tacacs";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tacacs::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Tacacs::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Tacacs::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tacacs";
}

Native::Ip::Tacacs::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tacacs::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tacacs::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tacacs::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Ip::Tacacs::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Ip::Tacacs::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tacacs::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Tacacs::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tacacs::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Tacacs::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tacacs::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Tacacs::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tacacs::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::CommunityList::CommunityList()
{
    yang_name = "community-list"; yang_parent_name = "ip";
}

Native::Ip::CommunityList::~CommunityList()
{
}

bool Native::Ip::CommunityList::has_data() const
{
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::has_operation() const
{
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::CommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:community-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded")
    {
        for(auto const & c : expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::Expanded>();
        c->parent = this;
        expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "number-expanded")
    {
        for(auto const & c : number_expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::NumberExpanded>();
        c->parent = this;
        number_expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "number-standard")
    {
        for(auto const & c : number_standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::NumberStandard>();
        c->parent = this;
        number_standard.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_standard)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::CommunityList::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::CommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "community-list";
}

Native::Ip::CommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::CommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberStandard::has_operation() const
{
    return is_set(operation)
	|| is_set(no.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::NumberStandard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.operation)) leaf_name_data.push_back(no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberStandard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no")
    {
        no = value;
    }
}

Native::Ip::CommunityList::NumberStandard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "number-standard";
}

Native::Ip::CommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::CommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::NumberStandard::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::CommunityList::NumberStandard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "number-standard";
}

Native::Ip::CommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::CommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::NumberStandard::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::CommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "community-list";
}

Native::Ip::CommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::CommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberExpanded::has_operation() const
{
    return is_set(operation)
	|| is_set(no.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::NumberExpanded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.operation)) leaf_name_data.push_back(no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberExpanded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no")
    {
        no = value;
    }
}

Native::Ip::CommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "number-expanded";
}

Native::Ip::CommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::CommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::NumberExpanded::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::CommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "number-expanded";
}

Native::Ip::CommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::CommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::NumberExpanded::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::CommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Expanded::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "community-list";
}

Native::Ip::CommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::CommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Expanded::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::Expanded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Expanded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::CommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "expanded";
}

Native::Ip::CommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::CommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::Expanded::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Expanded::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::CommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "expanded";
}

Native::Ip::CommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::CommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::Expanded::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Expanded::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::CommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Standard::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "community-list";
}

Native::Ip::CommunityList::Standard::~Standard()
{
}

bool Native::Ip::CommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Standard::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::Standard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Standard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::CommunityList::Standard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "standard";
}

Native::Ip::CommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Standard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::CommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::Standard::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Standard::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::CommunityList::Standard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "standard";
}

Native::Ip::CommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Standard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::CommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::CommunityList::Standard::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Standard::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::ExtcommunityList::ExtcommunityList()
{
    yang_name = "extcommunity-list"; yang_parent_name = "ip";
}

Native::Ip::ExtcommunityList::~ExtcommunityList()
{
}

bool Native::Ip::ExtcommunityList::has_data() const
{
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::has_operation() const
{
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::ExtcommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:extcommunity-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded")
    {
        for(auto const & c : expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Expanded>();
        c->parent = this;
        expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "number-expanded")
    {
        for(auto const & c : number_expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded>();
        c->parent = this;
        number_expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "number-standard")
    {
        for(auto const & c : number_standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard>();
        c->parent = this;
        number_standard.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_standard)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::ExtcommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "extcommunity-list";
}

Native::Ip::ExtcommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberStandard::has_operation() const
{
    return is_set(operation)
	|| is_set(no.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.operation)) leaf_name_data.push_back(no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no")
    {
        no = value;
    }
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Deny()
{
    yang_name = "deny"; yang_parent_name = "number-standard";
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{
    yang_name = "rt"; yang_parent_name = "deny";
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Rt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{
    yang_name = "soo"; yang_parent_name = "deny";
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Soo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::Soo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{
    yang_name = "vpn-distinguisher"; yang_parent_name = "deny";
}

Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnDistinguisher' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Deny::VpnDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Permit()
{
    yang_name = "permit"; yang_parent_name = "number-standard";
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{
    yang_name = "rt"; yang_parent_name = "permit";
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Rt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{
    yang_name = "soo"; yang_parent_name = "permit";
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Soo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::Soo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{
    yang_name = "vpn-distinguisher"; yang_parent_name = "permit";
}

Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnDistinguisher' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberStandard::Permit::VpnDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "extcommunity-list";
}

Native::Ip::ExtcommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::NumberExpanded::has_operation() const
{
    return is_set(operation)
	|| is_set(no.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberExpanded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.operation)) leaf_name_data.push_back(no.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no")
    {
        no = value;
    }
}

Native::Ip::ExtcommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "number-expanded";
}

Native::Ip::ExtcommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::ExtcommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "number-expanded";
}

Native::Ip::ExtcommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::ExtcommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::Expanded::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "extcommunity-list";
}

Native::Ip::ExtcommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::ExtcommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Expanded::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Expanded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Expanded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "expanded";
}

Native::Ip::ExtcommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::ExtcommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Expanded::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Expanded::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::ExtcommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "expanded";
}

Native::Ip::ExtcommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::ExtcommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Expanded::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Expanded::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::ExtcommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "extcommunity-list";
}

Native::Ip::ExtcommunityList::Standard::~Standard()
{
}

bool Native::Ip::ExtcommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::ExtcommunityList::Standard::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::ExtcommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:extcommunity-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Standard::Deny::Deny()
{
    yang_name = "deny"; yang_parent_name = "standard";
}

Native::Ip::ExtcommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::Rt()
    :
    name{YType::str, "name"}
{
    yang_name = "rt"; yang_parent_name = "deny";
}

Native::Ip::ExtcommunityList::Standard::Deny::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Rt::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Rt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::Soo()
    :
    name{YType::str, "name"}
{
    yang_name = "soo"; yang_parent_name = "deny";
}

Native::Ip::ExtcommunityList::Standard::Deny::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::Soo::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Soo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::Soo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{
    yang_name = "vpn-distinguisher"; yang_parent_name = "deny";
}

Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnDistinguisher' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Deny::VpnDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Standard::Permit::Permit()
{
    yang_name = "permit"; yang_parent_name = "standard";
}

Native::Ip::ExtcommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_data() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::has_operation() const
{
    for (std::size_t index=0; index<rt.size(); index++)
    {
        if(rt[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<soo.size(); index++)
    {
        if(soo[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vpn_distinguisher.size(); index++)
    {
        if(vpn_distinguisher[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        for(auto const & c : rt)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Rt>();
        c->parent = this;
        rt.push_back(c);
        return c;
    }

    if(child_yang_name == "soo")
    {
        for(auto const & c : soo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::Soo>();
        c->parent = this;
        soo.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn-distinguisher")
    {
        for(auto const & c : vpn_distinguisher)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher>();
        c->parent = this;
        vpn_distinguisher.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rt)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : soo)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vpn_distinguisher)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::Rt()
    :
    name{YType::str, "name"}
{
    yang_name = "rt"; yang_parent_name = "permit";
}

Native::Ip::ExtcommunityList::Standard::Permit::Rt::~Rt()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Rt::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Rt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::Soo()
    :
    name{YType::str, "name"}
{
    yang_name = "soo"; yang_parent_name = "permit";
}

Native::Ip::ExtcommunityList::Standard::Permit::Soo::~Soo()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::Soo::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soo" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Soo' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::Soo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::Soo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::VpnDistinguisher()
    :
    name{YType::str, "name"}
{
    yang_name = "vpn-distinguisher"; yang_parent_name = "permit";
}

Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::~VpnDistinguisher()
{
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_data() const
{
    return name.is_set;
}

bool Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-distinguisher" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnDistinguisher' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ExtcommunityList::Standard::Permit::VpnDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Http::Http()
    :
    access_class{YType::uint8, "access-class"},
    secure_client_auth{YType::empty, "secure-client-auth"},
    secure_server{YType::boolean, "secure-server"},
    secure_trustpoint{YType::str, "secure-trustpoint"},
    server{YType::boolean, "server"}
    	,
    authentication(std::make_shared<Native::Ip::Http::Authentication>())
	,client(std::make_shared<Native::Ip::Http::Client>())
	,timeout_policy(std::make_shared<Native::Ip::Http::TimeoutPolicy>())
{
    authentication->parent = this;

    client->parent = this;

    timeout_policy->parent = this;

    yang_name = "http"; yang_parent_name = "ip";
}

Native::Ip::Http::~Http()
{
}

bool Native::Ip::Http::has_data() const
{
    return access_class.is_set
	|| secure_client_auth.is_set
	|| secure_server.is_set
	|| secure_trustpoint.is_set
	|| server.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (timeout_policy !=  nullptr && timeout_policy->has_data());
}

bool Native::Ip::Http::has_operation() const
{
    return is_set(operation)
	|| is_set(access_class.operation)
	|| is_set(secure_client_auth.operation)
	|| is_set(secure_server.operation)
	|| is_set(secure_trustpoint.operation)
	|| is_set(server.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (timeout_policy !=  nullptr && timeout_policy->has_operation());
}

std::string Native::Ip::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-http:http";

    return path_buffer.str();

}

const EntityPath Native::Ip::Http::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class.is_set || is_set(access_class.operation)) leaf_name_data.push_back(access_class.get_name_leafdata());
    if (secure_client_auth.is_set || is_set(secure_client_auth.operation)) leaf_name_data.push_back(secure_client_auth.get_name_leafdata());
    if (secure_server.is_set || is_set(secure_server.operation)) leaf_name_data.push_back(secure_server.get_name_leafdata());
    if (secure_trustpoint.is_set || is_set(secure_trustpoint.operation)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (server.is_set || is_set(server.operation)) leaf_name_data.push_back(server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Http::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Http::Client>();
        }
        return client;
    }

    if(child_yang_name == "timeout-policy")
    {
        if(timeout_policy == nullptr)
        {
            timeout_policy = std::make_shared<Native::Ip::Http::TimeoutPolicy>();
        }
        return timeout_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(timeout_policy != nullptr)
    {
        children["timeout-policy"] = timeout_policy;
    }

    return children;
}

void Native::Ip::Http::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-class")
    {
        access_class = value;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth = value;
    }
    if(value_path == "secure-server")
    {
        secure_server = value;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
    }
    if(value_path == "server")
    {
        server = value;
    }
}

Native::Ip::Http::Authentication::Authentication()
    :
    aaa{YType::empty, "aaa"},
    local{YType::empty, "local"}
{
    yang_name = "authentication"; yang_parent_name = "http";
}

Native::Ip::Http::Authentication::~Authentication()
{
}

bool Native::Ip::Http::Authentication::has_data() const
{
    return aaa.is_set
	|| local.is_set;
}

bool Native::Ip::Http::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa.operation)
	|| is_set(local.operation);
}

std::string Native::Ip::Http::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Ip::Http::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa.is_set || is_set(aaa.operation)) leaf_name_data.push_back(aaa.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Http::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Http::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa")
    {
        aaa = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Ip::Http::TimeoutPolicy::TimeoutPolicy()
    :
    idle{YType::uint16, "idle"},
    life{YType::uint32, "life"},
    requests{YType::uint32, "requests"}
{
    yang_name = "timeout-policy"; yang_parent_name = "http";
}

Native::Ip::Http::TimeoutPolicy::~TimeoutPolicy()
{
}

bool Native::Ip::Http::TimeoutPolicy::has_data() const
{
    return idle.is_set
	|| life.is_set
	|| requests.is_set;
}

bool Native::Ip::Http::TimeoutPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(idle.operation)
	|| is_set(life.operation)
	|| is_set(requests.operation);
}

std::string Native::Ip::Http::TimeoutPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-policy";

    return path_buffer.str();

}

const EntityPath Native::Ip::Http::TimeoutPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle.is_set || is_set(idle.operation)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (life.is_set || is_set(life.operation)) leaf_name_data.push_back(life.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Http::TimeoutPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::TimeoutPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Http::TimeoutPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle")
    {
        idle = value;
    }
    if(value_path == "life")
    {
        life = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
}

Native::Ip::Http::Client::Client()
    :
    secure_trustpoint{YType::str, "secure-trustpoint"},
    source_interface{YType::str, "source-interface"}
    	,
    proxy_server(std::make_shared<Native::Ip::Http::Client::ProxyServer>())
{
    proxy_server->parent = this;

    yang_name = "client"; yang_parent_name = "http";
}

Native::Ip::Http::Client::~Client()
{
}

bool Native::Ip::Http::Client::has_data() const
{
    return secure_trustpoint.is_set
	|| source_interface.is_set
	|| (proxy_server !=  nullptr && proxy_server->has_data());
}

bool Native::Ip::Http::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(secure_trustpoint.operation)
	|| is_set(source_interface.operation)
	|| (proxy_server !=  nullptr && proxy_server->has_operation());
}

std::string Native::Ip::Http::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Ip::Http::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secure_trustpoint.is_set || is_set(secure_trustpoint.operation)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Http::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-server")
    {
        if(proxy_server == nullptr)
        {
            proxy_server = std::make_shared<Native::Ip::Http::Client::ProxyServer>();
        }
        return proxy_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proxy_server != nullptr)
    {
        children["proxy-server"] = proxy_server;
    }

    return children;
}

void Native::Ip::Http::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Ip::Http::Client::ProxyServer::ProxyServer()
    :
    proxy_port{YType::uint16, "proxy-port"},
    proxy_server_name{YType::str, "proxy-server-name"}
{
    yang_name = "proxy-server"; yang_parent_name = "client";
}

Native::Ip::Http::Client::ProxyServer::~ProxyServer()
{
}

bool Native::Ip::Http::Client::ProxyServer::has_data() const
{
    return proxy_port.is_set
	|| proxy_server_name.is_set;
}

bool Native::Ip::Http::Client::ProxyServer::has_operation() const
{
    return is_set(operation)
	|| is_set(proxy_port.operation)
	|| is_set(proxy_server_name.operation);
}

std::string Native::Ip::Http::Client::ProxyServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-server";

    return path_buffer.str();

}

const EntityPath Native::Ip::Http::Client::ProxyServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/client/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_port.is_set || is_set(proxy_port.operation)) leaf_name_data.push_back(proxy_port.get_name_leafdata());
    if (proxy_server_name.is_set || is_set(proxy_server_name.operation)) leaf_name_data.push_back(proxy_server_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Http::Client::ProxyServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Http::Client::ProxyServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Http::Client::ProxyServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "proxy-port")
    {
        proxy_port = value;
    }
    if(value_path == "proxy-server-name")
    {
        proxy_server_name = value;
    }
}

Native::Ip::Icmp::Icmp()
    :
    rate_limit(std::make_shared<Native::Ip::Icmp::RateLimit>())
{
    rate_limit->parent = this;

    yang_name = "icmp"; yang_parent_name = "ip";
}

Native::Ip::Icmp::~Icmp()
{
}

bool Native::Ip::Icmp::has_data() const
{
    return (rate_limit !=  nullptr && rate_limit->has_data());
}

bool Native::Ip::Icmp::has_operation() const
{
    return is_set(operation)
	|| (rate_limit !=  nullptr && rate_limit->has_operation());
}

std::string Native::Ip::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-icmp:icmp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Icmp::RateLimit>();
        }
        return rate_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    return children;
}

void Native::Ip::Icmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Icmp::RateLimit::RateLimit()
    :
    redirect{YType::enumeration, "redirect"}
    	,
    unreachable(std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>())
{
    unreachable->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "icmp";
}

Native::Ip::Icmp::RateLimit::~RateLimit()
{
}

bool Native::Ip::Icmp::RateLimit::has_data() const
{
    return redirect.is_set
	|| (unreachable !=  nullptr && unreachable->has_data());
}

bool Native::Ip::Icmp::RateLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(redirect.operation)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

const EntityPath Native::Ip::Icmp::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect.is_set || is_set(redirect.operation)) leaf_name_data.push_back(redirect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unreachable")
    {
        if(unreachable == nullptr)
        {
            unreachable = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable>();
        }
        return unreachable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unreachable != nullptr)
    {
        children["unreachable"] = unreachable;
    }

    return children;
}

void Native::Ip::Icmp::RateLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redirect")
    {
        redirect = value;
    }
}

Native::Ip::Icmp::RateLimit::Unreachable::Unreachable()
    :
    df{YType::empty, "DF"},
    time{YType::uint32, "time"}
    	,
    log(nullptr) // presence node
{
    yang_name = "unreachable"; yang_parent_name = "rate-limit";
}

Native::Ip::Icmp::RateLimit::Unreachable::~Unreachable()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_data() const
{
    return df.is_set
	|| time.is_set
	|| (log !=  nullptr && log->has_data());
}

bool Native::Ip::Icmp::RateLimit::Unreachable::has_operation() const
{
    return is_set(operation)
	|| is_set(df.operation)
	|| is_set(time.operation)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";

    return path_buffer.str();

}

const EntityPath Native::Ip::Icmp::RateLimit::Unreachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df.is_set || is_set(df.operation)) leaf_name_data.push_back(df.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Ip::Icmp::RateLimit::Unreachable::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "DF")
    {
        df = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::Log()
    :
    log_message{YType::uint32, "log-message"},
    number_unreachables{YType::uint32, "number-unreachables"}
{
    yang_name = "log"; yang_parent_name = "unreachable";
}

Native::Ip::Icmp::RateLimit::Unreachable::Log::~Log()
{
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_data() const
{
    return log_message.is_set
	|| number_unreachables.is_set;
}

bool Native::Ip::Icmp::RateLimit::Unreachable::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(log_message.operation)
	|| is_set(number_unreachables.operation);
}

std::string Native::Ip::Icmp::RateLimit::Unreachable::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath Native::Ip::Icmp::RateLimit::Unreachable::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-icmp:icmp/rate-limit/unreachable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_message.is_set || is_set(log_message.operation)) leaf_name_data.push_back(log_message.get_name_leafdata());
    if (number_unreachables.is_set || is_set(number_unreachables.operation)) leaf_name_data.push_back(number_unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Icmp::RateLimit::Unreachable::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Icmp::RateLimit::Unreachable::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-message")
    {
        log_message = value;
    }
    if(value_path == "number-unreachables")
    {
        number_unreachables = value;
    }
}

Native::Ip::Igmp::Igmp()
    :
    snooping(std::make_shared<Native::Ip::Igmp::Snooping>())
	,snooping_conf(std::make_shared<Native::Ip::Igmp::SnoopingConf>())
	,ssm_map(std::make_shared<Native::Ip::Igmp::SsmMap>())
{
    snooping->parent = this;

    snooping_conf->parent = this;

    ssm_map->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip";
}

Native::Ip::Igmp::~Igmp()
{
}

bool Native::Ip::Igmp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return (snooping !=  nullptr && snooping->has_data())
	|| (snooping_conf !=  nullptr && snooping_conf->has_data())
	|| (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (snooping !=  nullptr && snooping->has_operation())
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation())
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    if(child_yang_name == "snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Igmp::SnoopingConf>();
        }
        return snooping_conf;
    }

    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ip::Igmp::SsmMap>();
        }
        return ssm_map;
    }

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
        auto c = std::make_shared<Native::Ip::Igmp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    if(snooping_conf != nullptr)
    {
        children["snooping-conf"] = snooping_conf;
    }

    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Igmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Igmp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::boolean, "snooping"}
{
    yang_name = "snooping-conf"; yang_parent_name = "igmp";
}

Native::Ip::Igmp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Igmp::SnoopingConf::has_data() const
{
    return snooping.is_set;
}

bool Native::Ip::Igmp::SnoopingConf::has_operation() const
{
    return is_set(operation)
	|| is_set(snooping.operation);
}

std::string Native::Ip::Igmp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping-conf";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::SnoopingConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snooping.is_set || is_set(snooping.operation)) leaf_name_data.push_back(snooping.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::SnoopingConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snooping")
    {
        snooping = value;
    }
}

Native::Ip::Igmp::Snooping::Snooping()
    :
    l2_entry_limit{YType::uint32, "l2-entry-limit"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"}
    	,
    check(std::make_shared<Native::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>())
	,querier(nullptr) // presence node
	,tcn(std::make_shared<Native::Ip::Igmp::Snooping::Tcn>())
	,vlan(std::make_shared<Native::Ip::Igmp::Snooping::Vlan>())
{
    check->parent = this;

    explicit_tracking->parent = this;

    tcn->parent = this;

    vlan->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp";
}

Native::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::Ip::Igmp::Snooping::has_data() const
{
    return l2_entry_limit.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (querier !=  nullptr && querier->has_data())
	|| (tcn !=  nullptr && tcn->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(operation)
	|| is_set(l2_entry_limit.operation)
	|| is_set(last_member_query_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(report_suppression.operation)
	|| is_set(robustness_variable.operation)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (querier !=  nullptr && querier->has_operation())
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2_entry_limit.is_set || is_set(l2_entry_limit.operation)) leaf_name_data.push_back(l2_entry_limit.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.operation)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.operation)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.operation)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Ip::Igmp::Snooping::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2-entry-limit")
    {
        l2_entry_limit = value;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
    }
}

Native::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{
    yang_name = "check"; yang_parent_name = "snooping";
}

Native::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(operation)
	|| is_set(rtr_alert_option.operation)
	|| is_set(ttl.operation);
}

std::string Native::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Check::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.operation)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::uint32, "limit"}
{
    yang_name = "explicit-tracking"; yang_parent_name = "snooping";
}

Native::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(operation)
	|| is_set(limit.operation);
}

std::string Native::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::ExplicitTracking::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.operation)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "limit")
    {
        limit = value;
    }
}

Native::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::str, "address"},
    max_response_time{YType::uint8, "max-response-time"},
    query_interval{YType::uint16, "query-interval"},
    version{YType::uint8, "version"}
    	,
    tcn(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>())
	,timer(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>())
{
    tcn->parent = this;

    timer->parent = this;

    yang_name = "querier"; yang_parent_name = "snooping";
}

Native::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| version.is_set
	|| (tcn !=  nullptr && tcn->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(max_response_time.operation)
	|| is_set(query_interval.operation)
	|| is_set(version.operation)
	|| (tcn !=  nullptr && tcn->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Querier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.operation)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcn")
    {
        if(tcn == nullptr)
        {
            tcn = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn>();
        }
        return tcn;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcn != nullptr)
    {
        children["tcn"] = tcn;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Tcn()
    :
    query(std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>())
{
    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "querier";
}

Native::Ip::Igmp::Snooping::Querier::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_data() const
{
    return (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::has_operation() const
{
    return is_set(operation)
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Querier::Tcn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Querier::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::Query()
    :
    count{YType::uint8, "count"},
    interval{YType::uint8, "interval"}
{
    yang_name = "query"; yang_parent_name = "tcn";
}

Native::Ip::Igmp::Snooping::Querier::Tcn::Query::~Query()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_data() const
{
    return count.is_set
	|| interval.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Tcn::Query::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/tcn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Tcn::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Querier::Tcn::Query::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Igmp::Snooping::Querier::Timer::Timer()
    :
    expiry{YType::uint16, "expiry"}
{
    yang_name = "timer"; yang_parent_name = "querier";
}

Native::Ip::Igmp::Snooping::Querier::Timer::~Timer()
{
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_data() const
{
    return expiry.is_set;
}

bool Native::Ip::Igmp::Snooping::Querier::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(expiry.operation);
}

std::string Native::Ip::Igmp::Snooping::Querier::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Querier::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/querier/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.operation)) leaf_name_data.push_back(expiry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Querier::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Querier::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Igmp::Snooping::Querier::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiry")
    {
        expiry = value;
    }
}

Native::Ip::Igmp::Snooping::Tcn::Tcn()
    :
    flood(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>())
	,query(std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>())
{
    flood->parent = this;

    query->parent = this;

    yang_name = "tcn"; yang_parent_name = "snooping";
}

Native::Ip::Igmp::Snooping::Tcn::~Tcn()
{
}

bool Native::Ip::Igmp::Snooping::Tcn::has_data() const
{
    return (flood !=  nullptr && flood->has_data())
	|| (query !=  nullptr && query->has_data());
}

bool Native::Ip::Igmp::Snooping::Tcn::has_operation() const
{
    return is_set(operation)
	|| (flood !=  nullptr && flood->has_operation())
	|| (query !=  nullptr && query->has_operation());
}

std::string Native::Ip::Igmp::Snooping::Tcn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcn";

    return path_buffer.str();

}

const EntityPath Native::Ip::Igmp::Snooping::Tcn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-igmp:igmp/snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Igmp::Snooping::Tcn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flood")
    {
        if(flood == nullptr)
        {
            flood = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Flood>();
        }
        return flood;
    }

    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ip::Igmp::Snooping::Tcn::Query>();
        }
        return query;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Igmp::Snooping::Tcn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flood != nullptr)
    {
        children["flood"] = flood;
    }

    if(query != nullptr)
    {
        children["query"] = query;
    }

    return children;
}

void Native::Ip::Igmp::Snooping::Tcn::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Ip::Route::Vrf::IpRouteInterfaceForwardingList::FwdList::FwdEnum::Null0 {0, "Null0"};

const Enum::YLeaf Native::Ip::ExplicitPath::ModeEnum::enable {0, "enable"};
const Enum::YLeaf Native::Ip::ExplicitPath::ModeEnum::disable {1, "disable"};

const Enum::YLeaf Native::Ip::Spd::ModeEnum::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Ip::Ssh::PubkeyChain::Username::KeyHash::KeyTypeEnum::ssh_rsa {0, "ssh-rsa"};

const Enum::YLeaf Native::Ip::Tcp::PathMtuDiscovery::AgeTimerEnum::infinite {0, "infinite"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::ProtocolEnum::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::OptionEnum::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::PrecedenceEnum::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::TosEnum::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::TosEnum::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::TosEnum::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::TosEnum::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::TosEnum::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::ProtocolEnum::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::OptionEnum::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::TosEnum::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::TosEnum::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::TosEnum::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::TosEnum::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::TosEnum::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::ProtocolEnum::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::OptionEnum::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::PrecedenceEnum::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::TosEnum::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::TosEnum::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::TosEnum::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::TosEnum::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::TosEnum::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ActionEnum::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ActionEnum::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::ProtocolEnum::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::OptionEnum::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::PrecedenceEnum::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::TosEnum::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::TosEnum::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::TosEnum::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::TosEnum::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::TosEnum::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgTypeEnum::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::Icmp::RateLimit::RedirectEnum::host {0, "host"};
const Enum::YLeaf Native::Ip::Icmp::RateLimit::RedirectEnum::subnet {1, "subnet"};


}
}

