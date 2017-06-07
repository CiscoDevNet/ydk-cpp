
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_9.hpp"
#include "Cisco_IOS_XE_native_8.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Flow::Monitor::Default_::Statistics::Packet::Packet()
    :
    protocol{YType::empty, "protocol"},
    size{YType::empty, "size"}
{
    yang_name = "packet"; yang_parent_name = "statistics";
}

Native::Flow::Monitor::Default_::Statistics::Packet::~Packet()
{
}

bool Native::Flow::Monitor::Default_::Statistics::Packet::has_data() const
{
    return protocol.is_set
	|| size.is_set;
}

bool Native::Flow::Monitor::Default_::Statistics::Packet::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation)
	|| is_set(size.operation);
}

std::string Native::Flow::Monitor::Default_::Statistics::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";

    return path_buffer.str();

}

const EntityPath Native::Flow::Monitor::Default_::Statistics::Packet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Packet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Flow::Monitor::Default_::Statistics::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Flow::Monitor::Default_::Statistics::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Flow::Monitor::Default_::Statistics::Packet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

Native::Ip::Ip()
    :
    classless{YType::empty, "classless"},
    default_gateway{YType::str, "default-gateway"},
    domain_name{YType::str, "domain-name"},
    host_routing{YType::empty, "host-routing"},
    routing{YType::empty, "routing"},
    source_route{YType::boolean, "source-route"},
    subnet_zero{YType::boolean, "subnet-zero"}
    	,
    access_list(std::make_shared<Native::Ip::AccessList>())
	,admission(std::make_shared<Native::Ip::Admission>())
	,arp(std::make_shared<Native::Ip::Arp>())
	,as_path(std::make_shared<Native::Ip::AsPath>())
	,bgp_community(std::make_shared<Native::Ip::BgpCommunity>())
	,bootp(std::make_shared<Native::Ip::Bootp>())
	,cef(nullptr) // presence node
	,community_list(std::make_shared<Native::Ip::CommunityList>())
	,device(std::make_shared<Native::Ip::Device>())
	,dhcp(std::make_shared<Native::Ip::Dhcp>())
	,dns(std::make_shared<Native::Ip::Dns>())
	,domain(std::make_shared<Native::Ip::Domain>())
	,domain_list(std::make_shared<Native::Ip::DomainList>())
	,domain_lookup(nullptr) // presence node
	,domain_lookup_conf(std::make_shared<Native::Ip::DomainLookupConf>())
	,extcommunity_list(std::make_shared<Native::Ip::ExtcommunityList>())
	,finger(nullptr) // presence node
	,forward_protocol(std::make_shared<Native::Ip::ForwardProtocol>())
	,ftp(std::make_shared<Native::Ip::Ftp>())
	,http(std::make_shared<Native::Ip::Http>())
	,icmp(std::make_shared<Native::Ip::Icmp>())
	,igmp(std::make_shared<Native::Ip::Igmp>())
	,local(std::make_shared<Native::Ip::Local>())
	,mcr_conf(std::make_shared<Native::Ip::McrConf>())
	,mroute(std::make_shared<Native::Ip::Mroute>())
	,msdp(std::make_shared<Native::Ip::Msdp>())
	,multicast(std::make_shared<Native::Ip::Multicast>())
	,multicast_routing(nullptr) // presence node
	,name_server(std::make_shared<Native::Ip::NameServer>())
	,nat(std::make_shared<Native::Ip::Nat>())
	,nbar(std::make_shared<Native::Ip::Nbar>())
	,pim(std::make_shared<Native::Ip::Pim>())
	,prefix_list(std::make_shared<Native::Ip::PrefixList>())
	,radius(std::make_shared<Native::Ip::Radius>())
	,rcmd(std::make_shared<Native::Ip::Rcmd>())
	,route(std::make_shared<Native::Ip::Route>())
	,scp(std::make_shared<Native::Ip::Scp>())
	,sla(std::make_shared<Native::Ip::Sla>())
	,spd(std::make_shared<Native::Ip::Spd>())
	,ssh(std::make_shared<Native::Ip::Ssh>())
	,tacacs(std::make_shared<Native::Ip::Tacacs>())
	,tcp(std::make_shared<Native::Ip::Tcp>())
	,telnet(std::make_shared<Native::Ip::Telnet>())
	,tftp(std::make_shared<Native::Ip::Tftp>())
	,wccp(std::make_shared<Native::Ip::Wccp>())
{
    access_list->parent = this;

    admission->parent = this;

    arp->parent = this;

    as_path->parent = this;

    bgp_community->parent = this;

    bootp->parent = this;

    community_list->parent = this;

    device->parent = this;

    dhcp->parent = this;

    dns->parent = this;

    domain->parent = this;

    domain_list->parent = this;

    domain_lookup_conf->parent = this;

    extcommunity_list->parent = this;

    forward_protocol->parent = this;

    ftp->parent = this;

    http->parent = this;

    icmp->parent = this;

    igmp->parent = this;

    local->parent = this;

    mcr_conf->parent = this;

    mroute->parent = this;

    msdp->parent = this;

    multicast->parent = this;

    name_server->parent = this;

    nat->parent = this;

    nbar->parent = this;

    pim->parent = this;

    prefix_list->parent = this;

    radius->parent = this;

    rcmd->parent = this;

    route->parent = this;

    scp->parent = this;

    sla->parent = this;

    spd->parent = this;

    ssh->parent = this;

    tacacs->parent = this;

    tcp->parent = this;

    telnet->parent = this;

    tftp->parent = this;

    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "native";
}

Native::Ip::~Ip()
{
}

