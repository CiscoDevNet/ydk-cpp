
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_10.hpp"
#include "Cisco_IOS_XE_native_11.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Nat::Translation::Translation()
    :
    dns_timeout(std::make_shared<Native::Ip::Nat::Translation::DnsTimeout>())
	,finrst_timeout(std::make_shared<Native::Ip::Nat::Translation::FinrstTimeout>())
	,icmp_timeout(std::make_shared<Native::Ip::Nat::Translation::IcmpTimeout>())
	,routemap_entry_timeout(std::make_shared<Native::Ip::Nat::Translation::RoutemapEntryTimeout>())
	,syn_timeout(std::make_shared<Native::Ip::Nat::Translation::SynTimeout>())
	,tcp_timeout(std::make_shared<Native::Ip::Nat::Translation::TcpTimeout>())
	,timeout(std::make_shared<Native::Ip::Nat::Translation::Timeout>())
	,udp_timeout(std::make_shared<Native::Ip::Nat::Translation::UdpTimeout>())
	,port_timeout(std::make_shared<Native::Ip::Nat::Translation::PortTimeout>())
{
    dns_timeout->parent = this;
    finrst_timeout->parent = this;
    icmp_timeout->parent = this;
    routemap_entry_timeout->parent = this;
    syn_timeout->parent = this;
    tcp_timeout->parent = this;
    timeout->parent = this;
    udp_timeout->parent = this;
    port_timeout->parent = this;

    yang_name = "translation"; yang_parent_name = "nat"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::~Translation()
{
}

bool Native::Ip::Nat::Translation::has_data() const
{
    return (dns_timeout !=  nullptr && dns_timeout->has_data())
	|| (finrst_timeout !=  nullptr && finrst_timeout->has_data())
	|| (icmp_timeout !=  nullptr && icmp_timeout->has_data())
	|| (routemap_entry_timeout !=  nullptr && routemap_entry_timeout->has_data())
	|| (syn_timeout !=  nullptr && syn_timeout->has_data())
	|| (tcp_timeout !=  nullptr && tcp_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (udp_timeout !=  nullptr && udp_timeout->has_data())
	|| (port_timeout !=  nullptr && port_timeout->has_data());
}

bool Native::Ip::Nat::Translation::has_operation() const
{
    return is_set(yfilter)
	|| (dns_timeout !=  nullptr && dns_timeout->has_operation())
	|| (finrst_timeout !=  nullptr && finrst_timeout->has_operation())
	|| (icmp_timeout !=  nullptr && icmp_timeout->has_operation())
	|| (routemap_entry_timeout !=  nullptr && routemap_entry_timeout->has_operation())
	|| (syn_timeout !=  nullptr && syn_timeout->has_operation())
	|| (tcp_timeout !=  nullptr && tcp_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (udp_timeout !=  nullptr && udp_timeout->has_operation())
	|| (port_timeout !=  nullptr && port_timeout->has_operation());
}

std::string Native::Ip::Nat::Translation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "translation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dns-timeout")
    {
        if(dns_timeout == nullptr)
        {
            dns_timeout = std::make_shared<Native::Ip::Nat::Translation::DnsTimeout>();
        }
        return dns_timeout;
    }

    if(child_yang_name == "finrst-timeout")
    {
        if(finrst_timeout == nullptr)
        {
            finrst_timeout = std::make_shared<Native::Ip::Nat::Translation::FinrstTimeout>();
        }
        return finrst_timeout;
    }

    if(child_yang_name == "icmp-timeout")
    {
        if(icmp_timeout == nullptr)
        {
            icmp_timeout = std::make_shared<Native::Ip::Nat::Translation::IcmpTimeout>();
        }
        return icmp_timeout;
    }

    if(child_yang_name == "routemap-entry-timeout")
    {
        if(routemap_entry_timeout == nullptr)
        {
            routemap_entry_timeout = std::make_shared<Native::Ip::Nat::Translation::RoutemapEntryTimeout>();
        }
        return routemap_entry_timeout;
    }

    if(child_yang_name == "syn-timeout")
    {
        if(syn_timeout == nullptr)
        {
            syn_timeout = std::make_shared<Native::Ip::Nat::Translation::SynTimeout>();
        }
        return syn_timeout;
    }

    if(child_yang_name == "tcp-timeout")
    {
        if(tcp_timeout == nullptr)
        {
            tcp_timeout = std::make_shared<Native::Ip::Nat::Translation::TcpTimeout>();
        }
        return tcp_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Ip::Nat::Translation::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "udp-timeout")
    {
        if(udp_timeout == nullptr)
        {
            udp_timeout = std::make_shared<Native::Ip::Nat::Translation::UdpTimeout>();
        }
        return udp_timeout;
    }

    if(child_yang_name == "port-timeout")
    {
        if(port_timeout == nullptr)
        {
            port_timeout = std::make_shared<Native::Ip::Nat::Translation::PortTimeout>();
        }
        return port_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dns_timeout != nullptr)
    {
        children["dns-timeout"] = dns_timeout;
    }

    if(finrst_timeout != nullptr)
    {
        children["finrst-timeout"] = finrst_timeout;
    }

    if(icmp_timeout != nullptr)
    {
        children["icmp-timeout"] = icmp_timeout;
    }

    if(routemap_entry_timeout != nullptr)
    {
        children["routemap-entry-timeout"] = routemap_entry_timeout;
    }

    if(syn_timeout != nullptr)
    {
        children["syn-timeout"] = syn_timeout;
    }

    if(tcp_timeout != nullptr)
    {
        children["tcp-timeout"] = tcp_timeout;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(udp_timeout != nullptr)
    {
        children["udp-timeout"] = udp_timeout;
    }

    if(port_timeout != nullptr)
    {
        children["port-timeout"] = port_timeout;
    }

    return children;
}

void Native::Ip::Nat::Translation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-timeout" || name == "finrst-timeout" || name == "icmp-timeout" || name == "routemap-entry-timeout" || name == "syn-timeout" || name == "tcp-timeout" || name == "timeout" || name == "udp-timeout" || name == "port-timeout")
        return true;
    return false;
}

Native::Ip::Nat::Translation::DnsTimeout::DnsTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "dns-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::DnsTimeout::~DnsTimeout()
{
}

bool Native::Ip::Nat::Translation::DnsTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::DnsTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::DnsTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::DnsTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::DnsTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::DnsTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::DnsTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::DnsTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::DnsTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::DnsTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::FinrstTimeout::FinrstTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "finrst-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::FinrstTimeout::~FinrstTimeout()
{
}

bool Native::Ip::Nat::Translation::FinrstTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::FinrstTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::FinrstTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::FinrstTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "finrst-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::FinrstTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::FinrstTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::FinrstTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::FinrstTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::FinrstTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::FinrstTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::IcmpTimeout::IcmpTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "icmp-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::IcmpTimeout::~IcmpTimeout()
{
}

bool Native::Ip::Nat::Translation::IcmpTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::IcmpTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::IcmpTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::IcmpTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::IcmpTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::IcmpTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::IcmpTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::IcmpTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::IcmpTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::IcmpTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::RoutemapEntryTimeout::RoutemapEntryTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "routemap-entry-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::RoutemapEntryTimeout::~RoutemapEntryTimeout()
{
}

bool Native::Ip::Nat::Translation::RoutemapEntryTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::RoutemapEntryTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routemap-entry-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::RoutemapEntryTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::RoutemapEntryTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::RoutemapEntryTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::RoutemapEntryTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::SynTimeout::SynTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "syn-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::SynTimeout::~SynTimeout()
{
}

bool Native::Ip::Nat::Translation::SynTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::SynTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::SynTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::SynTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::SynTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::SynTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::SynTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::SynTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::SynTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::SynTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::TcpTimeout::TcpTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "tcp-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::TcpTimeout::~TcpTimeout()
{
}

bool Native::Ip::Nat::Translation::TcpTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::TcpTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::TcpTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::TcpTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::TcpTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::TcpTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::TcpTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::TcpTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::TcpTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::TcpTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::Timeout::Timeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::Timeout::~Timeout()
{
}

bool Native::Ip::Nat::Translation::Timeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::Timeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::Timeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::Timeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::Timeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::Timeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::Timeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::UdpTimeout::UdpTimeout()
    :
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "udp-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::UdpTimeout::~UdpTimeout()
{
}

bool Native::Ip::Nat::Translation::UdpTimeout::has_data() const
{
    return time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::UdpTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::UdpTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::UdpTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::UdpTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::UdpTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::UdpTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::UdpTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::UdpTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::UdpTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::PortTimeout()
    :
    tcp(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp>())
	,udp(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp>())
{
    tcp->parent = this;
    udp->parent = this;

    yang_name = "port-timeout"; yang_parent_name = "translation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::PortTimeout::~PortTimeout()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data());
}

bool Native::Ip::Nat::Translation::PortTimeout::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::Ip::Nat::Translation::PortTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::PortTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::PortTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Native::Ip::Nat::Translation::PortTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::PortTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::PortTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::Tcp()
    :
    protocol(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol>())
{
    protocol->parent = this;

    yang_name = "tcp"; yang_parent_name = "port-timeout"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::~Tcp()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::PortTimeout::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::PortTimeout::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::Protocol()
    :
    port_numer{YType::uint16, "port-numer"},
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "protocol"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::~Protocol()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::has_data() const
{
    return port_numer.is_set
	|| time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_numer.yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/tcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_numer.is_set || is_set(port_numer.yfilter)) leaf_name_data.push_back(port_numer.get_name_leafdata());
    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-numer")
    {
        port_numer = value;
        port_numer.value_namespace = name_space;
        port_numer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-numer")
    {
        port_numer.yfilter = yfilter;
    }
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::PortTimeout::Tcp::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numer" || name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Udp::Udp()
    :
    protocol(std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol>())
{
    protocol->parent = this;

    yang_name = "udp"; yang_parent_name = "port-timeout"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::PortTimeout::Udp::~Udp()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::has_data() const
{
    return (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::has_operation() const
{
    return is_set(yfilter)
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::PortTimeout::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::PortTimeout::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::Protocol()
    :
    port_numer{YType::uint16, "port-numer"},
    time_val{YType::uint32, "time-val"},
    never{YType::empty, "never"}
{

    yang_name = "protocol"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::~Protocol()
{
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::has_data() const
{
    return port_numer.is_set
	|| time_val.is_set
	|| never.is_set;
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_numer.yfilter)
	|| ydk::is_set(time_val.yfilter)
	|| ydk::is_set(never.yfilter);
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nat:nat/translation/port-timeout/udp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_numer.is_set || is_set(port_numer.yfilter)) leaf_name_data.push_back(port_numer.get_name_leafdata());
    if (time_val.is_set || is_set(time_val.yfilter)) leaf_name_data.push_back(time_val.get_name_leafdata());
    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-numer")
    {
        port_numer = value;
        port_numer.value_namespace = name_space;
        port_numer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-val")
    {
        time_val = value;
        time_val.value_namespace = name_space;
        time_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-numer")
    {
        port_numer.yfilter = yfilter;
    }
    if(value_path == "time-val")
    {
        time_val.yfilter = yfilter;
    }
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
}

bool Native::Ip::Nat::Translation::PortTimeout::Udp::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numer" || name == "time-val" || name == "never")
        return true;
    return false;
}

Native::Ip::Nbar::Nbar()
    :
    http_services{YType::empty, "http-services"}
    	,
    attribute(std::make_shared<Native::Ip::Nbar::Attribute>())
	,classification(std::make_shared<Native::Ip::Nbar::Classification>())
	,protocol_pack(std::make_shared<Native::Ip::Nbar::ProtocolPack>())
{
    attribute->parent = this;
    classification->parent = this;
    protocol_pack->parent = this;

    yang_name = "nbar"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::~Nbar()
{
}

bool Native::Ip::Nbar::has_data() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return http_services.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (classification !=  nullptr && classification->has_data())
	|| (protocol_pack !=  nullptr && protocol_pack->has_data());
}

bool Native::Ip::Nbar::has_operation() const
{
    for (std::size_t index=0; index<attribute_map.size(); index++)
    {
        if(attribute_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<attribute_set.size(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(http_services.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (classification !=  nullptr && classification->has_operation())
	|| (protocol_pack !=  nullptr && protocol_pack->has_operation());
}

std::string Native::Ip::Nbar::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http_services.is_set || is_set(http_services.yfilter)) leaf_name_data.push_back(http_services.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "attribute-map")
    {
        auto c = std::make_shared<Native::Ip::Nbar::AttributeMap>();
        c->parent = this;
        attribute_map.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute-set")
    {
        auto c = std::make_shared<Native::Ip::Nbar::AttributeSet>();
        c->parent = this;
        attribute_set.push_back(c);
        return c;
    }

    if(child_yang_name == "classification")
    {
        if(classification == nullptr)
        {
            classification = std::make_shared<Native::Ip::Nbar::Classification>();
        }
        return classification;
    }

    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    if(child_yang_name == "protocol-pack")
    {
        if(protocol_pack == nullptr)
        {
            protocol_pack = std::make_shared<Native::Ip::Nbar::ProtocolPack>();
        }
        return protocol_pack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    count = 0;
    for (auto const & c : attribute_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : attribute_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(classification != nullptr)
    {
        children["classification"] = classification;
    }

    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(protocol_pack != nullptr)
    {
        children["protocol-pack"] = protocol_pack;
    }

    return children;
}

void Native::Ip::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http-services")
    {
        http_services = value;
        http_services.value_namespace = name_space;
        http_services.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http-services")
    {
        http_services.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "attribute-map" || name == "attribute-set" || name == "classification" || name == "custom" || name == "protocol-pack" || name == "http-services")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Attribute()
    :
    application_group(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>())
	,application_set(std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>())
	,category(std::make_shared<Native::Ip::Nbar::Attribute::Category>())
	,sub_category(std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>())
{
    application_group->parent = this;
    application_set->parent = this;
    category->parent = this;
    sub_category->parent = this;

    yang_name = "attribute"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Attribute::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (application_set !=  nullptr && application_set->has_data())
	|| (category !=  nullptr && category->has_data())
	|| (sub_category !=  nullptr && sub_category->has_data());
}

bool Native::Ip::Nbar::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (application_set !=  nullptr && application_set->has_operation())
	|| (category !=  nullptr && category->has_operation())
	|| (sub_category !=  nullptr && sub_category->has_operation());
}

std::string Native::Ip::Nbar::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "application-set")
    {
        if(application_set == nullptr)
        {
            application_set = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet>();
        }
        return application_set;
    }

    if(child_yang_name == "category")
    {
        if(category == nullptr)
        {
            category = std::make_shared<Native::Ip::Nbar::Attribute::Category>();
        }
        return category;
    }

    if(child_yang_name == "sub-category")
    {
        if(sub_category == nullptr)
        {
            sub_category = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory>();
        }
        return sub_category;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(application_set != nullptr)
    {
        children["application-set"] = application_set;
    }

    if(category != nullptr)
    {
        children["category"] = category;
    }

    if(sub_category != nullptr)
    {
        children["sub-category"] = sub_category;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "category" || name == "sub-category")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::ApplicationGroup()
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationGroup::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationGroup::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::ApplicationSet()
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::ApplicationSet::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "application-set"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::ApplicationSet::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/application-set/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::ApplicationSet::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::ApplicationSet::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::ApplicationSet::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::ApplicationSet::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Category()
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Attribute::Category::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::Category::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::Category::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::Category::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "category"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::Category::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::Category::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::Category::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::Category::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::Category::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::Category::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::Category::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::SubCategory()
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_data() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_operation() const
{
    for (std::size_t index=0; index<custom.size(); index++)
    {
        if(custom[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "custom")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Attribute::SubCategory::Custom>();
        c->parent = this;
        custom.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : custom)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "custom")
        return true;
    return false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::Custom()
    :
    name{YType::str, "name"},
    help{YType::str, "help"}
{

    yang_name = "custom"; yang_parent_name = "sub-category"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Attribute::SubCategory::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_data() const
{
    return name.is_set
	|| help.is_set;
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(help.yfilter);
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/attribute/sub-category/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Attribute::SubCategory::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Attribute::SubCategory::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Attribute::SubCategory::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Attribute::SubCategory::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Attribute::SubCategory::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "help")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::AttributeMap()
    :
    name{YType::str, "name"}
    	,
    attribute(std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>())
{
    attribute->parent = this;

    yang_name = "attribute-map"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::AttributeMap::~AttributeMap()
{
}

bool Native::Ip::Nbar::AttributeMap::has_data() const
{
    return name.is_set
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Ip::Nbar::AttributeMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Ip::Nbar::AttributeMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::AttributeMap::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Ip::Nbar::AttributeMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeMap::Attribute::Attribute()
    :
    application_group{YType::str, "application-group"},
    application_set{YType::str, "application-set"},
    business_relevance{YType::str, "business-relevance"},
    category{YType::str, "category"},
    encrypted{YType::str, "encrypted"},
    sub_category{YType::str, "sub-category"},
    traffic_class{YType::str, "traffic-class"},
    tunnel{YType::str, "tunnel"}
{

    yang_name = "attribute"; yang_parent_name = "attribute-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::AttributeMap::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_data() const
{
    return application_group.is_set
	|| application_set.is_set
	|| business_relevance.is_set
	|| category.is_set
	|| encrypted.is_set
	|| sub_category.is_set
	|| traffic_class.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(application_group.yfilter)
	|| ydk::is_set(application_set.yfilter)
	|| ydk::is_set(business_relevance.yfilter)
	|| ydk::is_set(category.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| ydk::is_set(sub_category.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Nbar::AttributeMap::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeMap::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_group.is_set || is_set(application_group.yfilter)) leaf_name_data.push_back(application_group.get_name_leafdata());
    if (application_set.is_set || is_set(application_set.yfilter)) leaf_name_data.push_back(application_set.get_name_leafdata());
    if (business_relevance.is_set || is_set(business_relevance.yfilter)) leaf_name_data.push_back(business_relevance.get_name_leafdata());
    if (category.is_set || is_set(category.yfilter)) leaf_name_data.push_back(category.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());
    if (sub_category.is_set || is_set(sub_category.yfilter)) leaf_name_data.push_back(sub_category.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeMap::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeMap::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "application-group")
    {
        application_group = value;
        application_group.value_namespace = name_space;
        application_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-set")
    {
        application_set = value;
        application_set.value_namespace = name_space;
        application_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "business-relevance")
    {
        business_relevance = value;
        business_relevance.value_namespace = name_space;
        business_relevance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "category")
    {
        category = value;
        category.value_namespace = name_space;
        category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-category")
    {
        sub_category = value;
        sub_category.value_namespace = name_space;
        sub_category.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeMap::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "application-group")
    {
        application_group.yfilter = yfilter;
    }
    if(value_path == "application-set")
    {
        application_set.yfilter = yfilter;
    }
    if(value_path == "business-relevance")
    {
        business_relevance.yfilter = yfilter;
    }
    if(value_path == "category")
    {
        category.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
    if(value_path == "sub-category")
    {
        sub_category.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeMap::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::AttributeSet::AttributeSet()
    :
    protocol_name{YType::str, "protocol-name"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "attribute-set"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::AttributeSet::~AttributeSet()
{
}

bool Native::Ip::Nbar::AttributeSet::has_data() const
{
    return protocol_name.is_set
	|| profile_name.is_set;
}

bool Native::Ip::Nbar::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string Native::Ip::Nbar::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set" <<"[protocol-name='" <<protocol_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-name" || name == "profile-name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Classification()
    :
    auto_learn(nullptr) // presence node
	,dns(std::make_shared<Native::Ip::Nbar::Classification::Dns>())
	,granularity(std::make_shared<Native::Ip::Nbar::Classification::Granularity>())
	,tunneled_traffic(std::make_shared<Native::Ip::Nbar::Classification::TunneledTraffic>())
{
    dns->parent = this;
    granularity->parent = this;
    tunneled_traffic->parent = this;

    yang_name = "classification"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::~Classification()
{
}

bool Native::Ip::Nbar::Classification::has_data() const
{
    return (auto_learn !=  nullptr && auto_learn->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (granularity !=  nullptr && granularity->has_data())
	|| (tunneled_traffic !=  nullptr && tunneled_traffic->has_data());
}

bool Native::Ip::Nbar::Classification::has_operation() const
{
    return is_set(yfilter)
	|| (auto_learn !=  nullptr && auto_learn->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (granularity !=  nullptr && granularity->has_operation())
	|| (tunneled_traffic !=  nullptr && tunneled_traffic->has_operation());
}

std::string Native::Ip::Nbar::Classification::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "classification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-learn")
    {
        if(auto_learn == nullptr)
        {
            auto_learn = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn>();
        }
        return auto_learn;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Nbar::Classification::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "granularity")
    {
        if(granularity == nullptr)
        {
            granularity = std::make_shared<Native::Ip::Nbar::Classification::Granularity>();
        }
        return granularity;
    }

    if(child_yang_name == "tunneled-traffic")
    {
        if(tunneled_traffic == nullptr)
        {
            tunneled_traffic = std::make_shared<Native::Ip::Nbar::Classification::TunneledTraffic>();
        }
        return tunneled_traffic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(auto_learn != nullptr)
    {
        children["auto-learn"] = auto_learn;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(granularity != nullptr)
    {
        children["granularity"] = granularity;
    }

    if(tunneled_traffic != nullptr)
    {
        children["tunneled-traffic"] = tunneled_traffic;
    }

    return children;
}

void Native::Ip::Nbar::Classification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-learn" || name == "dns" || name == "granularity" || name == "tunneled-traffic")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::AutoLearn()
    :
    top_asymmetric_socket{YType::empty, "top-asymmetric-socket"}
    	,
    top_hosts(nullptr) // presence node
	,top_ports(nullptr) // presence node
{

    yang_name = "auto-learn"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::AutoLearn::~AutoLearn()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_data() const
{
    return top_asymmetric_socket.is_set
	|| (top_hosts !=  nullptr && top_hosts->has_data())
	|| (top_ports !=  nullptr && top_ports->has_data());
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(top_asymmetric_socket.yfilter)
	|| (top_hosts !=  nullptr && top_hosts->has_operation())
	|| (top_ports !=  nullptr && top_ports->has_operation());
}

std::string Native::Ip::Nbar::Classification::AutoLearn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-learn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (top_asymmetric_socket.is_set || is_set(top_asymmetric_socket.yfilter)) leaf_name_data.push_back(top_asymmetric_socket.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::AutoLearn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "top-hosts")
    {
        if(top_hosts == nullptr)
        {
            top_hosts = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn::TopHosts>();
        }
        return top_hosts;
    }

    if(child_yang_name == "top-ports")
    {
        if(top_ports == nullptr)
        {
            top_ports = std::make_shared<Native::Ip::Nbar::Classification::AutoLearn::TopPorts>();
        }
        return top_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::AutoLearn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(top_hosts != nullptr)
    {
        children["top-hosts"] = top_hosts;
    }

    if(top_ports != nullptr)
    {
        children["top-ports"] = top_ports;
    }

    return children;
}

void Native::Ip::Nbar::Classification::AutoLearn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "top-asymmetric-socket")
    {
        top_asymmetric_socket = value;
        top_asymmetric_socket.value_namespace = name_space;
        top_asymmetric_socket.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "top-asymmetric-socket")
    {
        top_asymmetric_socket.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "top-hosts" || name == "top-ports" || name == "top-asymmetric-socket")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopHosts::TopHosts()
    :
    sample_rate{YType::uint16, "sample-rate"}
{

    yang_name = "top-hosts"; yang_parent_name = "auto-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopHosts::~TopHosts()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_data() const
{
    return sample_rate.is_set;
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_rate.yfilter);
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/auto-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-hosts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_rate.is_set || is_set(sample_rate.yfilter)) leaf_name_data.push_back(sample_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::AutoLearn::TopHosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::AutoLearn::TopHosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-rate")
    {
        sample_rate = value;
        sample_rate.value_namespace = name_space;
        sample_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::TopHosts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-rate")
    {
        sample_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopHosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-rate")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopPorts::TopPorts()
    :
    sample_rate{YType::uint16, "sample-rate"}
{

    yang_name = "top-ports"; yang_parent_name = "auto-learn"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::AutoLearn::TopPorts::~TopPorts()
{
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_data() const
{
    return sample_rate.is_set;
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sample_rate.yfilter);
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/auto-learn/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "top-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sample_rate.is_set || is_set(sample_rate.yfilter)) leaf_name_data.push_back(sample_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::AutoLearn::TopPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::AutoLearn::TopPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sample-rate")
    {
        sample_rate = value;
        sample_rate.value_namespace = name_space;
        sample_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::AutoLearn::TopPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sample-rate")
    {
        sample_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::AutoLearn::TopPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sample-rate")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Dns::Dns()
    :
    classify_by_domain{YType::empty, "classify-by-domain"}
    	,
    learning(nullptr) // presence node
{

    yang_name = "dns"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Dns::~Dns()
{
}

bool Native::Ip::Nbar::Classification::Dns::has_data() const
{
    return classify_by_domain.is_set
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::Ip::Nbar::Classification::Dns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(classify_by_domain.yfilter)
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::Ip::Nbar::Classification::Dns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classify_by_domain.is_set || is_set(classify_by_domain.yfilter)) leaf_name_data.push_back(classify_by_domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Ip::Nbar::Classification::Dns::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classify-by-domain")
    {
        classify_by_domain = value;
        classify_by_domain.value_namespace = name_space;
        classify_by_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classify-by-domain")
    {
        classify_by_domain.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "learning" || name == "classify-by-domain")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Dns::Learning::Learning()
    :
    guard{YType::empty, "guard"}
{

    yang_name = "learning"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Dns::Learning::~Learning()
{
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_data() const
{
    return guard.is_set;
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(guard.yfilter);
}

std::string Native::Ip::Nbar::Classification::Dns::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/dns/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Dns::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Dns::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guard.is_set || is_set(guard.yfilter)) leaf_name_data.push_back(guard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Dns::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Dns::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Dns::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "guard")
    {
        guard = value;
        guard.value_namespace = name_space;
        guard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Dns::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "guard")
    {
        guard.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Dns::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::Granularity()
    :
    coarse_grain{YType::empty, "coarse-grain"}
    	,
    fine_grain(nullptr) // presence node
{

    yang_name = "granularity"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::~Granularity()
{
}

bool Native::Ip::Nbar::Classification::Granularity::has_data() const
{
    return coarse_grain.is_set
	|| (fine_grain !=  nullptr && fine_grain->has_data());
}

bool Native::Ip::Nbar::Classification::Granularity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coarse_grain.yfilter)
	|| (fine_grain !=  nullptr && fine_grain->has_operation());
}

std::string Native::Ip::Nbar::Classification::Granularity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "granularity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coarse_grain.is_set || is_set(coarse_grain.yfilter)) leaf_name_data.push_back(coarse_grain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fine-grain")
    {
        if(fine_grain == nullptr)
        {
            fine_grain = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain>();
        }
        return fine_grain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fine_grain != nullptr)
    {
        children["fine-grain"] = fine_grain;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coarse-grain")
    {
        coarse_grain = value;
        coarse_grain.value_namespace = name_space;
        coarse_grain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coarse-grain")
    {
        coarse_grain.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fine-grain" || name == "coarse-grain")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::FineGrain()
    :
    attribute(std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute>())
	,protocol(std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol>())
{
    attribute->parent = this;
    protocol->parent = this;

    yang_name = "fine-grain"; yang_parent_name = "granularity"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::~FineGrain()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_operation() const
{
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fine-grain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute" || name == "protocol")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Attribute()
{

    yang_name = "attribute"; yang_parent_name = "fine-grain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::~Attribute()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_data() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup>();
        c->parent = this;
        application_group.push_back(c);
        return c;
    }

    if(child_yang_name == "application-set")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet>();
        c->parent = this;
        application_set.push_back(c);
        return c;
    }

    if(child_yang_name == "business-relevance")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance>();
        c->parent = this;
        business_relevance.push_back(c);
        return c;
    }

    if(child_yang_name == "category")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    if(child_yang_name == "encrypted")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted>();
        c->parent = this;
        encrypted.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-category")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory>();
        c->parent = this;
        sub_category.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-class")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass>();
        c->parent = this;
        traffic_class.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : application_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : business_relevance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : encrypted)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sub_category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : traffic_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::~Category()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/attribute/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::Protocol()
{

    yang_name = "protocol"; yang_parent_name = "fine-grain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::~Protocol()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_data() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList>();
        c->parent = this;
        protocols_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocols_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::ProtocolsList()
    :
    name{YType::str, "name"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_data() const
{
    return name.is_set;
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/granularity/fine-grain/protocol/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::Granularity::FineGrain::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Classification::TunneledTraffic::TunneledTraffic()
    :
    capwap{YType::empty, "capwap"},
    ipv6inip{YType::empty, "ipv6inip"},
    teredo{YType::empty, "teredo"}
{

    yang_name = "tunneled-traffic"; yang_parent_name = "classification"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Classification::TunneledTraffic::~TunneledTraffic()
{
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_data() const
{
    return capwap.is_set
	|| ipv6inip.is_set
	|| teredo.is_set;
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(capwap.yfilter)
	|| ydk::is_set(ipv6inip.yfilter)
	|| ydk::is_set(teredo.yfilter);
}

std::string Native::Ip::Nbar::Classification::TunneledTraffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/classification/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Classification::TunneledTraffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunneled-traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Classification::TunneledTraffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capwap.is_set || is_set(capwap.yfilter)) leaf_name_data.push_back(capwap.get_name_leafdata());
    if (ipv6inip.is_set || is_set(ipv6inip.yfilter)) leaf_name_data.push_back(ipv6inip.get_name_leafdata());
    if (teredo.is_set || is_set(teredo.yfilter)) leaf_name_data.push_back(teredo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Classification::TunneledTraffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Classification::TunneledTraffic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Classification::TunneledTraffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "capwap")
    {
        capwap = value;
        capwap.value_namespace = name_space;
        capwap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6inip")
    {
        ipv6inip = value;
        ipv6inip.value_namespace = name_space;
        ipv6inip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "teredo")
    {
        teredo = value;
        teredo.value_namespace = name_space;
        teredo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Classification::TunneledTraffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "capwap")
    {
        capwap.yfilter = yfilter;
    }
    if(value_path == "ipv6inip")
    {
        ipv6inip.yfilter = yfilter;
    }
    if(value_path == "teredo")
    {
        teredo.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Classification::TunneledTraffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "capwap" || name == "ipv6inip" || name == "teredo")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Custom()
    :
    name{YType::str, "name"}
    	,
    composite(std::make_shared<Native::Ip::Nbar::Custom::Composite>())
	,dns(std::make_shared<Native::Ip::Nbar::Custom::Dns>())
	,http(std::make_shared<Native::Ip::Nbar::Custom::Http>())
	,ssl(std::make_shared<Native::Ip::Nbar::Custom::Ssl>())
	,transport(std::make_shared<Native::Ip::Nbar::Custom::Transport>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Ip_>())
{
    composite->parent = this;
    dns->parent = this;
    http->parent = this;
    ssl->parent = this;
    transport->parent = this;
    ip->parent = this;

    yang_name = "custom"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::Custom::~Custom()
{
}

bool Native::Ip::Nbar::Custom::has_data() const
{
    return name.is_set
	|| (composite !=  nullptr && composite->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Ip::Nbar::Custom::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (composite !=  nullptr && composite->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Ip::Nbar::Custom::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::Custom::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "custom" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "composite")
    {
        if(composite == nullptr)
        {
            composite = std::make_shared<Native::Ip::Nbar::Custom::Composite>();
        }
        return composite;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Nbar::Custom::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Nbar::Custom::Http>();
        }
        return http;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Ip::Nbar::Custom::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Ip::Nbar::Custom::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Ip_>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(composite != nullptr)
    {
        children["composite"] = composite;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Ip::Nbar::Custom::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "composite" || name == "dns" || name == "http" || name == "ssl" || name == "transport" || name == "ip" || name == "name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Composite::Composite()
{

    yang_name = "composite"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Composite::~Composite()
{
}

bool Native::Ip::Nbar::Custom::Composite::has_data() const
{
    for (std::size_t index=0; index<server_name.size(); index++)
    {
        if(server_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Composite::has_operation() const
{
    for (std::size_t index=0; index<server_name.size(); index++)
    {
        if(server_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Composite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "composite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Composite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Composite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-name")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Composite::ServerName>();
        c->parent = this;
        server_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Composite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : server_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Composite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Composite::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Composite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Composite::ServerName::ServerName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"},
    extends{YType::str, "extends"}
{

    yang_name = "server-name"; yang_parent_name = "composite"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Composite::ServerName::~ServerName()
{
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_data() const
{
    return name.is_set
	|| id.is_set
	|| extends.is_set;
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extends.yfilter);
}

std::string Native::Ip::Nbar::Custom::Composite::ServerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Composite::ServerName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extends.is_set || is_set(extends.yfilter)) leaf_name_data.push_back(extends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Composite::ServerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Composite::ServerName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Composite::ServerName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extends")
    {
        extends = value;
        extends.value_namespace = name_space;
        extends.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Composite::ServerName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extends")
    {
        extends.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Composite::ServerName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "extends")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Dns::Dns()
{

    yang_name = "dns"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Dns::~Dns()
{
}

bool Native::Ip::Nbar::Custom::Dns::has_data() const
{
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Dns::has_operation() const
{
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Dns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "domain-name")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Dns::DomainName>();
        c->parent = this;
        domain_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Dns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Dns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Dns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Dns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Dns::DomainName::DomainName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"},
    extends{YType::str, "extends"}
{

    yang_name = "domain-name"; yang_parent_name = "dns"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Dns::DomainName::~DomainName()
{
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_data() const
{
    return name.is_set
	|| id.is_set
	|| extends.is_set;
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(extends.yfilter);
}

std::string Native::Ip::Nbar::Custom::Dns::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Dns::DomainName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (extends.is_set || is_set(extends.yfilter)) leaf_name_data.push_back(extends.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Dns::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Dns::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Dns::DomainName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extends")
    {
        extends = value;
        extends.value_namespace = name_space;
        extends.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Dns::DomainName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "extends")
    {
        extends.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Dns::DomainName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id" || name == "extends")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Http::Http()
    :
    cookie{YType::str, "cookie"},
    host{YType::str, "host"},
    method{YType::str, "method"},
    referer{YType::str, "referer"},
    url{YType::str, "url"},
    user_agent{YType::str, "user-agent"},
    version{YType::str, "version"},
    via{YType::str, "via"},
    id{YType::uint16, "id"}
{

    yang_name = "http"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Http::~Http()
{
}

bool Native::Ip::Nbar::Custom::Http::has_data() const
{
    return cookie.is_set
	|| host.is_set
	|| method.is_set
	|| referer.is_set
	|| url.is_set
	|| user_agent.is_set
	|| version.is_set
	|| via.is_set
	|| id.is_set;
}

bool Native::Ip::Nbar::Custom::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(referer.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(user_agent.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(via.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Nbar::Custom::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (referer.is_set || is_set(referer.yfilter)) leaf_name_data.push_back(referer.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (user_agent.is_set || is_set(user_agent.yfilter)) leaf_name_data.push_back(user_agent.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (via.is_set || is_set(via.yfilter)) leaf_name_data.push_back(via.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie")
    {
        cookie = value;
        cookie.value_namespace = name_space;
        cookie.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "referer")
    {
        referer = value;
        referer.value_namespace = name_space;
        referer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-agent")
    {
        user_agent = value;
        user_agent.value_namespace = name_space;
        user_agent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "via")
    {
        via = value;
        via.value_namespace = name_space;
        via.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie")
    {
        cookie.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "referer")
    {
        referer.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "user-agent")
    {
        user_agent.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "via")
    {
        via.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie" || name == "host" || name == "method" || name == "referer" || name == "url" || name == "user-agent" || name == "version" || name == "via" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ssl::Ssl()
{

    yang_name = "ssl"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ssl::~Ssl()
{
}

bool Native::Ip::Nbar::Custom::Ssl::has_data() const
{
    for (std::size_t index=0; index<unique_name.size(); index++)
    {
        if(unique_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::Custom::Ssl::has_operation() const
{
    for (std::size_t index=0; index<unique_name.size(); index++)
    {
        if(unique_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::Custom::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unique-name")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Ssl::UniqueName>();
        c->parent = this;
        unique_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : unique_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unique-name")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ssl::UniqueName::UniqueName()
    :
    name{YType::str, "name"},
    id{YType::uint16, "id"}
{

    yang_name = "unique-name"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ssl::UniqueName::~UniqueName()
{
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_data() const
{
    return name.is_set
	|| id.is_set;
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ssl::UniqueName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unique-name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ssl::UniqueName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ssl::UniqueName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ssl::UniqueName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ssl::UniqueName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ssl::UniqueName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ssl::UniqueName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Transport()
    :
    tcp(nullptr) // presence node
	,udp(nullptr) // presence node
	,udp_tcp(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::~Transport()
{
}

bool Native::Ip::Nbar::Custom::Transport::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (udp_tcp !=  nullptr && udp_tcp->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (udp_tcp !=  nullptr && udp_tcp->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udp-tcp")
    {
        if(udp_tcp == nullptr)
        {
            udp_tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp>();
        }
        return udp_tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(udp_tcp != nullptr)
    {
        children["udp-tcp"] = udp_tcp;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp" || name == "udp-tcp")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Tcp()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::~Tcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_data() const
{
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers" <<"[port-number0='" <<port_number0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_data() const
{
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Udp()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::~Udp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_data() const
{
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers" <<"[port-number0='" <<port_number0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_data() const
{
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::UdpTcp()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp-tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::~UdpTcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_data() const
{
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers" <<"[port-number0='" <<port_number0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_data() const
{
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Ip_()
    :
    any(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Ip_::has_data() const
{
    return (any !=  nullptr && any->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::has_operation() const
{
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any>();
        }
        return any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(any != nullptr)
    {
        children["any"] = any;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Any()
    :
    id{YType::uint16, "id"}
    	,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Dscp>())
	,ip(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_>())
	,ipv6(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6>())
	,direction(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Direction>())
	,port(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::~Any()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_data() const
{
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dscp != nullptr)
    {
        children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        children["direction"] = direction;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_data() const
{
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Ip_()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Ipv6()
    :
    subnet(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address>();
        c->parent = this;
        address.push_back(c);
        return c;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(subnet != nullptr)
    {
        children["subnet"] = subnet;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_data() const
{
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address" <<"[address0='" <<address0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_data() const
{
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_data() const
{
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Port()
    :
    range(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_data() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.size(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto c = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers>();
        c->parent = this;
        port_numbers.push_back(c);
        return c;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : port_numbers)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_data() const
{
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers" <<"[port-number0='" <<port_number0 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_data() const
{
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::ProtocolPack::ProtocolPack()
{

    yang_name = "protocol-pack"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::ProtocolPack::~ProtocolPack()
{
}

bool Native::Ip::Nbar::ProtocolPack::has_data() const
{
    for (std::size_t index=0; index<filepath.size(); index++)
    {
        if(filepath[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::ProtocolPack::has_operation() const
{
    for (std::size_t index=0; index<filepath.size(); index++)
    {
        if(filepath[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::ProtocolPack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::ProtocolPack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-pack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::ProtocolPack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::ProtocolPack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filepath")
    {
        auto c = std::make_shared<Native::Ip::Nbar::ProtocolPack::Filepath>();
        c->parent = this;
        filepath.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::ProtocolPack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : filepath)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Nbar::ProtocolPack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::ProtocolPack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::ProtocolPack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filepath")
        return true;
    return false;
}

Native::Ip::Nbar::ProtocolPack::Filepath::Filepath()
    :
    filepath{YType::str, "filepath"},
    force{YType::empty, "force"}
{

    yang_name = "filepath"; yang_parent_name = "protocol-pack"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Nbar::ProtocolPack::Filepath::~Filepath()
{
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_data() const
{
    return filepath.is_set
	|| force.is_set;
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filepath.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string Native::Ip::Nbar::ProtocolPack::Filepath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/protocol-pack/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::ProtocolPack::Filepath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filepath" <<"[filepath='" <<filepath <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::ProtocolPack::Filepath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filepath.is_set || is_set(filepath.yfilter)) leaf_name_data.push_back(filepath.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Nbar::ProtocolPack::Filepath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Nbar::ProtocolPack::Filepath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Nbar::ProtocolPack::Filepath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filepath")
    {
        filepath = value;
        filepath.value_namespace = name_space;
        filepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::ProtocolPack::Filepath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filepath")
    {
        filepath.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filepath" || name == "force")
        return true;
    return false;
}

Native::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
	,signalling(std::make_shared<Native::Ip::Rsvp::Signalling>())
{
    signalling->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::~Rsvp()
{
}

bool Native::Ip::Rsvp::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Native::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string Native::Ip::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(signalling != nullptr)
    {
        children["signalling"] = signalling;
    }

    return children;
}

void Native::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "signalling")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Authentication()
    :
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    neighbor(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>())
	,lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>())
{
    neighbor->parent = this;
    lifetime->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Ip::Rsvp::Authentication::has_data() const
{
    return challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "lifetime" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Neighbor()
    :
    access_list(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>())
	,address(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>())
{
    access_list->parent = this;
    address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::~Neighbor()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data())
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "address")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::AccessList()
{

    yang_name = "access-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::~AccessList()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_data() const
{
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_operation() const
{
    for (std::size_t index=0; index<number.size(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number")
    {
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number>();
        c->parent = this;
        number.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "name")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Number()
    :
    acl_number{YType::uint8, "acl-number"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "number"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::~Number()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_data() const
{
    return acl_number.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number" <<"[acl-number='" <<acl_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-number" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Name()
    :
    acl_name{YType::str, "acl-name"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "name"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::~Name()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_data() const
{
    return acl_name.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[acl-name='" <<acl_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-name" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Address()
{

    yang_name = "address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::~Address()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto c = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
    	,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::~Ipv4()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4-address='" <<ipv4_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "ipv4-address" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Signalling()
    :
    initial_retransmit_delay{YType::uint16, "initial-retransmit-delay"}
    	,
    fast_local_repair(std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>())
	,hello(nullptr) // presence node
	,patherr(std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>())
	,rate_limit(nullptr) // presence node
	,refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>())
{
    fast_local_repair->parent = this;
    patherr->parent = this;
    refresh->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Ip::Rsvp::Signalling::has_data() const
{
    return initial_retransmit_delay.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (patherr !=  nullptr && patherr->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_retransmit_delay.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (patherr !=  nullptr && patherr->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_retransmit_delay.is_set || is_set(initial_retransmit_delay.yfilter)) leaf_name_data.push_back(initial_retransmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "patherr")
    {
        if(patherr == nullptr)
        {
            patherr = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>();
        }
        return patherr;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Rsvp::Signalling::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fast_local_repair != nullptr)
    {
        children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(patherr != nullptr)
    {
        children["patherr"] = patherr;
    }

    if(rate_limit != nullptr)
    {
        children["rate-limit"] = rate_limit;
    }

    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay = value;
        initial_retransmit_delay.value_namespace = name_space;
        initial_retransmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "patherr" || name == "rate-limit" || name == "refresh" || name == "initial-retransmit-delay")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    notifications{YType::uint16, "notifications"},
    rate{YType::uint16, "rate"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    return notifications.is_set
	|| rate.is_set;
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifications" || name == "rate")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    statistics{YType::empty, "statistics"}
    	,
    graceful_restart(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>())
{
    graceful_restart->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::has_data() const
{
    return bfd.is_set
	|| statistics.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(statistics.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "bfd" || name == "statistics")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::GracefulRestart()
    :
    dscp{YType::uint8, "dscp"}
    	,
    mode(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>())
	,refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>())
	,send(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>())
{
    mode->parent = this;
    refresh->parent = this;
    send->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::~GracefulRestart()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_data() const
{
    return dscp.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (refresh !=  nullptr && refresh->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(refresh != nullptr)
    {
        children["refresh"] = refresh;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "refresh" || name == "send" || name == "dscp")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::Mode()
    :
    full{YType::empty, "full"},
    help_neighbor{YType::empty, "help-neighbor"}
{

    yang_name = "mode"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::~Mode()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_data() const
{
    return full.is_set
	|| help_neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full.yfilter)
	|| ydk::is_set(help_neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full.is_set || is_set(full.yfilter)) leaf_name_data.push_back(full.get_name_leafdata());
    if (help_neighbor.is_set || is_set(help_neighbor.yfilter)) leaf_name_data.push_back(help_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full")
    {
        full = value;
        full.value_namespace = name_space;
        full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor = value;
        help_neighbor.value_namespace = name_space;
        help_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full")
    {
        full.yfilter = yfilter;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full" || name == "help-neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::Send()
    :
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "send"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::~Send()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_data() const
{
    return recovery_time.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::Patherr()
    :
    state_removal(nullptr) // presence node
{

    yang_name = "patherr"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Patherr::~Patherr()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_data() const
{
    return (state_removal !=  nullptr && state_removal->has_data());
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_operation() const
{
    return is_set(yfilter)
	|| (state_removal !=  nullptr && state_removal->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "patherr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Patherr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-removal")
    {
        if(state_removal == nullptr)
        {
            state_removal = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr::StateRemoval>();
        }
        return state_removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Patherr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(state_removal != nullptr)
    {
        children["state-removal"] = state_removal;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Patherr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Signalling::Patherr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-removal")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::StateRemoval()
    :
    neighbor{YType::uint8, "neighbor"}
{

    yang_name = "state-removal"; yang_parent_name = "patherr"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::~StateRemoval()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_data() const
{
    return neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/patherr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::RateLimit::RateLimit()
    :
    burst{YType::uint16, "burst"},
    limit{YType::uint16, "limit"},
    maxsize{YType::uint16, "maxsize"},
    period{YType::uint16, "period"}
{

    yang_name = "rate-limit"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::RateLimit::~RateLimit()
{
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_data() const
{
    return burst.is_set
	|| limit.is_set
	|| maxsize.is_set
	|| period.is_set;
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxsize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "maxsize")
    {
        maxsize.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "limit" || name == "maxsize" || name == "period")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Refresh()
    :
    interval{YType::uint32, "interval"},
    misses{YType::uint8, "misses"}
    	,
    reduction(nullptr) // presence node
{

    yang_name = "refresh"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_data() const
{
    return interval.is_set
	|| misses.is_set
	|| (reduction !=  nullptr && reduction->has_data());
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter)
	|| (reduction !=  nullptr && reduction->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reduction")
    {
        if(reduction == nullptr)
        {
            reduction = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh::Reduction>();
        }
        return reduction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(reduction != nullptr)
    {
        children["reduction"] = reduction;
    }

    return children;
}

void Native::Ip::Rsvp::Signalling::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reduction" || name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::Reduction()
    :
    ack_delay{YType::uint16, "ack-delay"}
{

    yang_name = "reduction"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::~Reduction()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_data() const
{
    return ack_delay.is_set;
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_delay.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_delay.is_set || is_set(ack_delay.yfilter)) leaf_name_data.push_back(ack_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-delay")
    {
        ack_delay = value;
        ack_delay.value_namespace = name_space;
        ack_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-delay")
    {
        ack_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-delay")
        return true;
    return false;
}

Native::Ip::Sla::Sla()
    :
    enable(std::make_shared<Native::Ip::Sla::Enable>())
	,responder(nullptr) // presence node
	,logging(std::make_shared<Native::Ip::Sla::Logging>())
	,group(std::make_shared<Native::Ip::Sla::Group>())
	,server(std::make_shared<Native::Ip::Sla::Server>())
{
    enable->parent = this;
    logging->parent = this;
    group->parent = this;
    server->parent = this;

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::~Sla()
{
}

bool Native::Ip::Sla::has_data() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_data())
            return true;
    }
    return (enable !=  nullptr && enable->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Sla::has_operation() const
{
    for (std::size_t index=0; index<entry.size(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<schedule.size(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.size(); index++)
    {
        if(reaction_configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sla:sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto c = std::make_shared<Native::Ip::Sla::Entry>();
        c->parent = this;
        entry.push_back(c);
        return c;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Ip::Sla::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Ip::Sla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Sla::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Ip::Sla::Group>();
        }
        return group;
    }

    if(child_yang_name == "schedule")
    {
        auto c = std::make_shared<Native::Ip::Sla::Schedule>();
        c->parent = this;
        schedule.push_back(c);
        return c;
    }

    if(child_yang_name == "reaction-configuration")
    {
        auto c = std::make_shared<Native::Ip::Sla::ReactionConfiguration>();
        c->parent = this;
        reaction_configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Sla::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(responder != nullptr)
    {
        children["responder"] = responder;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    count = 0;
    for (auto const & c : schedule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : reaction_configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "enable" || name == "responder" || name == "logging" || name == "group" || name == "schedule" || name == "reaction-configuration" || name == "server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Entry()
    :
    number{YType::uint32, "number"}
    	,
    icmp_echo(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>())
	,path_echo(std::make_shared<Native::Ip::Sla::Entry::PathEcho>())
	,path_jitter(std::make_shared<Native::Ip::Sla::Entry::PathJitter>())
	,udp_echo(std::make_shared<Native::Ip::Sla::Entry::UdpEcho>())
	,udp_jitter(std::make_shared<Native::Ip::Sla::Entry::UdpJitter>())
	,http(std::make_shared<Native::Ip::Sla::Entry::Http>())
	,dhcp(std::make_shared<Native::Ip::Sla::Entry::Dhcp>())
{
    icmp_echo->parent = this;
    path_echo->parent = this;
    path_jitter->parent = this;
    udp_echo->parent = this;
    udp_jitter->parent = this;
    http->parent = this;
    dhcp->parent = this;

    yang_name = "entry"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Entry::~Entry()
{
}

bool Native::Ip::Sla::Entry::has_data() const
{
    return number.is_set
	|| (icmp_echo !=  nullptr && icmp_echo->has_data())
	|| (path_echo !=  nullptr && path_echo->has_data())
	|| (path_jitter !=  nullptr && path_jitter->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data())
	|| (udp_jitter !=  nullptr && udp_jitter->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Ip::Sla::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (icmp_echo !=  nullptr && icmp_echo->has_operation())
	|| (path_echo !=  nullptr && path_echo->has_operation())
	|| (path_jitter !=  nullptr && path_jitter->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (udp_jitter !=  nullptr && udp_jitter->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Ip::Sla::Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-echo")
    {
        if(icmp_echo == nullptr)
        {
            icmp_echo = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>();
        }
        return icmp_echo;
    }

    if(child_yang_name == "path-echo")
    {
        if(path_echo == nullptr)
        {
            path_echo = std::make_shared<Native::Ip::Sla::Entry::PathEcho>();
        }
        return path_echo;
    }

    if(child_yang_name == "path-jitter")
    {
        if(path_jitter == nullptr)
        {
            path_jitter = std::make_shared<Native::Ip::Sla::Entry::PathJitter>();
        }
        return path_jitter;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Entry::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "udp-jitter")
    {
        if(udp_jitter == nullptr)
        {
            udp_jitter = std::make_shared<Native::Ip::Sla::Entry::UdpJitter>();
        }
        return udp_jitter;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Sla::Entry::Http>();
        }
        return http;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Sla::Entry::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(icmp_echo != nullptr)
    {
        children["icmp-echo"] = icmp_echo;
    }

    if(path_echo != nullptr)
    {
        children["path-echo"] = path_echo;
    }

    if(path_jitter != nullptr)
    {
        children["path-jitter"] = path_jitter;
    }

    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    if(udp_jitter != nullptr)
    {
        children["udp-jitter"] = udp_jitter;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Ip::Sla::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-echo" || name == "path-echo" || name == "path-jitter" || name == "udp-echo" || name == "udp-jitter" || name == "http" || name == "dhcp" || name == "number")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::IcmpEcho()
    :
    destination{YType::str, "destination"},
    source_interface{YType::str, "source-interface"},
    source_ip{YType::str, "source-ip"},
    data_pattern{YType::str, "data-pattern"},
    frequency{YType::uint32, "frequency"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint64, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>())
{
    history->parent = this;

    yang_name = "icmp-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::IcmpEcho::~IcmpEcho()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_data() const
{
    return destination.is_set
	|| source_interface.is_set
	|| source_ip.is_set
	|| data_pattern.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(data_pattern.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (data_pattern.is_set || is_set(data_pattern.yfilter)) leaf_name_data.push_back(data_pattern.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-pattern")
    {
        data_pattern = value;
        data_pattern.value_namespace = name_space;
        data_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "data-pattern")
    {
        data_pattern.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "destination" || name == "source-interface" || name == "source-ip" || name == "data-pattern" || name == "frequency" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::History()
    :
    buckets_kept{YType::uint8, "buckets-kept"},
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    filter{YType::enumeration, "filter"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    lives_kept{YType::uint8, "lives-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::IcmpEcho::History::~History()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_data() const
{
    return buckets_kept.is_set
	|| distributions_of_statistics_kept.is_set
	|| filter.is_set
	|| hours_of_statistics_kept.is_set
	|| lives_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets_kept.yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(lives_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_kept.is_set || is_set(buckets_kept.yfilter)) leaf_name_data.push_back(buckets_kept.get_name_leafdata());
    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (lives_kept.is_set || is_set(lives_kept.yfilter)) leaf_name_data.push_back(lives_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept = value;
        buckets_kept.value_namespace = name_space;
        buckets_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lives-kept")
    {
        lives_kept = value;
        lives_kept.value_namespace = name_space;
        lives_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept.yfilter = yfilter;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "lives-kept")
    {
        lives_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "buckets-kept" || name == "distributions-of-statistics-kept" || name == "filter" || name == "hours-of-statistics-kept" || name == "lives-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::Enhanced()
    :
    interval{YType::uint32, "interval"},
    buckets{YType::uint8, "buckets"}
{

    yang_name = "enhanced"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_data() const
{
    return interval.is_set
	|| buckets.is_set;
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathEcho::PathEcho()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"},
    paths_of_statistics_kept{YType::uint8, "paths-of-statistics-kept"},
    samples_of_history_kept{YType::uint8, "samples-of-history-kept"},
    hops_of_statistics_kept{YType::uint8, "hops-of-statistics-kept"}
{

    yang_name = "path-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::PathEcho::~PathEcho()
{
}

bool Native::Ip::Sla::Entry::PathEcho::has_data() const
{
    return dst_ip.is_set
	|| source_ip.is_set
	|| paths_of_statistics_kept.is_set
	|| samples_of_history_kept.is_set
	|| hops_of_statistics_kept.is_set;
}

bool Native::Ip::Sla::Entry::PathEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(paths_of_statistics_kept.yfilter)
	|| ydk::is_set(samples_of_history_kept.yfilter)
	|| ydk::is_set(hops_of_statistics_kept.yfilter);
}

std::string Native::Ip::Sla::Entry::PathEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (paths_of_statistics_kept.is_set || is_set(paths_of_statistics_kept.yfilter)) leaf_name_data.push_back(paths_of_statistics_kept.get_name_leafdata());
    if (samples_of_history_kept.is_set || is_set(samples_of_history_kept.yfilter)) leaf_name_data.push_back(samples_of_history_kept.get_name_leafdata());
    if (hops_of_statistics_kept.is_set || is_set(hops_of_statistics_kept.yfilter)) leaf_name_data.push_back(hops_of_statistics_kept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::PathEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept = value;
        paths_of_statistics_kept.value_namespace = name_space;
        paths_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept = value;
        samples_of_history_kept.value_namespace = name_space;
        samples_of_history_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept = value;
        hops_of_statistics_kept.value_namespace = name_space;
        hops_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept.yfilter = yfilter;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "source-ip" || name == "paths-of-statistics-kept" || name == "samples-of-history-kept" || name == "hops-of-statistics-kept")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::PathJitter()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"},
    frequency{YType::uint32, "frequency"},
    lsr_path{YType::str, "lsr-path"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
    	,
    default_(std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default>())
{
    default_->parent = this;

    yang_name = "path-jitter"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::PathJitter::~PathJitter()
{
}

bool Native::Ip::Sla::Entry::PathJitter::has_data() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dst_ip.is_set
	|| source_ip.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::Sla::Entry::PathJitter::has_operation() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::Sla::Entry::PathJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto lsr_path_name_datas = lsr_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsr_path_name_datas.begin(), lsr_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::Sla::Entry::PathJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.append(value);
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dst-ip" || name == "source-ip" || name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::Default::Default()
    :
    frequency{YType::empty, "frequency"},
    lsr_path{YType::empty, "lsr-path"},
    owner{YType::empty, "owner"},
    request_data_size{YType::empty, "request-data-size"},
    tag{YType::empty, "tag"},
    threshold{YType::empty, "threshold"},
    timeout{YType::empty, "timeout"},
    tos{YType::empty, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::empty, "vrf"}
{

    yang_name = "default"; yang_parent_name = "path-jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::PathJitter::Default::~Default()
{
}

bool Native::Ip::Sla::Entry::PathJitter::Default::has_data() const
{
    return frequency.is_set
	|| lsr_path.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set;
}

bool Native::Ip::Sla::Entry::PathJitter::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Sla::Entry::PathJitter::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathJitter::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (lsr_path.is_set || is_set(lsr_path.yfilter)) leaf_name_data.push_back(lsr_path.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::PathJitter::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::PathJitter::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::PathJitter::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path = value;
        lsr_path.value_namespace = name_space;
        lsr_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpEcho::UdpEcho()
    :
    dest_addr{YType::str, "dest-addr"},
    dest_port{YType::uint16, "dest-port"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Entry::UdpEcho::has_data() const
{
    return dest_addr.is_set
	|| dest_port.is_set
	|| source_ip.is_set
	|| source_port.is_set;
}

bool Native::Ip::Sla::Entry::UdpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-addr" || name == "dest-port" || name == "source-ip" || name == "source-port")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::UdpJitter()
    :
    dest_addr{YType::str, "dest-addr"},
    portno{YType::uint16, "portno"},
    source_ip{YType::str, "source-ip"},
    num_packets{YType::uint16, "num-packets"},
    interval{YType::uint16, "interval"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint16, "request-data-size"},
    tag{YType::str, "tag"},
    threshold{YType::uint16, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    traffic_class{YType::uint8, "traffic-class"},
    vrf{YType::str, "vrf"}
    	,
    history(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>())
{
    history->parent = this;

    yang_name = "udp-jitter"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpJitter::~UdpJitter()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::has_data() const
{
    return dest_addr.is_set
	|| portno.is_set
	|| source_ip.is_set
	|| num_packets.is_set
	|| interval.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| traffic_class.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(portno.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(num_packets.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (portno.is_set || is_set(portno.yfilter)) leaf_name_data.push_back(portno.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (num_packets.is_set || is_set(num_packets.yfilter)) leaf_name_data.push_back(num_packets.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(history != nullptr)
    {
        children["history"] = history;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portno")
    {
        portno = value;
        portno.value_namespace = name_space;
        portno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-packets")
    {
        num_packets = value;
        num_packets.value_namespace = name_space;
        num_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "portno")
    {
        portno.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "num-packets")
    {
        num_packets.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "dest-addr" || name == "portno" || name == "source-ip" || name == "num-packets" || name == "interval" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "traffic-class" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::History()
    :
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
    	,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpJitter::History::~History()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_data() const
{
    return distributions_of_statistics_kept.is_set
	|| hours_of_statistics_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(enhanced != nullptr)
    {
        children["enhanced"] = enhanced;
    }

    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "distributions-of-statistics-kept" || name == "hours-of-statistics-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::Enhanced()
    :
    interval{YType::uint16, "interval"},
    buckets{YType::uint8, "buckets"}
{

    yang_name = "enhanced"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_data() const
{
    return interval.is_set
	|| buckets.is_set;
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Http()
    :
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    vrf{YType::str, "vrf"}
    	,
    get(std::make_shared<Native::Ip::Sla::Entry::Http::Get>())
	,raw(std::make_shared<Native::Ip::Sla::Entry::Http::Raw>())
{
    get->parent = this;
    raw->parent = this;

    yang_name = "http"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Http::~Http()
{
}

bool Native::Ip::Sla::Entry::Http::has_data() const
{
    return owner.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (get !=  nullptr && get->has_data())
	|| (raw !=  nullptr && raw->has_data());
}

bool Native::Ip::Sla::Entry::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (get !=  nullptr && get->has_operation())
	|| (raw !=  nullptr && raw->has_operation());
}

std::string Native::Ip::Sla::Entry::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "get")
    {
        if(get == nullptr)
        {
            get = std::make_shared<Native::Ip::Sla::Entry::Http::Get>();
        }
        return get;
    }

    if(child_yang_name == "raw")
    {
        if(raw == nullptr)
        {
            raw = std::make_shared<Native::Ip::Sla::Entry::Http::Raw>();
        }
        return raw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(get != nullptr)
    {
        children["get"] = get;
    }

    if(raw != nullptr)
    {
        children["raw"] = raw;
    }

    return children;
}

void Native::Ip::Sla::Entry::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "get" || name == "raw" || name == "owner" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Get::Get()
    :
    url{YType::str, "url"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    name_server{YType::str, "name-server"}
{

    yang_name = "get"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Http::Get::~Get()
{
}

bool Native::Ip::Sla::Entry::Http::Get::has_data() const
{
    return url.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| name_server.is_set;
}

bool Native::Ip::Sla::Entry::Http::Get::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(name_server.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Get::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "get";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::Get::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Get::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Get::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::Http::Get::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Get::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Get::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "source-ip" || name == "source-port" || name == "name-server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Raw::Raw()
    :
    url{YType::str, "url"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    name_server{YType::str, "name-server"}
{

    yang_name = "raw"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Http::Raw::~Raw()
{
}

bool Native::Ip::Sla::Entry::Http::Raw::has_data() const
{
    return url.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| name_server.is_set;
}

bool Native::Ip::Sla::Entry::Http::Raw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(name_server.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Raw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::Raw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Http::Raw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Http::Raw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::Http::Raw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Raw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Raw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "source-ip" || name == "source-port" || name == "name-server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Dhcp::Dhcp()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "dhcp"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Sla::Entry::Dhcp::~Dhcp()
{
}

bool Native::Ip::Sla::Entry::Dhcp::has_data() const
{
    return dst_ip.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Sla::Entry::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Entry::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Entry::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Entry::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Sla::Enable::Enable()
    :
    reaction_alerts{YType::empty, "reaction-alerts"}
{

    yang_name = "enable"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Enable::~Enable()
{
}

bool Native::Ip::Sla::Enable::has_data() const
{
    return reaction_alerts.is_set;
}

bool Native::Ip::Sla::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reaction_alerts.yfilter);
}

std::string Native::Ip::Sla::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reaction_alerts.is_set || is_set(reaction_alerts.yfilter)) leaf_name_data.push_back(reaction_alerts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ip::Sla::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts = value;
        reaction_alerts.value_namespace = name_space;
        reaction_alerts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction-alerts")
        return true;
    return false;
}

Native::Ip::Sla::Responder::Responder()
    :
    udp_echo(std::make_shared<Native::Ip::Sla::Responder::UdpEcho>())
	,tcp_connect(std::make_shared<Native::Ip::Sla::Responder::TcpConnect>())
{
    udp_echo->parent = this;
    tcp_connect->parent = this;

    yang_name = "responder"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::~Responder()
{
}

bool Native::Ip::Sla::Responder::has_data() const
{
    return (udp_echo !=  nullptr && udp_echo->has_data())
	|| (tcp_connect !=  nullptr && tcp_connect->has_data());
}

bool Native::Ip::Sla::Responder::has_operation() const
{
    return is_set(yfilter)
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (tcp_connect !=  nullptr && tcp_connect->has_operation());
}

std::string Native::Ip::Sla::Responder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Responder::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "tcp-connect")
    {
        if(tcp_connect == nullptr)
        {
            tcp_connect = std::make_shared<Native::Ip::Sla::Responder::TcpConnect>();
        }
        return tcp_connect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(udp_echo != nullptr)
    {
        children["udp-echo"] = udp_echo;
    }

    if(tcp_connect != nullptr)
    {
        children["tcp-connect"] = tcp_connect;
    }

    return children;
}

void Native::Ip::Sla::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-echo" || name == "tcp-connect")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::UdpEcho()
    :
    port{YType::uint16, "port"}
{

    yang_name = "udp-echo"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Sla::Responder::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::has_data() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.size(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Sla::Responder::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        auto c = std::make_shared<Native::Ip::Sla::Responder::UdpEcho::Ipaddress>();
        c->parent = this;
        ipaddress.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Sla::Responder::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipaddress)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ip::Sla::Responder::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::all {0, "all"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::failures {1, "failures"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::none {2, "none"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::overThreshold {3, "overThreshold"};


}
}

