
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_83.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfList::Ipv6HostVrfList()
    :
    ipv6_host{YType::str, "ipv6-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
{

    yang_name = "ipv6-host-vrf-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfList::~Ipv6HostVrfList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfList::has_data() const
{
    return ipv6_host.is_set
	|| vrf.is_set
	|| discriminator.is_set;
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-vrf-list" <<"[ipv6-host='" <<ipv6_host <<"']" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Ipv6HostVrfTransportList()
    :
    ipv6_host{YType::str, "ipv6-host"},
    vrf{YType::str, "vrf"},
    discriminator{YType::str, "discriminator"}
    	,
    transport(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport>())
{
    transport->parent = this;

    yang_name = "ipv6-host-vrf-transport-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::~Ipv6HostVrfTransportList()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::has_data() const
{
    return ipv6_host.is_set
	|| vrf.is_set
	|| discriminator.is_set
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_host.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(discriminator.yfilter)
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/host/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-host-vrf-transport-list" <<"[ipv6-host='" <<ipv6_host <<"']" <<"[vrf='" <<vrf <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_host.is_set || is_set(ipv6_host.yfilter)) leaf_name_data.push_back(ipv6_host.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (discriminator.is_set || is_set(discriminator.yfilter)) leaf_name_data.push_back(discriminator.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host = value;
        ipv6_host.value_namespace = name_space;
        ipv6_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "discriminator")
    {
        discriminator = value;
        discriminator.value_namespace = name_space;
        discriminator.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-host")
    {
        ipv6_host.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "discriminator")
    {
        discriminator.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "ipv6-host" || name == "vrf" || name == "discriminator")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Transport()
    :
    tcp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp>())
	,udp(std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp>())
{
    tcp->parent = this;
    udp->parent = this;

    yang_name = "transport"; yang_parent_name = "ipv6-host-vrf-transport-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::~Transport()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::Tcp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::~Tcp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::Udp()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::~Udp()
{
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::has_data() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::has_operation() const
{
    for (auto const & leaf : port.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto port_name_datas = port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), port_name_datas.begin(), port_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port.append(value);
    }
}

void Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Logging::Host::Ipv6::Ipv6HostVrfTransportList::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port")
        return true;
    return false;
}

Native::Logging::Monitor::Monitor()
    :
    severity{YType::str, "severity"}
{

    yang_name = "monitor"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Monitor::~Monitor()
{
}

bool Native::Logging::Monitor::has_data() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_data())
            return true;
    }
    return severity.is_set;
}

bool Native::Logging::Monitor::has_operation() const
{
    for (std::size_t index=0; index<discriminator.size(); index++)
    {
        if(discriminator[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discriminator")
    {
        for(auto const & c : discriminator)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::Monitor::Discriminator>();
        c->parent = this;
        discriminator.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : discriminator)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discriminator" || name == "severity")
        return true;
    return false;
}

Native::Logging::Monitor::Discriminator::Discriminator()
    :
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{

    yang_name = "discriminator"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Monitor::Discriminator::~Discriminator()
{
}

bool Native::Logging::Monitor::Discriminator::has_data() const
{
    return name.is_set
	|| severity.is_set;
}

bool Native::Logging::Monitor::Discriminator::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::Logging::Monitor::Discriminator::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Monitor::Discriminator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discriminator" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Monitor::Discriminator::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Monitor::Discriminator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Monitor::Discriminator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Monitor::Discriminator::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Monitor::Discriminator::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Logging::Monitor::Discriminator::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "severity")
        return true;
    return false;
}

Native::Logging::MonitorConf::MonitorConf()
    :
    monitor{YType::boolean, "monitor"}
{

    yang_name = "monitor-conf"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::MonitorConf::~MonitorConf()
{
}

bool Native::Logging::MonitorConf::has_data() const
{
    return monitor.is_set;
}

bool Native::Logging::MonitorConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Logging::MonitorConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::MonitorConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::MonitorConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::MonitorConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::MonitorConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::MonitorConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::MonitorConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Logging::MonitorConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Logging::OriginId::OriginId()
    :
    string{YType::str, "string"},
    type_value{YType::enumeration, "type-value"}
{

    yang_name = "origin-id"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::OriginId::~OriginId()
{
}

bool Native::Logging::OriginId::has_data() const
{
    return string.is_set
	|| type_value.is_set;
}

bool Native::Logging::OriginId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(type_value.yfilter);
}

std::string Native::Logging::OriginId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::OriginId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "origin-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::OriginId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (type_value.is_set || is_set(type_value.yfilter)) leaf_name_data.push_back(type_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::OriginId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::OriginId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::OriginId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type-value")
    {
        type_value = value;
        type_value.value_namespace = name_space;
        type_value.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::OriginId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
    if(value_path == "type-value")
    {
        type_value.yfilter = yfilter;
    }
}

bool Native::Logging::OriginId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string" || name == "type-value")
        return true;
    return false;
}

Native::Logging::Persistent::Persistent()
    :
    file(std::make_shared<Native::Logging::Persistent::File>())
{
    file->parent = this;

    yang_name = "persistent"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Persistent::~Persistent()
{
}

bool Native::Logging::Persistent::has_data() const
{
    return (file !=  nullptr && file->has_data());
}

bool Native::Logging::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| (file !=  nullptr && file->has_operation());
}

std::string Native::Logging::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "file")
    {
        if(file == nullptr)
        {
            file = std::make_shared<Native::Logging::Persistent::File>();
        }
        return file;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(file != nullptr)
    {
        children["file"] = file;
    }

    return children;
}

void Native::Logging::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "file")
        return true;
    return false;
}

Native::Logging::Persistent::File::File()
    :
    protected_{YType::empty, "protected"},
    size{YType::str, "size"},
    threshold{YType::str, "threshold"},
    url{YType::str, "url"}
{

    yang_name = "file"; yang_parent_name = "persistent"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Persistent::File::~File()
{
}

bool Native::Logging::Persistent::File::has_data() const
{
    return protected_.is_set
	|| size.is_set
	|| threshold.is_set
	|| url.is_set;
}

bool Native::Logging::Persistent::File::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(url.yfilter);
}

std::string Native::Logging::Persistent::File::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/persistent/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Persistent::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Persistent::File::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Persistent::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Persistent::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Persistent::File::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Persistent::File::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
}

bool Native::Logging::Persistent::File::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected" || name == "size" || name == "threshold" || name == "url")
        return true;
    return false;
}

Native::Logging::RateLimit::RateLimit()
    :
    all(std::make_shared<Native::Logging::RateLimit::All>())
	,console(std::make_shared<Native::Logging::RateLimit::Console>())
{
    all->parent = this;
    console->parent = this;

    yang_name = "rate-limit"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::~RateLimit()
{
}

bool Native::Logging::RateLimit::has_data() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data())
	|| (console !=  nullptr && console->has_data());
}

bool Native::Logging::RateLimit::has_operation() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (console !=  nullptr && console->has_operation());
}

std::string Native::Logging::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Logging::RateLimit::All>();
        }
        return all;
    }

    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Logging::RateLimit::Console>();
        }
        return console;
    }

    if(child_yang_name == "ranges")
    {
        for(auto const & c : ranges)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::RateLimit::Ranges>();
        c->parent = this;
        ranges.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(console != nullptr)
    {
        children["console"] = console;
    }

    for (auto const & c : ranges)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "console" || name == "ranges")
        return true;
    return false;
}

Native::Logging::RateLimit::All::All()
{

    yang_name = "all"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::All::~All()
{
}

bool Native::Logging::RateLimit::All::has_data() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::RateLimit::All::has_operation() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Logging::RateLimit::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ranges")
    {
        for(auto const & c : ranges)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::RateLimit::All::Ranges>();
        c->parent = this;
        ranges.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ranges)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::RateLimit::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ranges")
        return true;
    return false;
}

Native::Logging::RateLimit::All::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
    	,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::All::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::All::Ranges::has_data() const
{
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::All::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::All::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::All::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::All::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::All::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::All::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::All::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(except != nullptr)
    {
        children["except"] = except;
    }

    return children;
}

void Native::Logging::RateLimit::All::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::All::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::All::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::All::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::RateLimit::All::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::All::Ranges::Except::has_data() const
{
    return range.is_set;
}