bool Native::Ip::has_data() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return classless.is_set
	|| default_gateway.is_set
	|| domain_name.is_set
	|| host_routing.is_set
	|| routing.is_set
	|| source_route.is_set
	|| subnet_zero.is_set
	|| (access_list !=  nullptr && access_list->has_data())
	|| (admission !=  nullptr && admission->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (bgp_community !=  nullptr && bgp_community->has_data())
	|| (bootp !=  nullptr && bootp->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (community_list !=  nullptr && community_list->has_data())
	|| (device !=  nullptr && device->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_list !=  nullptr && domain_list->has_data())
	|| (domain_lookup !=  nullptr && domain_lookup->has_data())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_data())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_data())
	|| (finger !=  nullptr && finger->has_data())
	|| (forward_protocol !=  nullptr && forward_protocol->has_data())
	|| (ftp !=  nullptr && ftp->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (mcr_conf !=  nullptr && mcr_conf->has_data())
	|| (mroute !=  nullptr && mroute->has_data())
	|| (msdp !=  nullptr && msdp->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (multicast_routing !=  nullptr && multicast_routing->has_data())
	|| (name_server !=  nullptr && name_server->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (prefix_list !=  nullptr && prefix_list->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (rcmd !=  nullptr && rcmd->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (scp !=  nullptr && scp->has_data())
	|| (sla !=  nullptr && sla->has_data())
	|| (spd !=  nullptr && spd->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (tftp !=  nullptr && tftp->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Ip::has_operation() const
{
    for (std::size_t index=0; index<explicit_path.size(); index++)
    {
        if(explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(classless.operation)
	|| is_set(default_gateway.operation)
	|| is_set(domain_name.operation)
	|| is_set(host_routing.operation)
	|| is_set(routing.operation)
	|| is_set(source_route.operation)
	|| is_set(subnet_zero.operation)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (admission !=  nullptr && admission->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (bgp_community !=  nullptr && bgp_community->has_operation())
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (community_list !=  nullptr && community_list->has_operation())
	|| (device !=  nullptr && device->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_list !=  nullptr && domain_list->has_operation())
	|| (domain_lookup !=  nullptr && domain_lookup->has_operation())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_operation())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_operation())
	|| (finger !=  nullptr && finger->has_operation())
	|| (forward_protocol !=  nullptr && forward_protocol->has_operation())
	|| (ftp !=  nullptr && ftp->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (mcr_conf !=  nullptr && mcr_conf->has_operation())
	|| (mroute !=  nullptr && mroute->has_operation())
	|| (msdp !=  nullptr && msdp->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (multicast_routing !=  nullptr && multicast_routing->has_operation())
	|| (name_server !=  nullptr && name_server->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (prefix_list !=  nullptr && prefix_list->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (rcmd !=  nullptr && rcmd->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (scp !=  nullptr && scp->has_operation())
	|| (sla !=  nullptr && sla->has_operation())
	|| (spd !=  nullptr && spd->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (tftp !=  nullptr && tftp->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classless.is_set || is_set(classless.operation)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (default_gateway.is_set || is_set(default_gateway.operation)) leaf_name_data.push_back(default_gateway.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (host_routing.is_set || is_set(host_routing.operation)) leaf_name_data.push_back(host_routing.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());
    if (source_route.is_set || is_set(source_route.operation)) leaf_name_data.push_back(source_route.get_name_leafdata());
    if (subnet_zero.is_set || is_set(subnet_zero.operation)) leaf_name_data.push_back(subnet_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Ip::Admission>();
        }
        return admission;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::Ip::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "bgp-community")
    {
        if(bgp_community == nullptr)
        {
            bgp_community = std::make_shared<Native::Ip::BgpCommunity>();
        }
        return bgp_community;
    }

    if(child_yang_name == "bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Ip::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "community-list")
    {
        if(community_list == nullptr)
        {
            community_list = std::make_shared<Native::Ip::CommunityList>();
        }
        return community_list;
    }

    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Ip::Device>();
        }
        return device;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Ip::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-list")
    {
        if(domain_list == nullptr)
        {
            domain_list = std::make_shared<Native::Ip::DomainList>();
        }
        return domain_list;
    }

    if(child_yang_name == "domain-lookup")
    {
        if(domain_lookup == nullptr)
        {
            domain_lookup = std::make_shared<Native::Ip::DomainLookup>();
        }
        return domain_lookup;
    }

    if(child_yang_name == "domain-lookup-conf")
    {
        if(domain_lookup_conf == nullptr)
        {
            domain_lookup_conf = std::make_shared<Native::Ip::DomainLookupConf>();
        }
        return domain_lookup_conf;
    }

    if(child_yang_name == "explicit-path")
    {
        for(auto const & c : explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::ExplicitPath>();
        c->parent = this;
        explicit_path.push_back(c);
        return c;
    }

    if(child_yang_name == "extcommunity-list")
    {
        if(extcommunity_list == nullptr)
        {
            extcommunity_list = std::make_shared<Native::Ip::ExtcommunityList>();
        }
        return extcommunity_list;
    }

    if(child_yang_name == "finger")
    {
        if(finger == nullptr)
        {
            finger = std::make_shared<Native::Ip::Finger>();
        }
        return finger;
    }

    if(child_yang_name == "forward-protocol")
    {
        if(forward_protocol == nullptr)
        {
            forward_protocol = std::make_shared<Native::Ip::ForwardProtocol>();
        }
        return forward_protocol;
    }

    if(child_yang_name == "ftp")
    {
        if(ftp == nullptr)
        {
            ftp = std::make_shared<Native::Ip::Ftp>();
        }
        return ftp;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Http>();
        }
        return http;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Ip::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "mcr-conf")
    {
        if(mcr_conf == nullptr)
        {
            mcr_conf = std::make_shared<Native::Ip::McrConf>();
        }
        return mcr_conf;
    }

    if(child_yang_name == "mroute")
    {
        if(mroute == nullptr)
        {
            mroute = std::make_shared<Native::Ip::Mroute>();
        }
        return mroute;
    }

    if(child_yang_name == "msdp")
    {
        if(msdp == nullptr)
        {
            msdp = std::make_shared<Native::Ip::Msdp>();
        }
        return msdp;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Ip::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "multicast-routing")
    {
        if(multicast_routing == nullptr)
        {
            multicast_routing = std::make_shared<Native::Ip::MulticastRouting>();
        }
        return multicast_routing;
    }

    if(child_yang_name == "name-server")
    {
        if(name_server == nullptr)
        {
            name_server = std::make_shared<Native::Ip::NameServer>();
        }
        return name_server;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Native::Ip::PrefixList>();
        }
        return prefix_list;
    }

    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Ip::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "rcmd")
    {
        if(rcmd == nullptr)
        {
            rcmd = std::make_shared<Native::Ip::Rcmd>();
        }
        return rcmd;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "scp")
    {
        if(scp == nullptr)
        {
            scp = std::make_shared<Native::Ip::Scp>();
        }
        return scp;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Ip::Sla>();
        }
        return sla;
    }

    if(child_yang_name == "spd")
    {
        if(spd == nullptr)
        {
            spd = std::make_shared<Native::Ip::Spd>();
        }
        return spd;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Native::Ip::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Ip::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Ip::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "tftp")
    {
        if(tftp == nullptr)
        {
            tftp = std::make_shared<Native::Ip::Tftp>();
        }
        return tftp;
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
        auto c = std::make_shared<Native::Ip::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(bgp_community != nullptr)
    {
        children["bgp-community"] = bgp_community;
    }

    if(bootp != nullptr)
    {
        children["bootp"] = bootp;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(community_list != nullptr)
    {
        children["community-list"] = community_list;
    }

    if(device != nullptr)
    {
        children["device"] = device;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(domain_list != nullptr)
    {
        children["domain-list"] = domain_list;
    }

    if(domain_lookup != nullptr)
    {
        children["domain-lookup"] = domain_lookup;
    }

    if(domain_lookup_conf != nullptr)
    {
        children["domain-lookup-conf"] = domain_lookup_conf;
    }

    for (auto const & c : explicit_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(extcommunity_list != nullptr)
    {
        children["extcommunity-list"] = extcommunity_list;
    }

    if(finger != nullptr)
    {
        children["finger"] = finger;
    }

    if(forward_protocol != nullptr)
    {
        children["forward-protocol"] = forward_protocol;
    }

    if(ftp != nullptr)
    {
        children["ftp"] = ftp;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(mcr_conf != nullptr)
    {
        children["mcr-conf"] = mcr_conf;
    }

    if(mroute != nullptr)
    {
        children["mroute"] = mroute;
    }

    if(msdp != nullptr)
    {
        children["msdp"] = msdp;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(multicast_routing != nullptr)
    {
        children["multicast-routing"] = multicast_routing;
    }

    if(name_server != nullptr)
    {
        children["name-server"] = name_server;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    if(rcmd != nullptr)
    {
        children["rcmd"] = rcmd;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(scp != nullptr)
    {
        children["scp"] = scp;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    if(spd != nullptr)
    {
        children["spd"] = spd;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tacacs != nullptr)
    {
        children["tacacs"] = tacacs;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(tftp != nullptr)
    {
        children["tftp"] = tftp;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(wccp != nullptr)
    {
        children["wccp"] = wccp;
    }

    return children;
}

void Native::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "classless")
    {
        classless = value;
    }
    if(value_path == "default-gateway")
    {
        default_gateway = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "host-routing")
    {
        host_routing = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
    if(value_path == "source-route")
    {
        source_route = value;
    }
    if(value_path == "subnet-zero")
    {
        subnet_zero = value;
    }
}

Native::Ip::Admission::Admission()
    :
    name(std::make_shared<Native::Ip::Admission::Name>())
	,watch_list(std::make_shared<Native::Ip::Admission::WatchList>())
{
    name->parent = this;

    watch_list->parent = this;

    yang_name = "admission"; yang_parent_name = "ip";
}

Native::Ip::Admission::~Admission()
{
}

bool Native::Ip::Admission::has_data() const
{
    return (name !=  nullptr && name->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data());
}

bool Native::Ip::Admission::has_operation() const
{
    return is_set(operation)
	|| (name !=  nullptr && name->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation());
}

std::string Native::Ip::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";

    return path_buffer.str();

}

const EntityPath Native::Ip::Admission::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Ip::Admission::Name>();
        }
        return name;
    }

    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::Ip::Admission::WatchList>();
        }
        return watch_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    return children;
}

void Native::Ip::Admission::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Admission::WatchList::WatchList()
    :
    expiry_time{YType::uint16, "expiry-time"}
{
    yang_name = "watch-list"; yang_parent_name = "admission";
}

Native::Ip::Admission::WatchList::~WatchList()
{
}

bool Native::Ip::Admission::WatchList::has_data() const
{
    return expiry_time.is_set;
}

bool Native::Ip::Admission::WatchList::has_operation() const
{
    return is_set(operation)
	|| is_set(expiry_time.operation);
}

std::string Native::Ip::Admission::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::Admission::WatchList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Admission::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Admission::WatchList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiry-time")
    {
        expiry_time = value;
    }
}

Native::Ip::Admission::Name::Name()
    :
    webauth(std::make_shared<Native::Ip::Admission::Name::Webauth>())
{
    webauth->parent = this;

    yang_name = "name"; yang_parent_name = "admission";
}

Native::Ip::Admission::Name::~Name()
{
}

bool Native::Ip::Admission::Name::has_data() const
{
    return (webauth !=  nullptr && webauth->has_data());
}

bool Native::Ip::Admission::Name::has_operation() const
{
    return is_set(operation)
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Ip::Admission::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Ip::Admission::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Ip::Admission::Name::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Ip::Admission::Name::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Admission::Name::Webauth::Webauth()
    :
    proxy(std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>())
{
    proxy->parent = this;

    yang_name = "webauth"; yang_parent_name = "name";
}

Native::Ip::Admission::Name::Webauth::~Webauth()
{
}

bool Native::Ip::Admission::Name::Webauth::has_data() const
{
    return (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Admission::Name::Webauth::has_operation() const
{
    return is_set(operation)
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Admission::Name::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";

    return path_buffer.str();

}

const EntityPath Native::Ip::Admission::Name::Webauth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Admission::Name::Webauth::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Admission::Name::Webauth::Proxy::Proxy()
    :
    http{YType::empty, "http"}
{
    yang_name = "proxy"; yang_parent_name = "webauth";
}

Native::Ip::Admission::Name::Webauth::Proxy::~Proxy()
{
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_data() const
{
    return http.is_set;
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_operation() const
{
    return is_set(operation)
	|| is_set(http.operation);
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

const EntityPath Native::Ip::Admission::Name::Webauth::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/webauth/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http.is_set || is_set(http.operation)) leaf_name_data.push_back(http.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "http")
    {
        http = value;
    }
}

Native::Ip::Arp::Arp()
    :
    incomplete(std::make_shared<Native::Ip::Arp::Incomplete>())
	,inspection(std::make_shared<Native::Ip::Arp::Inspection>())
	,proxy(std::make_shared<Native::Ip::Arp::Proxy>())
{
    incomplete->parent = this;

    inspection->parent = this;

    proxy->parent = this;

    yang_name = "arp"; yang_parent_name = "ip";
}

Native::Ip::Arp::~Arp()
{
}

bool Native::Ip::Arp::has_data() const
{
    return (incomplete !=  nullptr && incomplete->has_data())
	|| (inspection !=  nullptr && inspection->has_data())
	|| (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Arp::has_operation() const
{
    return is_set(operation)
	|| (incomplete !=  nullptr && incomplete->has_operation())
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incomplete")
    {
        if(incomplete == nullptr)
        {
            incomplete = std::make_shared<Native::Ip::Arp::Incomplete>();
        }
        return incomplete;
    }

    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Arp::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incomplete != nullptr)
    {
        children["incomplete"] = incomplete;
    }

    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Arp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Arp::Incomplete::Incomplete()
    :
    entries{YType::uint32, "entries"}
{
    yang_name = "incomplete"; yang_parent_name = "arp";
}

Native::Ip::Arp::Incomplete::~Incomplete()
{
}

bool Native::Ip::Arp::Incomplete::has_data() const
{
    return entries.is_set;
}

bool Native::Ip::Arp::Incomplete::has_operation() const
{
    return is_set(operation)
	|| is_set(entries.operation);
}

std::string Native::Ip::Arp::Incomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incomplete";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Incomplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.operation)) leaf_name_data.push_back(entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Incomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Incomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Incomplete::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entries")
    {
        entries = value;
    }
}

Native::Ip::Arp::Inspection::Inspection()
    :
    vlan{YType::str, "vlan"}
    	,
    log_buffer(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>())
	,validate(std::make_shared<Native::Ip::Arp::Inspection::Validate>())
{
    log_buffer->parent = this;

    validate->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp";
}

Native::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Ip::Arp::Inspection::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return vlan.is_set
	|| (log_buffer !=  nullptr && log_buffer->has_data())
	|| (validate !=  nullptr && validate->has_data());
}

bool Native::Ip::Arp::Inspection::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vlan.operation)
	|| (log_buffer !=  nullptr && log_buffer->has_operation())
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "log-buffer")
    {
        if(log_buffer == nullptr)
        {
            log_buffer = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>();
        }
        return log_buffer;
    }

    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ip::Arp::Inspection::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    if(log_buffer != nullptr)
    {
        children["log-buffer"] = log_buffer;
    }

    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Ip::Arp::Inspection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Ip::Arp::Inspection::Filter::Filter()
    :
    arpacl{YType::str, "arpacl"}
{
    yang_name = "filter"; yang_parent_name = "inspection";
}

Native::Ip::Arp::Inspection::Filter::~Filter()
{
}

bool Native::Ip::Arp::Inspection::Filter::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return arpacl.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(arpacl.operation);
}

std::string Native::Ip::Arp::Inspection::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter" <<"[arpacl='" <<arpacl <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::Filter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpacl.is_set || is_set(arpacl.operation)) leaf_name_data.push_back(arpacl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Filter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arpacl")
    {
        arpacl = value;
    }
}

Native::Ip::Arp::Inspection::Filter::Vlan::Vlan()
    :
    vlan_range{YType::str, "vlan-range"},
    static_{YType::empty, "static"}
{
    yang_name = "vlan"; yang_parent_name = "filter";
}

Native::Ip::Arp::Inspection::Filter::Vlan::~Vlan()
{
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_data() const
{
    return vlan_range.is_set
	|| static_.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan_range.operation)
	|| is_set(static_.operation);
}

std::string Native::Ip::Arp::Inspection::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan-range='" <<vlan_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::Filter::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_range.is_set || is_set(vlan_range.operation)) leaf_name_data.push_back(vlan_range.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan-range")
    {
        vlan_range = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::Ip::Arp::Inspection::Validate::Validate()
    :
    dst_mac{YType::empty, "dst-mac"},
    ip{YType::empty, "ip"},
    src_mac{YType::empty, "src-mac"}
    	,
    allow(std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>())
{
    allow->parent = this;

    yang_name = "validate"; yang_parent_name = "inspection";
}

Native::Ip::Arp::Inspection::Validate::~Validate()
{
}

bool Native::Ip::Arp::Inspection::Validate::has_data() const
{
    return dst_mac.is_set
	|| ip.is_set
	|| src_mac.is_set
	|| (allow !=  nullptr && allow->has_data());
}

bool Native::Ip::Arp::Inspection::Validate::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_mac.operation)
	|| is_set(ip.operation)
	|| is_set(src_mac.operation)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Ip::Arp::Inspection::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::Validate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_mac.is_set || is_set(dst_mac.operation)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (src_mac.is_set || is_set(src_mac.operation)) leaf_name_data.push_back(src_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Validate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-mac")
    {
        dst_mac = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "src-mac")
    {
        src_mac = value;
    }
}

Native::Ip::Arp::Inspection::Validate::Allow::Allow()
    :
    zeros{YType::empty, "zeros"}
{
    yang_name = "allow"; yang_parent_name = "validate";
}

Native::Ip::Arp::Inspection::Validate::Allow::~Allow()
{
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_data() const
{
    return zeros.is_set;
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_operation() const
{
    return is_set(operation)
	|| is_set(zeros.operation);
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::Validate::Allow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/validate/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zeros.is_set || is_set(zeros.operation)) leaf_name_data.push_back(zeros.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "zeros")
    {
        zeros = value;
    }
}

Native::Ip::Arp::Inspection::LogBuffer::LogBuffer()
    :
    entries{YType::uint16, "entries"}
    	,
    logs(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>())
{
    logs->parent = this;

    yang_name = "log-buffer"; yang_parent_name = "inspection";
}

Native::Ip::Arp::Inspection::LogBuffer::~LogBuffer()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_data() const
{
    return entries.is_set
	|| (logs !=  nullptr && logs->has_data());
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(entries.operation)
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-buffer";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::LogBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.operation)) leaf_name_data.push_back(entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>();
        }
        return logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logs != nullptr)
    {
        children["logs"] = logs;
    }

    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entries")
    {
        entries = value;
    }
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::Logs()
    :
    entries{YType::uint16, "entries"},
    interval{YType::uint32, "interval"}
{
    yang_name = "logs"; yang_parent_name = "log-buffer";
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::~Logs()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_data() const
{
    return entries.is_set
	|| interval.is_set;
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_operation() const
{
    return is_set(operation)
	|| is_set(entries.operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Inspection::LogBuffer::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/log-buffer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.operation)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entries")
    {
        entries = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Arp::Proxy::Proxy()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "proxy"; yang_parent_name = "arp";
}

Native::Ip::Arp::Proxy::~Proxy()
{
}

bool Native::Ip::Arp::Proxy::has_data() const
{
    return disable.is_set;
}

bool Native::Ip::Arp::Proxy::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Ip::Arp::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";

    return path_buffer.str();

}

const EntityPath Native::Ip::Arp::Proxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Arp::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Proxy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Ip::DomainList::DomainList()
    :
    domain_name{YType::str, "domain-name"}
    	,
    vrf(std::make_shared<Native::Ip::DomainList::Vrf>())
{
    vrf->parent = this;

    yang_name = "domain-list"; yang_parent_name = "ip";
}

Native::Ip::DomainList::~DomainList()
{
}

bool Native::Ip::DomainList::has_data() const
{
    return domain_name.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::DomainList::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::DomainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainList::get_entity_path(Entity* ancestor) const
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

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::DomainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::DomainList::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ip::DomainList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
}

Native::Ip::DomainList::Vrf::Vrf()
    :
    domain_name{YType::str, "domain-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf"; yang_parent_name = "domain-list";
}

Native::Ip::DomainList::Vrf::~Vrf()
{
}

bool Native::Ip::DomainList::Vrf::has_data() const
{
    return domain_name.is_set
	|| vrf_name.is_set;
}

bool Native::Ip::DomainList::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Native::Ip::DomainList::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainList::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::DomainList::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainList::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainList::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Ip::Finger::Finger()
{
    yang_name = "finger"; yang_parent_name = "ip";
}

Native::Ip::Finger::~Finger()
{
}

bool Native::Ip::Finger::has_data() const
{
    return false;
}

bool Native::Ip::Finger::has_operation() const
{
    return is_set(operation);
}

std::string Native::Ip::Finger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "finger";

    return path_buffer.str();

}

const EntityPath Native::Ip::Finger::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Finger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Finger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Finger::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Rcmd::Rcmd()
    :
    rcp_enable{YType::empty, "rcp-enable"},
    rsh_enable{YType::empty, "rsh-enable"}
{
    yang_name = "rcmd"; yang_parent_name = "ip";
}

Native::Ip::Rcmd::~Rcmd()
{
}

bool Native::Ip::Rcmd::has_data() const
{
    return rcp_enable.is_set
	|| rsh_enable.is_set;
}

bool Native::Ip::Rcmd::has_operation() const
{
    return is_set(operation)
	|| is_set(rcp_enable.operation)
	|| is_set(rsh_enable.operation);
}

std::string Native::Ip::Rcmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcmd";

    return path_buffer.str();

}

const EntityPath Native::Ip::Rcmd::get_entity_path(Entity* ancestor) const
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

    if (rcp_enable.is_set || is_set(rcp_enable.operation)) leaf_name_data.push_back(rcp_enable.get_name_leafdata());
    if (rsh_enable.is_set || is_set(rsh_enable.operation)) leaf_name_data.push_back(rsh_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Rcmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rcmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Rcmd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rcp-enable")
    {
        rcp_enable = value;
    }
    if(value_path == "rsh-enable")
    {
        rsh_enable = value;
    }
}

Native::Ip::BgpCommunity::BgpCommunity()
    :
    new_format{YType::empty, "new-format"}
{
    yang_name = "bgp-community"; yang_parent_name = "ip";
}

Native::Ip::BgpCommunity::~BgpCommunity()
{
}

bool Native::Ip::BgpCommunity::has_data() const
{
    return new_format.is_set;
}

bool Native::Ip::BgpCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(new_format.operation);
}

std::string Native::Ip::BgpCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-community";

    return path_buffer.str();

}

const EntityPath Native::Ip::BgpCommunity::get_entity_path(Entity* ancestor) const
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

    if (new_format.is_set || is_set(new_format.operation)) leaf_name_data.push_back(new_format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::BgpCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::BgpCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::BgpCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "new-format")
    {
        new_format = value;
    }
}

Native::Ip::Vrf::Vrf()
    :
    name{YType::str, "name"},
    context{YType::str, "context"},
    description{YType::str, "description"},
    rd{YType::str, "rd"}
    	,
    bgp(std::make_shared<Native::Ip::Vrf::Bgp>())
	,export_(std::make_shared<Native::Ip::Vrf::Export_>())
	,import(std::make_shared<Native::Ip::Vrf::Import>())
	,maximum(nullptr) // presence node
	,mdt(nullptr) // presence node
	,vpn(std::make_shared<Native::Ip::Vrf::Vpn>())
{
    bgp->parent = this;

    export_->parent = this;

    import->parent = this;

    vpn->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Ip::Vrf::~Vrf()
{
}

bool Native::Ip::Vrf::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return name.is_set
	|| context.is_set
	|| description.is_set
	|| rd.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (export_ !=  nullptr && export_->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (mdt !=  nullptr && mdt->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Ip::Vrf::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(context.operation)
	|| is_set(description.operation)
	|| is_set(rd.operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (export_ !=  nullptr && export_->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (mdt !=  nullptr && mdt->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::get_entity_path(Entity* ancestor) const
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
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Ip::Vrf::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "export")
    {
        if(export_ == nullptr)
        {
            export_ = std::make_shared<Native::Ip::Vrf::Export_>();
        }
        return export_;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Ip::Vrf::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::Ip::Vrf::Maximum>();
        }
        return maximum;
    }

    if(child_yang_name == "mdt")
    {
        if(mdt == nullptr)
        {
            mdt = std::make_shared<Native::Ip::Vrf::Mdt>();
        }
        return mdt;
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Vrf::RouteTarget>();
        c->parent = this;
        route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Ip::Vrf::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(export_ != nullptr)
    {
        children["export"] = export_;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    if(mdt != nullptr)
    {
        children["mdt"] = mdt;
    }

    for (auto const & c : route_target)
    {
        children[c->get_segment_path()] = c;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "rd")
    {
        rd = value;
    }
}

Native::Ip::Vrf::Bgp::Bgp()
    :
    next_hop(std::make_shared<Native::Ip::Vrf::Bgp::NextHop>())
{
    next_hop->parent = this;

    yang_name = "bgp"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::Bgp::~Bgp()
{
}

bool Native::Ip::Vrf::Bgp::has_data() const
{
    return (next_hop !=  nullptr && next_hop->has_data());
}

bool Native::Ip::Vrf::Bgp::has_operation() const
{
    return is_set(operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Native::Ip::Vrf::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Native::Ip::Vrf::Bgp::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Native::Ip::Vrf::Bgp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Vrf::Bgp::NextHop::NextHop()
    :
    loopback{YType::uint32, "Loopback"}
{
    yang_name = "next-hop"; yang_parent_name = "bgp";
}

Native::Ip::Vrf::Bgp::NextHop::~NextHop()
{
}

bool Native::Ip::Vrf::Bgp::NextHop::has_data() const
{
    return loopback.is_set;
}

bool Native::Ip::Vrf::Bgp::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(loopback.operation);
}

std::string Native::Ip::Vrf::Bgp::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Bgp::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Bgp::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Bgp::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Bgp::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Loopback")
    {
        loopback = value;
    }
}

Native::Ip::Vrf::Export_::Export_()
    :
    map{YType::str, "map"}
{
    yang_name = "export"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::Export_::~Export_()
{
}

bool Native::Ip::Vrf::Export_::has_data() const
{
    return map.is_set;
}

bool Native::Ip::Vrf::Export_::has_operation() const
{
    return is_set(operation)
	|| is_set(map.operation);
}

std::string Native::Ip::Vrf::Export_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Export_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Export_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.operation)) leaf_name_data.push_back(map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Export_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Export_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Export_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map")
    {
        map = value;
    }
}

Native::Ip::Vrf::Import::Import()
    :
    map{YType::str, "map"}
    	,
    ipv4(std::make_shared<Native::Ip::Vrf::Import::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "import"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::Import::~Import()
{
}

bool Native::Ip::Vrf::Import::has_data() const
{
    return map.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Ip::Vrf::Import::has_operation() const
{
    return is_set(operation)
	|| is_set(map.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Ip::Vrf::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.operation)) leaf_name_data.push_back(map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Ip::Vrf::Import::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Ip::Vrf::Import::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map")
    {
        map = value;
    }
}

Native::Ip::Vrf::Import::Ipv4::Ipv4()
    :
    ipv4_type{YType::enumeration, "ipv4-type"},
    map{YType::str, "map"},
    upper_limit{YType::uint32, "upper-limit"}
{
    yang_name = "ipv4"; yang_parent_name = "import";
}

Native::Ip::Vrf::Import::Ipv4::~Ipv4()
{
}

bool Native::Ip::Vrf::Import::Ipv4::has_data() const
{
    return ipv4_type.is_set
	|| map.is_set
	|| upper_limit.is_set;
}

bool Native::Ip::Vrf::Import::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_type.operation)
	|| is_set(map.operation)
	|| is_set(upper_limit.operation);
}

std::string Native::Ip::Vrf::Import::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Import::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_type.is_set || is_set(ipv4_type.operation)) leaf_name_data.push_back(ipv4_type.get_name_leafdata());
    if (map.is_set || is_set(map.operation)) leaf_name_data.push_back(map.get_name_leafdata());
    if (upper_limit.is_set || is_set(upper_limit.operation)) leaf_name_data.push_back(upper_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Import::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Import::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Import::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-type")
    {
        ipv4_type = value;
    }
    if(value_path == "map")
    {
        map = value;
    }
    if(value_path == "upper-limit")
    {
        upper_limit = value;
    }
}

Native::Ip::Vrf::Maximum::Maximum()
    :
    reinstall{YType::uint16, "reinstall"},
    routes{YType::uint32, "routes"},
    threshold{YType::uint16, "threshold"},
    warning_only{YType::empty, "warning-only"}
{
    yang_name = "maximum"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::Maximum::~Maximum()
{
}

bool Native::Ip::Vrf::Maximum::has_data() const
{
    return reinstall.is_set
	|| routes.is_set
	|| threshold.is_set
	|| warning_only.is_set;
}

bool Native::Ip::Vrf::Maximum::has_operation() const
{
    return is_set(operation)
	|| is_set(reinstall.operation)
	|| is_set(routes.operation)
	|| is_set(threshold.operation)
	|| is_set(warning_only.operation);
}

std::string Native::Ip::Vrf::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Maximum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Maximum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reinstall.is_set || is_set(reinstall.operation)) leaf_name_data.push_back(reinstall.get_name_leafdata());
    if (routes.is_set || is_set(routes.operation)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.operation)) leaf_name_data.push_back(warning_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Maximum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reinstall")
    {
        reinstall = value;
    }
    if(value_path == "routes")
    {
        routes = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
    }
}

Native::Ip::Vrf::Mdt::Mdt()
    :
    default_{YType::str, "default"},
    log_reuse{YType::empty, "log-reuse"}
    	,
    data(std::make_shared<Native::Ip::Vrf::Mdt::Data>())
{
    data->parent = this;

    yang_name = "mdt"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::Mdt::~Mdt()
{
}

bool Native::Ip::Vrf::Mdt::has_data() const
{
    return default_.is_set
	|| log_reuse.is_set
	|| (data !=  nullptr && data->has_data());
}

bool Native::Ip::Vrf::Mdt::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| is_set(log_reuse.operation)
	|| (data !=  nullptr && data->has_operation());
}

std::string Native::Ip::Vrf::Mdt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Mdt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mdt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (log_reuse.is_set || is_set(log_reuse.operation)) leaf_name_data.push_back(log_reuse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data")
    {
        if(data == nullptr)
        {
            data = std::make_shared<Native::Ip::Vrf::Mdt::Data>();
        }
        return data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data != nullptr)
    {
        children["data"] = data;
    }

    return children;
}

void Native::Ip::Vrf::Mdt::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
    if(value_path == "log-reuse")
    {
        log_reuse = value;
    }
}

Native::Ip::Vrf::Mdt::Data::Data()
    :
    list{YType::str, "list"},
    mulicast_address{YType::str, "mulicast-address"},
    threshold{YType::uint32, "threshold"},
    threshold_list{YType::str, "threshold-list"},
    wildcard_bits{YType::str, "wildcard-bits"}
{
    yang_name = "data"; yang_parent_name = "mdt";
}

Native::Ip::Vrf::Mdt::Data::~Data()
{
}

bool Native::Ip::Vrf::Mdt::Data::has_data() const
{
    return list.is_set
	|| mulicast_address.is_set
	|| threshold.is_set
	|| threshold_list.is_set
	|| wildcard_bits.is_set;
}

bool Native::Ip::Vrf::Mdt::Data::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation)
	|| is_set(mulicast_address.operation)
	|| is_set(threshold.operation)
	|| is_set(threshold_list.operation)
	|| is_set(wildcard_bits.operation);
}

std::string Native::Ip::Vrf::Mdt::Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Mdt::Data::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Data' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());
    if (mulicast_address.is_set || is_set(mulicast_address.operation)) leaf_name_data.push_back(mulicast_address.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (threshold_list.is_set || is_set(threshold_list.operation)) leaf_name_data.push_back(threshold_list.get_name_leafdata());
    if (wildcard_bits.is_set || is_set(wildcard_bits.operation)) leaf_name_data.push_back(wildcard_bits.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Mdt::Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Mdt::Data::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Mdt::Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
    if(value_path == "mulicast-address")
    {
        mulicast_address = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
    if(value_path == "threshold-list")
    {
        threshold_list = value;
    }
    if(value_path == "wildcard-bits")
    {
        wildcard_bits = value;
    }
}

Native::Ip::Vrf::RouteTarget::RouteTarget()
    :
    direction{YType::enumeration, "direction"},
    target{YType::str, "target"}
{
    yang_name = "route-target"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::RouteTarget::~RouteTarget()
{
}

bool Native::Ip::Vrf::RouteTarget::has_data() const
{
    return direction.is_set
	|| target.is_set;
}

bool Native::Ip::Vrf::RouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(target.operation);
}

std::string Native::Ip::Vrf::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[direction='" <<direction <<"']" <<"[target='" <<target <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (target.is_set || is_set(target.operation)) leaf_name_data.push_back(target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::RouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::RouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "target")
    {
        target = value;
    }
}

Native::Ip::Vrf::Vpn::Vpn()
    :
    id{YType::str, "id"}
{
    yang_name = "vpn"; yang_parent_name = "vrf";
}

Native::Ip::Vrf::Vpn::~Vpn()
{
}

bool Native::Ip::Vrf::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::Ip::Vrf::Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation);
}

std::string Native::Ip::Vrf::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";

    return path_buffer.str();

}

const EntityPath Native::Ip::Vrf::Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Vrf::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Vrf::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Vrf::Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Ip::AsPath::AsPath()
{
    yang_name = "as-path"; yang_parent_name = "ip";
}

Native::Ip::AsPath::~AsPath()
{
}

bool Native::Ip::AsPath::has_data() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::has_operation() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";

    return path_buffer.str();

}

const EntityPath Native::Ip::AsPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AsPath::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AsPath::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::AsPath::AccessList::AccessList()
    :
    name{YType::uint16, "name"}
    	,
    deny(std::make_shared<Native::Ip::AsPath::AccessList::Deny>())
	,permit(std::make_shared<Native::Ip::AsPath::AccessList::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "access-list"; yang_parent_name = "as-path";
}

Native::Ip::AsPath::AccessList::~AccessList()
{
}

bool Native::Ip::AsPath::AccessList::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AsPath::AccessList::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AsPath::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:access-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::AsPath::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/as-path/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AsPath::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AsPath::AccessList::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::get_children() const
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

void Native::Ip::AsPath::AccessList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::AsPath::AccessList::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{
    yang_name = "deny"; yang_parent_name = "access-list";
}

Native::Ip::AsPath::AccessList::Deny::~Deny()
{
}

bool Native::Ip::AsPath::AccessList::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(deny_list.operation);
}

std::string Native::Ip::AsPath::AccessList::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::AsPath::AccessList::Deny::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AsPath::AccessList::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

Native::Ip::AsPath::AccessList::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{
    yang_name = "permit"; yang_parent_name = "access-list";
}

Native::Ip::AsPath::AccessList::Permit::~Permit()
{
}

bool Native::Ip::AsPath::AccessList::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(permit_list.operation);
}

std::string Native::Ip::AsPath::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::AsPath::AccessList::Permit::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AsPath::AccessList::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

Native::Ip::Local::Local()
{
    yang_name = "local"; yang_parent_name = "ip";
}

Native::Ip::Local::~Local()
{
}

bool Native::Ip::Local::has_data() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Local::has_operation() const
{
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Ip::Local::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Local::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Local::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Local::Pool::Pool()
    :
    id{YType::str, "id"},
    group{YType::str, "group"},
    last{YType::str, "last"},
    start{YType::str, "start"}
{
    yang_name = "pool"; yang_parent_name = "local";
}

Native::Ip::Local::Pool::~Pool()
{
}

bool Native::Ip::Local::Pool::has_data() const
{
    return id.is_set
	|| group.is_set
	|| last.is_set
	|| start.is_set;
}

bool Native::Ip::Local::Pool::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group.operation)
	|| is_set(last.operation)
	|| is_set(start.operation);
}

std::string Native::Ip::Local::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Local::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/local/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (last.is_set || is_set(last.operation)) leaf_name_data.push_back(last.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Local::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Local::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Local::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "last")
    {
        last = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Native::Ip::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
    	,
    load_sharing(std::make_shared<Native::Ip::Cef::LoadSharing>())
{
    load_sharing->parent = this;

    yang_name = "cef"; yang_parent_name = "ip";
}

Native::Ip::Cef::~Cef()
{
}

bool Native::Ip::Cef::has_data() const
{
    return distributed.is_set
	|| (load_sharing !=  nullptr && load_sharing->has_data());
}

bool Native::Ip::Cef::has_operation() const
{
    return is_set(operation)
	|| is_set(distributed.operation)
	|| (load_sharing !=  nullptr && load_sharing->has_operation());
}

std::string Native::Ip::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::get_entity_path(Entity* ancestor) const
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

    if (distributed.is_set || is_set(distributed.operation)) leaf_name_data.push_back(distributed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Ip::Cef::LoadSharing>();
        }
        return load_sharing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(load_sharing != nullptr)
    {
        children["load-sharing"] = load_sharing;
    }

    return children;
}

void Native::Ip::Cef::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "distributed")
    {
        distributed = value;
    }
}

Native::Ip::Cef::LoadSharing::LoadSharing()
    :
    algorithm(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>())
{
    algorithm->parent = this;

    yang_name = "load-sharing"; yang_parent_name = "cef";
}

Native::Ip::Cef::LoadSharing::~LoadSharing()
{
}

bool Native::Ip::Cef::LoadSharing::has_data() const
{
    return (algorithm !=  nullptr && algorithm->has_data());
}

bool Native::Ip::Cef::LoadSharing::has_operation() const
{
    return is_set(operation)
	|| (algorithm !=  nullptr && algorithm->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:load-sharing";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>();
        }
        return algorithm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Cef::LoadSharing::Algorithm::Algorithm()
    :
    include_ports(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts>())
{
    include_ports->parent = this;

    yang_name = "algorithm"; yang_parent_name = "load-sharing";
}

Native::Ip::Cef::LoadSharing::Algorithm::~Algorithm()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_data() const
{
    return (include_ports !=  nullptr && include_ports->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_operation() const
{
    return is_set(operation)
	|| (include_ports !=  nullptr && include_ports->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::Algorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-ports")
    {
        if(include_ports == nullptr)
        {
            include_ports = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts>();
        }
        return include_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include_ports != nullptr)
    {
        children["include-ports"] = include_ports;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::IncludePorts()
    :
    destination(nullptr) // presence node
	,source(nullptr) // presence node
{
    yang_name = "include-ports"; yang_parent_name = "algorithm";
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::~IncludePorts()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-ports";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::Destination()
    :
    dest_range{YType::str, "dest-range"}
{
    yang_name = "destination"; yang_parent_name = "include-ports";
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_data() const
{
    return dest_range.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_range.operation);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_range.is_set || is_set(dest_range.operation)) leaf_name_data.push_back(dest_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-range")
    {
        dest_range = value;
    }
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Source()
    :
    source_range{YType::str, "source-range"}
    	,
    destination(nullptr) // presence node
{
    yang_name = "source"; yang_parent_name = "include-ports";
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::~Source()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_data() const
{
    return source_range.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(source_range.operation)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_range.is_set || is_set(source_range.operation)) leaf_name_data.push_back(source_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-range")
    {
        source_range = value;
    }
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Destination()
    :
    dest_range{YType::str, "dest-range"}
    	,
    gtp(nullptr) // presence node
{
    yang_name = "destination"; yang_parent_name = "source";
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_data() const
{
    return dest_range.is_set
	|| (gtp !=  nullptr && gtp->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_range.operation)
	|| (gtp !=  nullptr && gtp->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_range.is_set || is_set(dest_range.operation)) leaf_name_data.push_back(dest_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtp")
    {
        if(gtp == nullptr)
        {
            gtp = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp>();
        }
        return gtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtp != nullptr)
    {
        children["gtp"] = gtp;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-range")
    {
        dest_range = value;
    }
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::Gtp()
    :
    gtp_range{YType::str, "gtp-range"}
{
    yang_name = "gtp"; yang_parent_name = "destination";
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::~Gtp()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_data() const
{
    return gtp_range.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_operation() const
{
    return is_set(operation)
	|| is_set(gtp_range.operation);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/destination/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gtp_range.is_set || is_set(gtp_range.operation)) leaf_name_data.push_back(gtp_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gtp-range")
    {
        gtp_range = value;
    }
}

Native::Ip::Domain::Domain()
    :
    lookup{YType::boolean, "lookup"},
    name{YType::str, "name"}
    	,
    list(std::make_shared<Native::Ip::Domain::List>())
	,lookup_settings(std::make_shared<Native::Ip::Domain::LookupSettings>())
{
    list->parent = this;

    lookup_settings->parent = this;

    yang_name = "domain"; yang_parent_name = "ip";
}

Native::Ip::Domain::~Domain()
{
}

bool Native::Ip::Domain::has_data() const
{
    return lookup.is_set
	|| name.is_set
	|| (list !=  nullptr && list->has_data())
	|| (lookup_settings !=  nullptr && lookup_settings->has_data());
}

bool Native::Ip::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(lookup.operation)
	|| is_set(name.operation)
	|| (list !=  nullptr && list->has_operation())
	|| (lookup_settings !=  nullptr && lookup_settings->has_operation());
}

std::string Native::Ip::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::get_entity_path(Entity* ancestor) const
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

    if (lookup.is_set || is_set(lookup.operation)) leaf_name_data.push_back(lookup.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Ip::Domain::List>();
        }
        return list;
    }

    if(child_yang_name == "lookup-settings")
    {
        if(lookup_settings == nullptr)
        {
            lookup_settings = std::make_shared<Native::Ip::Domain::LookupSettings>();
        }
        return lookup_settings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(lookup_settings != nullptr)
    {
        children["lookup-settings"] = lookup_settings;
    }

    return children;
}

void Native::Ip::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lookup")
    {
        lookup = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Domain::List::List()
    :
    domain_name{YType::str, "domain-name"}
    	,
    vrf(std::make_shared<Native::Ip::Domain::List::Vrf>())
{
    vrf->parent = this;

    yang_name = "list"; yang_parent_name = "domain";
}

Native::Ip::Domain::List::~List()
{
}

bool Native::Ip::Domain::List::has_data() const
{
    return domain_name.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Ip::Domain::List::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Ip::Domain::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Domain::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Ip::Domain::List::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Ip::Domain::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
}

Native::Ip::Domain::List::Vrf::Vrf()
    :
    domain_name{YType::str, "domain-name"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "vrf"; yang_parent_name = "list";
}

Native::Ip::Domain::List::Vrf::~Vrf()
{
}

bool Native::Ip::Domain::List::Vrf::has_data() const
{
    return domain_name.is_set
	|| vrf_name.is_set;
}

bool Native::Ip::Domain::List::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(vrf_name.operation);
}

std::string Native::Ip::Domain::List::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::List::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Domain::List::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::List::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::List::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Native::Ip::Domain::LookupSettings::LookupSettings()
    :
    name{YType::str, "name"}
    	,
    lookup(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup>())
{
    lookup->parent = this;

    yang_name = "lookup-settings"; yang_parent_name = "domain";
}

Native::Ip::Domain::LookupSettings::~LookupSettings()
{
}

bool Native::Ip::Domain::LookupSettings::has_data() const
{
    return name.is_set
	|| (lookup !=  nullptr && lookup->has_data());
}

bool Native::Ip::Domain::LookupSettings::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (lookup !=  nullptr && lookup->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lookup-settings";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lookup")
    {
        if(lookup == nullptr)
        {
            lookup = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup>();
        }
        return lookup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lookup != nullptr)
    {
        children["lookup"] = lookup;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Domain::LookupSettings::Lookup::Lookup()
    :
    nsap{YType::empty, "nsap"}
    	,
    source_interface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "lookup"; yang_parent_name = "lookup-settings";
}

Native::Ip::Domain::LookupSettings::Lookup::~Lookup()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_data() const
{
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Domain::LookupSettings::Lookup::has_operation() const
{
    return is_set(operation)
	|| is_set(nsap.operation)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Domain::LookupSettings::Lookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lookup";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::Lookup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsap.is_set || is_set(nsap.operation)) leaf_name_data.push_back(nsap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsap")
    {
        nsap = value;
    }
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::SourceInterface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "lookup";
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_data() const
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

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::has_operation() const
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

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::get_children() const
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

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain/lookup-settings/lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Domain::LookupSettings::Lookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::DomainLookupConf::DomainLookupConf()
    :
    domain_lookup{YType::boolean, "domain-lookup"}
{
    yang_name = "domain-lookup-conf"; yang_parent_name = "ip";
}

Native::Ip::DomainLookupConf::~DomainLookupConf()
{
}

bool Native::Ip::DomainLookupConf::has_data() const
{
    return domain_lookup.is_set;
}

bool Native::Ip::DomainLookupConf::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_lookup.operation);
}

std::string Native::Ip::DomainLookupConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup-conf";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookupConf::get_entity_path(Entity* ancestor) const
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

    if (domain_lookup.is_set || is_set(domain_lookup.operation)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::DomainLookupConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookupConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookupConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
    }
}

Native::Ip::DomainLookup::DomainLookup()
    :
    nsap{YType::empty, "nsap"}
    	,
    source_interface(std::make_shared<Native::Ip::DomainLookup::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "domain-lookup"; yang_parent_name = "ip";
}

Native::Ip::DomainLookup::~DomainLookup()
{
}

bool Native::Ip::DomainLookup::has_data() const
{
    return nsap.is_set
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::DomainLookup::has_operation() const
{
    return is_set(operation)
	|| is_set(nsap.operation)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::DomainLookup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-lookup";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookup::get_entity_path(Entity* ancestor) const
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

    if (nsap.is_set || is_set(nsap.operation)) leaf_name_data.push_back(nsap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::DomainLookup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::DomainLookup::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::DomainLookup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsap")
    {
        nsap = value;
    }
}

Native::Ip::DomainLookup::SourceInterface::SourceInterface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "domain-lookup";
}

Native::Ip::DomainLookup::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::has_data() const
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

bool Native::Ip::DomainLookup::SourceInterface::has_operation() const
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

std::string Native::Ip::DomainLookup::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookup::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::get_children() const
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

void Native::Ip::DomainLookup::SourceInterface::set_value(const std::string & value_path, std::string value)
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

Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::DomainLookup::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::DomainLookup::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::DomainLookup::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookup::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/domain-lookup/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::DomainLookup::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Dns::Dns()
    :
    server(nullptr) // presence node
{
    yang_name = "dns"; yang_parent_name = "ip";
}

Native::Ip::Dns::~Dns()
{
}

bool Native::Ip::Dns::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Ip::Dns::has_operation() const
{
    return is_set(operation)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dns::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Dns::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Dns::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Dns::Server::Server()
{
    yang_name = "server"; yang_parent_name = "dns";
}

Native::Ip::Dns::Server::~Server()
{
}

bool Native::Ip::Dns::Server::has_data() const
{
    return false;
}

bool Native::Ip::Dns::Server::has_operation() const
{
    return is_set(operation);
}

std::string Native::Ip::Dns::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dns::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dns/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dns::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dns::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dns::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Dhcp::Dhcp()
    :
    smart_relay{YType::empty, "Cisco-IOS-XE-dhcp:smart-relay"}
    	,
    bootp(std::make_shared<Native::Ip::Dhcp::Bootp>())
	,conflict(std::make_shared<Native::Ip::Dhcp::Conflict>())
	,relay(std::make_shared<Native::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Ip::Dhcp::Snooping>())
	,snooping_conf(std::make_shared<Native::Ip::Dhcp::SnoopingConf>())
{
    bootp->parent = this;

    conflict->parent = this;

    relay->parent = this;

    snooping->parent = this;

    snooping_conf->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Ip::Dhcp::~Dhcp()
{
}

bool Native::Ip::Dhcp::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.size(); index++)
    {
        if(excluded_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return smart_relay.is_set
	|| (bootp !=  nullptr && bootp->has_data())
	|| (conflict !=  nullptr && conflict->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data())
	|| (snooping_conf !=  nullptr && snooping_conf->has_data());
}

bool Native::Ip::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.size(); index++)
    {
        if(excluded_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(smart_relay.operation)
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (conflict !=  nullptr && conflict->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation())
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation());
}

std::string Native::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::get_entity_path(Entity* ancestor) const
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

    if (smart_relay.is_set || is_set(smart_relay.operation)) leaf_name_data.push_back(smart_relay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Dhcp::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "conflict")
    {
        if(conflict == nullptr)
        {
            conflict = std::make_shared<Native::Ip::Dhcp::Conflict>();
        }
        return conflict;
    }

    if(child_yang_name == "excluded-address")
    {
        for(auto const & c : excluded_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::ExcludedAddress>();
        c->parent = this;
        excluded_address.push_back(c);
        return c;
    }

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    if(child_yang_name == "snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Dhcp::SnoopingConf>();
        }
        return snooping_conf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootp != nullptr)
    {
        children["bootp"] = bootp;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    if(conflict != nullptr)
    {
        children["conflict"] = conflict;
    }

    for (auto const & c : excluded_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    if(snooping_conf != nullptr)
    {
        children["snooping-conf"] = snooping_conf;
    }

    return children;
}

void Native::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "smart-relay")
    {
        smart_relay = value;
    }
}

Native::Ip::Dhcp::Bootp::Bootp()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "bootp"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::Bootp::~Bootp()
{
}

bool Native::Ip::Dhcp::Bootp::has_data() const
{
    return ignore.is_set;
}

bool Native::Ip::Dhcp::Bootp::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Ip::Dhcp::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:bootp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Bootp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Bootp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Ip::Dhcp::Class_::Class_()
    :
    id{YType::str, "id"},
    remark{YType::str, "remark"}
    	,
    relay(std::make_shared<Native::Ip::Dhcp::Class_::Relay>())
{
    relay->parent = this;

    yang_name = "class"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::Class_::~Class_()
{
}

bool Native::Ip::Dhcp::Class_::has_data() const
{
    return id.is_set
	|| remark.is_set
	|| (relay !=  nullptr && relay->has_data());
}

bool Native::Ip::Dhcp::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(remark.operation)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Ip::Dhcp::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:class" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remark.is_set || is_set(remark.operation)) leaf_name_data.push_back(remark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Class_::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Ip::Dhcp::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "remark")
    {
        remark = value;
    }
}

Native::Ip::Dhcp::Class_::Relay::Relay()
    :
    agent(std::make_shared<Native::Ip::Dhcp::Class_::Relay::Agent>())
{
    agent->parent = this;

    yang_name = "relay"; yang_parent_name = "class";
}

Native::Ip::Dhcp::Class_::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Class_::Relay::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool Native::Ip::Dhcp::Class_::Relay::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Native::Ip::Dhcp::Class_::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Class_::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Ip::Dhcp::Class_::Relay::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void Native::Ip::Dhcp::Class_::Relay::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Dhcp::Class_::Relay::Agent::Agent()
    :
    information{YType::empty, "information"}
{
    yang_name = "agent"; yang_parent_name = "relay";
}

Native::Ip::Dhcp::Class_::Relay::Agent::~Agent()
{
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_data() const
{
    return information.is_set;
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_operation() const
{
    return is_set(operation)
	|| is_set(information.operation);
}

std::string Native::Ip::Dhcp::Class_::Relay::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Class_::Relay::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Agent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information.is_set || is_set(information.operation)) leaf_name_data.push_back(information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::Relay::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::Relay::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Class_::Relay::Agent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "information")
    {
        information = value;
    }
}

Native::Ip::Dhcp::Conflict::Conflict()
    :
    logging{YType::boolean, "logging"}
    	,
    resolution(nullptr) // presence node
{
    yang_name = "conflict"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::Conflict::~Conflict()
{
}

bool Native::Ip::Dhcp::Conflict::has_data() const
{
    return logging.is_set
	|| (resolution !=  nullptr && resolution->has_data());
}

bool Native::Ip::Dhcp::Conflict::has_operation() const
{
    return is_set(operation)
	|| is_set(logging.operation)
	|| (resolution !=  nullptr && resolution->has_operation());
}

std::string Native::Ip::Dhcp::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:conflict";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Conflict::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Ip::Dhcp::Conflict::Resolution>();
        }
        return resolution;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    return children;
}

void Native::Ip::Dhcp::Conflict::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging")
    {
        logging = value;
    }
}

Native::Ip::Dhcp::Conflict::Resolution::Resolution()
    :
    interval{YType::uint32, "interval"}
{
    yang_name = "resolution"; yang_parent_name = "conflict";
}

Native::Ip::Dhcp::Conflict::Resolution::~Resolution()
{
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_data() const
{
    return interval.is_set;
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Conflict::Resolution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:conflict/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Conflict::Resolution::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Ip::Dhcp::ExcludedAddress::ExcludedAddress()
    :
    low_address{YType::str, "low-address"},
    high_address{YType::str, "high-address"},
    vrf{YType::str, "vrf"}
{
    yang_name = "excluded-address"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::ExcludedAddress::~ExcludedAddress()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::has_data() const
{
    return low_address.is_set
	|| high_address.is_set
	|| vrf.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(low_address.operation)
	|| is_set(high_address.operation)
	|| is_set(vrf.operation);
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:excluded-address" <<"[low-address='" <<low_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::ExcludedAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_address.is_set || is_set(low_address.operation)) leaf_name_data.push_back(low_address.get_name_leafdata());
    if (high_address.is_set || is_set(high_address.operation)) leaf_name_data.push_back(high_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::ExcludedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::ExcludedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::ExcludedAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low-address")
    {
        low_address = value;
    }
    if(value_path == "high-address")
    {
        high_address = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Dhcp::Relay::Information::Information()
    :
    trust_all{YType::empty, "trust-all"}
    	,
    option(std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Ip::Dhcp::Relay::Information::has_data() const
{
    return trust_all.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(trust_all.operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_all.is_set || is_set(trust_all.operation)) leaf_name_data.push_back(trust_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust-all")
    {
        trust_all = value;
    }
}

Native::Ip::Dhcp::Relay::Information::Option::Option()
    :
    option_default{YType::empty, "option-default"},
    vpn{YType::empty, "vpn"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return option_default.is_set
	|| vpn.is_set;
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(option_default.operation)
	|| is_set(vpn.operation);
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_default.is_set || is_set(option_default.operation)) leaf_name_data.push_back(option_default.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option-default")
    {
        option_default = value;
    }
    if(value_path == "vpn")
    {
        vpn = value;
    }
}

Native::Ip::Dhcp::Pool::Pool()
    :
    id{YType::str, "id"},
    default_router{YType::str, "default-router"},
    dns_server{YType::str, "dns-server"},
    domain_name{YType::str, "domain-name"},
    vrf{YType::str, "vrf"}
    	,
    network(std::make_shared<Native::Ip::Dhcp::Pool::Network>())
{
    network->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::Pool::~Pool()
{
}

bool Native::Ip::Dhcp::Pool::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lease.size(); index++)
    {
        if(lease[index]->has_data())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| domain_name.is_set
	|| vrf.is_set
	|| (network !=  nullptr && network->has_data());
}

bool Native::Ip::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lease.size(); index++)
    {
        if(lease[index]->has_operation())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(default_router.operation)
	|| is_set(dns_server.operation)
	|| is_set(domain_name.operation)
	|| is_set(vrf.operation)
	|| (network !=  nullptr && network->has_operation());
}

std::string Native::Ip::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Pool::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());
    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "lease")
    {
        for(auto const & c : lease)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Lease>();
        c->parent = this;
        lease.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Ip::Dhcp::Pool::Network>();
        }
        return network;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lease)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Ip::Dhcp::Pool::Class_::Class_()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address>())
{
    address->parent = this;

    yang_name = "class"; yang_parent_name = "pool";
}

Native::Ip::Dhcp::Pool::Class_::~Class_()
{
}

bool Native::Ip::Dhcp::Pool::Class_::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Dhcp::Pool::Class_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Pool::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Class_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ip::Dhcp::Pool::Class_::Address::Address()
    :
    range(std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address::Range>())
{
    range->parent = this;

    yang_name = "address"; yang_parent_name = "class";
}

Native::Ip::Dhcp::Pool::Class_::Address::~Address()
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_data() const
{
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_operation() const
{
    return is_set(operation)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Pool::Class_::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class_::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Dhcp::Pool::Class_::Address::Range::Range()
    :
    ipv4_end{YType::str, "ipv4-end"},
    ipv4_start{YType::str, "ipv4-start"}
{
    yang_name = "range"; yang_parent_name = "address";
}

Native::Ip::Dhcp::Pool::Class_::Address::Range::~Range()
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_data() const
{
    return ipv4_end.is_set
	|| ipv4_start.is_set;
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_end.operation)
	|| is_set(ipv4_start.operation);
}

std::string Native::Ip::Dhcp::Pool::Class_::Address::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Pool::Class_::Address::Range::get_entity_path(Entity* ancestor) const
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

    if (ipv4_end.is_set || is_set(ipv4_end.operation)) leaf_name_data.push_back(ipv4_end.get_name_leafdata());
    if (ipv4_start.is_set || is_set(ipv4_start.operation)) leaf_name_data.push_back(ipv4_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::Address::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::Address::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Class_::Address::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-end")
    {
        ipv4_end = value;
    }
    if(value_path == "ipv4-start")
    {
        ipv4_start = value;
    }
}

Native::Ip::Dhcp::Pool::Lease::Lease()
    :
    days{YType::uint16, "Days"},
    hours{YType::uint8, "Hours"},
    minutes{YType::uint8, "Minutes"}
{
    yang_name = "lease"; yang_parent_name = "pool";
}

Native::Ip::Dhcp::Pool::Lease::~Lease()
{
}

bool Native::Ip::Dhcp::Pool::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::Ip::Dhcp::Pool::Lease::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(hours.operation)
	|| is_set(minutes.operation);
}

std::string Native::Ip::Dhcp::Pool::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease" <<"[Days='" <<days <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Pool::Lease::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lease' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.operation)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Lease::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Days")
    {
        days = value;
    }
    if(value_path == "Hours")
    {
        hours = value;
    }
    if(value_path == "Minutes")
    {
        minutes = value;
    }
}

Native::Ip::Dhcp::Pool::Network::Network()
    :
    mask{YType::str, "mask"},
    number{YType::str, "number"},
    secondary{YType::empty, "secondary"}
{
    yang_name = "network"; yang_parent_name = "pool";
}

Native::Ip::Dhcp::Pool::Network::~Network()
{
}

bool Native::Ip::Dhcp::Pool::Network::has_data() const
{
    return mask.is_set
	|| number.is_set
	|| secondary.is_set;
}

bool Native::Ip::Dhcp::Pool::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation)
	|| is_set(number.operation)
	|| is_set(secondary.operation);
}

std::string Native::Ip::Dhcp::Pool::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Pool::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Native::Ip::Dhcp::SnoopingConf::SnoopingConf()
    :
    snooping{YType::empty, "snooping"}
{
    yang_name = "snooping-conf"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::SnoopingConf::~SnoopingConf()
{
}

bool Native::Ip::Dhcp::SnoopingConf::has_data() const
{
    return snooping.is_set;
}

bool Native::Ip::Dhcp::SnoopingConf::has_operation() const
{
    return is_set(operation)
	|| is_set(snooping.operation);
}

std::string Native::Ip::Dhcp::SnoopingConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping-conf";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::SnoopingConf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Dhcp::SnoopingConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::SnoopingConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::SnoopingConf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snooping")
    {
        snooping = value;
    }
}

Native::Ip::Dhcp::Snooping::Snooping()
    :
    vlan{YType::str, "vlan"}
    	,
    database(std::make_shared<Native::Ip::Dhcp::Snooping::Database>())
	,information(std::make_shared<Native::Ip::Dhcp::Snooping::Information>())
	,track(std::make_shared<Native::Ip::Dhcp::Snooping::Track>())
	,verify(std::make_shared<Native::Ip::Dhcp::Snooping::Verify>())
{
    database->parent = this;

    information->parent = this;

    track->parent = this;

    verify->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Ip::Dhcp::Snooping::has_data() const
{
    return vlan.is_set
	|| (database !=  nullptr && database->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation)
	|| (database !=  nullptr && database->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Ip::Dhcp::Snooping::Database>();
        }
        return database;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Snooping::Information>();
        }
        return information;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Ip::Dhcp::Snooping::Track>();
        }
        return track;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Ip::Dhcp::Snooping::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(track != nullptr)
    {
        children["track"] = track;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Ip::Dhcp::Snooping::Database::Database()
    :
    timeout{YType::uint32, "timeout"},
    url{YType::str, "url"},
    write_delay{YType::uint32, "write-delay"}
{
    yang_name = "database"; yang_parent_name = "snooping";
}

Native::Ip::Dhcp::Snooping::Database::~Database()
{
}

bool Native::Ip::Dhcp::Snooping::Database::has_data() const
{
    return timeout.is_set
	|| url.is_set
	|| write_delay.is_set;
}

bool Native::Ip::Dhcp::Snooping::Database::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation)
	|| is_set(url.operation)
	|| is_set(write_delay.operation);
}

std::string Native::Ip::Dhcp::Snooping::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (url.is_set || is_set(url.operation)) leaf_name_data.push_back(url.get_name_leafdata());
    if (write_delay.is_set || is_set(write_delay.operation)) leaf_name_data.push_back(write_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Database::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
    if(value_path == "url")
    {
        url = value;
    }
    if(value_path == "write-delay")
    {
        write_delay = value;
    }
}

Native::Ip::Dhcp::Snooping::Information::Information()
    :
    option_conf{YType::boolean, "option-conf"}
    	,
    option(nullptr) // presence node
{
    yang_name = "information"; yang_parent_name = "snooping";
}

Native::Ip::Dhcp::Snooping::Information::~Information()
{
}

bool Native::Ip::Dhcp::Snooping::Information::has_data() const
{
    return option_conf.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(option_conf.operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_conf.is_set || is_set(option_conf.operation)) leaf_name_data.push_back(option_conf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option-conf")
    {
        option_conf = value;
    }
}

Native::Ip::Dhcp::Snooping::Information::Option::Option()
    :
    allow_untrusted{YType::empty, "allow-untrusted"}
    	,
    format(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>())
{
    format->parent = this;

    yang_name = "option"; yang_parent_name = "information";
}

Native::Ip::Dhcp::Snooping::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_data() const
{
    return allow_untrusted.is_set
	|| (format !=  nullptr && format->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_untrusted.operation)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.operation)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
    }
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::Format()
    :
    remote_id(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId>())
{
    remote_id->parent = this;

    yang_name = "format"; yang_parent_name = "option";
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::~Format()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_data() const
{
    return (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::has_operation() const
{
    return is_set(operation)
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Information::Option::Format::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/option/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::Format::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::RemoteId()
    :
    hostname{YType::empty, "hostname"},
    string{YType::str, "string"}
{
    yang_name = "remote-id"; yang_parent_name = "format";
}

Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::~RemoteId()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_data() const
{
    return hostname.is_set
	|| string.is_set;
}

bool Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation)
	|| is_set(string.operation);
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/option/format/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::Format::RemoteId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Ip::Dhcp::Snooping::Track::Track()
    :
    host{YType::empty, "host"}
{
    yang_name = "track"; yang_parent_name = "snooping";
}

Native::Ip::Dhcp::Snooping::Track::~Track()
{
}

bool Native::Ip::Dhcp::Snooping::Track::has_data() const
{
    return host.is_set;
}

bool Native::Ip::Dhcp::Snooping::Track::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation);
}

std::string Native::Ip::Dhcp::Snooping::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Track::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
}

Native::Ip::Dhcp::Snooping::Verify::Verify()
    :
    mac_address{YType::empty, "mac-address"},
    no_relay_agent_address{YType::empty, "no-relay-agent-address"}
{
    yang_name = "verify"; yang_parent_name = "snooping";
}

Native::Ip::Dhcp::Snooping::Verify::~Verify()
{
}

bool Native::Ip::Dhcp::Snooping::Verify::has_data() const
{
    return mac_address.is_set
	|| no_relay_agent_address.is_set;
}

bool Native::Ip::Dhcp::Snooping::Verify::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(no_relay_agent_address.operation);
}

std::string Native::Ip::Dhcp::Snooping::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Ip::Dhcp::Snooping::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (no_relay_agent_address.is_set || is_set(no_relay_agent_address.operation)) leaf_name_data.push_back(no_relay_agent_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Verify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "no-relay-agent-address")
    {
        no_relay_agent_address = value;
    }
}

Native::Ip::ForwardProtocol::ForwardProtocol()
    :
    protocol{YType::enumeration, "protocol"}
    	,
    spanning_tree(nullptr) // presence node
	,udp(std::make_shared<Native::Ip::ForwardProtocol::Udp>())
{
    udp->parent = this;

    yang_name = "forward-protocol"; yang_parent_name = "ip";
}

Native::Ip::ForwardProtocol::~ForwardProtocol()
{
}

bool Native::Ip::ForwardProtocol::has_data() const
{
    return protocol.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Ip::ForwardProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Ip::ForwardProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-protocol";

    return path_buffer.str();

}

const EntityPath Native::Ip::ForwardProtocol::get_entity_path(Entity* ancestor) const
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

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Ip::ForwardProtocol::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::ForwardProtocol::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Ip::ForwardProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Native::Ip::ForwardProtocol::SpanningTree::SpanningTree()
    :
    any_local_broadcast{YType::empty, "any-local-broadcast"}
{
    yang_name = "spanning-tree"; yang_parent_name = "forward-protocol";
}

Native::Ip::ForwardProtocol::SpanningTree::~SpanningTree()
{
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_data() const
{
    return any_local_broadcast.is_set;
}

bool Native::Ip::ForwardProtocol::SpanningTree::has_operation() const
{
    return is_set(operation)
	|| is_set(any_local_broadcast.operation);
}

std::string Native::Ip::ForwardProtocol::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::Ip::ForwardProtocol::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_local_broadcast.is_set || is_set(any_local_broadcast.operation)) leaf_name_data.push_back(any_local_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ForwardProtocol::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any-local-broadcast")
    {
        any_local_broadcast = value;
    }
}

Native::Ip::ForwardProtocol::Udp::Udp()
    :
    biff{YType::boolean, "biff"},
    bootpc{YType::boolean, "bootpc"},
    bootps{YType::boolean, "bootps"},
    discard{YType::boolean, "discard"},
    dnsix{YType::boolean, "dnsix"},
    domain{YType::boolean, "domain"},
    echo{YType::boolean, "echo"},
    isakmp{YType::boolean, "isakmp"},
    mobile_ip{YType::boolean, "mobile-ip"},
    nameserver{YType::boolean, "nameserver"},
    netbios_dgm{YType::boolean, "netbios-dgm"},
    netbios_ns{YType::boolean, "netbios-ns"},
    netbios_ss{YType::boolean, "netbios-ss"},
    non500_isakmp{YType::boolean, "non500-isakmp"},
    ntp{YType::boolean, "ntp"},
    pim_auto_rp{YType::boolean, "pim-auto-rp"},
    rip{YType::boolean, "rip"},
    snmp{YType::boolean, "snmp"},
    snmptrap{YType::boolean, "snmptrap"},
    sunrpc{YType::boolean, "sunrpc"},
    syslog{YType::boolean, "syslog"},
    tacacs{YType::boolean, "tacacs"},
    talk{YType::boolean, "talk"},
    tftp{YType::boolean, "tftp"},
    time{YType::boolean, "time"},
    who{YType::boolean, "who"},
    xdmcp{YType::boolean, "xdmcp"}
{
    yang_name = "udp"; yang_parent_name = "forward-protocol";
}

Native::Ip::ForwardProtocol::Udp::~Udp()
{
}

bool Native::Ip::ForwardProtocol::Udp::has_data() const
{
    return biff.is_set
	|| bootpc.is_set
	|| bootps.is_set
	|| discard.is_set
	|| dnsix.is_set
	|| domain.is_set
	|| echo.is_set
	|| isakmp.is_set
	|| mobile_ip.is_set
	|| nameserver.is_set
	|| netbios_dgm.is_set
	|| netbios_ns.is_set
	|| netbios_ss.is_set
	|| non500_isakmp.is_set
	|| ntp.is_set
	|| pim_auto_rp.is_set
	|| rip.is_set
	|| snmp.is_set
	|| snmptrap.is_set
	|| sunrpc.is_set
	|| syslog.is_set
	|| tacacs.is_set
	|| talk.is_set
	|| tftp.is_set
	|| time.is_set
	|| who.is_set
	|| xdmcp.is_set;
}

bool Native::Ip::ForwardProtocol::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(biff.operation)
	|| is_set(bootpc.operation)
	|| is_set(bootps.operation)
	|| is_set(discard.operation)
	|| is_set(dnsix.operation)
	|| is_set(domain.operation)
	|| is_set(echo.operation)
	|| is_set(isakmp.operation)
	|| is_set(mobile_ip.operation)
	|| is_set(nameserver.operation)
	|| is_set(netbios_dgm.operation)
	|| is_set(netbios_ns.operation)
	|| is_set(netbios_ss.operation)
	|| is_set(non500_isakmp.operation)
	|| is_set(ntp.operation)
	|| is_set(pim_auto_rp.operation)
	|| is_set(rip.operation)
	|| is_set(snmp.operation)
	|| is_set(snmptrap.operation)
	|| is_set(sunrpc.operation)
	|| is_set(syslog.operation)
	|| is_set(tacacs.operation)
	|| is_set(talk.operation)
	|| is_set(tftp.operation)
	|| is_set(time.operation)
	|| is_set(who.operation)
	|| is_set(xdmcp.operation);
}

std::string Native::Ip::ForwardProtocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::Ip::ForwardProtocol::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/forward-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (biff.is_set || is_set(biff.operation)) leaf_name_data.push_back(biff.get_name_leafdata());
    if (bootpc.is_set || is_set(bootpc.operation)) leaf_name_data.push_back(bootpc.get_name_leafdata());
    if (bootps.is_set || is_set(bootps.operation)) leaf_name_data.push_back(bootps.get_name_leafdata());
    if (discard.is_set || is_set(discard.operation)) leaf_name_data.push_back(discard.get_name_leafdata());
    if (dnsix.is_set || is_set(dnsix.operation)) leaf_name_data.push_back(dnsix.get_name_leafdata());
    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (echo.is_set || is_set(echo.operation)) leaf_name_data.push_back(echo.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.operation)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (mobile_ip.is_set || is_set(mobile_ip.operation)) leaf_name_data.push_back(mobile_ip.get_name_leafdata());
    if (nameserver.is_set || is_set(nameserver.operation)) leaf_name_data.push_back(nameserver.get_name_leafdata());
    if (netbios_dgm.is_set || is_set(netbios_dgm.operation)) leaf_name_data.push_back(netbios_dgm.get_name_leafdata());
    if (netbios_ns.is_set || is_set(netbios_ns.operation)) leaf_name_data.push_back(netbios_ns.get_name_leafdata());
    if (netbios_ss.is_set || is_set(netbios_ss.operation)) leaf_name_data.push_back(netbios_ss.get_name_leafdata());
    if (non500_isakmp.is_set || is_set(non500_isakmp.operation)) leaf_name_data.push_back(non500_isakmp.get_name_leafdata());
    if (ntp.is_set || is_set(ntp.operation)) leaf_name_data.push_back(ntp.get_name_leafdata());
    if (pim_auto_rp.is_set || is_set(pim_auto_rp.operation)) leaf_name_data.push_back(pim_auto_rp.get_name_leafdata());
    if (rip.is_set || is_set(rip.operation)) leaf_name_data.push_back(rip.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (snmptrap.is_set || is_set(snmptrap.operation)) leaf_name_data.push_back(snmptrap.get_name_leafdata());
    if (sunrpc.is_set || is_set(sunrpc.operation)) leaf_name_data.push_back(sunrpc.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (tacacs.is_set || is_set(tacacs.operation)) leaf_name_data.push_back(tacacs.get_name_leafdata());
    if (talk.is_set || is_set(talk.operation)) leaf_name_data.push_back(talk.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.operation)) leaf_name_data.push_back(tftp.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (who.is_set || is_set(who.operation)) leaf_name_data.push_back(who.get_name_leafdata());
    if (xdmcp.is_set || is_set(xdmcp.operation)) leaf_name_data.push_back(xdmcp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::ForwardProtocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::ForwardProtocol::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::ForwardProtocol::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "biff")
    {
        biff = value;
    }
    if(value_path == "bootpc")
    {
        bootpc = value;
    }
    if(value_path == "bootps")
    {
        bootps = value;
    }
    if(value_path == "discard")
    {
        discard = value;
    }
    if(value_path == "dnsix")
    {
        dnsix = value;
    }
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "echo")
    {
        echo = value;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
    }
    if(value_path == "mobile-ip")
    {
        mobile_ip = value;
    }
    if(value_path == "nameserver")
    {
        nameserver = value;
    }
    if(value_path == "netbios-dgm")
    {
        netbios_dgm = value;
    }
    if(value_path == "netbios-ns")
    {
        netbios_ns = value;
    }
    if(value_path == "netbios-ss")
    {
        netbios_ss = value;
    }
    if(value_path == "non500-isakmp")
    {
        non500_isakmp = value;
    }
    if(value_path == "ntp")
    {
        ntp = value;
    }
    if(value_path == "pim-auto-rp")
    {
        pim_auto_rp = value;
    }
    if(value_path == "rip")
    {
        rip = value;
    }
    if(value_path == "snmp")
    {
        snmp = value;
    }
    if(value_path == "snmptrap")
    {
        snmptrap = value;
    }
    if(value_path == "sunrpc")
    {
        sunrpc = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
    if(value_path == "tacacs")
    {
        tacacs = value;
    }
    if(value_path == "talk")
    {
        talk = value;
    }
    if(value_path == "tftp")
    {
        tftp = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "who")
    {
        who = value;
    }
    if(value_path == "xdmcp")
    {
        xdmcp = value;
    }
}

Native::Ip::Ftp::Ftp()
    :
    passive{YType::empty, "passive"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Ip::Ftp::Password>())
	,source_interface(std::make_shared<Native::Ip::Ftp::SourceInterface>())
{
    password->parent = this;

    source_interface->parent = this;

    yang_name = "ftp"; yang_parent_name = "ip";
}

Native::Ip::Ftp::~Ftp()
{
}

bool Native::Ip::Ftp::has_data() const
{
    return passive.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Ftp::has_operation() const
{
    return is_set(operation)
	|| is_set(passive.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Ftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ftp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::get_entity_path(Entity* ancestor) const
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

    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Ftp::Password>();
        }
        return password;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Ftp::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Ip::Ftp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Ip::Ftp::SourceInterface::SourceInterface()
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
    atm_acrsubinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "ftp";
}

Native::Ip::Ftp::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Ftp::SourceInterface::has_data() const
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

bool Native::Ip::Ftp::SourceInterface::has_operation() const
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

std::string Native::Ip::Ftp::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Ftp::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::get_children() const
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

void Native::Ip::Ftp::SourceInterface::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Ftp::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Ftp::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Ip::Ftp::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Ip::Ftp::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Ip::Ftp::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Ftp::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Ip::Ftp::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Ip::Ftp::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/source-interface/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Ip::Ftp::Password::Password()
    :
    password_container(std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>())
{
    password_container->parent = this;

    yang_name = "password"; yang_parent_name = "ftp";
}

Native::Ip::Ftp::Password::~Password()
{
}

bool Native::Ip::Ftp::Password::has_data() const
{
    return (password_container !=  nullptr && password_container->has_data());
}

bool Native::Ip::Ftp::Password::has_operation() const
{
    return is_set(operation)
	|| (password_container !=  nullptr && password_container->has_operation());
}

std::string Native::Ip::Ftp::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ftp::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-container")
    {
        if(password_container == nullptr)
        {
            password_container = std::make_shared<Native::Ip::Ftp::Password::PasswordContainer>();
        }
        return password_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password_container != nullptr)
    {
        children["password-container"] = password_container;
    }

    return children;
}

void Native::Ip::Ftp::Password::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Ftp::Password::PasswordContainer::PasswordContainer()
    :
    encryption{YType::uint8, "encryption"},
    password{YType::str, "password"}
{
    yang_name = "password-container"; yang_parent_name = "password";
}

Native::Ip::Ftp::Password::PasswordContainer::~PasswordContainer()
{
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_data() const
{
    return encryption.is_set
	|| password.is_set;
}

bool Native::Ip::Ftp::Password::PasswordContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(password.operation);
}

std::string Native::Ip::Ftp::Password::PasswordContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-container";

    return path_buffer.str();

}

const EntityPath Native::Ip::Ftp::Password::PasswordContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/ftp/password/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Ftp::Password::PasswordContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Ftp::Password::PasswordContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Ftp::Password::PasswordContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

Native::Ip::Telnet::Telnet()
    :
    source_interface{YType::str, "source-interface"}
{
    yang_name = "telnet"; yang_parent_name = "ip";
}

Native::Ip::Telnet::~Telnet()
{
}

bool Native::Ip::Telnet::has_data() const
{
    return source_interface.is_set;
}

bool Native::Ip::Telnet::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation);
}

std::string Native::Ip::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

const EntityPath Native::Ip::Telnet::get_entity_path(Entity* ancestor) const
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

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Telnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Telnet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Ip::Host::Host()
    :
    name{YType::str, "name"},
    ip{YType::str, "ip"}
{
    yang_name = "host"; yang_parent_name = "ip";
}

Native::Ip::Host::~Host()
{
}

bool Native::Ip::Host::has_data() const
{
    return name.is_set
	|| ip.is_set;
}

bool Native::Ip::Host::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(ip.operation);
}

std::string Native::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Host::get_entity_path(Entity* ancestor) const
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
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Ip::Multicast::Multicast()
    :
    route_limit{YType::uint32, "Cisco-IOS-XE-multicast:route-limit"}
{
    yang_name = "multicast"; yang_parent_name = "ip";
}

Native::Ip::Multicast::~Multicast()
{
}

bool Native::Ip::Multicast::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return route_limit.is_set;
}

bool Native::Ip::Multicast::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(route_limit.operation);
}

std::string Native::Ip::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Ip::Multicast::get_entity_path(Entity* ancestor) const
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

    if (route_limit.is_set || is_set(route_limit.operation)) leaf_name_data.push_back(route_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Multicast::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-limit")
    {
        route_limit = value;
    }
}

Native::Ip::Multicast::Vrf::Vrf()
    :
    name{YType::str, "name"},
    multipath{YType::empty, "multipath"},
    route_limit{YType::uint32, "route-limit"}
{
    yang_name = "vrf"; yang_parent_name = "multicast";
}

Native::Ip::Multicast::Vrf::~Vrf()
{
}

bool Native::Ip::Multicast::Vrf::has_data() const
{
    for (auto const & leaf : route_limit.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| multipath.is_set;
}

bool Native::Ip::Multicast::Vrf::has_operation() const
{
    for (auto const & leaf : route_limit.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(multipath.operation)
	|| is_set(route_limit.operation);
}

std::string Native::Ip::Multicast::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Multicast::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/multicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.operation)) leaf_name_data.push_back(multipath.get_name_leafdata());

    auto route_limit_name_datas = route_limit.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), route_limit_name_datas.begin(), route_limit_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Multicast::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Multicast::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Multicast::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "multipath")
    {
        multipath = value;
    }
    if(value_path == "route-limit")
    {
        route_limit.append(value);
    }
}

Native::Ip::NameServer::NameServer()
    :
    no_vrf{YType::str, "no-vrf"}
{
    yang_name = "name-server"; yang_parent_name = "ip";
}

Native::Ip::NameServer::~NameServer()
{
}

bool Native::Ip::NameServer::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::NameServer::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (auto const & leaf : no_vrf.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(no_vrf.operation);
}

std::string Native::Ip::NameServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name-server";

    return path_buffer.str();

}

const EntityPath Native::Ip::NameServer::get_entity_path(Entity* ancestor) const
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


    auto no_vrf_name_datas = no_vrf.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), no_vrf_name_datas.begin(), no_vrf_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::NameServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::NameServer::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::NameServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no-vrf")
    {
        no_vrf.append(value);
    }
}

Native::Ip::NameServer::Vrf::Vrf()
    :
    word{YType::str, "word"},
    server_ip{YType::str, "server-ip"}
{
    yang_name = "vrf"; yang_parent_name = "name-server";
}

Native::Ip::NameServer::Vrf::~Vrf()
{
}

bool Native::Ip::NameServer::Vrf::has_data() const
{
    return word.is_set
	|| server_ip.is_set;
}

bool Native::Ip::NameServer::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(server_ip.operation);
}

std::string Native::Ip::NameServer::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::NameServer::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/name-server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (server_ip.is_set || is_set(server_ip.operation)) leaf_name_data.push_back(server_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::NameServer::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::NameServer::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::NameServer::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "server-ip")
    {
        server_ip = value;
    }
}

