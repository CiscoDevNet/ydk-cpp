
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_104.hpp"
#include "Cisco_IOS_XE_native_105.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::PfrMap::Set::ActiveProbe::ActiveProbe()
    :
    echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>())
	,jitter(std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>())
	,tcp_conn(std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>())
	,udp_echo(std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>())
{
    echo->parent = this;
    jitter->parent = this;
    tcp_conn->parent = this;
    udp_echo->parent = this;

    yang_name = "active-probe"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::~ActiveProbe()
{
}

bool Native::PfrMap::Set::ActiveProbe::has_data() const
{
    return (echo !=  nullptr && echo->has_data())
	|| (jitter !=  nullptr && jitter->has_data())
	|| (tcp_conn !=  nullptr && tcp_conn->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data());
}

bool Native::PfrMap::Set::ActiveProbe::has_operation() const
{
    return is_set(yfilter)
	|| (echo !=  nullptr && echo->has_operation())
	|| (jitter !=  nullptr && jitter->has_operation())
	|| (tcp_conn !=  nullptr && tcp_conn->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation());
}

std::string Native::PfrMap::Set::ActiveProbe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "echo")
    {
        if(echo == nullptr)
        {
            echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo>();
        }
        return echo;
    }

    if(child_yang_name == "jitter")
    {
        if(jitter == nullptr)
        {
            jitter = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter>();
        }
        return jitter;
    }

    if(child_yang_name == "tcp-conn")
    {
        if(tcp_conn == nullptr)
        {
            tcp_conn = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn>();
        }
        return tcp_conn;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho>();
        }
        return udp_echo;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(echo != nullptr)
    {
        children["echo"] = echo;
    }

    if(jitter != nullptr)
    {
        children["jitter"] = jitter;
    }

    if(tcp_conn != nullptr)
    {
        children["tcp-conn"] = tcp_conn;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "echo" || name == "jitter" || name == "tcp-conn" || name == "udp-echo")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Echo()
{

    yang_name = "echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Echo::~Echo()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Echo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Echo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    dscp{YType::empty, "dscp"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "echo"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| dscp.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(dscp.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Echo::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "dscp")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Jitter()
{

    yang_name = "jitter"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Jitter::~Jitter()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Jitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::Jitter::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::Jitter::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::TcpConn()
{

    yang_name = "tcp-conn"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::~TcpConn()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-conn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::TcpConn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "tcp-conn"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::TcpConn::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::UdpEcho()
{

    yang_name = "udp-echo"; yang_parent_name = "active-probe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::~UdpEcho()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        for(auto const & c : ipv4_or_hostname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_or_hostname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    target_port{YType::empty, "target-port"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| target_port.is_set;
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(target_port.yfilter);
}

std::string Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (target_port.is_set || is_set(target_port.yfilter)) leaf_name_data.push_back(target_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "target-port")
    {
        target_port = value;
        target_port.value_namespace = name_space;
        target_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "target-port")
    {
        target_port.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::ActiveProbe::UdpEcho::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "target-port")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::Backoff()
{

    yang_name = "backoff"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Backoff::~Backoff()
{
}

bool Native::PfrMap::Set::Backoff::has_data() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::Backoff::has_operation() const
{
    for (std::size_t index=0; index<boff_t.size(); index++)
    {
        if(boff_t[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t")
    {
        for(auto const & c : boff_t)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT>();
        c->parent = this;
        boff_t.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::Backoff::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::Backoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT()
    :
    boff_t{YType::uint16, "boff-t"}
{

    yang_name = "boff-t"; yang_parent_name = "backoff"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Backoff::BoffT::~BoffT()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::has_data() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_data())
            return true;
    }
    return boff_t.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::has_operation() const
{
    for (std::size_t index=0; index<boff_t0.size(); index++)
    {
        if(boff_t0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(boff_t.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t" <<"[boff-t='" <<boff_t <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::BoffT::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t.is_set || is_set(boff_t.yfilter)) leaf_name_data.push_back(boff_t.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boff-t0")
    {
        for(auto const & c : boff_t0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::Backoff::BoffT::BoffT0>();
        c->parent = this;
        boff_t0.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : boff_t0)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t")
    {
        boff_t = value;
        boff_t.value_namespace = name_space;
        boff_t.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t")
    {
        boff_t.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-t")
        return true;
    return false;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::BoffT0()
    :
    boff_t0{YType::uint16, "boff-t0"},
    boff_rng{YType::uint16, "boff-rng"}
{

    yang_name = "boff-t0"; yang_parent_name = "boff-t"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Backoff::BoffT::BoffT0::~BoffT0()
{
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_data() const
{
    return boff_t0.is_set
	|| boff_rng.is_set;
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(boff_t0.yfilter)
	|| ydk::is_set(boff_rng.yfilter);
}

std::string Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boff-t0" <<"[boff-t0='" <<boff_t0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boff_t0.is_set || is_set(boff_t0.yfilter)) leaf_name_data.push_back(boff_t0.get_name_leafdata());
    if (boff_rng.is_set || is_set(boff_rng.yfilter)) leaf_name_data.push_back(boff_rng.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Backoff::BoffT::BoffT0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "boff-t0")
    {
        boff_t0 = value;
        boff_t0.value_namespace = name_space;
        boff_t0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boff-rng")
    {
        boff_rng = value;
        boff_rng.value_namespace = name_space;
        boff_rng.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Backoff::BoffT::BoffT0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "boff-t0")
    {
        boff_t0.yfilter = yfilter;
    }
    if(value_path == "boff-rng")
    {
        boff_rng.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Backoff::BoffT::BoffT0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boff-t0" || name == "boff-rng")
        return true;
    return false;
}

Native::PfrMap::Set::Delay::Delay()
    :
    relative{YType::empty, "relative"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "delay"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Delay::~Delay()
{
}

bool Native::PfrMap::Set::Delay::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LinkGroup()
{

    yang_name = "link-group"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::LinkGroup::~LinkGroup()
{
}

bool Native::PfrMap::Set::LinkGroup::has_data() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::PfrMap::Set::LinkGroup::has_operation() const
{
    for (std::size_t index=0; index<lg_name.size(); index++)
    {
        if(lg_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lg-name")
    {
        for(auto const & c : lg_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName>();
        c->parent = this;
        lg_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lg_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::PfrMap::Set::LinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::PfrMap::Set::LinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::LgName()
    :
    lg_name{YType::str, "lg-name"}
    	,
    fallback(nullptr) // presence node
{

    yang_name = "lg-name"; yang_parent_name = "link-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::LinkGroup::LgName::~LgName()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_data() const
{
    return lg_name.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lg_name.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::PfrMap::Set::LinkGroup::LgName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lg-name" <<"[lg-name='" <<lg_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::LgName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lg_name.is_set || is_set(lg_name.yfilter)) leaf_name_data.push_back(lg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::PfrMap::Set::LinkGroup::LgName::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lg-name")
    {
        lg_name = value;
        lg_name.value_namespace = name_space;
        lg_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lg-name")
    {
        lg_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "lg-name")
        return true;
    return false;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::Fallback()
    :
    fall_name{YType::str, "fall-name"}
{

    yang_name = "fallback"; yang_parent_name = "lg-name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::LinkGroup::LgName::Fallback::~Fallback()
{
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_data() const
{
    return fall_name.is_set;
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fall_name.yfilter);
}

std::string Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fall_name.is_set || is_set(fall_name.yfilter)) leaf_name_data.push_back(fall_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::LinkGroup::LgName::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fall-name")
    {
        fall_name = value;
        fall_name.value_namespace = name_space;
        fall_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::LinkGroup::LgName::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fall-name")
    {
        fall_name.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::LinkGroup::LgName::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fall-name")
        return true;
    return false;
}

Native::PfrMap::Set::Loss::Loss()
    :
    relative{YType::uint16, "relative"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "loss"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::PfrMap::Set::Loss::~Loss()
{
}

bool Native::PfrMap::Set::Loss::has_data() const
{
    return relative.is_set
	|| threshold.is_set;
}

bool Native::PfrMap::Set::Loss::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(relative.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::PfrMap::Set::Loss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::PfrMap::Set::Loss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::PfrMap::Set::Loss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::PfrMap::Set::Loss::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::PfrMap::Set::Loss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::PfrMap::Set::Loss::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::PfrMap::Set::Loss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relative" || name == "threshold")
        return true;
    return false;
}

Native::FacilityAlarm::FacilityAlarm()
    :
    severity{YType::enumeration, "severity"},
    exceed_action{YType::enumeration, "exceed-action"}
{

    yang_name = "facility-alarm"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::FacilityAlarm::~FacilityAlarm()
{
}

bool Native::FacilityAlarm::has_data() const
{
    return severity.is_set
	|| exceed_action.is_set;
}

bool Native::FacilityAlarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| ydk::is_set(exceed_action.yfilter);
}

std::string Native::FacilityAlarm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::FacilityAlarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "facility-alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::FacilityAlarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (exceed_action.is_set || is_set(exceed_action.yfilter)) leaf_name_data.push_back(exceed_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::FacilityAlarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::FacilityAlarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::FacilityAlarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exceed-action")
    {
        exceed_action = value;
        exceed_action.value_namespace = name_space;
        exceed_action.value_namespace_prefix = name_space_prefix;
    }
}

void Native::FacilityAlarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
    if(value_path == "exceed-action")
    {
        exceed_action.yfilter = yfilter;
    }
}

bool Native::FacilityAlarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity" || name == "exceed-action")
        return true;
    return false;
}

Native::Setup::Setup()
{

    yang_name = "setup"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Setup::~Setup()
{
}

bool Native::Setup::has_data() const
{
    return false;
}

bool Native::Setup::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Setup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Setup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Setup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Setup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Setup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Setup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Setup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Setup::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::TodClock::TodClock()
    :
    input_source(std::make_shared<Native::TodClock::InputSource>())
{
    input_source->parent = this;

    yang_name = "tod-clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TodClock::~TodClock()
{
}

bool Native::TodClock::has_data() const
{
    return (input_source !=  nullptr && input_source->has_data());
}

bool Native::TodClock::has_operation() const
{
    return is_set(yfilter)
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::TodClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tod-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TodClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::TodClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    return children;
}

void Native::TodClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TodClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TodClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input-source")
        return true;
    return false;
}

Native::TodClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    ptp(std::make_shared<Native::TodClock::InputSource::Ptp>())
{
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "tod-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TodClock::InputSource::~InputSource()
{
}

bool Native::TodClock::InputSource::has_data() const
{
    return priority.is_set
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::TodClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::TodClock::InputSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tod-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::InputSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::TodClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::TodClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::TodClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{

    yang_name = "ptp"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TodClock::InputSource::Ptp::~Ptp()
{
}

bool Native::TodClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::TodClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::TodClock::InputSource::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/tod-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TodClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TodClock::InputSource::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TodClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TodClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TodClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TodClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::TodClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::NetworkClock::NetworkClock()
    :
    synchronization(std::make_shared<Native::NetworkClock::Synchronization>())
	,wait_to_restore(std::make_shared<Native::NetworkClock::WaitToRestore>())
	,input_source(std::make_shared<Native::NetworkClock::InputSource>())
{
    synchronization->parent = this;
    wait_to_restore->parent = this;
    input_source->parent = this;

    yang_name = "network-clock"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::~NetworkClock()
{
}

bool Native::NetworkClock::has_data() const
{
    return (synchronization !=  nullptr && synchronization->has_data())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_data())
	|| (input_source !=  nullptr && input_source->has_data());
}

bool Native::NetworkClock::has_operation() const
{
    return is_set(yfilter)
	|| (synchronization !=  nullptr && synchronization->has_operation())
	|| (wait_to_restore !=  nullptr && wait_to_restore->has_operation())
	|| (input_source !=  nullptr && input_source->has_operation());
}

std::string Native::NetworkClock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "synchronization")
    {
        if(synchronization == nullptr)
        {
            synchronization = std::make_shared<Native::NetworkClock::Synchronization>();
        }
        return synchronization;
    }

    if(child_yang_name == "wait-to-restore")
    {
        if(wait_to_restore == nullptr)
        {
            wait_to_restore = std::make_shared<Native::NetworkClock::WaitToRestore>();
        }
        return wait_to_restore;
    }

    if(child_yang_name == "input-source")
    {
        if(input_source == nullptr)
        {
            input_source = std::make_shared<Native::NetworkClock::InputSource>();
        }
        return input_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(synchronization != nullptr)
    {
        children["synchronization"] = synchronization;
    }

    if(wait_to_restore != nullptr)
    {
        children["wait-to-restore"] = wait_to_restore;
    }

    if(input_source != nullptr)
    {
        children["input-source"] = input_source;
    }

    return children;
}

void Native::NetworkClock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::NetworkClock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::NetworkClock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronization" || name == "wait-to-restore" || name == "input-source")
        return true;
    return false;
}

Native::NetworkClock::Synchronization::Synchronization()
    :
    automatic{YType::empty, "automatic"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "synchronization"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::Synchronization::~Synchronization()
{
}

bool Native::NetworkClock::Synchronization::has_data() const
{
    return automatic.is_set
	|| mode.is_set;
}

bool Native::NetworkClock::Synchronization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(automatic.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::NetworkClock::Synchronization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::Synchronization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "synchronization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::Synchronization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (automatic.is_set || is_set(automatic.yfilter)) leaf_name_data.push_back(automatic.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::Synchronization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::Synchronization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::Synchronization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "automatic")
    {
        automatic = value;
        automatic.value_namespace = name_space;
        automatic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::Synchronization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "automatic")
    {
        automatic.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::NetworkClock::Synchronization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "automatic" || name == "mode")
        return true;
    return false;
}

Native::NetworkClock::WaitToRestore::WaitToRestore()
    :
    time{YType::uint32, "time"},
    global{YType::empty, "global"}
{

    yang_name = "wait-to-restore"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::WaitToRestore::~WaitToRestore()
{
}

bool Native::NetworkClock::WaitToRestore::has_data() const
{
    return time.is_set
	|| global.is_set;
}

bool Native::NetworkClock::WaitToRestore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(global.yfilter);
}

std::string Native::NetworkClock::WaitToRestore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::WaitToRestore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-to-restore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::WaitToRestore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::WaitToRestore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::WaitToRestore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::WaitToRestore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::WaitToRestore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::NetworkClock::WaitToRestore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "global")
        return true;
    return false;
}

Native::NetworkClock::InputSource::InputSource()
    :
    priority{YType::uint8, "priority"}
    	,
    interface(std::make_shared<Native::NetworkClock::InputSource::Interface>())
	,ptp(std::make_shared<Native::NetworkClock::InputSource::Ptp>())
{
    interface->parent = this;
    ptp->parent = this;

    yang_name = "input-source"; yang_parent_name = "network-clock"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::~InputSource()
{
}

bool Native::NetworkClock::InputSource::has_data() const
{
    return priority.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (ptp !=  nullptr && ptp->has_data());
}

bool Native::NetworkClock::InputSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation());
}

std::string Native::NetworkClock::InputSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::NetworkClock::InputSource::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::NetworkClock::InputSource::Ptp>();
        }
        return ptp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ptp != nullptr)
    {
        children["ptp"] = ptp;
    }

    return children;
}

void Native::NetworkClock::InputSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "ptp" || name == "priority")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::~Interface()
{
}

bool Native::NetworkClock::InputSource::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::NetworkClock::InputSource::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::NetworkClock::InputSource::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::NetworkClock::InputSource::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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

void Native::NetworkClock::InputSource::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::NetworkClock::InputSource::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::NetworkClock::InputSource::Ptp::Ptp()
    :
    domain{YType::uint8, "domain"}
{

    yang_name = "ptp"; yang_parent_name = "input-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::NetworkClock::InputSource::Ptp::~Ptp()
{
}

bool Native::NetworkClock::InputSource::Ptp::has_data() const
{
    return domain.is_set;
}

bool Native::NetworkClock::InputSource::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::NetworkClock::InputSource::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/network-clock/input-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::NetworkClock::InputSource::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::NetworkClock::InputSource::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::NetworkClock::InputSource::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::NetworkClock::InputSource::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::NetworkClock::InputSource::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::NetworkClock::InputSource::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::NetworkClock::InputSource::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::L2Vpn::L2Vpn()
    :
    pseudowire(std::make_shared<Native::L2Vpn::Pseudowire>())
	,vfi(std::make_shared<Native::L2Vpn::Vfi>())
	,xconnect(std::make_shared<Native::L2Vpn::Xconnect>())
{
    pseudowire->parent = this;
    vfi->parent = this;
    xconnect->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::~L2Vpn()
{
}

bool Native::L2Vpn::has_data() const
{
    return (pseudowire !=  nullptr && pseudowire->has_data())
	|| (vfi !=  nullptr && vfi->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data());
}

bool Native::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation())
	|| (vfi !=  nullptr && vfi->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation());
}

std::string Native::L2Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2Vpn::Pseudowire>();
        }
        return pseudowire;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:vfi")
    {
        if(vfi == nullptr)
        {
            vfi = std::make_shared<Native::L2Vpn::Vfi>();
        }
        return vfi;
    }

    if(child_yang_name == "Cisco-IOS-XE-l2vpn:xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::L2Vpn::Xconnect>();
        }
        return xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["Cisco-IOS-XE-l2vpn:pseudowire"] = pseudowire;
    }

    if(vfi != nullptr)
    {
        children["Cisco-IOS-XE-l2vpn:vfi"] = vfi;
    }

    if(xconnect != nullptr)
    {
        children["Cisco-IOS-XE-l2vpn:xconnect"] = xconnect;
    }

    return children;
}

void Native::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "vfi" || name == "xconnect")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Pseudowire()
    :
    routing{YType::empty, "routing"}
    	,
    static_oam(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>())
	,tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv>())
	,group(std::make_shared<Native::L2Vpn::Pseudowire::Group>())
{
    static_oam->parent = this;
    tlv->parent = this;
    group->parent = this;

    yang_name = "pseudowire"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::~Pseudowire()
{
}

bool Native::L2Vpn::Pseudowire::has_data() const
{
    return routing.is_set
	|| (static_oam !=  nullptr && static_oam->has_data())
	|| (tlv !=  nullptr && tlv->has_data())
	|| (group !=  nullptr && group->has_data());
}

bool Native::L2Vpn::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(routing.yfilter)
	|| (static_oam !=  nullptr && static_oam->has_operation())
	|| (tlv !=  nullptr && tlv->has_operation())
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::L2Vpn::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routing.is_set || is_set(routing.yfilter)) leaf_name_data.push_back(routing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-oam")
    {
        if(static_oam == nullptr)
        {
            static_oam = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam>();
        }
        return static_oam;
    }

    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv>();
        }
        return tlv;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::L2Vpn::Pseudowire::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_oam != nullptr)
    {
        children["static-oam"] = static_oam;
    }

    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "routing")
    {
        routing = value;
        routing.value_namespace = name_space;
        routing.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "routing")
    {
        routing.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-oam" || name == "tlv" || name == "group" || name == "routing")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::StaticOam()
{

    yang_name = "static-oam"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::StaticOam::~StaticOam()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::StaticOam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-oam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Class_()
    :
    pw_nm{YType::str, "pw-nm"}
    	,
    timeout(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>())
{
    timeout->parent = this;

    yang_name = "class"; yang_parent_name = "static-oam"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::~Class_()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_data() const
{
    return pw_nm.is_set
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_nm.yfilter)
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/static-oam/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[pw-nm='" <<pw_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_nm.is_set || is_set(pw_nm.yfilter)) leaf_name_data.push_back(pw_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-nm")
    {
        pw_nm = value;
        pw_nm.value_namespace = name_space;
        pw_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-nm")
    {
        pw_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "pw-nm")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Timeout()
    :
    refresh(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>())
{
    refresh->parent = this;

    yang_name = "timeout"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::~Timeout()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_data() const
{
    return (refresh !=  nullptr && refresh->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Refresh()
    :
    send(std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>())
{
    send->parent = this;

    yang_name = "refresh"; yang_parent_name = "timeout"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::~Refresh()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_data() const
{
    return (send !=  nullptr && send->has_data());
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::Send()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "send"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::~Send()
{
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_data() const
{
    return interval.is_set;
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::StaticOam::Class_::Timeout::Refresh::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Tlv()
{

    yang_name = "tlv"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::Tlv::~Tlv()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Pseudowire::Tlv::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_>();
        c->parent = this;
        template_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : template_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Template_()
    :
    tlv_nm{YType::str, "tlv-nm"}
    	,
    tlv(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>())
{
    tlv->parent = this;

    yang_name = "template"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::~Template_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_data() const
{
    return tlv_nm.is_set
	|| (tlv !=  nullptr && tlv->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tlv_nm.yfilter)
	|| (tlv !=  nullptr && tlv->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/tlv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[tlv-nm='" <<tlv_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_nm.is_set || is_set(tlv_nm.yfilter)) leaf_name_data.push_back(tlv_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv")
    {
        if(tlv == nullptr)
        {
            tlv = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_>();
        }
        return tlv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv != nullptr)
    {
        children["tlv"] = tlv;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm = value;
        tlv_nm.value_namespace = name_space;
        tlv_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-nm")
    {
        tlv_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv" || name == "tlv-nm")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::Tlv_()
    :
    tlv_type(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>())
	,tlv_description(std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>())
{
    tlv_type->parent = this;
    tlv_description->parent = this;

    yang_name = "tlv"; yang_parent_name = "template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::~Tlv_()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_data() const
{
    return (tlv_type !=  nullptr && tlv_type->has_data())
	|| (tlv_description !=  nullptr && tlv_description->has_data());
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_operation() const
{
    return is_set(yfilter)
	|| (tlv_type !=  nullptr && tlv_type->has_operation())
	|| (tlv_description !=  nullptr && tlv_description->has_operation());
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tlv-type")
    {
        if(tlv_type == nullptr)
        {
            tlv_type = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType>();
        }
        return tlv_type;
    }

    if(child_yang_name == "tlv-description")
    {
        if(tlv_description == nullptr)
        {
            tlv_description = std::make_shared<Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription>();
        }
        return tlv_description;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tlv_type != nullptr)
    {
        children["tlv-type"] = tlv_type;
    }

    if(tlv_description != nullptr)
    {
        children["tlv-description"] = tlv_description;
    }

    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tlv-type" || name == "tlv-description")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::TlvType()
    :
    type{YType::uint8, "type"}
{

    yang_name = "tlv-type"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::~TlvType()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_data() const
{
    return type.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::TlvDescription()
    :
    description{YType::str, "description"}
{

    yang_name = "tlv-description"; yang_parent_name = "tlv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::~TlvDescription()
{
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_data() const
{
    return description.is_set;
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv-description";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Tlv::Template_::Tlv_::TlvDescription::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description")
        return true;
    return false;
}

Native::L2Vpn::Pseudowire::Group::Group()
    :
    status{YType::empty, "status"}
{

    yang_name = "group"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Pseudowire::Group::~Group()
{
}

bool Native::L2Vpn::Pseudowire::Group::has_data() const
{
    return status.is_set;
}

bool Native::L2Vpn::Pseudowire::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2Vpn::Pseudowire::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:pseudowire/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Pseudowire::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Pseudowire::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Pseudowire::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Pseudowire::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Pseudowire::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Pseudowire::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Pseudowire::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Vfi()
{

    yang_name = "vfi"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Vfi::~Vfi()
{
}

bool Native::L2Vpn::Vfi::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Vfi::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Vfi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:vfi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Vfi::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Context()
    :
    vfi_nm{YType::str, "vfi-nm"}
    	,
    autodiscovery(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>())
	,vpn(std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>())
{
    autodiscovery->parent = this;
    vpn->parent = this;

    yang_name = "context"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Vfi::Context::~Context()
{
}

bool Native::L2Vpn::Vfi::Context::has_data() const
{
    return vfi_nm.is_set
	|| (autodiscovery !=  nullptr && autodiscovery->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::L2Vpn::Vfi::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vfi_nm.yfilter)
	|| (autodiscovery !=  nullptr && autodiscovery->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:vfi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Vfi::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[vfi-nm='" <<vfi_nm <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vfi_nm.is_set || is_set(vfi_nm.yfilter)) leaf_name_data.push_back(vfi_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autodiscovery")
    {
        if(autodiscovery == nullptr)
        {
            autodiscovery = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery>();
        }
        return autodiscovery;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::L2Vpn::Vfi::Context::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autodiscovery != nullptr)
    {
        children["autodiscovery"] = autodiscovery;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm = value;
        vfi_nm.value_namespace = name_space;
        vfi_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vfi-nm")
    {
        vfi_nm.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autodiscovery" || name == "vpn" || name == "vfi-nm")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Autodiscovery()
    :
    bgp(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>())
{
    bgp->parent = this;

    yang_name = "autodiscovery"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::~Autodiscovery()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autodiscovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Bgp()
    :
    signaling(std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>())
{
    signaling->parent = this;

    yang_name = "bgp"; yang_parent_name = "autodiscovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::~Bgp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_data() const
{
    return (signaling !=  nullptr && signaling->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| (signaling !=  nullptr && signaling->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        if(signaling == nullptr)
        {
            signaling = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling>();
        }
        return signaling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(signaling != nullptr)
    {
        children["signaling"] = signaling;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Signaling()
    :
    bgp(nullptr) // presence node
	,ldp(nullptr) // presence node
{

    yang_name = "signaling"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::~Signaling()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_data() const
{
    return (bgp !=  nullptr && bgp->has_data())
	|| (ldp !=  nullptr && ldp->has_data());
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation());
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp>();
        }
        return ldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(ldp != nullptr)
    {
        children["ldp"] = ldp;
    }

    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "ldp")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::Bgp_()
    :
    template_{YType::str, "template"}
{

    yang_name = "bgp"; yang_parent_name = "signaling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::~Bgp_()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::Ldp()
    :
    template_{YType::str, "template"}
{

    yang_name = "ldp"; yang_parent_name = "signaling"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::~Ldp()
{
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_data() const
{
    return template_.is_set;
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Autodiscovery::Bgp::Signaling::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::L2Vpn::Vfi::Context::Vpn::Vpn()
    :
    id{YType::uint32, "id"}
{

    yang_name = "vpn"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Vfi::Context::Vpn::~Vpn()
{
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2Vpn::Vfi::Context::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Vfi::Context::Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Vfi::Context::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Vfi::Context::Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Vfi::Context::Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Vfi::Context::Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Vfi::Context::Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Xconnect()
{

    yang_name = "xconnect"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Xconnect::~Xconnect()
{
}

bool Native::L2Vpn::Xconnect::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L2Vpn::Xconnect::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L2Vpn::Xconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Xconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::Context()
    :
    xc_name{YType::str, "xc-name"}
    	,
    xc_mode_config_xconnect(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>())
{
    xc_mode_config_xconnect->parent = this;

    yang_name = "context"; yang_parent_name = "xconnect"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2Vpn::Xconnect::Context::~Context()
{
}

bool Native::L2Vpn::Xconnect::Context::has_data() const
{
    return xc_name.is_set
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_data());
}

bool Native::L2Vpn::Xconnect::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xc_name.yfilter)
	|| (xc_mode_config_xconnect !=  nullptr && xc_mode_config_xconnect->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn/Cisco-IOS-XE-l2vpn:xconnect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2Vpn::Xconnect::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[xc-name='" <<xc_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_name.is_set || is_set(xc_name.yfilter)) leaf_name_data.push_back(xc_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xc-Mode-config-xconnect")
    {
        if(xc_mode_config_xconnect == nullptr)
        {
            xc_mode_config_xconnect = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect>();
        }
        return xc_mode_config_xconnect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(xc_mode_config_xconnect != nullptr)
    {
        children["xc-Mode-config-xconnect"] = xc_mode_config_xconnect;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xc-name")
    {
        xc_name = value;
        xc_name.value_namespace = name_space;
        xc_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xc-name")
    {
        xc_name.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xc-Mode-config-xconnect" || name == "xc-name")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::XcModeConfigXconnect()
    :
    description{YType::str, "description"},
    shutdown{YType::empty, "shutdown"}
    	,
    interworking(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>())
	,match(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>())
	,member(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>())
	,redundancy(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>())
	,remote(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>())
{
    interworking->parent = this;
    match->parent = this;
    member->parent = this;
    redundancy->parent = this;
    remote->parent = this;

    yang_name = "xc-Mode-config-xconnect"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::~XcModeConfigXconnect()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_data() const
{
    return description.is_set
	|| shutdown.is_set
	|| (interworking !=  nullptr && interworking->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (interworking !=  nullptr && interworking->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xc-Mode-config-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interworking")
    {
        if(interworking == nullptr)
        {
            interworking = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking>();
        }
        return interworking;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match>();
        }
        return match;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member>();
        }
        return member;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interworking != nullptr)
    {
        children["interworking"] = interworking;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interworking" || name == "match" || name == "member" || name == "redundancy" || name == "remote" || name == "description" || name == "shutdown")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::Interworking()
    :
    ethernet{YType::empty, "ethernet"},
    ip{YType::empty, "ip"},
    vlan{YType::empty, "vlan"}
{

    yang_name = "interworking"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::~Interworking()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_data() const
{
    return ethernet.is_set
	|| ip.is_set
	|| vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interworking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Interworking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "ip" || name == "vlan")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Match()
    :
    protocol(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>())
{
    protocol->parent = this;

    yang_name = "match"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::~Match()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::Protocol()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::~Protocol()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_data() const
{
    return ipv6.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Member()
    :
    vlan{YType::uint16, "Vlan"}
{

    yang_name = "member"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::~Member()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vlan.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
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
        auto c = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "interface" || name == "Vlan")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    mem_vcid{YType::uint32, "mem-vcid"}
{

    yang_name = "ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::~Ipv4()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_data() const
{
    return ipv4.is_set
	|| mem_vcid.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mem_vcid.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mem-vcid")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::Interface()
    :
    interface{YType::str, "interface"},
    group{YType::empty, "group"},
    service_instance{YType::empty, "service-instance"}
{

    yang_name = "interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::~Interface()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_data() const
{
    return interface.is_set
	|| group.is_set
	|| service_instance.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(service_instance.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Member::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "group" || name == "service-instance")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Redundancy()
    :
    delay{YType::uint8, "delay"}
    	,
    predictive(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::~Redundancy()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_data() const
{
    return delay.is_set
	|| (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive" || name == "delay")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::Predictive()
    :
    disabled{YType::empty, "disabled"},
    enabled{YType::empty, "enabled"}
{

    yang_name = "predictive"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_data() const
{
    return disabled.is_set
	|| enabled.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "enabled")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Remote()
    :
    circuit(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>())
	,link(std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>())
{
    circuit->parent = this;
    link->parent = this;

    yang_name = "remote"; yang_parent_name = "xc-Mode-config-xconnect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::~Remote()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_data() const
{
    return (circuit !=  nullptr && circuit->has_data())
	|| (link !=  nullptr && link->has_data());
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_operation() const
{
    return is_set(yfilter)
	|| (circuit !=  nullptr && circuit->has_operation())
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit")
    {
        if(circuit == nullptr)
        {
            circuit = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit>();
        }
        return circuit;
    }

    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit != nullptr)
    {
        children["circuit"] = circuit;
    }

    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit" || name == "link")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::Circuit()
    :
    id{YType::empty, "id"}
{

    yang_name = "circuit"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::~Circuit()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_data() const
{
    return id.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::Link()
    :
    failure{YType::empty, "failure"}
{

    yang_name = "link"; yang_parent_name = "remote"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::~Link()
{
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_data() const
{
    return failure.is_set;
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::L2VpnConfig::L2VpnConfig()
    :
    l2vpn(nullptr) // presence node
{

    yang_name = "l2vpn-config"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::~L2VpnConfig()
{
}

bool Native::L2VpnConfig::has_data() const
{
    return (l2vpn !=  nullptr && l2vpn->has_data());
}

bool Native::L2VpnConfig::has_operation() const
{
    return is_set(yfilter)
	|| (l2vpn !=  nullptr && l2vpn->has_operation());
}

std::string Native::L2VpnConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l2vpn:l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::L2VpnConfig::L2Vpn>();
        }
        return l2vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2vpn != nullptr)
    {
        children["Cisco-IOS-XE-l2vpn:l2vpn"] = l2vpn;
    }

    return children;
}

void Native::L2VpnConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2VpnConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2VpnConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::L2Vpn()
    :
    router_id{YType::str, "router-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    logging(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>())
	,redundancy(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>())
{
    logging->parent = this;
    redundancy->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "l2vpn-config"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::~L2Vpn()
{
}

bool Native::L2VpnConfig::L2Vpn::has_data() const
{
    return router_id.is_set
	|| shutdown.is_set
	|| (logging !=  nullptr && logging->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Native::L2VpnConfig::L2Vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (logging !=  nullptr && logging->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l2vpn:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "redundancy" || name == "router-id" || name == "shutdown")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Logging::Logging()
    :
    redundancy{YType::empty, "redundancy"}
    	,
    pseudowire(std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>())
{
    pseudowire->parent = this;

    yang_name = "logging"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Logging::~Logging()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_data() const
{
    return redundancy.is_set
	|| (pseudowire !=  nullptr && pseudowire->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| (pseudowire !=  nullptr && pseudowire->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        if(pseudowire == nullptr)
        {
            pseudowire = std::make_shared<Native::L2VpnConfig::L2Vpn::Logging::Pseudowire>();
        }
        return pseudowire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pseudowire != nullptr)
    {
        children["pseudowire"] = pseudowire;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire" || name == "redundancy")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::Pseudowire()
    :
    status{YType::empty, "status"}
{

    yang_name = "pseudowire"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::~Pseudowire()
{
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_data() const
{
    return status.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Logging::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Redundancy()
    :
    predictive(std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>())
{
    predictive->parent = this;

    yang_name = "redundancy"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::~Redundancy()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_data() const
{
    return (predictive !=  nullptr && predictive->has_data());
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (predictive !=  nullptr && predictive->has_operation());
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "predictive")
    {
        if(predictive == nullptr)
        {
            predictive = std::make_shared<Native::L2VpnConfig::L2Vpn::Redundancy::Predictive>();
        }
        return predictive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(predictive != nullptr)
    {
        children["predictive"] = predictive;
    }

    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L2VpnConfig::L2Vpn::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "predictive")
        return true;
    return false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::Predictive()
    :
    enabled{YType::empty, "enabled"}
{

    yang_name = "predictive"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::~Predictive()
{
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_data() const
{
    return enabled.is_set;
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l2vpn-config/Cisco-IOS-XE-l2vpn:l2vpn/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "predictive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::L2VpnConfig::L2Vpn::Redundancy::Predictive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::L3Vpn::L3Vpn()
    :
    encapsulation(std::make_shared<Native::L3Vpn::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "l3vpn"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L3Vpn::~L3Vpn()
{
}

bool Native::L3Vpn::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::L3Vpn::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::L3Vpn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L3Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l3vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-l3vpn:encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::L3Vpn::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["Cisco-IOS-XE-l3vpn:encapsulation"] = encapsulation;
    }

    return children;
}

void Native::L3Vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Encapsulation()
{

    yang_name = "encapsulation"; yang_parent_name = "l3vpn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L3Vpn::Encapsulation::~Encapsulation()
{
}

bool Native::L3Vpn::Encapsulation::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return false;
}

bool Native::L3Vpn::Encapsulation::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::L3Vpn::Encapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l3vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L3Vpn::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-l3vpn:encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::L3Vpn::Encapsulation::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Ip()
    :
    profile_name{YType::str, "profile-name"}
    	,
    transport(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>())
	,protocol(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>())
	,mpls(std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>())
{
    transport->parent = this;
    protocol->parent = this;
    mpls->parent = this;

    yang_name = "ip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::L3Vpn::Encapsulation::Ip::~Ip()
{
}

bool Native::L3Vpn::Encapsulation::Ip::has_data() const
{
    return profile_name.is_set
	|| (transport !=  nullptr && transport->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| (transport !=  nullptr && transport->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/l3vpn/Cisco-IOS-XE-l3vpn:encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::L3Vpn::Encapsulation::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[profile-name='" <<profile_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport" || name == "protocol" || name == "mpls" || name == "profile-name")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Transport()
    :
    ipv4(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Transport::~Transport()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::Ip::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::Ipv4()
    :
    source{YType::str, "source"}
{

    yang_name = "ipv4"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::~Ipv4()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_data() const
{
    return source.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Protocol()
    :
    gre(nullptr) // presence node
{

    yang_name = "protocol"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::~Protocol()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_data() const
{
    return (gre !=  nullptr && gre->has_data());
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| (gre !=  nullptr && gre->has_operation());
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Native::L3Vpn::Encapsulation::Ip::Protocol::Gre>();
        }
        return gre;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::Gre()
    :
    key{YType::uint32, "key"}
{

    yang_name = "gre"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::~Gre()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_data() const
{
    return key.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Protocol::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key")
        return true;
    return false;
}

Native::L3Vpn::Encapsulation::Ip::Mpls::Mpls()
    :
    mtu{YType::str, "mtu"}
{

    yang_name = "mpls"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::L3Vpn::Encapsulation::Ip::Mpls::~Mpls()
{
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_data() const
{
    return mtu.is_set;
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mtu.yfilter);
}

std::string Native::L3Vpn::Encapsulation::Ip::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::L3Vpn::Encapsulation::Ip::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::L3Vpn::Encapsulation::Ip::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::L3Vpn::Encapsulation::Ip::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::L3Vpn::Encapsulation::Ip::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::L3Vpn::Encapsulation::Ip::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mtu")
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
	,traffic_eng(std::make_shared<Native::Mpls::TrafficEng>())
	,tp(nullptr) // presence node
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
	|| (traffic_eng !=  nullptr && traffic_eng->has_data())
	|| (tp !=  nullptr && tp->has_data());
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
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation())
	|| (tp !=  nullptr && tp->has_operation());
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
    if(child_yang_name == "Cisco-IOS-XE-mpls:atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<Native::Mpls::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Mpls::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:prefix-map")
    {
        if(prefix_map == nullptr)
        {
            prefix_map = std::make_shared<Native::Mpls::PrefixMap>();
        }
        return prefix_map;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mpls::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:tp")
    {
        if(tp == nullptr)
        {
            tp = std::make_shared<Native::Mpls::Tp>();
        }
        return tp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm != nullptr)
    {
        children["Cisco-IOS-XE-mpls:atm"] = atm;
    }

    if(ip != nullptr)
    {
        children["Cisco-IOS-XE-mpls:ip"] = ip;
    }

    if(label != nullptr)
    {
        children["Cisco-IOS-XE-mpls:label"] = label;
    }

    if(ldp != nullptr)
    {
        children["Cisco-IOS-XE-mpls:ldp"] = ldp;
    }

    if(prefix_map != nullptr)
    {
        children["Cisco-IOS-XE-mpls:prefix-map"] = prefix_map;
    }

    if(static_ != nullptr)
    {
        children["Cisco-IOS-XE-mpls:static"] = static_;
    }

    if(traffic_eng != nullptr)
    {
        children["Cisco-IOS-XE-mpls:traffic-eng"] = traffic_eng;
    }

    if(tp != nullptr)
    {
        children["Cisco-IOS-XE-mpls:tp"] = tp;
    }

    return children;
}

void Native::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-mpls:cos-map")
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
    if(name == "atm" || name == "ip" || name == "label" || name == "ldp" || name == "prefix-map" || name == "static" || name == "traffic-eng" || name == "tp" || name == "cos-map")
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
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
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
    return min.is_set
	|| max.is_set
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mpls::Label::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter)
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

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

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
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static" || name == "min" || name == "max")
        return true;
    return false;
}

Native::Mpls::Label::Range::Static_::Static_()
    :
    min{YType::uint32, "min"},
    max{YType::uint32, "max"}
{

    yang_name = "static"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Label::Range::Static_::~Static_()
{
}

bool Native::Mpls::Label::Range::Static_::has_data() const
{
    return min.is_set
	|| max.is_set;
}

bool Native::Mpls::Label::Range::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(min.yfilter)
	|| ydk::is_set(max.yfilter);
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

    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

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
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Label::Range::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Mpls::Label::Range::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min" || name == "max")
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
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
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
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
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
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
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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

Native::Mpls::Ldp::Enable2::Igp::Sync::Sync()
    :
    holddown{YType::uint32, "holddown"}
{

    yang_name = "sync"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Igp::Sync::~Sync()
{
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_data() const
{
    return holddown.is_set;
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Igp::Sync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/igp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Igp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Igp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Igp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Igp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::Label()
    :
    label_mode__config_ldp_lbl(std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl>())
{
    label_mode__config_ldp_lbl->parent = this;

    yang_name = "label"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Label::~Label()
{
}

bool Native::Mpls::Ldp::Enable2::Label::has_data() const
{
    return (label_mode__config_ldp_lbl !=  nullptr && label_mode__config_ldp_lbl->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::has_operation() const
{
    return is_set(yfilter)
	|| (label_mode__config_ldp_lbl !=  nullptr && label_mode__config_ldp_lbl->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-Mode__config-ldp-lbl")
    {
        if(label_mode__config_ldp_lbl == nullptr)
        {
            label_mode__config_ldp_lbl = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl>();
        }
        return label_mode__config_ldp_lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(label_mode__config_ldp_lbl != nullptr)
    {
        children["label-Mode__config-ldp-lbl"] = label_mode__config_ldp_lbl;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-Mode__config-ldp-lbl")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::LabelModeConfigldplbl()
    :
    allocate(std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate>())
{
    allocate->parent = this;

    yang_name = "label-Mode__config-ldp-lbl"; yang_parent_name = "label"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::~LabelModeConfigldplbl()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::has_data() const
{
    return (allocate !=  nullptr && allocate->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::has_operation() const
{
    return is_set(yfilter)
	|| (allocate !=  nullptr && allocate->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-Mode__config-ldp-lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate>();
        }
        return allocate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocate")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Allocate()
    :
    global(nullptr) // presence node
{

    yang_name = "allocate"; yang_parent_name = "label-Mode__config-ldp-lbl"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::~Allocate()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::has_data() const
{
    return (global !=  nullptr && global->has_data());
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::has_operation() const
{
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/label-Mode__config-ldp-lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::Global()
    :
    host_routes{YType::empty, "host-routes"},
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "global"; yang_parent_name = "allocate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::~Global()
{
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::has_data() const
{
    return host_routes.is_set
	|| prefix_list.is_set;
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_routes.yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/label/label-Mode__config-ldp-lbl/allocate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_routes.is_set || is_set(host_routes.yfilter)) leaf_name_data.push_back(host_routes.get_name_leafdata());
    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-routes")
    {
        host_routes = value;
        host_routes.value_namespace = name_space;
        host_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-routes")
    {
        host_routes.yfilter = yfilter;
    }
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Label::LabelModeConfigldplbl::Allocate::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-routes" || name == "prefix-list")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Logging()
    :
    neighbor_changes{YType::boolean, "neighbor-changes"}
    	,
    password(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password>())
{
    password->parent = this;

    yang_name = "logging"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Logging::~Logging()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::has_data() const
{
    return neighbor_changes.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::Ldp::Enable2::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_changes.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_changes.is_set || is_set(neighbor_changes.yfilter)) leaf_name_data.push_back(neighbor_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-changes")
    {
        neighbor_changes = value;
        neighbor_changes.value_namespace = name_space;
        neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-changes")
    {
        neighbor_changes.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "neighbor-changes")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Password()
    :
    configuration_conf(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf>())
	,rollover_conf(std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf>())
	,configuration(nullptr) // presence node
	,rollover(nullptr) // presence node
{
    configuration_conf->parent = this;
    rollover_conf->parent = this;

    yang_name = "password"; yang_parent_name = "logging"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_data() const
{
    return (configuration_conf !=  nullptr && configuration_conf->has_data())
	|| (rollover_conf !=  nullptr && rollover_conf->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (rollover !=  nullptr && rollover->has_data());
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_operation() const
{
    return is_set(yfilter)
	|| (configuration_conf !=  nullptr && configuration_conf->has_operation())
	|| (rollover_conf !=  nullptr && rollover_conf->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (rollover !=  nullptr && rollover->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration-conf")
    {
        if(configuration_conf == nullptr)
        {
            configuration_conf = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf>();
        }
        return configuration_conf;
    }

    if(child_yang_name == "rollover-conf")
    {
        if(rollover_conf == nullptr)
        {
            rollover_conf = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf>();
        }
        return rollover_conf;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "rollover")
    {
        if(rollover == nullptr)
        {
            rollover = std::make_shared<Native::Mpls::Ldp::Enable2::Logging::Password::Rollover>();
        }
        return rollover;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration_conf != nullptr)
    {
        children["configuration-conf"] = configuration_conf;
    }

    if(rollover_conf != nullptr)
    {
        children["rollover-conf"] = rollover_conf;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    if(rollover != nullptr)
    {
        children["rollover"] = rollover;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Logging::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-conf" || name == "rollover-conf" || name == "configuration" || name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::ConfigurationConf()
    :
    configuration{YType::boolean, "configuration"}
{

    yang_name = "configuration-conf"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::~ConfigurationConf()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::has_data() const
{
    return configuration.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration.is_set || is_set(configuration.yfilter)) leaf_name_data.push_back(configuration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration")
    {
        configuration = value;
        configuration.value_namespace = name_space;
        configuration.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration")
    {
        configuration.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::RolloverConf()
    :
    rollover{YType::boolean, "rollover"}
{

    yang_name = "rollover-conf"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::~RolloverConf()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::has_data() const
{
    return rollover.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rollover.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rollover.is_set || is_set(rollover.yfilter)) leaf_name_data.push_back(rollover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rollover")
    {
        rollover = value;
        rollover.value_namespace = name_space;
        rollover.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rollover")
    {
        rollover.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rollover")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::Configuration()
    :
    rate_limit{YType::uint8, "rate-limit"}
{

    yang_name = "configuration"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::~Configuration()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_data() const
{
    return rate_limit.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::Rollover()
    :
    rate_limit{YType::uint8, "rate-limit"}
{

    yang_name = "rollover"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::~Rollover()
{
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_data() const
{
    return rate_limit.is_set;
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_limit.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/logging/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rollover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_limit.is_set || is_set(rate_limit.yfilter)) leaf_name_data.push_back(rate_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-limit")
    {
        rate_limit = value;
        rate_limit.value_namespace = name_space;
        rate_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-limit")
    {
        rate_limit.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Logging::Password::Rollover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate-limit")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Neighbor()
    :
    vrf(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf>())
{
    vrf->parent = this;

    yang_name = "neighbor"; yang_parent_name = "enable2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Neighbor::~Neighbor()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_data())
            return true;
    }
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-content")
    {
        for(auto const & c : neighbor_content)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent>();
        c->parent = this;
        neighbor_content.push_back(c);
        return c;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_content)
    {
        children[c->get_segment_path()] = c;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-content" || name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::NeighborContent()
    :
    address{YType::str, "address"},
    implicit_withdraw{YType::empty, "implicit-withdraw"}
    	,
    labels(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels>())
	,password(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password>())
	,targeted(nullptr) // presence node
{
    labels->parent = this;
    password->parent = this;

    yang_name = "neighbor-content"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::~NeighborContent()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_data() const
{
    return address.is_set
	|| implicit_withdraw.is_set
	|| (labels !=  nullptr && labels->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (targeted !=  nullptr && targeted->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| (labels !=  nullptr && labels->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (targeted !=  nullptr && targeted->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-content" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password>();
        }
        return password;
    }

    if(child_yang_name == "targeted")
    {
        if(targeted == nullptr)
        {
            targeted = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted>();
        }
        return targeted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(targeted != nullptr)
    {
        children["targeted"] = targeted;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labels" || name == "password" || name == "targeted" || name == "address" || name == "implicit-withdraw")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::Labels()
    :
    accept{YType::str, "accept"}
{

    yang_name = "labels"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::~Labels()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_data() const
{
    return accept.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept.is_set || is_set(accept.yfilter)) leaf_name_data.push_back(accept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept")
    {
        accept = value;
        accept.value_namespace = name_space;
        accept.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept")
    {
        accept.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Targeted()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "targeted"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::~Targeted()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_data() const
{
    return protocol.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::~Vrf()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::Vrf_()
    :
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::~Vrf_()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_data() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_operation() const
{
    for (std::size_t index=0; index<neighbor_content.size(); index++)
    {
        if(neighbor_content[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:ldp/enable2/neighbor/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-content")
    {
        for(auto const & c : neighbor_content)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent>();
        c->parent = this;
        neighbor_content.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_content)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-content" || name == "vrf-name")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::NeighborContent()
    :
    address{YType::str, "address"},
    implicit_withdraw{YType::empty, "implicit-withdraw"}
    	,
    labels(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels>())
	,password(std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password>())
	,targeted(nullptr) // presence node
{
    labels->parent = this;
    password->parent = this;

    yang_name = "neighbor-content"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::~NeighborContent()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_data() const
{
    return address.is_set
	|| implicit_withdraw.is_set
	|| (labels !=  nullptr && labels->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (targeted !=  nullptr && targeted->has_data());
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| (labels !=  nullptr && labels->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (targeted !=  nullptr && targeted->has_operation());
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-content" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "labels")
    {
        if(labels == nullptr)
        {
            labels = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels>();
        }
        return labels;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password>();
        }
        return password;
    }

    if(child_yang_name == "targeted")
    {
        if(targeted == nullptr)
        {
            targeted = std::make_shared<Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted>();
        }
        return targeted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(labels != nullptr)
    {
        children["labels"] = labels;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(targeted != nullptr)
    {
        children["targeted"] = targeted;
    }

    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "labels" || name == "password" || name == "targeted" || name == "address" || name == "implicit-withdraw")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::Labels()
    :
    accept{YType::str, "accept"}
{

    yang_name = "labels"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::~Labels()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_data() const
{
    return accept.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept.is_set || is_set(accept.yfilter)) leaf_name_data.push_back(accept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept")
    {
        accept = value;
        accept.value_namespace = name_space;
        accept.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept")
    {
        accept.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::Password()
    :
    enctype{YType::uint8, "enctype"},
    text{YType::str, "text"}
{

    yang_name = "password"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::~Password()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_data() const
{
    return enctype.is_set
	|| text.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enctype.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enctype.is_set || is_set(enctype.yfilter)) leaf_name_data.push_back(enctype.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enctype")
    {
        enctype = value;
        enctype.value_namespace = name_space;
        enctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enctype")
    {
        enctype.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enctype" || name == "text")
        return true;
    return false;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Targeted()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "targeted"; yang_parent_name = "neighbor-content"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::~Targeted()
{
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_data() const
{
    return protocol.is_set;
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "targeted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

const Enum::YLeaf Native::FacilityAlarm::Severity::critical {0, "critical"};

const Enum::YLeaf Native::FacilityAlarm::ExceedAction::shutdown {0, "shutdown"};

const Enum::YLeaf Native::NetworkClock::Synchronization::Mode::QL_enabled {0, "QL-enabled"};

const Enum::YLeaf Native::L3Vpn::Encapsulation::Ip::Mpls::Mtu::max {0, "max"};

const Enum::YLeaf Native::Mpls::Label::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Label::Protocol::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlMode::independent {0, "independent"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Atm::ControlMode::ordered {1, "ordered"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol::tdp {1, "tdp"};

const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol::ldp {0, "ldp"};
const Enum::YLeaf Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol::tdp {1, "tdp"};


}
}