bool Native::Logging::RateLimit::All::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::All::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::All::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::All::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::All::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimit::All::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::All::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::All::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::Console()
    :
    all(std::make_shared<Native::Logging::RateLimit::Console::All>())
{
    all->parent = this;

    yang_name = "console"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::Console::~Console()
{
}

bool Native::Logging::RateLimit::Console::has_data() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Logging::RateLimit::Console::has_operation() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Logging::RateLimit::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Logging::RateLimit::Console::All>();
        }
        return all;
    }

    if(child_yang_name == "ranges")
    {
        for(auto const & c : ranges)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::RateLimit::Console::Ranges>();
        c->parent = this;
        ranges.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    for (auto const & c : ranges)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::RateLimit::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "ranges")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::All::All()
{

    yang_name = "all"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::Console::All::~All()
{
}

bool Native::Logging::RateLimit::Console::All::has_data() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Logging::RateLimit::Console::All::has_operation() const
{
    for (std::size_t index=0; index<ranges.size(); index++)
    {
        if(ranges[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Logging::RateLimit::Console::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ranges")
    {
        for(auto const & c : ranges)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Logging::RateLimit::Console::All::Ranges>();
        c->parent = this;
        ranges.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ranges)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Logging::RateLimit::Console::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Logging::RateLimit::Console::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Logging::RateLimit::Console::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ranges")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::All::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
    	,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::Console::All::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::Console::All::Ranges::has_data() const
{
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Console::All::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Console::All::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::All::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::All::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::All::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Console::All::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::All::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(except != nullptr)
    {
        children["except"] = except;
    }

    return children;
}

void Native::Logging::RateLimit::Console::All::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::All::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::All::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::All::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::RateLimit::Console::All::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::Console::All::Ranges::Except::has_data() const
{
    return range.is_set;
}

bool Native::Logging::RateLimit::Console::All::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::Console::All::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::All::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::All::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::All::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimit::Console::All::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::All::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::All::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
    	,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "console"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::Console::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::Console::Ranges::has_data() const
{
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Console::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Console::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/console/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Console::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Console::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(except != nullptr)
    {
        children["except"] = except;
    }

    return children;
}

void Native::Logging::RateLimit::Console::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Console::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::RateLimit::Console::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::Console::Ranges::Except::has_data() const
{
    return range.is_set;
}

bool Native::Logging::RateLimit::Console::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::Console::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Console::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Console::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Console::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimit::Console::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Console::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Console::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Ranges::Ranges()
    :
    range{YType::uint16, "range"}
    	,
    except(nullptr) // presence node
{

    yang_name = "ranges"; yang_parent_name = "rate-limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimit::Ranges::~Ranges()
{
}

bool Native::Logging::RateLimit::Ranges::has_data() const
{
    return range.is_set
	|| (except !=  nullptr && except->has_data());
}

bool Native::Logging::RateLimit::Ranges::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| (except !=  nullptr && except->has_operation());
}

std::string Native::Logging::RateLimit::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/rate-limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimit::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "except")
    {
        if(except == nullptr)
        {
            except = std::make_shared<Native::Logging::RateLimit::Ranges::Except>();
        }
        return except;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(except != nullptr)
    {
        children["except"] = except;
    }

    return children;
}

void Native::Logging::RateLimit::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "except" || name == "range")
        return true;
    return false;
}

Native::Logging::RateLimit::Ranges::Except::Except()
    :
    range{YType::str, "range"}
{

    yang_name = "except"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Logging::RateLimit::Ranges::Except::~Except()
{
}

bool Native::Logging::RateLimit::Ranges::Except::has_data() const
{
    return range.is_set;
}

bool Native::Logging::RateLimit::Ranges::Except::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Logging::RateLimit::Ranges::Except::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "except";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimit::Ranges::Except::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimit::Ranges::Except::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimit::Ranges::Except::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimit::Ranges::Except::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimit::Ranges::Except::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimit::Ranges::Except::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Logging::RateLimitConf::RateLimitConf()
    :
    rate_limit{YType::boolean, "rate-limit"}
{

    yang_name = "rate-limit-conf"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::RateLimitConf::~RateLimitConf()
{
}

bool Native::Logging::RateLimitConf::has_data() const
{
    return rate_limit.is_set;
}

bool Native::Logging::RateLimitConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string Native::Logging::RateLimitConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::RateLimitConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::RateLimitConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::RateLimitConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::RateLimitConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::RateLimitConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::RateLimitConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Logging::RateLimitConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Logging::SnmpTrap::SnmpTrap()
    :
    alerts{YType::empty, "alerts"},
    critical{YType::empty, "critical"},
    debugging{YType::empty, "debugging"},
    emergencies{YType::empty, "emergencies"},
    errors{YType::empty, "errors"},
    informational{YType::empty, "informational"},
    notifications{YType::empty, "notifications"},
    warnings{YType::empty, "warnings"}
{

    yang_name = "snmp-trap"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::SnmpTrap::~SnmpTrap()
{
}

bool Native::Logging::SnmpTrap::has_data() const
{
    return alerts.is_set
	|| critical.is_set
	|| debugging.is_set
	|| emergencies.is_set
	|| errors.is_set
	|| informational.is_set
	|| notifications.is_set
	|| warnings.is_set;
}

bool Native::Logging::SnmpTrap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alerts.yfilter)
	|| ydk::is_set(critical.yfilter)
	|| ydk::is_set(debugging.yfilter)
	|| ydk::is_set(emergencies.yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(informational.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(warnings.yfilter);
}

std::string Native::Logging::SnmpTrap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::SnmpTrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::SnmpTrap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alerts.is_set || is_set(alerts.yfilter)) leaf_name_data.push_back(alerts.get_name_leafdata());
    if (critical.is_set || is_set(critical.yfilter)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (debugging.is_set || is_set(debugging.yfilter)) leaf_name_data.push_back(debugging.get_name_leafdata());
    if (emergencies.is_set || is_set(emergencies.yfilter)) leaf_name_data.push_back(emergencies.get_name_leafdata());
    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (informational.is_set || is_set(informational.yfilter)) leaf_name_data.push_back(informational.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (warnings.is_set || is_set(warnings.yfilter)) leaf_name_data.push_back(warnings.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::SnmpTrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SnmpTrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SnmpTrap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alerts")
    {
        alerts = value;
        alerts.value_namespace = name_space;
        alerts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical")
    {
        critical = value;
        critical.value_namespace = name_space;
        critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "debugging")
    {
        debugging = value;
        debugging.value_namespace = name_space;
        debugging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "emergencies")
    {
        emergencies = value;
        emergencies.value_namespace = name_space;
        emergencies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informational")
    {
        informational = value;
        informational.value_namespace = name_space;
        informational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warnings")
    {
        warnings = value;
        warnings.value_namespace = name_space;
        warnings.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::SnmpTrap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alerts")
    {
        alerts.yfilter = yfilter;
    }
    if(value_path == "critical")
    {
        critical.yfilter = yfilter;
    }
    if(value_path == "debugging")
    {
        debugging.yfilter = yfilter;
    }
    if(value_path == "emergencies")
    {
        emergencies.yfilter = yfilter;
    }
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "informational")
    {
        informational.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "warnings")
    {
        warnings.yfilter = yfilter;
    }
}

bool Native::Logging::SnmpTrap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alerts" || name == "critical" || name == "debugging" || name == "emergencies" || name == "errors" || name == "informational" || name == "notifications" || name == "warnings")
        return true;
    return false;
}

Native::Logging::SourceInterface::SourceInterface()
    :
    interface_name{YType::str, "interface-name"},
    vrf{YType::str, "vrf"}
{

    yang_name = "source-interface"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::SourceInterface::~SourceInterface()
{
}

bool Native::Logging::SourceInterface::has_data() const
{
    return interface_name.is_set
	|| vrf.is_set;
}

bool Native::Logging::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Logging::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Logging::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "vrf")
        return true;
    return false;
}

Native::Logging::Trap::Trap()
    :
    severity{YType::str, "severity"},
    trap_default{YType::empty, "trap-default"}
{

    yang_name = "trap"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Logging::Trap::~Trap()
{
}

bool Native::Logging::Trap::has_data() const
{
    return severity.is_set
	|| trap_default.is_set;
}

bool Native::Logging::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(trap_default.yfilter);
}

std::string Native::Logging::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Logging::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Logging::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (trap_default.is_set || is_set(trap_default.yfilter)) leaf_name_data.push_back(trap_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Logging::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trap-default")
    {
        trap_default = value;
        trap_default.value_namespace = name_space;
        trap_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Logging::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "trap-default")
    {
        trap_default.yfilter = yfilter;
    }
}

bool Native::Logging::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "trap-default")
        return true;
    return false;
}

Native::Login::Login()
    :
    delay{YType::uint8, "delay"}
    	,
    on_failure(nullptr) // presence node
	,on_success(nullptr) // presence node
{

    yang_name = "login"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::~Login()
{
}

bool Native::Login::has_data() const
{
    return delay.is_set
	|| (on_failure !=  nullptr && on_failure->has_data())
	|| (on_success !=  nullptr && on_success->has_data());
}

bool Native::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (on_failure !=  nullptr && on_failure->has_operation())
	|| (on_success !=  nullptr && on_success->has_operation());
}

std::string Native::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-failure")
    {
        if(on_failure == nullptr)
        {
            on_failure = std::make_shared<Native::Login::OnFailure>();
        }
        return on_failure;
    }

    if(child_yang_name == "on-success")
    {
        if(on_success == nullptr)
        {
            on_success = std::make_shared<Native::Login::OnSuccess>();
        }
        return on_success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_failure != nullptr)
    {
        children["on-failure"] = on_failure;
    }

    if(on_success != nullptr)
    {
        children["on-success"] = on_success;
    }

    return children;
}

void Native::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-failure" || name == "on-success" || name == "delay")
        return true;
    return false;
}

Native::Login::OnFailure::OnFailure()
    :
    log(nullptr) // presence node
{

    yang_name = "on-failure"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnFailure::~OnFailure()
{
}

bool Native::Login::OnFailure::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnFailure::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnFailure::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnFailure::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-failure"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnFailure::Log::~Log()
{
}

bool Native::Login::OnFailure::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnFailure::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnFailure::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-failure/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnFailure::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnFailure::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnFailure::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnFailure::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Login::OnSuccess::OnSuccess()
    :
    log(nullptr) // presence node
{

    yang_name = "on-success"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnSuccess::~OnSuccess()
{
}

bool Native::Login::OnSuccess::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnSuccess::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnSuccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnSuccess::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnSuccess::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-success"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnSuccess::Log::~Log()
{
}

bool Native::Login::OnSuccess::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnSuccess::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnSuccess::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnSuccess::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnSuccess::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnSuccess::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Mac::Mac()
    :
    access_list(std::make_shared<Native::Mac::AccessList>())
	,address_table(std::make_shared<Native::Mac::AddressTable>())
{
    access_list->parent = this;
    address_table->parent = this;

    yang_name = "mac"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::~Mac()
{
}

bool Native::Mac::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data())
	|| (address_table !=  nullptr && address_table->has_data());
}

bool Native::Mac::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address_table !=  nullptr && address_table->has_operation());
}

std::string Native::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Mac::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address-table")
    {
        if(address_table == nullptr)
        {
            address_table = std::make_shared<Native::Mac::AddressTable>();
        }
        return address_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(address_table != nullptr)
    {
        children["address-table"] = address_table;
    }

    return children;
}

void Native::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "address-table")
        return true;
    return false;
}