Native::Ip::Pim::Pim()
    :
    register_source{YType::str, "Cisco-IOS-XE-multicast:register-source"}
    	,
    accept_register(std::make_shared<Native::Ip::Pim::AcceptRegister>())
	,autorp(nullptr) // presence node
	,send_rp_announce(std::make_shared<Native::Ip::Pim::SendRpAnnounce>())
	,send_rp_discovery(std::make_shared<Native::Ip::Pim::SendRpDiscovery>())
	,spt_threshold_container(std::make_shared<Native::Ip::Pim::SptThresholdContainer>())
	,ssm(std::make_shared<Native::Ip::Pim::Ssm>())
{
    accept_register->parent = this;

    send_rp_announce->parent = this;

    send_rp_discovery->parent = this;

    spt_threshold_container->parent = this;

    ssm->parent = this;

    yang_name = "pim"; yang_parent_name = "ip";
}

Native::Ip::Pim::~Pim()
{
}

bool Native::Ip::Pim::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(register_source.operation)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::get_entity_path(Entity* ancestor) const
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

    if (register_source.is_set || is_set(register_source.operation)) leaf_name_data.push_back(register_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::RpAddress>();
        c->parent = this;
        rp_address.push_back(c);
        return c;
    }

    if(child_yang_name == "send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "spt-threshold")
    {
        for(auto const & c : spt_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SptThreshold>();
        c->parent = this;
        spt_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Ssm>();
        }
        return ssm;
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
        auto c = std::make_shared<Native::Ip::Pim::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["autorp"] = autorp;
    }

    for (auto const & c : rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_rp_announce != nullptr)
    {
        children["send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["send-rp-discovery"] = send_rp_discovery;
    }

    for (auto const & c : spt_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["spt-threshold-container"] = spt_threshold_container;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "register-source")
    {
        register_source = value;
    }
}

Native::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{
    yang_name = "accept-register"; yang_parent_name = "pim";
}

Native::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::AcceptRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Ip::Pim::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{
    yang_name = "autorp"; yang_parent_name = "pim";
}

Native::Ip::Pim::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Autorp::has_data() const
{
    return listener.is_set;
}

bool Native::Ip::Pim::Autorp::has_operation() const
{
    return is_set(operation)
	|| is_set(listener.operation);
}

std::string Native::Ip::Pim::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:autorp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Autorp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.operation)) leaf_name_data.push_back(listener.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Autorp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "listener")
    {
        listener = value;
    }
}

Native::Ip::Pim::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{
    yang_name = "rp-address"; yang_parent_name = "pim";
}

Native::Ip::Pim::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::RpAddress::has_data() const
{
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(access_list.operation)
	|| is_set(override.operation);
}

std::string Native::Ip::Pim::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:rp-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.operation)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "override")
    {
        override = value;
    }
}

Native::Ip::Pim::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{
    yang_name = "spt-threshold"; yang_parent_name = "pim";
}

Native::Ip::Pim::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThreshold::has_data() const
{
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::SptThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(how.operation)
	|| is_set(group_list.operation);
}

std::string Native::Ip::Pim::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold" <<"[how='" <<how <<"']" <<"[group-list='" <<group_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SptThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.operation)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.operation)) leaf_name_data.push_back(group_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SptThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "how")
    {
        how = value;
    }
    if(value_path == "group-list")
    {
        group_list = value;
    }
}

Native::Ip::Pim::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "pim";
}

Native::Ip::Pim::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::SptThresholdContainer::has_data() const
{
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::SptThresholdContainer::has_operation() const
{
    return is_set(operation)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:spt-threshold-container";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SptThresholdContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::SptThresholdContainer::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{
    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container";
}

Native::Ip::Pim::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_data() const
{
    return how.is_set;
}

bool Native::Ip::Pim::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(how.operation);
}