Native::Mac::AccessList::AccessList()
{

    yang_name = "access-list"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AccessList::~AccessList()
{
}

bool Native::Mac::AccessList::has_data() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mac::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mac::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mac::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mac::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mac::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mac::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Extended()
    :
    id{YType::str, "id"}
    	,
    deny(std::make_shared<Native::Mac::AccessList::Extended::Deny>())
	,permit(std::make_shared<Native::Mac::AccessList::Extended::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AccessList::Extended::~Extended()
{
}

bool Native::Mac::AccessList::Extended::has_data() const
{
    return id.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Mac::AccessList::Extended::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Mac::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/Cisco-IOS-XE-acl:access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Mac::AccessList::Extended::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Mac::AccessList::Extended::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::get_children() const
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

void Native::Mac::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "id")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Deny::Deny()
    :
    ethertype{YType::str, "ethertype"}
    	,
    dest(std::make_shared<Native::Mac::AccessList::Extended::Deny::Dest>())
	,source(std::make_shared<Native::Mac::AccessList::Extended::Deny::Source>())
{
    dest->parent = this;
    source->parent = this;

    yang_name = "deny"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Deny::~Deny()
{
}

bool Native::Mac::AccessList::Extended::Deny::has_data() const
{
    return ethertype.is_set
	|| (dest !=  nullptr && dest->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Mac::AccessList::Extended::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| (dest !=  nullptr && dest->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Mac::AccessList::Extended::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest")
    {
        if(dest == nullptr)
        {
            dest = std::make_shared<Native::Mac::AccessList::Extended::Deny::Dest>();
        }
        return dest;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Mac::AccessList::Extended::Deny::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest != nullptr)
    {
        children["dest"] = dest;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Mac::AccessList::Extended::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest" || name == "source" || name == "ethertype")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Deny::Dest::Dest()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "dest"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Deny::Dest::~Dest()
{
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Deny::Dest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Deny::Dest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::Dest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::Dest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Deny::Dest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Deny::Dest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Deny::Source::Source()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "source"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Deny::Source::~Source()
{
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Deny::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Deny::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Deny::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Deny::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Permit::Permit()
    :
    ethertype{YType::str, "ethertype"}
    	,
    dest(std::make_shared<Native::Mac::AccessList::Extended::Permit::Dest>())
	,source(std::make_shared<Native::Mac::AccessList::Extended::Permit::Source>())
{
    dest->parent = this;
    source->parent = this;

    yang_name = "permit"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Permit::~Permit()
{
}

bool Native::Mac::AccessList::Extended::Permit::has_data() const
{
    return ethertype.is_set
	|| (dest !=  nullptr && dest->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Mac::AccessList::Extended::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethertype.yfilter)
	|| (dest !=  nullptr && dest->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Mac::AccessList::Extended::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.yfilter)) leaf_name_data.push_back(ethertype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest")
    {
        if(dest == nullptr)
        {
            dest = std::make_shared<Native::Mac::AccessList::Extended::Permit::Dest>();
        }
        return dest;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Mac::AccessList::Extended::Permit::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest != nullptr)
    {
        children["dest"] = dest;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Mac::AccessList::Extended::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
        ethertype.value_namespace = name_space;
        ethertype.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethertype")
    {
        ethertype.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest" || name == "source" || name == "ethertype")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Permit::Dest::Dest()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "dest"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Permit::Dest::~Dest()
{
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Permit::Dest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Permit::Dest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::Dest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::Dest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Permit::Dest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Permit::Dest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AccessList::Extended::Permit::Source::Source()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "source"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mac::AccessList::Extended::Permit::Source::~Source()
{
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Native::Mac::AccessList::Extended::Permit::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AccessList::Extended::Permit::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Permit::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AccessList::Extended::Permit::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "mac-address")
        return true;
    return false;
}

Native::Mac::AddressTable::AddressTable()
    :
    control_packet_learn{YType::empty, "control-packet-learn"}
    	,
    aging_time(std::make_shared<Native::Mac::AddressTable::AgingTime>())
	,learning(std::make_shared<Native::Mac::AddressTable::Learning>())
	,notification(std::make_shared<Native::Mac::AddressTable::Notification>())
	,static_(std::make_shared<Native::Mac::AddressTable::Static_>())
{
    aging_time->parent = this;
    learning->parent = this;
    notification->parent = this;
    static_->parent = this;

    yang_name = "address-table"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::~AddressTable()
{
}

bool Native::Mac::AddressTable::has_data() const
{
    return control_packet_learn.is_set
	|| (aging_time !=  nullptr && aging_time->has_data())
	|| (learning !=  nullptr && learning->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mac::AddressTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_packet_learn.yfilter)
	|| (aging_time !=  nullptr && aging_time->has_operation())
	|| (learning !=  nullptr && learning->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mac::AddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_packet_learn.is_set || is_set(control_packet_learn.yfilter)) leaf_name_data.push_back(control_packet_learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging-time")
    {
        if(aging_time == nullptr)
        {
            aging_time = std::make_shared<Native::Mac::AddressTable::AgingTime>();
        }
        return aging_time;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Mac::AddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Mac::AddressTable::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mac::AddressTable::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging_time != nullptr)
    {
        children["aging-time"] = aging_time;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mac::AddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn = value;
        control_packet_learn.value_namespace = name_space;
        control_packet_learn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-packet-learn")
    {
        control_packet_learn.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time" || name == "learning" || name == "notification" || name == "static" || name == "control-packet-learn")
        return true;
    return false;
}

Native::Mac::AddressTable::AgingTime::AgingTime()
    :
    routed_mac{YType::empty, "routed-mac"},
    val{YType::uint32, "val"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "aging-time"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::AgingTime::~AgingTime()
{
}

bool Native::Mac::AddressTable::AgingTime::has_data() const
{
    return routed_mac.is_set
	|| val.is_set
	|| vlan.is_set;
}

bool Native::Mac::AddressTable::AgingTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routed_mac.yfilter)
	|| ydk::is_set(val.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::AgingTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::AgingTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::AgingTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routed_mac.is_set || is_set(routed_mac.yfilter)) leaf_name_data.push_back(routed_mac.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::AgingTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::AgingTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::AgingTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routed-mac")
    {
        routed_mac = value;
        routed_mac.value_namespace = name_space;
        routed_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::AgingTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routed-mac")
    {
        routed_mac.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::AgingTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routed-mac" || name == "val" || name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Learning::Learning()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "learning"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Learning::~Learning()
{
}

bool Native::Mac::AddressTable::Learning::has_data() const
{
    return vlan.is_set;
}

bool Native::Mac::AddressTable::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Notification()
    :
    mac_move{YType::empty, "mac-move"}
    	,
    change(nullptr) // presence node
	,threshold(nullptr) // presence node
{

    yang_name = "notification"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::~Notification()
{
}

bool Native::Mac::AddressTable::Notification::has_data() const
{
    return mac_move.is_set
	|| (change !=  nullptr && change->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Mac::AddressTable::Notification::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_move.yfilter)
	|| (change !=  nullptr && change->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Mac::AddressTable::Notification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_move.is_set || is_set(mac_move.yfilter)) leaf_name_data.push_back(mac_move.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mac::AddressTable::Notification::Change>();
        }
        return change;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Mac::AddressTable::Notification::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change != nullptr)
    {
        children["change"] = change;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-move")
    {
        mac_move = value;
        mac_move.value_namespace = name_space;
        mac_move.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-move")
    {
        mac_move.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change" || name == "threshold" || name == "mac-move")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Change::Change()
    :
    history_size{YType::uint16, "history-size"},
    interval{YType::uint32, "interval"}
{

    yang_name = "change"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Change::~Change()
{
}

bool Native::Mac::AddressTable::Notification::Change::has_data() const
{
    return history_size.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history_size.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Change::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Change::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.yfilter)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Notification::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history-size")
    {
        history_size = value;
        history_size.value_namespace = name_space;
        history_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history-size")
    {
        history_size.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-size" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Threshold()
    :
    interval{YType::uint32, "interval"}
    	,
    limit(std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>())
{
    limit->parent = this;

    yang_name = "threshold"; yang_parent_name = "notification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Threshold::~Threshold()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::has_data() const
{
    return interval.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Mac::AddressTable::Notification::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "interval")
        return true;
    return false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::Limit()
    :
    interval{YType::uint32, "interval"},
    percentage{YType::uint8, "percentage"}
{

    yang_name = "limit"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Notification::Threshold::Limit::~Limit()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_data() const
{
    return interval.is_set
	|| percentage.is_set;
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(percentage.yfilter);
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Notification::Threshold::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "percentage")
        return true;
    return false;
}

Native::Mac::AddressTable::Static_::Static_()
    :
    drop{YType::empty, "drop"},
    interface{YType::str, "interface"},
    mac_address{YType::str, "mac-address"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "static"; yang_parent_name = "address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mac::AddressTable::Static_::~Static_()
{
}

bool Native::Mac::AddressTable::Static_::has_data() const
{
    return drop.is_set
	|| interface.is_set
	|| mac_address.is_set
	|| vlan.is_set;
}

bool Native::Mac::AddressTable::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Mac::AddressTable::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mac::AddressTable::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mac::AddressTable::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mac::AddressTable::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mac::AddressTable::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "interface" || name == "mac-address" || name == "vlan")
        return true;
    return false;
}

Native::MacAddressTable::MacAddressTable()
    :
    evc_xconnect(std::make_shared<Native::MacAddressTable::EvcXconnect>())
	,learning(std::make_shared<Native::MacAddressTable::Learning>())
	,limit(std::make_shared<Native::MacAddressTable::Limit>())
{
    evc_xconnect->parent = this;
    learning->parent = this;
    limit->parent = this;

    yang_name = "mac-address-table"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::~MacAddressTable()
{
}

bool Native::MacAddressTable::has_data() const
{
    return (evc_xconnect !=  nullptr && evc_xconnect->has_data())
	|| (learning !=  nullptr && learning->has_data())
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::MacAddressTable::has_operation() const
{
    return is_set(yfilter)
	|| (evc_xconnect !=  nullptr && evc_xconnect->has_operation())
	|| (learning !=  nullptr && learning->has_operation())
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::MacAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evc-xconnect")
    {
        if(evc_xconnect == nullptr)
        {
            evc_xconnect = std::make_shared<Native::MacAddressTable::EvcXconnect>();
        }
        return evc_xconnect;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::MacAddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::MacAddressTable::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evc_xconnect != nullptr)
    {
        children["evc-xconnect"] = evc_xconnect;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::MacAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc-xconnect" || name == "learning" || name == "limit")
        return true;
    return false;
}

Native::MacAddressTable::EvcXconnect::EvcXconnect()
    :
    l2pt_forward_all{YType::empty, "l2pt-forward-all"}
{

    yang_name = "evc-xconnect"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::EvcXconnect::~EvcXconnect()
{
}

bool Native::MacAddressTable::EvcXconnect::has_data() const
{
    return l2pt_forward_all.is_set;
}

bool Native::MacAddressTable::EvcXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2pt_forward_all.yfilter);
}

std::string Native::MacAddressTable::EvcXconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::EvcXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::EvcXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2pt_forward_all.is_set || is_set(l2pt_forward_all.yfilter)) leaf_name_data.push_back(l2pt_forward_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::EvcXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::EvcXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::EvcXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all = value;
        l2pt_forward_all.value_namespace = name_space;
        l2pt_forward_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::EvcXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::EvcXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2pt-forward-all")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Learning()
{

    yang_name = "learning"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Learning::~Learning()
{
}

bool Native::MacAddressTable::Learning::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Learning::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::MacAddressTable::Learning::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Vlan::Vlan()
    :
    id{YType::uint16, "id"},
    module{YType::uint8, "module"}
{

    yang_name = "vlan"; yang_parent_name = "learning"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Learning::Vlan::~Vlan()
{
}

bool Native::MacAddressTable::Learning::Vlan::has_data() const
{
    return id.is_set
	|| module.is_set;
}

bool Native::MacAddressTable::Learning::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(module.yfilter);
}

std::string Native::MacAddressTable::Learning::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/learning/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Learning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Learning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Learning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "module")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Limit()
{

    yang_name = "limit"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Limit::~Limit()
{
}

bool Native::MacAddressTable::Limit::has_data() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Limit::has_operation() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdomain")
    {
        for(auto const & c : bdomain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MacAddressTable::Limit::Bdomain>();
        c->parent = this;
        bdomain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bdomain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdomain")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Bdomain::Bdomain()
    :
    number{YType::uint16, "number"},
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "bdomain"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Limit::Bdomain::~Bdomain()
{
}

bool Native::MacAddressTable::Limit::Bdomain::has_data() const
{
    return number.is_set
	|| action.is_set
	|| maximum.is_set;
}

bool Native::MacAddressTable::Limit::Bdomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Native::MacAddressTable::Limit::Bdomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::Bdomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdomain" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::Bdomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::Bdomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::Bdomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Limit::Bdomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Limit::Bdomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Limit::Bdomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "action" || name == "maximum")
        return true;
    return false;
}

Native::Macro::Macro()
    :
    auto_(std::make_shared<Native::Macro::Auto_>())
	,global(std::make_shared<Native::Macro::Global>())
{
    auto_->parent = this;
    global->parent = this;

    yang_name = "macro"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Macro::~Macro()
{
}

bool Native::Macro::has_data() const
{
    return (auto_ !=  nullptr && auto_->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool Native::Macro::has_operation() const
{
    return is_set(yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Macro::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Macro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<Native::Macro::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Macro::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Macro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Macro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Macro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "global")
        return true;
    return false;
}

Native::Macro::Auto_::Auto_()
    :
    global(std::make_shared<Native::Macro::Auto_::Global>())
{
    global->parent = this;

    yang_name = "auto"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Macro::Auto_::~Auto_()
{
}

bool Native::Macro::Auto_::has_data() const
{
    for (std::size_t index=0; index<execute.size(); index++)
    {
        if(execute[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Macro::Auto_::has_operation() const
{
    for (std::size_t index=0; index<execute.size(); index++)
    {
        if(execute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Macro::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Macro::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "execute")
    {
        for(auto const & c : execute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Macro::Auto_::Execute>();
        c->parent = this;
        execute.push_back(c);
        return c;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Macro::Auto_::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : execute)
    {
        children[c->get_segment_path()] = c;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Macro::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Macro::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Macro::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "execute" || name == "global")
        return true;
    return false;
}

Native::Macro::Auto_::Execute::Execute()
    :
    trigger_event{YType::str, "trigger-event"}
    	,
    builtin(std::make_shared<Native::Macro::Auto_::Execute::Builtin>())
{
    builtin->parent = this;

    yang_name = "execute"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Macro::Auto_::Execute::~Execute()
{
}

bool Native::Macro::Auto_::Execute::has_data() const
{
    return trigger_event.is_set
	|| (builtin !=  nullptr && builtin->has_data());
}

bool Native::Macro::Auto_::Execute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trigger_event.yfilter)
	|| (builtin !=  nullptr && builtin->has_operation());
}

std::string Native::Macro::Auto_::Execute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto_::Execute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:execute" <<"[trigger-event='" <<trigger_event <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto_::Execute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trigger_event.is_set || is_set(trigger_event.yfilter)) leaf_name_data.push_back(trigger_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Macro::Auto_::Execute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "builtin")
    {
        if(builtin == nullptr)
        {
            builtin = std::make_shared<Native::Macro::Auto_::Execute::Builtin>();
        }
        return builtin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::Execute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(builtin != nullptr)
    {
        children["builtin"] = builtin;
    }

    return children;
}

void Native::Macro::Auto_::Execute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trigger-event")
    {
        trigger_event = value;
        trigger_event.value_namespace = name_space;
        trigger_event.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto_::Execute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trigger-event")
    {
        trigger_event.yfilter = yfilter;
    }
}

bool Native::Macro::Auto_::Execute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "builtin" || name == "trigger-event")
        return true;
    return false;
}

Native::Macro::Auto_::Execute::Builtin::Builtin()
    :
    parameters{YType::str, "parameters"},
    smart_port_configuration{YType::enumeration, "smart-port-configuration"}
{

    yang_name = "builtin"; yang_parent_name = "execute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Macro::Auto_::Execute::Builtin::~Builtin()
{
}

bool Native::Macro::Auto_::Execute::Builtin::has_data() const
{
    return parameters.is_set
	|| smart_port_configuration.is_set;
}

bool Native::Macro::Auto_::Execute::Builtin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(parameters.yfilter)
	|| ydk::is_set(smart_port_configuration.yfilter);
}

std::string Native::Macro::Auto_::Execute::Builtin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "builtin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto_::Execute::Builtin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parameters.is_set || is_set(parameters.yfilter)) leaf_name_data.push_back(parameters.get_name_leafdata());
    if (smart_port_configuration.is_set || is_set(smart_port_configuration.yfilter)) leaf_name_data.push_back(smart_port_configuration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Macro::Auto_::Execute::Builtin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::Execute::Builtin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Macro::Auto_::Execute::Builtin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parameters")
    {
        parameters = value;
        parameters.value_namespace = name_space;
        parameters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smart-port-configuration")
    {
        smart_port_configuration = value;
        smart_port_configuration.value_namespace = name_space;
        smart_port_configuration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto_::Execute::Builtin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parameters")
    {
        parameters.yfilter = yfilter;
    }
    if(value_path == "smart-port-configuration")
    {
        smart_port_configuration.yfilter = yfilter;
    }
}

bool Native::Macro::Auto_::Execute::Builtin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "smart-port-configuration")
        return true;
    return false;
}

Native::Macro::Auto_::Global::Global()
    :
    processing{YType::empty, "processing"}
{

    yang_name = "global"; yang_parent_name = "auto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Macro::Auto_::Global::~Global()
{
}

bool Native::Macro::Auto_::Global::has_data() const
{
    return processing.is_set;
}

bool Native::Macro::Auto_::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(processing.yfilter);
}

std::string Native::Macro::Auto_::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/auto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Auto_::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Auto_::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (processing.is_set || is_set(processing.yfilter)) leaf_name_data.push_back(processing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Macro::Auto_::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Auto_::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Macro::Auto_::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "processing")
    {
        processing = value;
        processing.value_namespace = name_space;
        processing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Auto_::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "processing")
    {
        processing.yfilter = yfilter;
    }
}

bool Native::Macro::Auto_::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "processing")
        return true;
    return false;
}

Native::Macro::Global::Global()
    :
    description{YType::str, "description"}
{

    yang_name = "global"; yang_parent_name = "macro"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Macro::Global::~Global()
{
}

bool Native::Macro::Global::has_data() const
{
    return description.is_set;
}

bool Native::Macro::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::Macro::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/macro/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Macro::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Macro::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Macro::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Macro::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Macro::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Macro::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Macro::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description")
        return true;
    return false;
}

Native::MaintenanceTemplate::MaintenanceTemplate()
    :
    templ_name{YType::str, "templ-name"}
    	,
    config_maintenance_templ(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl>())
{
    config_maintenance_templ->parent = this;

    yang_name = "maintenance-template"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MaintenanceTemplate::~MaintenanceTemplate()
{
}

bool Native::MaintenanceTemplate::has_data() const
{
    return templ_name.is_set
	|| (config_maintenance_templ !=  nullptr && config_maintenance_templ->has_data());
}

bool Native::MaintenanceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(templ_name.yfilter)
	|| (config_maintenance_templ !=  nullptr && config_maintenance_templ->has_operation());
}

std::string Native::MaintenanceTemplate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MaintenanceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mmode:maintenance-template" <<"[templ-name='" <<templ_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templ_name.is_set || is_set(templ_name.yfilter)) leaf_name_data.push_back(templ_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-maintenance-templ")
    {
        if(config_maintenance_templ == nullptr)
        {
            config_maintenance_templ = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl>();
        }
        return config_maintenance_templ;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_maintenance_templ != nullptr)
    {
        children["config-maintenance-templ"] = config_maintenance_templ;
    }

    return children;
}

void Native::MaintenanceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "templ-name")
    {
        templ_name = value;
        templ_name.value_namespace = name_space;
        templ_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MaintenanceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "templ-name")
    {
        templ_name.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-maintenance-templ" || name == "templ-name")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::ConfigMaintenanceTempl()
    :
    router(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router>())
	,shutdown(std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown>())
{
    router->parent = this;
    shutdown->parent = this;

    yang_name = "config-maintenance-templ"; yang_parent_name = "maintenance-template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::~ConfigMaintenanceTempl()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_data() const
{
    return (router !=  nullptr && router->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_operation() const
{
    return is_set(yfilter)
	|| (router !=  nullptr && router->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-maintenance-templ";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router>();
        }
        return router;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router" || name == "shutdown")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::Router()
{

    yang_name = "router"; yang_parent_name = "config-maintenance-templ"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::~Router()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::has_data() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::has_operation() const
{
    for (std::size_t index=0; index<routing_protocol.size(); index++)
    {
        if(routing_protocol[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "routing-protocol")
    {
        for(auto const & c : routing_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol>();
        c->parent = this;
        routing_protocol.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : routing_protocol)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "routing-protocol")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::RoutingProtocol()
    :
    protocol{YType::enumeration, "protocol"},
    instance{YType::uint16, "instance"}
{

    yang_name = "routing-protocol"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::~RoutingProtocol()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::has_data() const
{
    return protocol.is_set
	|| instance.is_set;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(instance.yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing-protocol" <<"[protocol='" <<protocol <<"']" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "instance")
        return true;
    return false;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::Shutdown()
    :
    l2{YType::empty, "l2"}
{

    yang_name = "shutdown"; yang_parent_name = "config-maintenance-templ"; is_top_level_class = false; has_list_ancestor = true;
}

Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::~Shutdown()
{
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::has_data() const
{
    return l2.is_set;
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2.yfilter);
}

std::string Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2.is_set || is_set(l2.yfilter)) leaf_name_data.push_back(l2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2")
    {
        l2 = value;
        l2.value_namespace = name_space;
        l2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2")
    {
        l2.yfilter = yfilter;
    }
}

bool Native::MaintenanceTemplate::ConfigMaintenanceTempl::Shutdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2")
        return true;
    return false;
}

Native::Memory::Memory()
    :
    lite{YType::empty, "lite"}
    	,
    chunk(std::make_shared<Native::Memory::Chunk>())
	,free(std::make_shared<Native::Memory::Free>())
	,reserve(std::make_shared<Native::Memory::Reserve>())
	,sanity(nullptr) // presence node
	,statistics(std::make_shared<Native::Memory::Statistics>())
{
    chunk->parent = this;
    free->parent = this;
    reserve->parent = this;
    statistics->parent = this;

    yang_name = "memory"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::~Memory()
{
}

bool Native::Memory::has_data() const
{
    return lite.is_set
	|| (chunk !=  nullptr && chunk->has_data())
	|| (free !=  nullptr && free->has_data())
	|| (reserve !=  nullptr && reserve->has_data())
	|| (sanity !=  nullptr && sanity->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Native::Memory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lite.yfilter)
	|| (chunk !=  nullptr && chunk->has_operation())
	|| (free !=  nullptr && free->has_operation())
	|| (reserve !=  nullptr && reserve->has_operation())
	|| (sanity !=  nullptr && sanity->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Native::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lite.is_set || is_set(lite.yfilter)) leaf_name_data.push_back(lite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chunk")
    {
        if(chunk == nullptr)
        {
            chunk = std::make_shared<Native::Memory::Chunk>();
        }
        return chunk;
    }

    if(child_yang_name == "free")
    {
        if(free == nullptr)
        {
            free = std::make_shared<Native::Memory::Free>();
        }
        return free;
    }

    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Memory::Reserve>();
        }
        return reserve;
    }

    if(child_yang_name == "sanity")
    {
        if(sanity == nullptr)
        {
            sanity = std::make_shared<Native::Memory::Sanity>();
        }
        return sanity;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Memory::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chunk != nullptr)
    {
        children["chunk"] = chunk;
    }

    if(free != nullptr)
    {
        children["free"] = free;
    }

    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    if(sanity != nullptr)
    {
        children["sanity"] = sanity;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Native::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lite")
    {
        lite = value;
        lite.value_namespace = name_space;
        lite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lite")
    {
        lite.yfilter = yfilter;
    }
}

bool Native::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chunk" || name == "free" || name == "reserve" || name == "sanity" || name == "statistics" || name == "lite")
        return true;
    return false;
}

Native::Memory::Chunk::Chunk()
    :
    siblings(std::make_shared<Native::Memory::Chunk::Siblings>())
{
    siblings->parent = this;

    yang_name = "chunk"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Chunk::~Chunk()
{
}

bool Native::Memory::Chunk::has_data() const
{
    return (siblings !=  nullptr && siblings->has_data());
}

bool Native::Memory::Chunk::has_operation() const
{
    return is_set(yfilter)
	|| (siblings !=  nullptr && siblings->has_operation());
}

std::string Native::Memory::Chunk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Chunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Chunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Chunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "siblings")
    {
        if(siblings == nullptr)
        {
            siblings = std::make_shared<Native::Memory::Chunk::Siblings>();
        }
        return siblings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Chunk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(siblings != nullptr)
    {
        children["siblings"] = siblings;
    }

    return children;
}

void Native::Memory::Chunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Chunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Chunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "siblings")
        return true;
    return false;
}

Native::Memory::Chunk::Siblings::Siblings()
    :
    threshold{YType::uint32, "threshold"}
{

    yang_name = "siblings"; yang_parent_name = "chunk"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Chunk::Siblings::~Siblings()
{
}

bool Native::Memory::Chunk::Siblings::has_data() const
{
    return threshold.is_set;
}

bool Native::Memory::Chunk::Siblings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Memory::Chunk::Siblings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/chunk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Chunk::Siblings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "siblings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Chunk::Siblings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Chunk::Siblings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Chunk::Siblings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Chunk::Siblings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Chunk::Siblings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Memory::Chunk::Siblings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Memory::Free::Free()
    :
    low_watermark(std::make_shared<Native::Memory::Free::LowWatermark>())
{
    low_watermark->parent = this;

    yang_name = "free"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Free::~Free()
{
}

bool Native::Memory::Free::has_data() const
{
    return (low_watermark !=  nullptr && low_watermark->has_data());
}

bool Native::Memory::Free::has_operation() const
{
    return is_set(yfilter)
	|| (low_watermark !=  nullptr && low_watermark->has_operation());
}

std::string Native::Memory::Free::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Free::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "free";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Free::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Free::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "low-watermark")
    {
        if(low_watermark == nullptr)
        {
            low_watermark = std::make_shared<Native::Memory::Free::LowWatermark>();
        }
        return low_watermark;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Free::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(low_watermark != nullptr)
    {
        children["low-watermark"] = low_watermark;
    }

    return children;
}

void Native::Memory::Free::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Free::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Free::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-watermark")
        return true;
    return false;
}

Native::Memory::Free::LowWatermark::LowWatermark()
    :
    io{YType::uint32, "IO"},
    processor{YType::uint32, "processor"}
{

    yang_name = "low-watermark"; yang_parent_name = "free"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Free::LowWatermark::~LowWatermark()
{
}

bool Native::Memory::Free::LowWatermark::has_data() const
{
    return io.is_set
	|| processor.is_set;
}

bool Native::Memory::Free::LowWatermark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(io.yfilter)
	|| ydk::is_set(processor.yfilter);
}

std::string Native::Memory::Free::LowWatermark::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/free/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Free::LowWatermark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-watermark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Free::LowWatermark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (io.is_set || is_set(io.yfilter)) leaf_name_data.push_back(io.get_name_leafdata());
    if (processor.is_set || is_set(processor.yfilter)) leaf_name_data.push_back(processor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Free::LowWatermark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Free::LowWatermark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Free::LowWatermark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "IO")
    {
        io = value;
        io.value_namespace = name_space;
        io.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor")
    {
        processor = value;
        processor.value_namespace = name_space;
        processor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Free::LowWatermark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "IO")
    {
        io.yfilter = yfilter;
    }
    if(value_path == "processor")
    {
        processor.yfilter = yfilter;
    }
}

bool Native::Memory::Free::LowWatermark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IO" || name == "processor")
        return true;
    return false;
}

Native::Memory::Reserve::Reserve()
    :
    critical(nullptr) // presence node
{

    yang_name = "reserve"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Reserve::~Reserve()
{
}

bool Native::Memory::Reserve::has_data() const
{
    return (critical !=  nullptr && critical->has_data());
}

bool Native::Memory::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation());
}

std::string Native::Memory::Reserve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Memory::Reserve::Critical>();
        }
        return critical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    return children;
}

void Native::Memory::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical")
        return true;
    return false;
}

Native::Memory::Reserve::Critical::Critical()
    :
    memory_range{YType::uint32, "memory-range"}
{

    yang_name = "critical"; yang_parent_name = "reserve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Reserve::Critical::~Critical()
{
}

bool Native::Memory::Reserve::Critical::has_data() const
{
    return memory_range.is_set;
}

bool Native::Memory::Reserve::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_range.yfilter);
}

std::string Native::Memory::Reserve::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/reserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Reserve::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Reserve::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_range.is_set || is_set(memory_range.yfilter)) leaf_name_data.push_back(memory_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Reserve::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Reserve::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Reserve::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-range")
    {
        memory_range = value;
        memory_range.value_namespace = name_space;
        memory_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Reserve::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-range")
    {
        memory_range.yfilter = yfilter;
    }
}

bool Native::Memory::Reserve::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-range")
        return true;
    return false;
}

Native::Memory::Sanity::Sanity()
    :
    all{YType::empty, "all"},
    buffer{YType::empty, "buffer"},
    queue{YType::empty, "queue"}
{

    yang_name = "sanity"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Sanity::~Sanity()
{
}

bool Native::Memory::Sanity::has_data() const
{
    return all.is_set
	|| buffer.is_set
	|| queue.is_set;
}

bool Native::Memory::Sanity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(buffer.yfilter)
	|| ydk::is_set(queue.yfilter);
}

std::string Native::Memory::Sanity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Sanity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sanity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Sanity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());
    if (queue.is_set || is_set(queue.yfilter)) leaf_name_data.push_back(queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Sanity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Sanity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Sanity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue")
    {
        queue = value;
        queue.value_namespace = name_space;
        queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Sanity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
    if(value_path == "queue")
    {
        queue.yfilter = yfilter;
    }
}

bool Native::Memory::Sanity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "buffer" || name == "queue")
        return true;
    return false;
}

Native::Memory::Statistics::Statistics()
    :
    history(std::make_shared<Native::Memory::Statistics::History>())
{
    history->parent = this;

    yang_name = "statistics"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Statistics::~Statistics()
{
}

bool Native::Memory::Statistics::has_data() const
{
    return (history !=  nullptr && history->has_data());
}

bool Native::Memory::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Memory::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Memory::Statistics::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Memory::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Native::Memory::Statistics::History::History()
    :
    table{YType::uint8, "table"}
{

    yang_name = "history"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Memory::Statistics::History::~History()
{
}

bool Native::Memory::Statistics::History::has_data() const
{
    return table.is_set;
}

bool Native::Memory::Statistics::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Memory::Statistics::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Statistics::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Statistics::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Memory::Statistics::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Memory::Statistics::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Memory::Statistics::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Statistics::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Memory::Statistics::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::MemorySize::MemorySize()
    :
    iomem{YType::uint8, "iomem"}
{

    yang_name = "memory-size"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MemorySize::~MemorySize()
{
}

bool Native::MemorySize::has_data() const
{
    return iomem.is_set;
}

bool Native::MemorySize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iomem.yfilter);
}

std::string Native::MemorySize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MemorySize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MemorySize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iomem.is_set || is_set(iomem.yfilter)) leaf_name_data.push_back(iomem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MemorySize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MemorySize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MemorySize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iomem")
    {
        iomem = value;
        iomem.value_namespace = name_space;
        iomem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MemorySize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iomem")
    {
        iomem.yfilter = yfilter;
    }
}

bool Native::MemorySize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iomem")
        return true;
    return false;
}

Native::Metadata::Metadata()
    :
    flow(nullptr) // presence node
{

    yang_name = "metadata"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Metadata::~Metadata()
{
}

bool Native::Metadata::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Metadata::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Metadata::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Metadata::Flow::Flow()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "flow"; yang_parent_name = "metadata"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Metadata::Flow::~Flow()
{
}

bool Native::Metadata::Flow::has_data() const
{
    return transmit.is_set;
}

bool Native::Metadata::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Metadata::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/metadata/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Metadata::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Metadata::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Metadata::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Metadata::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Metadata::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Metadata::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Mka::Mka()
{

    yang_name = "mka"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mka::~Mka()
{
}

bool Native::Mka::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mka::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mka::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mka";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mka::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mka::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mka::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mka::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Mka::Policy::Policy()
    :
    name{YType::str, "name"}
    	,
    macsec_cipher_suite(std::make_shared<Native::Mka::Policy::MacsecCipherSuite>())
{
    macsec_cipher_suite->parent = this;

    yang_name = "policy"; yang_parent_name = "mka"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mka::Policy::~Policy()
{
}

bool Native::Mka::Policy::has_data() const
{
    return name.is_set
	|| (macsec_cipher_suite !=  nullptr && macsec_cipher_suite->has_data());
}

bool Native::Mka::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (macsec_cipher_suite !=  nullptr && macsec_cipher_suite->has_operation());
}

std::string Native::Mka::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mka/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mka::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:policy" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mka::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "macsec-cipher-suite")
    {
        if(macsec_cipher_suite == nullptr)
        {
            macsec_cipher_suite = std::make_shared<Native::Mka::Policy::MacsecCipherSuite>();
        }
        return macsec_cipher_suite;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mka::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(macsec_cipher_suite != nullptr)
    {
        children["macsec-cipher-suite"] = macsec_cipher_suite;
    }

    return children;
}

void Native::Mka::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mka::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Mka::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "macsec-cipher-suite" || name == "name")
        return true;
    return false;
}

Native::Mka::Policy::MacsecCipherSuite::MacsecCipherSuite()
    :
    gcm_aes_128{YType::empty, "gcm-aes-128"},
    gcm_aes_256{YType::empty, "gcm-aes-256"}
{

    yang_name = "macsec-cipher-suite"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mka::Policy::MacsecCipherSuite::~MacsecCipherSuite()
{
}

bool Native::Mka::Policy::MacsecCipherSuite::has_data() const
{
    return gcm_aes_128.is_set
	|| gcm_aes_256.is_set;
}

bool Native::Mka::Policy::MacsecCipherSuite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_aes_128.yfilter)
	|| ydk::is_set(gcm_aes_256.yfilter);
}

std::string Native::Mka::Policy::MacsecCipherSuite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macsec-cipher-suite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mka::Policy::MacsecCipherSuite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_aes_128.is_set || is_set(gcm_aes_128.yfilter)) leaf_name_data.push_back(gcm_aes_128.get_name_leafdata());
    if (gcm_aes_256.is_set || is_set(gcm_aes_256.yfilter)) leaf_name_data.push_back(gcm_aes_256.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mka::Policy::MacsecCipherSuite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mka::Policy::MacsecCipherSuite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mka::Policy::MacsecCipherSuite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-aes-128")
    {
        gcm_aes_128 = value;
        gcm_aes_128.value_namespace = name_space;
        gcm_aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gcm-aes-256")
    {
        gcm_aes_256 = value;
        gcm_aes_256.value_namespace = name_space;
        gcm_aes_256.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mka::Policy::MacsecCipherSuite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-aes-128")
    {
        gcm_aes_128.yfilter = yfilter;
    }
    if(value_path == "gcm-aes-256")
    {
        gcm_aes_256.yfilter = yfilter;
    }
}

bool Native::Mka::Policy::MacsecCipherSuite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-aes-128" || name == "gcm-aes-256")
        return true;
    return false;
}

Native::Mls::Mls()
{

    yang_name = "mls"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mls::~Mls()
{
}

bool Native::Mls::has_data() const
{
    return false;
}

bool Native::Mls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Mls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Module::Module()
    :
    provision(std::make_shared<Native::Module::Provision>())
{
    provision->parent = this;

    yang_name = "module"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Module::~Module()
{
}

bool Native::Module::has_data() const
{
    return (provision !=  nullptr && provision->has_data());
}

bool Native::Module::has_operation() const
{
    return is_set(yfilter)
	|| (provision !=  nullptr && provision->has_operation());
}

std::string Native::Module::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "provision")
    {
        if(provision == nullptr)
        {
            provision = std::make_shared<Native::Module::Provision>();
        }
        return provision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(provision != nullptr)
    {
        children["provision"] = provision;
    }

    return children;
}

void Native::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provision")
        return true;
    return false;
}

Native::Module::Provision::Provision()
{

    yang_name = "provision"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Module::Provision::~Provision()
{
}

bool Native::Module::Provision::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Module::Provision::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Module::Provision::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Module::Provision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:provision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Module::Provision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        for(auto const & c : switch_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Module::Provision::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Module::Provision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Module::Provision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Module::Provision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Module::Provision::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    chassis(std::make_shared<Native::Module::Provision::Switch_::Chassis>())
{
    chassis->parent = this;

    yang_name = "switch"; yang_parent_name = "provision"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Module::Provision::Switch_::~Switch_()
{
}

bool Native::Module::Provision::Switch_::has_data() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return number.is_set
	|| (chassis !=  nullptr && chassis->has_data());
}

bool Native::Module::Provision::Switch_::has_operation() const
{
    for (std::size_t index=0; index<slot.size(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (chassis !=  nullptr && chassis->has_operation());
}

std::string Native::Module::Provision::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/module/Cisco-IOS-XE-switch:provision/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Module::Provision::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Native::Module::Provision::Switch_::Chassis>();
        }
        return chassis;
    }

    if(child_yang_name == "slot")
    {
        for(auto const & c : slot)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Module::Provision::Switch_::Slot>();
        c->parent = this;
        slot.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(chassis != nullptr)
    {
        children["chassis"] = chassis;
    }

    for (auto const & c : slot)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Module::Provision::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis" || name == "slot" || name == "number")
        return true;
    return false;
}

Native::Module::Provision::Switch_::Chassis::Chassis()
    :
    base_mac{YType::str, "base-mac"},
    chassis_type{YType::uint32, "chassis-type"}
{

    yang_name = "chassis"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Module::Provision::Switch_::Chassis::~Chassis()
{
}

bool Native::Module::Provision::Switch_::Chassis::has_data() const
{
    return base_mac.is_set
	|| chassis_type.is_set;
}

bool Native::Module::Provision::Switch_::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(base_mac.yfilter)
	|| ydk::is_set(chassis_type.yfilter);
}

std::string Native::Module::Provision::Switch_::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::Switch_::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (base_mac.is_set || is_set(base_mac.yfilter)) leaf_name_data.push_back(base_mac.get_name_leafdata());
    if (chassis_type.is_set || is_set(chassis_type.yfilter)) leaf_name_data.push_back(chassis_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch_::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch_::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Module::Provision::Switch_::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "base-mac")
    {
        base_mac = value;
        base_mac.value_namespace = name_space;
        base_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-type")
    {
        chassis_type = value;
        chassis_type.value_namespace = name_space;
        chassis_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch_::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "base-mac")
    {
        base_mac.yfilter = yfilter;
    }
    if(value_path == "chassis-type")
    {
        chassis_type.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch_::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "base-mac" || name == "chassis-type")
        return true;
    return false;
}

Native::Module::Provision::Switch_::Slot::Slot()
    :
    number{YType::uint8, "number"},
    base_mac{YType::str, "base-mac"},
    slot_type{YType::uint32, "slot-type"}
{

    yang_name = "slot"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Module::Provision::Switch_::Slot::~Slot()
{
}

bool Native::Module::Provision::Switch_::Slot::has_data() const
{
    return number.is_set
	|| base_mac.is_set
	|| slot_type.is_set;
}

bool Native::Module::Provision::Switch_::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(base_mac.yfilter)
	|| ydk::is_set(slot_type.yfilter);
}

std::string Native::Module::Provision::Switch_::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::Switch_::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (base_mac.is_set || is_set(base_mac.yfilter)) leaf_name_data.push_back(base_mac.get_name_leafdata());
    if (slot_type.is_set || is_set(slot_type.yfilter)) leaf_name_data.push_back(slot_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Module::Provision::Switch_::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Module::Provision::Switch_::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Module::Provision::Switch_::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac")
    {
        base_mac = value;
        base_mac.value_namespace = name_space;
        base_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-type")
    {
        slot_type = value;
        slot_type.value_namespace = name_space;
        slot_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch_::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "base-mac")
    {
        base_mac.yfilter = yfilter;
    }
    if(value_path == "slot-type")
    {
        slot_type.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch_::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "base-mac" || name == "slot-type")
        return true;
    return false;
}

Native::Monitor::Monitor()
    :
    event_trace(std::make_shared<Native::Monitor::EventTrace>())
{
    event_trace->parent = this;

    yang_name = "monitor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::~Monitor()
{
}

bool Native::Monitor::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return (event_trace !=  nullptr && event_trace->has_data());
}

bool Native::Monitor::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (event_trace !=  nullptr && event_trace->has_operation());
}

std::string Native::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-trace")
    {
        if(event_trace == nullptr)
        {
            event_trace = std::make_shared<Native::Monitor::EventTrace>();
        }
        return event_trace;
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Monitor::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_trace != nullptr)
    {
        children["event-trace"] = event_trace;
    }

    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-trace" || name == "session")
        return true;
    return false;
}

Native::Monitor::EventTrace::EventTrace()
{

    yang_name = "event-trace"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::EventTrace::~EventTrace()
{
}

bool Native::Monitor::EventTrace::has_data() const
{
    return false;
}

bool Native::Monitor::EventTrace::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Monitor::EventTrace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::EventTrace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::EventTrace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::EventTrace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::EventTrace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::EventTrace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::EventTrace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::EventTrace::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Monitor::Session::Session()
    :
    id{YType::uint8, "id"}
    	,
    destination(std::make_shared<Native::Monitor::Session::Destination>())
	,filter(std::make_shared<Native::Monitor::Session::Filter>())
	,source(std::make_shared<Native::Monitor::Session::Source>())
{
    destination->parent = this;
    filter->parent = this;
    source->parent = this;

    yang_name = "session"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Monitor::Session::~Session()
{
}

bool Native::Monitor::Session::has_data() const
{
    return id.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (filter !=  nullptr && filter->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Monitor::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (filter !=  nullptr && filter->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Monitor::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Monitor::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Monitor::Session::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "filter")
    {
        if(filter == nullptr)
        {
            filter = std::make_shared<Native::Monitor::Session::Filter>();
        }
        return filter;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Monitor::Session::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(filter != nullptr)
    {
        children["filter"] = filter;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Monitor::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "filter" || name == "source" || name == "id")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Destination()
    :
    remote(std::make_shared<Native::Monitor::Session::Destination::Remote>())
{
    remote->parent = this;

    yang_name = "destination"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Destination::~Destination()
{
}

bool Native::Monitor::Session::Destination::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (remote !=  nullptr && remote->has_data());
}

bool Native::Monitor::Session::Destination::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Monitor::Session::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Monitor::Session::Destination::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Destination::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Monitor::Session::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "remote")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Interface::Interface()
    :
    name{YType::str, "name"},
    encapsulation{YType::enumeration, "encapsulation"},
    ingress{YType::empty, "ingress"},
    ingress_encap{YType::enumeration, "ingress-encap"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "interface"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Destination::Interface::~Interface()
{
}

bool Native::Monitor::Session::Destination::Interface::has_data() const
{
    return name.is_set
	|| encapsulation.is_set
	|| ingress.is_set
	|| ingress_encap.is_set
	|| vlan.is_set;
}

bool Native::Monitor::Session::Destination::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(ingress_encap.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (ingress_encap.is_set || is_set(ingress_encap.yfilter)) leaf_name_data.push_back(ingress_encap.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Destination::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap = value;
        ingress_encap.value_namespace = name_space;
        ingress_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "ingress-encap")
    {
        ingress_encap.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "encapsulation" || name == "ingress" || name == "ingress-encap" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Destination::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "remote"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Destination::Remote::~Remote()
{
}

bool Native::Monitor::Session::Destination::Remote::has_data() const
{
    return vlan.is_set;
}

bool Native::Monitor::Session::Destination::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Destination::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Destination::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Destination::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Destination::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Destination::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Destination::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Destination::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Filter()
    :
    ip(std::make_shared<Native::Monitor::Session::Filter::Ip>())
	,packet_type(std::make_shared<Native::Monitor::Session::Filter::PacketType>())
{
    ip->parent = this;
    packet_type->parent = this;

    yang_name = "filter"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::~Filter()
{
}

bool Native::Monitor::Session::Filter::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (packet_type !=  nullptr && packet_type->has_data());
}

bool Native::Monitor::Session::Filter::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (packet_type !=  nullptr && packet_type->has_operation());
}

std::string Native::Monitor::Session::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Monitor::Session::Filter::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "packet-type")
    {
        if(packet_type == nullptr)
        {
            packet_type = std::make_shared<Native::Monitor::Session::Filter::PacketType>();
        }
        return packet_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(packet_type != nullptr)
    {
        children["packet-type"] = packet_type;
    }

    return children;
}

void Native::Monitor::Session::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "packet-type")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::Ip()
    :
    access_group(std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>())
{
    access_group->parent = this;

    yang_name = "ip"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::Ip::~Ip()
{
}

bool Native::Monitor::Session::Filter::Ip::has_data() const
{
    return (access_group !=  nullptr && access_group->has_data());
}

bool Native::Monitor::Session::Filter::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (access_group !=  nullptr && access_group->has_operation());
}

std::string Native::Monitor::Session::Filter::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Monitor::Session::Filter::Ip::AccessGroup>();
        }
        return access_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    return children;
}

void Native::Monitor::Session::Filter::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Filter::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Filter::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group")
        return true;
    return false;
}

Native::Monitor::Session::Filter::Ip::AccessGroup::AccessGroup()
    :
    acl_name{YType::str, "acl-name"}
{

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_data() const
{
    return acl_name.is_set;
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Native::Monitor::Session::Filter::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name")
        return true;
    return false;
}

Native::Monitor::Session::Filter::PacketType::PacketType()
    :
    direction{YType::enumeration, "direction"},
    status{YType::enumeration, "status"}
{

    yang_name = "packet-type"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Filter::PacketType::~PacketType()
{
}

bool Native::Monitor::Session::Filter::PacketType::has_data() const
{
    return direction.is_set
	|| status.is_set;
}

bool Native::Monitor::Session::Filter::PacketType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Monitor::Session::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Filter::PacketType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Filter::PacketType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Filter::PacketType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Filter::PacketType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Filter::PacketType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "status")
        return true;
    return false;
}

Native::Monitor::Session::Source::Source()
    :
    remote(std::make_shared<Native::Monitor::Session::Source::Remote>())
	,vlan(std::make_shared<Native::Monitor::Session::Source::Vlan>())
{
    remote->parent = this;
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::~Source()
{
}

bool Native::Monitor::Session::Source::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return (remote !=  nullptr && remote->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Monitor::Session::Source::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (remote !=  nullptr && remote->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Monitor::Session::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Monitor::Session::Source::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Monitor::Session::Source::Remote>();
        }
        return remote;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Monitor::Session::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Monitor::Session::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Monitor::Session::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Monitor::Session::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "remote" || name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Source::Interface::Interface()
    :
    name{YType::str, "name"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "interface"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::Interface::~Interface()
{
}

bool Native::Monitor::Session::Source::Interface::has_data() const
{
    return name.is_set
	|| direction.is_set;
}

bool Native::Monitor::Session::Source::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Monitor::Session::Source::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Source::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direction")
        return true;
    return false;
}

Native::Monitor::Session::Source::Remote::Remote()
    :
    vlan{YType::uint16, "vlan"}
{

    yang_name = "remote"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::Remote::~Remote()
{
}

bool Native::Monitor::Session::Source::Remote::has_data() const
{
    return vlan.is_set;
}

bool Native::Monitor::Session::Source::Remote::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Source::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Source::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Monitor::Session::Source::Vlan::Vlan()
    :
    direction{YType::enumeration, "direction"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Monitor::Session::Source::Vlan::~Vlan()
{
}

bool Native::Monitor::Session::Source::Vlan::has_data() const
{
    return direction.is_set
	|| vlan.is_set;
}

bool Native::Monitor::Session::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Monitor::Session::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Monitor::Session::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Monitor::Session::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Monitor::Session::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Monitor::Session::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Monitor::Session::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Monitor::Session::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "vlan")
        return true;
    return false;
}

Native::Mpls::Mpls()
    :
    cos_map{YType::uint8, "Cisco-IOS-XE-mpls:cos-map"}
    	,
    atm(std::make_shared<Native::Mpls::Atm>())
	,ip(std::make_shared<Native::Mpls::Ip>())
	,label(std::make_shared<Native::Mpls::Label>())
	,ldp(std::make_shared<Native::Mpls::Ldp>())
	,prefix_map(std::make_shared<Native::Mpls::PrefixMap>())
	,static_(nullptr) // presence node
	,tp(nullptr) // presence node
	,traffic_eng(std::make_shared<Native::Mpls::TrafficEng>())
{
    atm->parent = this;
    ip->parent = this;
    label->parent = this;
    ldp->parent = this;
    prefix_map->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::~Mpls()
{
}

bool Native::Mpls::has_data() const
{
    return cos_map.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (prefix_map !=  nullptr && prefix_map->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (tp !=  nullptr && tp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cos_map.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (prefix_map !=  nullptr && prefix_map->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (tp !=  nullptr && tp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos_map.is_set || is_set(cos_map.yfilter)) leaf_name_data.push_back(cos_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Mpls::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "prefix-map")
    {
        if(prefix_map == nullptr)
        {
            prefix_map = std::make_shared<Native::Mpls::PrefixMap>();
        }
        return prefix_map;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "tp")
    {
        if(tp == nullptr)
        {
            tp = std::make_shared<Native::Mpls::Tp>();
        }
        return tp;
    }

    if(child_yang_name == "traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    if(prefix_map != nullptr)
    {
        children["prefix-map"] = prefix_map;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(tp != nullptr)
    {
        children["tp"] = tp;
    }

    if(traffic_eng != nullptr)
    {
        children["traffic-eng"] = traffic_eng;
    }

    return children;
}

void Native::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-map")
    {
        cos_map = value;
        cos_map.value_namespace = name_space;
        cos_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-map")
    {
        cos_map.yfilter = yfilter;
    }
}

bool Native::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "ip" || name == "label" || name == "ldp" || name == "prefix-map" || name == "static" || name == "tp" || name == "traffic-eng" || name == "cos-map")
        return true;
    return false;
}

Native::Mpls::Atm::Atm()
    :
    disable_headend_vc{YType::empty, "disable-headend-vc"}
{

    yang_name = "atm"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Atm::~Atm()
{
}

bool Native::Mpls::Atm::has_data() const
{
    return disable_headend_vc.is_set;
}

bool Native::Mpls::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_headend_vc.yfilter);
}

std::string Native::Mpls::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_headend_vc.is_set || is_set(disable_headend_vc.yfilter)) leaf_name_data.push_back(disable_headend_vc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc = value;
        disable_headend_vc.value_namespace = name_space;
        disable_headend_vc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc.yfilter = yfilter;
    }
}

bool Native::Mpls::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-headend-vc")
        return true;
    return false;
}

Native::Mpls::Ip::Ip()
    :
    default_route{YType::empty, "default-route"}
    	,
    conf(std::make_shared<Native::Mpls::Ip::Conf>())
	,conf_arg(std::make_shared<Native::Mpls::Ip::ConfArg>())
	,ttl_expiration(std::make_shared<Native::Mpls::Ip::TtlExpiration>())
{
    conf->parent = this;
    conf_arg->parent = this;
    ttl_expiration->parent = this;

    yang_name = "ip"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ip::~Ip()
{
}

bool Native::Mpls::Ip::has_data() const
{
    return default_route.is_set
	|| (conf !=  nullptr && conf->has_data())
	|| (conf_arg !=  nullptr && conf_arg->has_data())
	|| (ttl_expiration !=  nullptr && ttl_expiration->has_data());
}

bool Native::Mpls::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_route.yfilter)
	|| (conf !=  nullptr && conf->has_operation())
	|| (conf_arg !=  nullptr && conf_arg->has_operation())
	|| (ttl_expiration !=  nullptr && ttl_expiration->has_operation());
}

std::string Native::Mpls::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_route.is_set || is_set(default_route.yfilter)) leaf_name_data.push_back(default_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conf")
    {
        if(conf == nullptr)
        {
            conf = std::make_shared<Native::Mpls::Ip::Conf>();
        }
        return conf;
    }

    if(child_yang_name == "conf-arg")
    {
        if(conf_arg == nullptr)
        {
            conf_arg = std::make_shared<Native::Mpls::Ip::ConfArg>();
        }
        return conf_arg;
    }

    if(child_yang_name == "ttl-expiration")
    {
        if(ttl_expiration == nullptr)
        {
            ttl_expiration = std::make_shared<Native::Mpls::Ip::TtlExpiration>();
        }
        return ttl_expiration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(conf != nullptr)
    {
        children["conf"] = conf;
    }

    if(conf_arg != nullptr)
    {
        children["conf-arg"] = conf_arg;
    }

    if(ttl_expiration != nullptr)
    {
        children["ttl-expiration"] = ttl_expiration;
    }

    return children;
}

void Native::Mpls::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-route")
    {
        default_route = value;
        default_route.value_namespace = name_space;
        default_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-route")
    {
        default_route.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conf" || name == "conf-arg" || name == "ttl-expiration" || name == "default-route")
        return true;
    return false;
}

Native::Mpls::Ip::Conf::Conf()
    :
    propagate_ttl{YType::boolean, "propagate-ttl"}
{

    yang_name = "conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ip::Conf::~Conf()
{
}

bool Native::Mpls::Ip::Conf::has_data() const
{
    return propagate_ttl.is_set;
}

bool Native::Mpls::Ip::Conf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(propagate_ttl.yfilter);
}

std::string Native::Mpls::Ip::Conf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::Conf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::Conf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (propagate_ttl.is_set || is_set(propagate_ttl.yfilter)) leaf_name_data.push_back(propagate_ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::Conf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::Conf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ip::Conf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "propagate-ttl")
    {
        propagate_ttl = value;
        propagate_ttl.value_namespace = name_space;
        propagate_ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::Conf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "propagate-ttl")
    {
        propagate_ttl.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::Conf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "propagate-ttl")
        return true;
    return false;
}

Native::Mpls::Ip::ConfArg::ConfArg()
    :
    propagate_ttl(std::make_shared<Native::Mpls::Ip::ConfArg::PropagateTtl>())
{
    propagate_ttl->parent = this;

    yang_name = "conf-arg"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ip::ConfArg::~ConfArg()
{
}

bool Native::Mpls::Ip::ConfArg::has_data() const
{
    return (propagate_ttl !=  nullptr && propagate_ttl->has_data());
}

bool Native::Mpls::Ip::ConfArg::has_operation() const
{
    return is_set(yfilter)
	|| (propagate_ttl !=  nullptr && propagate_ttl->has_operation());
}

std::string Native::Mpls::Ip::ConfArg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::ConfArg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conf-arg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::ConfArg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::ConfArg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "propagate-ttl")
    {
        if(propagate_ttl == nullptr)
        {
            propagate_ttl = std::make_shared<Native::Mpls::Ip::ConfArg::PropagateTtl>();
        }
        return propagate_ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::ConfArg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(propagate_ttl != nullptr)
    {
        children["propagate-ttl"] = propagate_ttl;
    }

    return children;
}

void Native::Mpls::Ip::ConfArg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ip::ConfArg::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ip::ConfArg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "propagate-ttl")
        return true;
    return false;
}

Native::Mpls::Ip::ConfArg::PropagateTtl::PropagateTtl()
    :
    forwarded{YType::boolean, "forwarded"}
{

    yang_name = "propagate-ttl"; yang_parent_name = "conf-arg"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ip::ConfArg::PropagateTtl::~PropagateTtl()
{
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_data() const
{
    return forwarded.is_set;
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarded.yfilter);
}

std::string Native::Mpls::Ip::ConfArg::PropagateTtl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/conf-arg/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::ConfArg::PropagateTtl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate-ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::ConfArg::PropagateTtl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarded.is_set || is_set(forwarded.yfilter)) leaf_name_data.push_back(forwarded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::ConfArg::PropagateTtl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::ConfArg::PropagateTtl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ip::ConfArg::PropagateTtl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarded")
    {
        forwarded = value;
        forwarded.value_namespace = name_space;
        forwarded.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::ConfArg::PropagateTtl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarded")
    {
        forwarded.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::ConfArg::PropagateTtl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarded")
        return true;
    return false;
}

Native::Mpls::Ip::TtlExpiration::TtlExpiration()
    :
    pop{YType::uint8, "pop"}
{

    yang_name = "ttl-expiration"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ip::TtlExpiration::~TtlExpiration()
{
}

bool Native::Mpls::Ip::TtlExpiration::has_data() const
{
    return pop.is_set;
}

bool Native::Mpls::Ip::TtlExpiration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pop.yfilter);
}

std::string Native::Mpls::Ip::TtlExpiration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ip::TtlExpiration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-expiration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ip::TtlExpiration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pop.is_set || is_set(pop.yfilter)) leaf_name_data.push_back(pop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ip::TtlExpiration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ip::TtlExpiration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ip::TtlExpiration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pop")
    {
        pop = value;
        pop.value_namespace = name_space;
        pop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ip::TtlExpiration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pop")
    {
        pop.yfilter = yfilter;
    }
}

bool Native::Mpls::Ip::TtlExpiration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pop")
        return true;
    return false;
}

Native::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
    	,
    atm(std::make_shared<Native::Mpls::Label::Atm>())
	,mode(std::make_shared<Native::Mpls::Label::Mode>())
	,range(std::make_shared<Native::Mpls::Label::Range>())
{
    atm->parent = this;
    mode->parent = this;
    range->parent = this;

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::~Label()
{
}

bool Native::Mpls::Label::has_data() const
{
    return protocol.is_set
	|| (atm !=  nullptr && atm->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (atm !=  nullptr && atm->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Mpls::Label::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Label::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Mpls::Label::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Mpls::Label::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "atm" || name == "mode" || name == "range" || name == "protocol")
        return true;
    return false;
}

Native::Mpls::Label::Atm::Atm()
    :
    disable_headend_vc{YType::empty, "disable-headend-vc"}
{

    yang_name = "atm"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Atm::~Atm()
{
}

bool Native::Mpls::Label::Atm::has_data() const
{
    return disable_headend_vc.is_set;
}

bool Native::Mpls::Label::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable_headend_vc.yfilter);
}

std::string Native::Mpls::Label::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_headend_vc.is_set || is_set(disable_headend_vc.yfilter)) leaf_name_data.push_back(disable_headend_vc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc = value;
        disable_headend_vc.value_namespace = name_space;
        disable_headend_vc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable-headend-vc")
    {
        disable_headend_vc.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable-headend-vc")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Mode()
    :
    all_vrfs(std::make_shared<Native::Mpls::Label::Mode::AllVrfs>())
	,vrf(std::make_shared<Native::Mpls::Label::Mode::Vrf>())
{
    all_vrfs->parent = this;
    vrf->parent = this;

    yang_name = "mode"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::~Mode()
{
}

bool Native::Mpls::Label::Mode::has_data() const
{
    return (all_vrfs !=  nullptr && all_vrfs->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Label::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (all_vrfs !=  nullptr && all_vrfs->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Label::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-vrfs")
    {
        if(all_vrfs == nullptr)
        {
            all_vrfs = std::make_shared<Native::Mpls::Label::Mode::AllVrfs>();
        }
        return all_vrfs;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Label::Mode::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_vrfs != nullptr)
    {
        children["all-vrfs"] = all_vrfs;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Label::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-vrfs" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::AllVrfs()
    :
    protocol(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol>())
{
    protocol->parent = this;

    yang_name = "all-vrfs"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::AllVrfs::~AllVrfs()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Mpls::Label::Mode::AllVrfs::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Mpls::Label::Mode::AllVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::AllVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::AllVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::Protocol()
    :
    all_afs(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs>())
	,bgp_vpnv4(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4>())
	,bgp_vpnv6(std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6>())
{
    all_afs->parent = this;
    bgp_vpnv4->parent = this;
    bgp_vpnv6->parent = this;

    yang_name = "protocol"; yang_parent_name = "all-vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::~Protocol()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_data() const
{
    return (all_afs !=  nullptr && all_afs->has_data())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_data())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_data());
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (all_afs !=  nullptr && all_afs->has_operation())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_operation())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_operation());
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-afs")
    {
        if(all_afs == nullptr)
        {
            all_afs = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs>();
        }
        return all_afs;
    }

    if(child_yang_name == "bgp-vpnv4")
    {
        if(bgp_vpnv4 == nullptr)
        {
            bgp_vpnv4 = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4>();
        }
        return bgp_vpnv4;
    }

    if(child_yang_name == "bgp-vpnv6")
    {
        if(bgp_vpnv6 == nullptr)
        {
            bgp_vpnv6 = std::make_shared<Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6>();
        }
        return bgp_vpnv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_afs != nullptr)
    {
        children["all-afs"] = all_afs;
    }

    if(bgp_vpnv4 != nullptr)
    {
        children["bgp-vpnv4"] = bgp_vpnv4;
    }

    if(bgp_vpnv6 != nullptr)
    {
        children["bgp-vpnv6"] = bgp_vpnv6;
    }

    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-afs" || name == "bgp-vpnv4" || name == "bgp-vpnv6")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::AllAfs()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "all-afs"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::~AllAfs()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::BgpVpnv4()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv4"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::~BgpVpnv4()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::BgpVpnv6()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv6"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::~BgpVpnv6()
{
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/all-vrfs/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::Vrf::~Vrf()
{
}

bool Native::Mpls::Label::Mode::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Label::Mode::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    protocol(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol>())
{
    protocol->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/mode/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::Protocol()
    :
    all_afs(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs>())
	,bgp_vpnv4(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4>())
	,bgp_vpnv6(std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6>())
{
    all_afs->parent = this;
    bgp_vpnv4->parent = this;
    bgp_vpnv6->parent = this;

    yang_name = "protocol"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::~Protocol()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_data() const
{
    return (all_afs !=  nullptr && all_afs->has_data())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_data())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_data());
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (all_afs !=  nullptr && all_afs->has_operation())
	|| (bgp_vpnv4 !=  nullptr && bgp_vpnv4->has_operation())
	|| (bgp_vpnv6 !=  nullptr && bgp_vpnv6->has_operation());
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-afs")
    {
        if(all_afs == nullptr)
        {
            all_afs = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs>();
        }
        return all_afs;
    }

    if(child_yang_name == "bgp-vpnv4")
    {
        if(bgp_vpnv4 == nullptr)
        {
            bgp_vpnv4 = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4>();
        }
        return bgp_vpnv4;
    }

    if(child_yang_name == "bgp-vpnv6")
    {
        if(bgp_vpnv6 == nullptr)
        {
            bgp_vpnv6 = std::make_shared<Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6>();
        }
        return bgp_vpnv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_afs != nullptr)
    {
        children["all-afs"] = all_afs;
    }

    if(bgp_vpnv4 != nullptr)
    {
        children["bgp-vpnv4"] = bgp_vpnv4;
    }

    if(bgp_vpnv6 != nullptr)
    {
        children["bgp-vpnv6"] = bgp_vpnv6;
    }

    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-afs" || name == "bgp-vpnv4" || name == "bgp-vpnv6")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::AllAfs()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "all-afs"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::~AllAfs()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::BgpVpnv4()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv4"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::~BgpVpnv4()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::BgpVpnv6()
    :
    per_ce{YType::empty, "per-ce"},
    per_prefix{YType::empty, "per-prefix"},
    per_vrf{YType::empty, "per-vrf"},
    vrf_conn_aggr{YType::empty, "vrf-conn-aggr"}
{

    yang_name = "bgp-vpnv6"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::~BgpVpnv6()
{
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_data() const
{
    return per_ce.is_set
	|| per_prefix.is_set
	|| per_vrf.is_set
	|| vrf_conn_aggr.is_set;
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(per_ce.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(per_vrf.yfilter)
	|| ydk::is_set(vrf_conn_aggr.yfilter);
}

std::string Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-vpnv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_ce.is_set || is_set(per_ce.yfilter)) leaf_name_data.push_back(per_ce.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (per_vrf.is_set || is_set(per_vrf.yfilter)) leaf_name_data.push_back(per_vrf.get_name_leafdata());
    if (vrf_conn_aggr.is_set || is_set(vrf_conn_aggr.yfilter)) leaf_name_data.push_back(vrf_conn_aggr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "per-ce")
    {
        per_ce = value;
        per_ce.value_namespace = name_space;
        per_ce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-vrf")
    {
        per_vrf = value;
        per_vrf.value_namespace = name_space;
        per_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr = value;
        vrf_conn_aggr.value_namespace = name_space;
        vrf_conn_aggr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "per-ce")
    {
        per_ce.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "per-vrf")
    {
        per_vrf.yfilter = yfilter;
    }
    if(value_path == "vrf-conn-aggr")
    {
        vrf_conn_aggr.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "per-ce" || name == "per-prefix" || name == "per-vrf" || name == "vrf-conn-aggr")
        return true;
    return false;
}

Native::Mpls::Label::Range::Range()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
    	,
    static_(std::make_shared<Native::Mpls::Label::Range::Static_>())
{
    static_->parent = this;

    yang_name = "range"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Range::~Range()
{
}

bool Native::Mpls::Label::Range::has_data() const
{
    return max.is_set
	|| min.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mpls::Label::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mpls::Label::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Label::Range::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mpls::Label::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "max" || name == "min")
        return true;
    return false;
}

Native::Mpls::Label::Range::Static_::Static_()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "static"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Range::Static_::~Static_()
{
}

bool Native::Mpls::Label::Range::Static_::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Mpls::Label::Range::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Mpls::Label::Range::Static_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:label/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Label::Range::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Label::Range::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Label::Range::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Label::Range::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Label::Range::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Range::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Range::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Mpls::Ldp::Ldp()
    :
    enable(std::make_shared<Native::Mpls::Ldp::Enable>())
	,enable2(std::make_shared<Native::Mpls::Ldp::Enable2>())
	,session(std::make_shared<Native::Mpls::Ldp::Session>())
{
    enable->parent = this;
    enable2->parent = this;
    session->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::~Ldp()
{
}

bool Native::Mpls::Ldp::has_data() const
{
    return (enable !=  nullptr && enable->has_data())
	|| (enable2 !=  nullptr && enable2->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Native::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (enable2 !=  nullptr && enable2->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Native::Mpls::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Mpls::Ldp::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "enable2")
    {
        if(enable2 == nullptr)
        {
            enable2 = std::make_shared<Native::Mpls::Ldp::Enable2>();
        }
        return enable2;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Native::Mpls::Ldp::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(enable2 != nullptr)
    {
        children["enable2"] = enable2;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Native::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "enable2" || name == "session")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable::Enable()
    :
    advertise_labels{YType::boolean, "advertise-labels"}
{

    yang_name = "enable"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable::~Enable()
{
}

bool Native::Mpls::Ldp::Enable::has_data() const
{
    return advertise_labels.is_set;
}

bool Native::Mpls::Ldp::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertise_labels.yfilter);
}

std::string Native::Mpls::Ldp::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_labels.is_set || is_set(advertise_labels.yfilter)) leaf_name_data.push_back(advertise_labels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-labels")
    {
        advertise_labels = value;
        advertise_labels.value_namespace = name_space;
        advertise_labels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-labels")
    {
        advertise_labels.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-labels")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Enable2()
    :
    entropy_label{YType::empty, "entropy-label"},
    holdtime{YType::uint32, "holdtime"},
    loop_detection{YType::empty, "loop-detection"},
    maxhops{YType::uint8, "maxhops"},
    nsr{YType::empty, "nsr"}
    	,
    advertise_labels(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels>())
	,atm(std::make_shared<Native::Mpls::Ldp::Enable2::Atm>())
	,backoff(std::make_shared<Native::Mpls::Ldp::Enable2::Backoff>())
	,discovery(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery>())
	,explicit_null(nullptr) // presence node
	,graceful_restart(nullptr) // presence node
	,igp(std::make_shared<Native::Mpls::Ldp::Enable2::Igp>())
	,label(nullptr) // presence node
	,logging(std::make_shared<Native::Mpls::Ldp::Enable2::Logging>())
	,neighbor(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor>())
	,password(std::make_shared<Native::Mpls::Ldp::Enable2::Password>())
	,request_labels(std::make_shared<Native::Mpls::Ldp::Enable2::RequestLabels>())
	,router_id(std::make_shared<Native::Mpls::Ldp::Enable2::RouterId>())
	,tcp(std::make_shared<Native::Mpls::Ldp::Enable2::Tcp>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Enable2::Vrf>())
{
    advertise_labels->parent = this;
    atm->parent = this;
    backoff->parent = this;
    discovery->parent = this;
    igp->parent = this;
    logging->parent = this;
    neighbor->parent = this;
    password->parent = this;
    request_labels->parent = this;
    router_id->parent = this;
    tcp->parent = this;
    vrf->parent = this;

    yang_name = "enable2"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::~Enable2()
{
}

bool Native::Mpls::Ldp::Enable2::has_data() const
{
    return entropy_label.is_set
	|| holdtime.is_set
	|| loop_detection.is_set
	|| maxhops.is_set
	|| nsr.is_set
	|| (advertise_labels !=  nullptr && advertise_labels->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (backoff !=  nullptr && backoff->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (explicit_null !=  nullptr && explicit_null->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (request_labels !=  nullptr && request_labels->has_data())
	|| (router_id !=  nullptr && router_id->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entropy_label.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(loop_detection.yfilter)
	|| ydk::is_set(maxhops.yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| (advertise_labels !=  nullptr && advertise_labels->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (backoff !=  nullptr && backoff->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (explicit_null !=  nullptr && explicit_null->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (request_labels !=  nullptr && request_labels->has_operation())
	|| (router_id !=  nullptr && router_id->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entropy_label.is_set || is_set(entropy_label.yfilter)) leaf_name_data.push_back(entropy_label.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (loop_detection.is_set || is_set(loop_detection.yfilter)) leaf_name_data.push_back(loop_detection.get_name_leafdata());
    if (maxhops.is_set || is_set(maxhops.yfilter)) leaf_name_data.push_back(maxhops.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise-labels")
    {
        if(advertise_labels == nullptr)
        {
            advertise_labels = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels>();
        }
        return advertise_labels;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Ldp::Enable2::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "backoff")
    {
        if(backoff == nullptr)
        {
            backoff = std::make_shared<Native::Mpls::Ldp::Enable2::Backoff>();
        }
        return backoff;
    }

    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::Ldp::Enable2::ExplicitNull>();
        }
        return explicit_null;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::Mpls::Ldp::Enable2::Igp>();
        }
        return igp;
    }

    if(child_yang_name == "label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Ldp::Enable2::Label>();
        }
        return label;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Mpls::Ldp::Enable2::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Password>();
        }
        return password;
    }

    if(child_yang_name == "request-labels")
    {
        if(request_labels == nullptr)
        {
            request_labels = std::make_shared<Native::Mpls::Ldp::Enable2::RequestLabels>();
        }
        return request_labels;
    }

    if(child_yang_name == "router-id")
    {
        if(router_id == nullptr)
        {
            router_id = std::make_shared<Native::Mpls::Ldp::Enable2::RouterId>();
        }
        return router_id;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Mpls::Ldp::Enable2::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise_labels != nullptr)
    {
        children["advertise-labels"] = advertise_labels;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(backoff != nullptr)
    {
        children["backoff"] = backoff;
    }

    if(discovery != nullptr)
    {
        children["discovery"] = discovery;
    }

    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(igp != nullptr)
    {
        children["igp"] = igp;
    }

    if(label != nullptr)
    {
        children["label"] = label;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(request_labels != nullptr)
    {
        children["request-labels"] = request_labels;
    }

    if(router_id != nullptr)
    {
        children["router-id"] = router_id;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entropy-label")
    {
        entropy_label = value;
        entropy_label.value_namespace = name_space;
        entropy_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-detection")
    {
        loop_detection = value;
        loop_detection.value_namespace = name_space;
        loop_detection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxhops")
    {
        maxhops = value;
        maxhops.value_namespace = name_space;
        maxhops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entropy-label")
    {
        entropy_label.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "loop-detection")
    {
        loop_detection.yfilter = yfilter;
    }
    if(value_path == "maxhops")
    {
        maxhops.yfilter = yfilter;
    }
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise-labels" || name == "atm" || name == "backoff" || name == "discovery" || name == "explicit-null" || name == "graceful-restart" || name == "igp" || name == "label" || name == "logging" || name == "neighbor" || name == "password" || name == "request-labels" || name == "router-id" || name == "tcp" || name == "vrf" || name == "entropy-label" || name == "holdtime" || name == "loop-detection" || name == "maxhops" || name == "nsr")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::AdvertiseLabels()
    :
    oldstyle{YType::empty, "oldstyle"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_>())
	,vrf(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf>())
{
    for_->parent = this;
    vrf->parent = this;

    yang_name = "advertise-labels"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::~AdvertiseLabels()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return oldstyle.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(oldstyle.yfilter)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oldstyle.is_set || is_set(oldstyle.yfilter)) leaf_name_data.push_back(oldstyle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_>();
        }
        return for_;
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oldstyle")
    {
        oldstyle = value;
        oldstyle.value_namespace = name_space;
        oldstyle.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oldstyle")
    {
        oldstyle.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "interface" || name == "vrf" || name == "oldstyle")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::For_()
    :
    from{YType::str, "from"},
    to{YType::str, "to"}
{

    yang_name = "for"; yang_parent_name = "advertise-labels"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::has_data() const
{
    return from.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::Interface()
    :
    name{YType::str, "name"}
{

    yang_name = "interface"; yang_parent_name = "advertise-labels"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_data() const
{
    return name.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "advertise-labels"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"},
    oldstyle{YType::empty, "oldstyle"}
    	,
    for_(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_>())
	,interface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface>())
{
    for_->parent = this;
    interface->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_data() const
{
    return vrf_name.is_set
	|| oldstyle.is_set
	|| (for_ !=  nullptr && for_->has_data())
	|| (interface !=  nullptr && interface->has_data());
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(oldstyle.yfilter)
	|| (for_ !=  nullptr && for_->has_operation())
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/advertise-labels/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (oldstyle.is_set || is_set(oldstyle.yfilter)) leaf_name_data.push_back(oldstyle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "for")
    {
        if(for_ == nullptr)
        {
            for_ = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_>();
        }
        return for_;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(for_ != nullptr)
    {
        children["for"] = for_;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oldstyle")
    {
        oldstyle = value;
        oldstyle.value_namespace = name_space;
        oldstyle.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "oldstyle")
    {
        oldstyle.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "interface" || name == "vrf-name" || name == "oldstyle")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::For_()
    :
    from{YType::str, "from"},
    to{YType::str, "to"}
{

    yang_name = "for"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::~For_()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::has_data() const
{
    return from.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "for";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from" || name == "to")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::Interface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::~Interface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_data() const
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

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_children() const
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

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Atm::Atm()
    :
    control_mode{YType::enumeration, "control-mode"},
    vc_merge{YType::boolean, "vc-merge"}
{

    yang_name = "atm"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Atm::~Atm()
{
}

bool Native::Mpls::Ldp::Enable2::Atm::has_data() const
{
    return control_mode.is_set
	|| vc_merge.is_set;
}

bool Native::Mpls::Ldp::Enable2::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(control_mode.yfilter)
	|| ydk::is_set(vc_merge.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Atm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_mode.is_set || is_set(control_mode.yfilter)) leaf_name_data.push_back(control_mode.get_name_leafdata());
    if (vc_merge.is_set || is_set(vc_merge.yfilter)) leaf_name_data.push_back(vc_merge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "control-mode")
    {
        control_mode = value;
        control_mode.value_namespace = name_space;
        control_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-merge")
    {
        vc_merge = value;
        vc_merge.value_namespace = name_space;
        vc_merge.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "control-mode")
    {
        control_mode.yfilter = yfilter;
    }
    if(value_path == "vc-merge")
    {
        vc_merge.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control-mode" || name == "vc-merge")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Backoff::Backoff()
    :
    initial{YType::uint32, "initial"},
    max{YType::uint32, "max"}
{

    yang_name = "backoff"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Backoff::~Backoff()
{
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_data() const
{
    return initial.is_set
	|| max.is_set;
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Backoff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial.is_set || is_set(initial.yfilter)) leaf_name_data.push_back(initial.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial")
    {
        initial = value;
        initial.value_namespace = name_space;
        initial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial")
    {
        initial.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial" || name == "max")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::Discovery()
    :
    hello(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::Hello>())
	,targeted_hello(std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello>())
{
    hello->parent = this;
    targeted_hello->parent = this;

    yang_name = "discovery"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Discovery::~Discovery()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_data() const
{
    return (hello !=  nullptr && hello->has_data())
	|| (targeted_hello !=  nullptr && targeted_hello->has_data());
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| (hello !=  nullptr && hello->has_operation())
	|| (targeted_hello !=  nullptr && targeted_hello->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "targeted-hello")
    {
        if(targeted_hello == nullptr)
        {
            targeted_hello = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello>();
        }
        return targeted_hello;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(targeted_hello != nullptr)
    {
        children["targeted-hello"] = targeted_hello;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello" || name == "targeted-hello")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::Hello::Hello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
{

    yang_name = "hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Discovery::Hello::~Hello()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_data() const
{
    return holdtime.is_set
	|| interval.is_set;
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Discovery::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Discovery::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Discovery::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "interval")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::TargetedHello()
    :
    holdtime{YType::uint16, "holdtime"},
    interval{YType::uint16, "interval"}
    	,
    accept(nullptr) // presence node
{

    yang_name = "targeted-hello"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::~TargetedHello()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_data() const
{
    return holdtime.is_set
	|| interval.is_set
	|| (accept !=  nullptr && accept->has_data());
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (accept !=  nullptr && accept->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted-hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept>();
        }
        return accept;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept" || name == "holdtime" || name == "interval")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::Accept()
    :
    from{YType::str, "from"}
{

    yang_name = "accept"; yang_parent_name = "targeted-hello"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::~Accept()
{
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_data() const
{
    return from.is_set;
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(from.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/discovery/targeted-hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (from.is_set || is_set(from.yfilter)) leaf_name_data.push_back(from.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "from")
    {
        from = value;
        from.value_namespace = name_space;
        from.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "from")
    {
        from.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "from")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::ExplicitNull::ExplicitNull()
    :
    for_{YType::str, "for"},
    to{YType::str, "to"}
{

    yang_name = "explicit-null"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_data() const
{
    return for_.is_set
	|| to.is_set;
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(for_.yfilter)
	|| ydk::is_set(to.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::ExplicitNull::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::ExplicitNull::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (for_.is_set || is_set(for_.yfilter)) leaf_name_data.push_back(for_.get_name_leafdata());
    if (to.is_set || is_set(to.yfilter)) leaf_name_data.push_back(to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "for")
    {
        for_ = value;
        for_.value_namespace = name_space;
        for_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to")
    {
        to = value;
        to.value_namespace = name_space;
        to.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "for")
    {
        for_.yfilter = yfilter;
    }
    if(value_path == "to")
    {
        to.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "for" || name == "to")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::GracefulRestart()
    :
    timers(std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart::Timers>())
{
    timers->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::~GracefulRestart()
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::Ldp::Enable2::GracefulRestart::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::Timers()
    :
    forwarding_holding{YType::uint16, "forwarding-holding"},
    max_recovery{YType::uint16, "max-recovery"},
    neighbor_liveness{YType::uint16, "neighbor-liveness"}
{

    yang_name = "timers"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::~Timers()
{
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_data() const
{
    return forwarding_holding.is_set
	|| max_recovery.is_set
	|| neighbor_liveness.is_set;
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding_holding.yfilter)
	|| ydk::is_set(max_recovery.yfilter)
	|| ydk::is_set(neighbor_liveness.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_holding.is_set || is_set(forwarding_holding.yfilter)) leaf_name_data.push_back(forwarding_holding.get_name_leafdata());
    if (max_recovery.is_set || is_set(max_recovery.yfilter)) leaf_name_data.push_back(max_recovery.get_name_leafdata());
    if (neighbor_liveness.is_set || is_set(neighbor_liveness.yfilter)) leaf_name_data.push_back(neighbor_liveness.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding-holding")
    {
        forwarding_holding = value;
        forwarding_holding.value_namespace = name_space;
        forwarding_holding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-recovery")
    {
        max_recovery = value;
        max_recovery.value_namespace = name_space;
        max_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-liveness")
    {
        neighbor_liveness = value;
        neighbor_liveness.value_namespace = name_space;
        neighbor_liveness.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding-holding")
    {
        forwarding_holding.yfilter = yfilter;
    }
    if(value_path == "max-recovery")
    {
        max_recovery.yfilter = yfilter;
    }
    if(value_path == "neighbor-liveness")
    {
        neighbor_liveness.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::GracefulRestart::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding-holding" || name == "max-recovery" || name == "neighbor-liveness")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Igp::Igp()
    :
    sync(std::make_shared<Native::Mpls::Ldp::Enable2::Igp::Sync>())
{
    sync->parent = this;

    yang_name = "igp"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Igp::~Igp()
{
}

bool Native::Mpls::Ldp::Enable2::Igp::has_data() const
{
    return (sync !=  nullptr && sync->has_data());
}

bool Native::Mpls::Ldp::Enable2::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Igp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Mpls::Ldp::Enable2::Igp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync != nullptr)
    {
        children["sync"] = sync;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

const Enum::YLeaf Native::Logging::OriginId::TypeValue::hostname {0, "hostname"};
const Enum::YLeaf Native::Logging::OriginId::TypeValue::ip {1, "ip"};
const Enum::YLeaf Native::Logging::OriginId::TypeValue::ipv6 {2, "ipv6"};

const Enum::YLeaf Native::Logging::Trap::Severity::alerts {0, "alerts"};
const Enum::YLeaf Native::Logging::Trap::Severity::critical {1, "critical"};
const Enum::YLeaf Native::Logging::Trap::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::Logging::Trap::Severity::emergencies {3, "emergencies"};
const Enum::YLeaf Native::Logging::Trap::Severity::errors {4, "errors"};
const Enum::YLeaf Native::Logging::Trap::Severity::informational {5, "informational"};
const Enum::YLeaf Native::Logging::Trap::Severity::notifications {6, "notifications"};
const Enum::YLeaf Native::Logging::Trap::Severity::warnings {7, "warnings"};

const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::warning {0, "warning"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::limit {1, "limit"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_AP_AUTO_SMARTPORT {0, "CISCO_AP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_DMP_AUTO_SMARTPORT {1, "CISCO_DMP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_DMP_AUTO_SMARTPORT_V1 {2, "CISCO_DMP_AUTO_SMARTPORT_V1"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_IP_CAMERA_AUTO_SMARTPORT {3, "CISCO_IP_CAMERA_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_LAST_RESORT_SMARTPORT {4, "CISCO_LAST_RESORT_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_LIGHT_AUTO_SMARTPORT {5, "CISCO_LIGHT_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_LWAP_AUTO_SMARTPORT {6, "CISCO_LWAP_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_PHONE_AUTO_SMARTPORT {7, "CISCO_PHONE_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_PHONE_AUTO_SMARTPORT_V1 {8, "CISCO_PHONE_AUTO_SMARTPORT_V1"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_ROUTER_AUTO_SMARTPORT {9, "CISCO_ROUTER_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::CISCO_SWITCH_AUTO_SMARTPORT {10, "CISCO_SWITCH_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::MS_IP_CAMERA_AUTO_SMARTPORT {11, "MS_IP_CAMERA_AUTO_SMARTPORT"};
const Enum::YLeaf Native::Macro::Auto_::Execute::Builtin::SmartPortConfiguration::MS_VIDEO_CONF_AUTO_SMARTPORT {12, "MS_VIDEO_CONF_AUTO_SMARTPORT"};

const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::bgp {0, "bgp"};
const Enum::YLeaf Native::MaintenanceTemplate::ConfigMaintenanceTempl::Router::RoutingProtocol::Protocol::isis {1, "isis"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::Encapsulation::replicate {2, "replicate"};

const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::dot1q {0, "dot1q"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::isl {1, "isl"};
const Enum::YLeaf Native::Monitor::Session::Destination::Interface::IngressEncap::untagged {2, "untagged"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::good {0, "good"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Status::bad {1, "bad"};

const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::rx {0, "rx"};
const Enum::YLeaf Native::Monitor::Session::Filter::PacketType::Direction::tx {1, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Interface::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::both {0, "both"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::rx {1, "rx"};
const Enum::YLeaf Native::Monitor::Session::Source::Vlan::Direction::tx {2, "tx"};

const Enum::YLeaf Native::Mpls::Label::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Label::Protocol::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlMode::independent {0, "independent"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlMode::ordered {1, "ordered"};


}
}