std::string Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:spt-threshold-container/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.operation)) leaf_name_data.push_back(how.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "how")
    {
        how = value;
    }
}

Native::Ip::Pim::SendRpAnnounce::SendRpAnnounce()
{
    yang_name = "send-rp-announce"; yang_parent_name = "pim";
}

Native::Ip::Pim::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::SendRpAnnounce::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Pim::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-announce";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SendRpAnnounce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::Interface_List>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Pim::SendRpAnnounce::Interface_List::Interface_List()
    :
    if_name{YType::str, "if-name"}
    	,
    scope(std::make_shared<Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce";
}

Native::Ip::Pim::SendRpAnnounce::Interface_List::~Interface_List()
{
}

bool Native::Ip::Pim::SendRpAnnounce::Interface_List::has_data() const
{
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::Interface_List::has_operation() const
{
    return is_set(operation)
	|| is_set(if_name.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::Interface_List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list" <<"[if-name='" <<if_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SendRpAnnounce::Interface_List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.operation)) leaf_name_data.push_back(if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::Interface_List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::Interface_List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::Interface_List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-name")
    {
        if_name = value;
    }
}

Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
    	,
    group_list(std::make_shared<Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list";
}

Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::~Scope()
{
}

bool Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::has_data() const
{
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(pkt_ttl.operation)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Scope' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.operation)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_list != nullptr)
    {
        children["group-list"] = group_list;
    }

    return children;
}

void Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
    }
}

Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{
    yang_name = "group-list"; yang_parent_name = "scope";
}

Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::has_data() const
{
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_ref.operation)
	|| is_set(std_acl.operation);
}

std::string Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.operation)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.operation)) leaf_name_data.push_back(std_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpAnnounce::Interface_List::Scope::GroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
    }
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{
    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce";
}

Native::Ip::Pim::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_data() const
{
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(scope.operation);
}

std::string Native::Ip::Pim::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SendRpAnnounce::PortChannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/Cisco-IOS-XE-multicast:send-rp-announce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.operation)) leaf_name_data.push_back(scope.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "scope")
    {
        scope = value;
    }
}

Native::Ip::Pim::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{
    yang_name = "send-rp-discovery"; yang_parent_name = "pim";
}

Native::Ip::Pim::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::SendRpDiscovery::has_data() const
{
    return scope.is_set;
}

bool Native::Ip::Pim::SendRpDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(scope.operation);
}

std::string Native::Ip::Pim::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:send-rp-discovery";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::SendRpDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.operation)) leaf_name_data.push_back(scope.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::SendRpDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "scope")
    {
        scope = value;
    }
}

Native::Ip::Pim::Ssm::Ssm()
    :
    range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "pim";
}

Native::Ip::Pim::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Ssm::has_data() const
{
    return range.is_set;
}

bool Native::Ip::Pim::Ssm::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation);
}

std::string Native::Ip::Pim::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:ssm";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Ssm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Ip::Pim::Vrf::Vrf()
    :
    id{YType::str, "id"},
    register_source{YType::str, "register-source"}
    	,
    accept_register(std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>())
	,autorp(nullptr) // presence node
	,send_rp_announce(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>())
	,send_rp_discovery(std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>())
	,spt_threshold_container(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>())
	,ssm(std::make_shared<Native::Ip::Pim::Vrf::Ssm>())
{
    accept_register->parent = this;

    send_rp_announce->parent = this;

    send_rp_discovery->parent = this;

    spt_threshold_container->parent = this;

    ssm->parent = this;

    yang_name = "vrf"; yang_parent_name = "pim";
}

Native::Ip::Pim::Vrf::~Vrf()
{
}

bool Native::Ip::Pim::Vrf::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_data())
            return true;
    }
    return id.is_set
	|| register_source.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (autorp !=  nullptr && autorp->has_data())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_data())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_data())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_data())
	|| (ssm !=  nullptr && ssm->has_data());
}

bool Native::Ip::Pim::Vrf::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<spt_threshold.size(); index++)
    {
        if(spt_threshold[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(register_source.operation)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (autorp !=  nullptr && autorp->has_operation())
	|| (send_rp_announce !=  nullptr && send_rp_announce->has_operation())
	|| (send_rp_discovery !=  nullptr && send_rp_discovery->has_operation())
	|| (spt_threshold_container !=  nullptr && spt_threshold_container->has_operation())
	|| (ssm !=  nullptr && ssm->has_operation());
}

std::string Native::Ip::Pim::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:vrf" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/pim/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (register_source.is_set || is_set(register_source.operation)) leaf_name_data.push_back(register_source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Ip::Pim::Vrf::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "autorp")
    {
        if(autorp == nullptr)
        {
            autorp = std::make_shared<Native::Ip::Pim::Vrf::Autorp>();
        }
        return autorp;
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::RpAddress>();
        c->parent = this;
        rp_address.push_back(c);
        return c;
    }

    if(child_yang_name == "send-rp-announce")
    {
        if(send_rp_announce == nullptr)
        {
            send_rp_announce = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce>();
        }
        return send_rp_announce;
    }

    if(child_yang_name == "send-rp-discovery")
    {
        if(send_rp_discovery == nullptr)
        {
            send_rp_discovery = std::make_shared<Native::Ip::Pim::Vrf::SendRpDiscovery>();
        }
        return send_rp_discovery;
    }

    if(child_yang_name == "spt-threshold")
    {
        for(auto const & c : spt_threshold)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SptThreshold>();
        c->parent = this;
        spt_threshold.push_back(c);
        return c;
    }

    if(child_yang_name == "spt-threshold-container")
    {
        if(spt_threshold_container == nullptr)
        {
            spt_threshold_container = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer>();
        }
        return spt_threshold_container;
    }

    if(child_yang_name == "ssm")
    {
        if(ssm == nullptr)
        {
            ssm = std::make_shared<Native::Ip::Pim::Vrf::Ssm>();
        }
        return ssm;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(autorp != nullptr)
    {
        children["autorp"] = autorp;
    }

    for (auto const & c : rp_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(send_rp_announce != nullptr)
    {
        children["send-rp-announce"] = send_rp_announce;
    }

    if(send_rp_discovery != nullptr)
    {
        children["send-rp-discovery"] = send_rp_discovery;
    }

    for (auto const & c : spt_threshold)
    {
        children[c->get_segment_path()] = c;
    }

    if(spt_threshold_container != nullptr)
    {
        children["spt-threshold-container"] = spt_threshold_container;
    }

    if(ssm != nullptr)
    {
        children["ssm"] = ssm;
    }

    return children;
}

void Native::Ip::Pim::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "register-source")
    {
        register_source = value;
    }
}

Native::Ip::Pim::Vrf::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{
    yang_name = "accept-register"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::AcceptRegister::~AcceptRegister()
{
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Ip::Pim::Vrf::AcceptRegister::has_operation() const
{
    return is_set(operation)
	|| is_set(list.operation);
}

std::string Native::Ip::Pim::Vrf::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-register";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::AcceptRegister::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcceptRegister' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.operation)) leaf_name_data.push_back(list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::AcceptRegister::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "list")
    {
        list = value;
    }
}

Native::Ip::Pim::Vrf::Autorp::Autorp()
    :
    listener{YType::empty, "listener"}
{
    yang_name = "autorp"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::Autorp::~Autorp()
{
}

bool Native::Ip::Pim::Vrf::Autorp::has_data() const
{
    return listener.is_set;
}

bool Native::Ip::Pim::Vrf::Autorp::has_operation() const
{
    return is_set(operation)
	|| is_set(listener.operation);
}

std::string Native::Ip::Pim::Vrf::Autorp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autorp";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::Autorp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autorp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (listener.is_set || is_set(listener.operation)) leaf_name_data.push_back(listener.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::Autorp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::Autorp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::Autorp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "listener")
    {
        listener = value;
    }
}

Native::Ip::Pim::Vrf::RpAddress::RpAddress()
    :
    address{YType::str, "address"},
    access_list{YType::str, "access-list"},
    override{YType::empty, "override"}
{
    yang_name = "rp-address"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::RpAddress::~RpAddress()
{
}

bool Native::Ip::Pim::Vrf::RpAddress::has_data() const
{
    return address.is_set
	|| access_list.is_set
	|| override.is_set;
}

bool Native::Ip::Pim::Vrf::RpAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(access_list.operation)
	|| is_set(override.operation);
}

std::string Native::Ip::Pim::Vrf::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.operation)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (override.is_set || is_set(override.operation)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "access-list")
    {
        access_list = value;
    }
    if(value_path == "override")
    {
        override = value;
    }
}

Native::Ip::Pim::Vrf::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"},
    group_list{YType::str, "group-list"}
{
    yang_name = "spt-threshold"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_data() const
{
    return how.is_set
	|| group_list.is_set;
}

bool Native::Ip::Pim::Vrf::SptThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(how.operation)
	|| is_set(group_list.operation);
}

std::string Native::Ip::Pim::Vrf::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold" <<"[how='" <<how <<"']" <<"[group-list='" <<group_list <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SptThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SptThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.operation)) leaf_name_data.push_back(how.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.operation)) leaf_name_data.push_back(group_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SptThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "how")
    {
        how = value;
    }
    if(value_path == "group-list")
    {
        group_list = value;
    }
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThresholdContainer()
    :
    spt_threshold(std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>())
{
    spt_threshold->parent = this;

    yang_name = "spt-threshold-container"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::SptThresholdContainer::~SptThresholdContainer()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_data() const
{
    return (spt_threshold !=  nullptr && spt_threshold->has_data());
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::has_operation() const
{
    return is_set(operation)
	|| (spt_threshold !=  nullptr && spt_threshold->has_operation());
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold-container";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SptThresholdContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SptThresholdContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spt-threshold")
    {
        if(spt_threshold == nullptr)
        {
            spt_threshold = std::make_shared<Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold>();
        }
        return spt_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spt_threshold != nullptr)
    {
        children["spt-threshold"] = spt_threshold;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::SptThreshold()
    :
    how{YType::enumeration, "how"}
{
    yang_name = "spt-threshold"; yang_parent_name = "spt-threshold-container";
}

Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::~SptThreshold()
{
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_data() const
{
    return how.is_set;
}

bool Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(how.operation);
}

std::string Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spt-threshold";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SptThreshold' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (how.is_set || is_set(how.operation)) leaf_name_data.push_back(how.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "how")
    {
        how = value;
    }
}

Native::Ip::Pim::Vrf::SendRpAnnounce::SendRpAnnounce()
{
    yang_name = "send-rp-announce"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::SendRpAnnounce::~SendRpAnnounce()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_channel.size(); index++)
    {
        if(port_channel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-announce";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SendRpAnnounce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendRpAnnounce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface_list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    if(child_yang_name == "Port-channel")
    {
        for(auto const & c : port_channel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel>();
        c->parent = this;
        port_channel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_channel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Interface_List()
    :
    if_name{YType::str, "if-name"}
    	,
    scope(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope>())
{
    scope->parent = this;

    yang_name = "interface_list"; yang_parent_name = "send-rp-announce";
}

Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::~Interface_List()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::has_data() const
{
    return if_name.is_set
	|| (scope !=  nullptr && scope->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::has_operation() const
{
    return is_set(operation)
	|| is_set(if_name.operation)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface_list" <<"[if-name='" <<if_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface_List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_name.is_set || is_set(if_name.operation)) leaf_name_data.push_back(if_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-name")
    {
        if_name = value;
    }
}

Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::Scope()
    :
    pkt_ttl{YType::uint8, "pkt-ttl"}
    	,
    group_list(std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList>())
{
    group_list->parent = this;

    yang_name = "scope"; yang_parent_name = "interface_list";
}

Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::~Scope()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::has_data() const
{
    return pkt_ttl.is_set
	|| (group_list !=  nullptr && group_list->has_data());
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::has_operation() const
{
    return is_set(operation)
	|| is_set(pkt_ttl.operation)
	|| (group_list !=  nullptr && group_list->has_operation());
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Scope' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_ttl.is_set || is_set(pkt_ttl.operation)) leaf_name_data.push_back(pkt_ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-list")
    {
        if(group_list == nullptr)
        {
            group_list = std::make_shared<Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList>();
        }
        return group_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_list != nullptr)
    {
        children["group-list"] = group_list;
    }

    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pkt-ttl")
    {
        pkt_ttl = value;
    }
}

Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::GroupList()
    :
    acl_ref{YType::uint8, "acl-ref"},
    std_acl{YType::str, "std-acl"}
{
    yang_name = "group-list"; yang_parent_name = "scope";
}

Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::~GroupList()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::has_data() const
{
    return acl_ref.is_set
	|| std_acl.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_ref.operation)
	|| is_set(std_acl.operation);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_ref.is_set || is_set(acl_ref.operation)) leaf_name_data.push_back(acl_ref.get_name_leafdata());
    if (std_acl.is_set || is_set(std_acl.operation)) leaf_name_data.push_back(std_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::Interface_List::Scope::GroupList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-ref")
    {
        acl_ref = value;
    }
    if(value_path == "std-acl")
    {
        std_acl = value;
    }
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::PortChannel()
    :
    name{YType::uint32, "name"},
    scope{YType::uint8, "scope"}
{
    yang_name = "Port-channel"; yang_parent_name = "send-rp-announce";
}

Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::~PortChannel()
{
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_data() const
{
    return name.is_set
	|| scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(scope.operation);
}

std::string Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannel' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (scope.is_set || is_set(scope.operation)) leaf_name_data.push_back(scope.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpAnnounce::PortChannel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "scope")
    {
        scope = value;
    }
}

Native::Ip::Pim::Vrf::SendRpDiscovery::SendRpDiscovery()
    :
    scope{YType::uint8, "scope"}
{
    yang_name = "send-rp-discovery"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::SendRpDiscovery::~SendRpDiscovery()
{
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_data() const
{
    return scope.is_set;
}

bool Native::Ip::Pim::Vrf::SendRpDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(scope.operation);
}

std::string Native::Ip::Pim::Vrf::SendRpDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-rp-discovery";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::SendRpDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendRpDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scope.is_set || is_set(scope.operation)) leaf_name_data.push_back(scope.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::SendRpDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::SendRpDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::SendRpDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "scope")
    {
        scope = value;
    }
}

Native::Ip::Pim::Vrf::Ssm::Ssm()
    :
    range{YType::str, "range"}
{
    yang_name = "ssm"; yang_parent_name = "vrf";
}

Native::Ip::Pim::Vrf::Ssm::~Ssm()
{
}

bool Native::Ip::Pim::Vrf::Ssm::has_data() const
{
    return range.is_set;
}

bool Native::Ip::Pim::Vrf::Ssm::has_operation() const
{
    return is_set(operation)
	|| is_set(range.operation);
}

std::string Native::Ip::Pim::Vrf::Ssm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm";

    return path_buffer.str();

}

const EntityPath Native::Ip::Pim::Vrf::Ssm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ssm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Pim::Vrf::Ssm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Pim::Vrf::Ssm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Pim::Vrf::Ssm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "range")
    {
        range = value;
    }
}

Native::Ip::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
{
    yang_name = "prefix-list"; yang_parent_name = "ip";
}

Native::Ip::PrefixList::~PrefixList()
{
}

bool Native::Ip::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ip::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(sequence_number.operation);
}

std::string Native::Ip::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::get_entity_path(Entity* ancestor) const
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

    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Native::Ip::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    deny(std::make_shared<Native::Ip::PrefixList::Prefixes::Deny>())
	,permit(std::make_shared<Native::Ip::PrefixList::Prefixes::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefix-list";
}

Native::Ip::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ip::PrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ip/prefix-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::PrefixList::Prefixes::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::PrefixList::Prefixes::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "seq")
    {
        for(auto const & c : seq)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq>();
        c->parent = this;
        seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::get_children() const
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

    for (auto const & c : seq)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Ip::PrefixList::Prefixes::Permit::Permit()
{
    yang_name = "permit"; yang_parent_name = "prefixes";
}

Native::Ip::PrefixList::Prefixes::Permit::~Permit()
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_data() const
{
    for (std::size_t index=0; index<permit_list.size(); index++)
    {
        if(permit_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::PrefixList::Prefixes::Permit::has_operation() const
{
    for (std::size_t index=0; index<permit_list.size(); index++)
    {
        if(permit_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::PrefixList::Prefixes::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Permit::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit-list")
    {
        for(auto const & c : permit_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Permit::PermitList>();
        c->parent = this;
        permit_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : permit_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Permit::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::PrefixList::Prefixes::Permit::PermitList::PermitList()
    :
    prefix{YType::str, "prefix"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{
    yang_name = "permit-list"; yang_parent_name = "permit";
}

Native::Ip::PrefixList::Prefixes::Permit::PermitList::~PermitList()
{
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_data() const
{
    return prefix.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Permit::PermitList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(ge.operation)
	|| is_set(le.operation);
}

std::string Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PermitList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Permit::PermitList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Permit::PermitList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ip::PrefixList::Prefixes::Deny::Deny()
{
    yang_name = "deny"; yang_parent_name = "prefixes";
}

Native::Ip::PrefixList::Prefixes::Deny::~Deny()
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_data() const
{
    for (std::size_t index=0; index<deny_list.size(); index++)
    {
        if(deny_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::PrefixList::Prefixes::Deny::has_operation() const
{
    for (std::size_t index=0; index<deny_list.size(); index++)
    {
        if(deny_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Ip::PrefixList::Prefixes::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Deny::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny-list")
    {
        for(auto const & c : deny_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::PrefixList::Prefixes::Deny::DenyList>();
        c->parent = this;
        deny_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : deny_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::PrefixList::Prefixes::Deny::set_value(const std::string & value_path, std::string value)
{
}

Native::Ip::PrefixList::Prefixes::Deny::DenyList::DenyList()
    :
    prefix{YType::str, "prefix"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{
    yang_name = "deny-list"; yang_parent_name = "deny";
}

Native::Ip::PrefixList::Prefixes::Deny::DenyList::~DenyList()
{
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_data() const
{
    return prefix.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Deny::DenyList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(ge.operation)
	|| is_set(le.operation);
}

std::string Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DenyList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Deny::DenyList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Deny::DenyList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ip::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"}
    	,
    deny(std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Deny>())
	,permit(std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "seq"; yang_parent_name = "prefixes";
}

Native::Ip::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(operation)
	|| is_set(no.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq" <<"[no='" <<no <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Seq::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Seq' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::PrefixList::Prefixes::Seq::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::get_children() const
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

void Native::Ip::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no")
    {
        no = value;
    }
}

Native::Ip::PrefixList::Prefixes::Seq::Deny::Deny()
    :
    ge{YType::uint8, "ge"},
    ip{YType::str, "ip"},
    le{YType::uint8, "le"}
{
    yang_name = "deny"; yang_parent_name = "seq";
}

Native::Ip::PrefixList::Prefixes::Seq::Deny::~Deny()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_data() const
{
    return ge.is_set
	|| ip.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::Deny::has_operation() const
{
    return is_set(operation)
	|| is_set(ge.operation)
	|| is_set(ip.operation)
	|| is_set(le.operation);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Seq::Deny::get_entity_path(Entity* ancestor) const
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

    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ip::PrefixList::Prefixes::Seq::Permit::Permit()
    :
    ge{YType::uint8, "ge"},
    ip{YType::str, "ip"},
    le{YType::uint8, "le"}
{
    yang_name = "permit"; yang_parent_name = "seq";
}

Native::Ip::PrefixList::Prefixes::Seq::Permit::~Permit()
{
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_data() const
{
    return ge.is_set
	|| ip.is_set
	|| le.is_set;
}

bool Native::Ip::PrefixList::Prefixes::Seq::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(ge.operation)
	|| is_set(ip.operation)
	|| is_set(le.operation);
}

std::string Native::Ip::PrefixList::Prefixes::Seq::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Ip::PrefixList::Prefixes::Seq::Permit::get_entity_path(Entity* ancestor) const
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

    if (ge.is_set || is_set(ge.operation)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (le.is_set || is_set(le.operation)) leaf_name_data.push_back(le.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::PrefixList::Prefixes::Seq::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::PrefixList::Prefixes::Seq::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::PrefixList::Prefixes::Seq::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ge")
    {
        ge = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "le")
    {
        le = value;
    }
}

Native::Ip::Route::Route()
    :
    profile{YType::empty, "profile"}
    	,
    static_(std::make_shared<Native::Ip::Route::Static_>())
{
    static_->parent = this;

    yang_name = "route"; yang_parent_name = "ip";
}

Native::Ip::Route::~Route()
{
}

bool Native::Ip::Route::has_data() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return profile.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ip::Route::has_operation() const
{
    for (std::size_t index=0; index<ip_route_interface_forwarding_list.size(); index++)
    {
        if(ip_route_interface_forwarding_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(profile.operation)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::get_entity_path(Entity* ancestor) const
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

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList>();
        c->parent = this;
        ip_route_interface_forwarding_list.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ip::Route::Static_>();
        }
        return static_;
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
        auto c = std::make_shared<Native::Ip::Route::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_route_interface_forwarding_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Ip::Route::IpRouteInterfaceForwardingList::IpRouteInterfaceForwardingList()
    :
    prefix{YType::str, "prefix"},
    mask{YType::str, "mask"}
{
    yang_name = "ip-route-interface-forwarding-list"; yang_parent_name = "route";
}

Native::Ip::Route::IpRouteInterfaceForwardingList::~IpRouteInterfaceForwardingList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_data() const
{
    for (std::size_t index=0; index<fwd_list.size(); index++)
    {
        if(fwd_list[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| mask.is_set;
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::has_operation() const
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

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-route-interface-forwarding-list" <<"[prefix='" <<prefix <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::IpRouteInterfaceForwardingList::get_entity_path(Entity* ancestor) const
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

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList>();
        c->parent = this;
        fwd_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fwd_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::FwdList()
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

Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::~FwdList()
{
}

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_data() const
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

bool Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::has_operation() const
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

std::string Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-list" <<"[fwd='" <<fwd <<"']";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::set_value(const std::string & value_path, std::string value)
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

Native::Ip::Route::Static_::Static_()
    :
    adjust_time{YType::uint8, "adjust-time"},
    inter_vrf{YType::empty, "inter-vrf"}
    	,
    bfd(std::make_shared<Native::Ip::Route::Static_::Bfd>())
	,install_routes_recurse_via_nexthop(std::make_shared<Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop>())
{
    bfd->parent = this;

    install_routes_recurse_via_nexthop->parent = this;

    yang_name = "static"; yang_parent_name = "route";
}

Native::Ip::Route::Static_::~Static_()
{
}

bool Native::Ip::Route::Static_::has_data() const
{
    return adjust_time.is_set
	|| inter_vrf.is_set
	|| (bfd !=  nullptr && bfd->has_data())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_data());
}

bool Native::Ip::Route::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_time.operation)
	|| is_set(inter_vrf.operation)
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (install_routes_recurse_via_nexthop !=  nullptr && install_routes_recurse_via_nexthop->has_operation());
}

std::string Native::Ip::Route::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Ip::Route::Static_::get_entity_path(Entity* ancestor) const
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

    if (adjust_time.is_set || is_set(adjust_time.operation)) leaf_name_data.push_back(adjust_time.get_name_leafdata());
    if (inter_vrf.is_set || is_set(inter_vrf.operation)) leaf_name_data.push_back(inter_vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ip::Route::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Ip::Route::Static_::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "install-routes-recurse-via-nexthop")
    {
        if(install_routes_recurse_via_nexthop == nullptr)
        {
            install_routes_recurse_via_nexthop = std::make_shared<Native::Ip::Route::Static_::InstallRoutesRecurseViaNexthop>();
        }
        return install_routes_recurse_via_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Route::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(install_routes_recurse_via_nexthop != nullptr)
    {
        children["install-routes-recurse-via-nexthop"] = install_routes_recurse_via_nexthop;
    }

    return children;
}

void Native::Ip::Route::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-time")
    {
        adjust_time = value;
    }
    if(value_path == "inter-vrf")
    {
        inter_vrf = value;
    }
}

const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4TypeEnum::unicast {0, "unicast"};
const Enum::YLeaf Native::Ip::Vrf::Import::Ipv4::Ipv4TypeEnum::multicast {1, "multicast"};

const Enum::YLeaf Native::Ip::Vrf::RouteTarget::DirectionEnum::both {0, "both"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::DirectionEnum::export_ {1, "export"};
const Enum::YLeaf Native::Ip::Vrf::RouteTarget::DirectionEnum::import {2, "import"};

const Enum::YLeaf Native::Ip::Local::Pool::IdEnum::default_ {0, "default"};

const Enum::YLeaf Native::Ip::ForwardProtocol::ProtocolEnum::nd {0, "nd"};
const Enum::YLeaf Native::Ip::ForwardProtocol::ProtocolEnum::sdns {1, "sdns"};
const Enum::YLeaf Native::Ip::ForwardProtocol::ProtocolEnum::turbo_flood {2, "turbo-flood"};

const Enum::YLeaf Native::Ip::Pim::SptThreshold::HowEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThreshold::HowEnum::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::HowEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::SptThresholdContainer::SptThreshold::HowEnum::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::HowEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThreshold::HowEnum::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::HowEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Pim::Vrf::SptThresholdContainer::SptThreshold::HowEnum::infinity {1, "infinity"};

const Enum::YLeaf Native::Ip::Route::IpRouteInterfaceForwardingList::FwdList::FwdEnum::Null0 {0, "Null0"};


}
}

