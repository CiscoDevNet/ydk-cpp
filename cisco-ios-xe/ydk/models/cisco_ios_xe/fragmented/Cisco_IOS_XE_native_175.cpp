
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_175.hpp"
#include "Cisco_IOS_XE_native_176.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address")
    {
        for(auto const & c : ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address" || name == "any" || name == "host")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    mac_address_mask{YType::str, "mac-address-mask"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| mac_address_mask.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mac-address-mask" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sender-mac-address")
    {
        for(auto const & c : sender_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Esmc::Esmc()
    :
    process{YType::empty, "process"}
{

    yang_name = "esmc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Esmc::~Esmc()
{
}

bool Native::Esmc::has_data() const
{
    return process.is_set;
}

bool Native::Esmc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process.yfilter);
}

std::string Native::Esmc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Esmc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ethernet:esmc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Esmc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process.is_set || is_set(process.yfilter)) leaf_name_data.push_back(process.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Esmc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Esmc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Esmc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process")
    {
        process = value;
        process.value_namespace = name_space;
        process.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Esmc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process")
    {
        process.yfilter = yfilter;
    }
}

bool Native::Esmc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Native::BbaGroup::BbaGroup()
{

    yang_name = "bba-group"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BbaGroup::~BbaGroup()
{
}

bool Native::BbaGroup::has_data() const
{
    for (std::size_t index=0; index<pppoe.size(); index++)
    {
        if(pppoe[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BbaGroup::has_operation() const
{
    for (std::size_t index=0; index<pppoe.size(); index++)
    {
        if(pppoe[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BbaGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BbaGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bba-group:bba-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BbaGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        for(auto const & c : pppoe)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BbaGroup::Pppoe>();
        c->parent = this;
        pppoe.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pppoe)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BbaGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BbaGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BbaGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::Pppoe()
    :
    id{YType::str, "id"},
    virtual_template{YType::uint16, "virtual-template"}
    	,
    vendor_tag(std::make_shared<Native::BbaGroup::Pppoe::VendorTag>())
{
    vendor_tag->parent = this;

    yang_name = "pppoe"; yang_parent_name = "bba-group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BbaGroup::Pppoe::~Pppoe()
{
}

bool Native::BbaGroup::Pppoe::has_data() const
{
    return id.is_set
	|| virtual_template.is_set
	|| (vendor_tag !=  nullptr && vendor_tag->has_data());
}

bool Native::BbaGroup::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| (vendor_tag !=  nullptr && vendor_tag->has_operation());
}

std::string Native::BbaGroup::Pppoe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-bba-group:bba-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BbaGroup::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vendor-tag")
    {
        if(vendor_tag == nullptr)
        {
            vendor_tag = std::make_shared<Native::BbaGroup::Pppoe::VendorTag>();
        }
        return vendor_tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vendor_tag != nullptr)
    {
        children["vendor-tag"] = vendor_tag;
    }

    return children;
}

void Native::BbaGroup::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor-tag" || name == "id" || name == "virtual-template")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::VendorTag()
    :
    strip{YType::empty, "strip"}
    	,
    circuit_id(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::CircuitId>())
	,dsl_sync_rate(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::DslSyncRate>())
	,remote_id(std::make_shared<Native::BbaGroup::Pppoe::VendorTag::RemoteId>())
{
    circuit_id->parent = this;
    dsl_sync_rate->parent = this;
    remote_id->parent = this;

    yang_name = "vendor-tag"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BbaGroup::Pppoe::VendorTag::~VendorTag()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::has_data() const
{
    return strip.is_set
	|| (circuit_id !=  nullptr && circuit_id->has_data())
	|| (dsl_sync_rate !=  nullptr && dsl_sync_rate->has_data())
	|| (remote_id !=  nullptr && remote_id->has_data());
}

bool Native::BbaGroup::Pppoe::VendorTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strip.yfilter)
	|| (circuit_id !=  nullptr && circuit_id->has_operation())
	|| (dsl_sync_rate !=  nullptr && dsl_sync_rate->has_operation())
	|| (remote_id !=  nullptr && remote_id->has_operation());
}

std::string Native::BbaGroup::Pppoe::VendorTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strip.is_set || is_set(strip.yfilter)) leaf_name_data.push_back(strip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::CircuitId>();
        }
        return circuit_id;
    }

    if(child_yang_name == "dsl-sync-rate")
    {
        if(dsl_sync_rate == nullptr)
        {
            dsl_sync_rate = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::DslSyncRate>();
        }
        return dsl_sync_rate;
    }

    if(child_yang_name == "remote-id")
    {
        if(remote_id == nullptr)
        {
            remote_id = std::make_shared<Native::BbaGroup::Pppoe::VendorTag::RemoteId>();
        }
        return remote_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    if(dsl_sync_rate != nullptr)
    {
        children["dsl-sync-rate"] = dsl_sync_rate;
    }

    if(remote_id != nullptr)
    {
        children["remote-id"] = remote_id;
    }

    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "strip")
    {
        strip = value;
        strip.value_namespace = name_space;
        strip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strip")
    {
        strip.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id" || name == "dsl-sync-rate" || name == "remote-id" || name == "strip")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::CircuitId::CircuitId()
    :
    service{YType::empty, "service"}
{

    yang_name = "circuit-id"; yang_parent_name = "vendor-tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BbaGroup::Pppoe::VendorTag::CircuitId::~CircuitId()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_data() const
{
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::DslSyncRate()
    :
    service{YType::empty, "service"}
{

    yang_name = "dsl-sync-rate"; yang_parent_name = "vendor-tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::~DslSyncRate()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_data() const
{
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dsl-sync-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::DslSyncRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::BbaGroup::Pppoe::VendorTag::RemoteId::RemoteId()
    :
    service{YType::empty, "service"}
{

    yang_name = "remote-id"; yang_parent_name = "vendor-tag"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BbaGroup::Pppoe::VendorTag::RemoteId::~RemoteId()
{
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_data() const
{
    return service.is_set;
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service.yfilter);
}

std::string Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service.is_set || is_set(service.yfilter)) leaf_name_data.push_back(service.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BbaGroup::Pppoe::VendorTag::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BbaGroup::Pppoe::VendorTag::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service")
    {
        service = value;
        service.value_namespace = name_space;
        service.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BbaGroup::Pppoe::VendorTag::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service")
    {
        service.yfilter = yfilter;
    }
}

bool Native::BbaGroup::Pppoe::VendorTag::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service")
        return true;
    return false;
}

Native::Card::Card()
    :
    type{YType::enumeration, "type"},
    slot{YType::uint32, "slot"},
    bay{YType::uint32, "bay"}
{

    yang_name = "card"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Card::~Card()
{
}

bool Native::Card::has_data() const
{
    return type.is_set
	|| slot.is_set
	|| bay.is_set;
}

bool Native::Card::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(slot.yfilter)
	|| ydk::is_set(bay.yfilter);
}

std::string Native::Card::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Card::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-card:card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Card::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (slot.is_set || is_set(slot.yfilter)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (bay.is_set || is_set(bay.yfilter)) leaf_name_data.push_back(bay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Card::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Card::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Card::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot")
    {
        slot = value;
        slot.value_namespace = name_space;
        slot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bay")
    {
        bay = value;
        bay.value_namespace = name_space;
        bay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Card::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "slot")
    {
        slot.yfilter = yfilter;
    }
    if(value_path == "bay")
    {
        bay.yfilter = yfilter;
    }
}

bool Native::Card::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "slot" || name == "bay")
        return true;
    return false;
}

Native::Cef::Cef()
    :
    table(std::make_shared<Native::Cef::Table>())
{
    table->parent = this;

    yang_name = "cef"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::~Cef()
{
}

bool Native::Cef::has_data() const
{
    return (table !=  nullptr && table->has_data());
}

bool Native::Cef::has_operation() const
{
    return is_set(yfilter)
	|| (table !=  nullptr && table->has_operation());
}

std::string Native::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table")
    {
        if(table == nullptr)
        {
            table = std::make_shared<Native::Cef::Table>();
        }
        return table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(table != nullptr)
    {
        children["table"] = table;
    }

    return children;
}

void Native::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Cef::Table::Table()
    :
    rate_monitor_period{YType::uint8, "rate-monitor-period"}
    	,
    output_chain(std::make_shared<Native::Cef::Table::OutputChain>())
	,consistency_check(std::make_shared<Native::Cef::Table::ConsistencyCheck>())
	,download(std::make_shared<Native::Cef::Table::Download>())
{
    output_chain->parent = this;
    consistency_check->parent = this;
    download->parent = this;

    yang_name = "table"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::~Table()
{
}

bool Native::Cef::Table::has_data() const
{
    return rate_monitor_period.is_set
	|| (output_chain !=  nullptr && output_chain->has_data())
	|| (consistency_check !=  nullptr && consistency_check->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::Cef::Table::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate_monitor_period.yfilter)
	|| (output_chain !=  nullptr && output_chain->has_operation())
	|| (consistency_check !=  nullptr && consistency_check->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Cef::Table::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate_monitor_period.is_set || is_set(rate_monitor_period.yfilter)) leaf_name_data.push_back(rate_monitor_period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-chain")
    {
        if(output_chain == nullptr)
        {
            output_chain = std::make_shared<Native::Cef::Table::OutputChain>();
        }
        return output_chain;
    }

    if(child_yang_name == "consistency-check")
    {
        if(consistency_check == nullptr)
        {
            consistency_check = std::make_shared<Native::Cef::Table::ConsistencyCheck>();
        }
        return consistency_check;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Cef::Table::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(output_chain != nullptr)
    {
        children["output-chain"] = output_chain;
    }

    if(consistency_check != nullptr)
    {
        children["consistency-check"] = consistency_check;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Cef::Table::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period = value;
        rate_monitor_period.value_namespace = name_space;
        rate_monitor_period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate-monitor-period")
    {
        rate_monitor_period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-chain" || name == "consistency-check" || name == "download" || name == "rate-monitor-period")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::OutputChain()
    :
    build(std::make_shared<Native::Cef::Table::OutputChain::Build>())
{
    build->parent = this;

    yang_name = "output-chain"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::~OutputChain()
{
}

bool Native::Cef::Table::OutputChain::has_data() const
{
    return (build !=  nullptr && build->has_data());
}

bool Native::Cef::Table::OutputChain::has_operation() const
{
    return is_set(yfilter)
	|| (build !=  nullptr && build->has_operation());
}

std::string Native::Cef::Table::OutputChain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "build")
    {
        if(build == nullptr)
        {
            build = std::make_shared<Native::Cef::Table::OutputChain::Build>();
        }
        return build;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(build != nullptr)
    {
        children["build"] = build;
    }

    return children;
}

void Native::Cef::Table::OutputChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "build")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Build()
    :
    favor(std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>())
	,indirection(std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>())
	,inplace_modify(std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>())
{
    favor->parent = this;
    indirection->parent = this;
    inplace_modify->parent = this;

    yang_name = "build"; yang_parent_name = "output-chain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::~Build()
{
}

bool Native::Cef::Table::OutputChain::Build::has_data() const
{
    return (favor !=  nullptr && favor->has_data())
	|| (indirection !=  nullptr && indirection->has_data())
	|| (inplace_modify !=  nullptr && inplace_modify->has_data());
}

bool Native::Cef::Table::OutputChain::Build::has_operation() const
{
    return is_set(yfilter)
	|| (favor !=  nullptr && favor->has_operation())
	|| (indirection !=  nullptr && indirection->has_operation())
	|| (inplace_modify !=  nullptr && inplace_modify->has_operation());
}

std::string Native::Cef::Table::OutputChain::Build::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "build";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "favor")
    {
        if(favor == nullptr)
        {
            favor = std::make_shared<Native::Cef::Table::OutputChain::Build::Favor>();
        }
        return favor;
    }

    if(child_yang_name == "indirection")
    {
        if(indirection == nullptr)
        {
            indirection = std::make_shared<Native::Cef::Table::OutputChain::Build::Indirection>();
        }
        return indirection;
    }

    if(child_yang_name == "inplace-modify")
    {
        if(inplace_modify == nullptr)
        {
            inplace_modify = std::make_shared<Native::Cef::Table::OutputChain::Build::InplaceModify>();
        }
        return inplace_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(favor != nullptr)
    {
        children["favor"] = favor;
    }

    if(indirection != nullptr)
    {
        children["indirection"] = indirection;
    }

    if(inplace_modify != nullptr)
    {
        children["inplace-modify"] = inplace_modify;
    }

    return children;
}

void Native::Cef::Table::OutputChain::Build::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::OutputChain::Build::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::OutputChain::Build::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "favor" || name == "indirection" || name == "inplace-modify")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Favor::Favor()
    :
    convergence_speed{YType::empty, "convergence-speed"},
    memory_utilization{YType::empty, "memory-utilization"}
{

    yang_name = "favor"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::Favor::~Favor()
{
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_data() const
{
    return convergence_speed.is_set
	|| memory_utilization.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(convergence_speed.yfilter)
	|| ydk::is_set(memory_utilization.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Favor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "favor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Favor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (convergence_speed.is_set || is_set(convergence_speed.yfilter)) leaf_name_data.push_back(convergence_speed.get_name_leafdata());
    if (memory_utilization.is_set || is_set(memory_utilization.yfilter)) leaf_name_data.push_back(memory_utilization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Favor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Favor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::Favor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed = value;
        convergence_speed.value_namespace = name_space;
        convergence_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization = value;
        memory_utilization.value_namespace = name_space;
        memory_utilization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Favor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "convergence-speed")
    {
        convergence_speed.yfilter = yfilter;
    }
    if(value_path == "memory-utilization")
    {
        memory_utilization.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Favor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-speed" || name == "memory-utilization")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::Indirection::Indirection()
    :
    ipv4_to_mpls{YType::empty, "ipv4-to-mpls"},
    ipv6_to_mpls{YType::empty, "ipv6-to-mpls"},
    mpls_end_of_stack{YType::empty, "mpls-end-of-stack"},
    mpls_non_end_of_stack{YType::empty, "mpls-non-end-of-stack"},
    non_recursive_prefix{YType::empty, "non-recursive-prefix"},
    recursive_prefix{YType::empty, "recursive-prefix"}
{

    yang_name = "indirection"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::Indirection::~Indirection()
{
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_data() const
{
    return ipv4_to_mpls.is_set
	|| ipv6_to_mpls.is_set
	|| mpls_end_of_stack.is_set
	|| mpls_non_end_of_stack.is_set
	|| non_recursive_prefix.is_set
	|| recursive_prefix.is_set;
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_to_mpls.yfilter)
	|| ydk::is_set(ipv6_to_mpls.yfilter)
	|| ydk::is_set(mpls_end_of_stack.yfilter)
	|| ydk::is_set(mpls_non_end_of_stack.yfilter)
	|| ydk::is_set(non_recursive_prefix.yfilter)
	|| ydk::is_set(recursive_prefix.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::Indirection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indirection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::Indirection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_to_mpls.is_set || is_set(ipv4_to_mpls.yfilter)) leaf_name_data.push_back(ipv4_to_mpls.get_name_leafdata());
    if (ipv6_to_mpls.is_set || is_set(ipv6_to_mpls.yfilter)) leaf_name_data.push_back(ipv6_to_mpls.get_name_leafdata());
    if (mpls_end_of_stack.is_set || is_set(mpls_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_end_of_stack.get_name_leafdata());
    if (mpls_non_end_of_stack.is_set || is_set(mpls_non_end_of_stack.yfilter)) leaf_name_data.push_back(mpls_non_end_of_stack.get_name_leafdata());
    if (non_recursive_prefix.is_set || is_set(non_recursive_prefix.yfilter)) leaf_name_data.push_back(non_recursive_prefix.get_name_leafdata());
    if (recursive_prefix.is_set || is_set(recursive_prefix.yfilter)) leaf_name_data.push_back(recursive_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::Indirection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::Indirection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls = value;
        ipv4_to_mpls.value_namespace = name_space;
        ipv4_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls = value;
        ipv6_to_mpls.value_namespace = name_space;
        ipv6_to_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack = value;
        mpls_end_of_stack.value_namespace = name_space;
        mpls_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack = value;
        mpls_non_end_of_stack.value_namespace = name_space;
        mpls_non_end_of_stack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix = value;
        non_recursive_prefix.value_namespace = name_space;
        non_recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix = value;
        recursive_prefix.value_namespace = name_space;
        recursive_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::Indirection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-to-mpls")
    {
        ipv4_to_mpls.yfilter = yfilter;
    }
    if(value_path == "ipv6-to-mpls")
    {
        ipv6_to_mpls.yfilter = yfilter;
    }
    if(value_path == "mpls-end-of-stack")
    {
        mpls_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "mpls-non-end-of-stack")
    {
        mpls_non_end_of_stack.yfilter = yfilter;
    }
    if(value_path == "non-recursive-prefix")
    {
        non_recursive_prefix.yfilter = yfilter;
    }
    if(value_path == "recursive-prefix")
    {
        recursive_prefix.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::Indirection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-to-mpls" || name == "ipv6-to-mpls" || name == "mpls-end-of-stack" || name == "mpls-non-end-of-stack" || name == "non-recursive-prefix" || name == "recursive-prefix")
        return true;
    return false;
}

Native::Cef::Table::OutputChain::Build::InplaceModify::InplaceModify()
    :
    load_sharing{YType::empty, "load-sharing"},
    push_counter{YType::empty, "push-counter"}
{

    yang_name = "inplace-modify"; yang_parent_name = "build"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::OutputChain::Build::InplaceModify::~InplaceModify()
{
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_data() const
{
    return load_sharing.is_set
	|| push_counter.is_set;
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_sharing.yfilter)
	|| ydk::is_set(push_counter.yfilter);
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/output-chain/build/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::OutputChain::Build::InplaceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inplace-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::OutputChain::Build::InplaceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (push_counter.is_set || is_set(push_counter.yfilter)) leaf_name_data.push_back(push_counter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::OutputChain::Build::InplaceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::OutputChain::Build::InplaceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "push-counter")
    {
        push_counter = value;
        push_counter.value_namespace = name_space;
        push_counter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::OutputChain::Build::InplaceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
    if(value_path == "push-counter")
    {
        push_counter.yfilter = yfilter;
    }
}

bool Native::Cef::Table::OutputChain::Build::InplaceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-sharing" || name == "push-counter")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::ConsistencyCheck()
    :
    ipv4(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>())
	,ipv6(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "consistency-check"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::~ConsistencyCheck()
{
}

bool Native::Cef::Table::ConsistencyCheck::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Ipv4()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
    	,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>())
	,type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv4"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::~Ipv4()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_data() const
{
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_data() const
{
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
    	,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>())
	,scan_rib_ios(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>())
	,scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>())
	,scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_rib_ios->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_data() const
{
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_rib_ios !=  nullptr && scan_rib_ios->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-rib-ios")
    {
        if(scan_rib_ios == nullptr)
        {
            scan_rib_ios = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos>();
        }
        return scan_rib_ios;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_rib_ios != nullptr)
    {
        children["scan-rib-ios"] = scan_rib_ios;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-rib-ios" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanRibIos()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rib-ios"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::~ScanRibIos()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rib-ios";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rib-ios"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rib-ios/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRibIos::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv4/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv4::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Ipv6()
    :
    data_checking{YType::empty, "data-checking"},
    error_message{YType::empty, "error-message"}
    	,
    auto_repair(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>())
	,type(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>())
{
    auto_repair->parent = this;
    type->parent = this;

    yang_name = "ipv6"; yang_parent_name = "consistency-check"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::~Ipv6()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_data() const
{
    return data_checking.is_set
	|| error_message.is_set
	|| (auto_repair !=  nullptr && auto_repair->has_data())
	|| (type !=  nullptr && type->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_checking.yfilter)
	|| ydk::is_set(error_message.yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_checking.is_set || is_set(data_checking.yfilter)) leaf_name_data.push_back(data_checking.get_name_leafdata());
    if (error_message.is_set || is_set(error_message.yfilter)) leaf_name_data.push_back(error_message.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-checking")
    {
        data_checking = value;
        data_checking.value_namespace = name_space;
        data_checking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-message")
    {
        error_message = value;
        error_message.value_namespace = name_space;
        error_message.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-checking")
    {
        data_checking.yfilter = yfilter;
    }
    if(value_path == "error-message")
    {
        error_message.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "type" || name == "data-checking" || name == "error-message")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::AutoRepair()
    :
    delay{YType::uint16, "delay"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "auto-repair"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::~AutoRepair()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_data() const
{
    return delay.is_set
	|| holddown.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "holddown")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::Type()
    :
    lc_detect{YType::empty, "lc-detect"}
    	,
    scan_ios_rib(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>())
	,scan_lc_rp(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>())
	,scan_rp_lc(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>())
{
    scan_ios_rib->parent = this;
    scan_lc_rp->parent = this;
    scan_rp_lc->parent = this;

    yang_name = "type"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::~Type()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_data() const
{
    return lc_detect.is_set
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_data())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_data())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lc_detect.yfilter)
	|| (scan_ios_rib !=  nullptr && scan_ios_rib->has_operation())
	|| (scan_lc_rp !=  nullptr && scan_lc_rp->has_operation())
	|| (scan_rp_lc !=  nullptr && scan_rp_lc->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lc_detect.is_set || is_set(lc_detect.yfilter)) leaf_name_data.push_back(lc_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-ios-rib")
    {
        if(scan_ios_rib == nullptr)
        {
            scan_ios_rib = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib>();
        }
        return scan_ios_rib;
    }

    if(child_yang_name == "scan-lc-rp")
    {
        if(scan_lc_rp == nullptr)
        {
            scan_lc_rp = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp>();
        }
        return scan_lc_rp;
    }

    if(child_yang_name == "scan-rp-lc")
    {
        if(scan_rp_lc == nullptr)
        {
            scan_rp_lc = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc>();
        }
        return scan_rp_lc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_ios_rib != nullptr)
    {
        children["scan-ios-rib"] = scan_ios_rib;
    }

    if(scan_lc_rp != nullptr)
    {
        children["scan-lc-rp"] = scan_lc_rp;
    }

    if(scan_rp_lc != nullptr)
    {
        children["scan-rp-lc"] = scan_rp_lc;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lc-detect")
    {
        lc_detect = value;
        lc_detect.value_namespace = name_space;
        lc_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lc-detect")
    {
        lc_detect.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-ios-rib" || name == "scan-lc-rp" || name == "scan-rp-lc" || name == "lc-detect")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanIosRib()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-ios-rib"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::~ScanIosRib()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-ios-rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-ios-rib"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-ios-rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanIosRib::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanLcRp()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-lc-rp"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::~ScanLcRp()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-lc-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-lc-rp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-lc-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanLcRp::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanRpLc()
    :
    scan_opt(std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>())
{
    scan_opt->parent = this;

    yang_name = "scan-rp-lc"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::~ScanRpLc()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_data() const
{
    return (scan_opt !=  nullptr && scan_opt->has_data());
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_operation() const
{
    return is_set(yfilter)
	|| (scan_opt !=  nullptr && scan_opt->has_operation());
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-rp-lc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scan-opt")
    {
        if(scan_opt == nullptr)
        {
            scan_opt = std::make_shared<Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt>();
        }
        return scan_opt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scan_opt != nullptr)
    {
        children["scan-opt"] = scan_opt;
    }

    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scan-opt")
        return true;
    return false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::ScanOpt()
    :
    count{YType::uint16, "count"},
    period{YType::uint16, "period"}
{

    yang_name = "scan-opt"; yang_parent_name = "scan-rp-lc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::~ScanOpt()
{
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_data() const
{
    return count.is_set
	|| period.is_set;
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/consistency-check/ipv6/type/scan-rp-lc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scan-opt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Cef::Table::ConsistencyCheck::Ipv6::Type::ScanRpLc::ScanOpt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "period")
        return true;
    return false;
}

Native::Cef::Table::Download::Download()
    :
    catch_all(std::make_shared<Native::Cef::Table::Download::CatchAll>())
	,connected_route(std::make_shared<Native::Cef::Table::Download::ConnectedRoute>())
	,default_route(std::make_shared<Native::Cef::Table::Download::DefaultRoute>())
	,receive_route(std::make_shared<Native::Cef::Table::Download::ReceiveRoute>())
	,recursive_dependents(std::make_shared<Native::Cef::Table::Download::RecursiveDependents>())
	,route_in_vrf(std::make_shared<Native::Cef::Table::Download::RouteInVrf>())
{
    catch_all->parent = this;
    connected_route->parent = this;
    default_route->parent = this;
    receive_route->parent = this;
    recursive_dependents->parent = this;
    route_in_vrf->parent = this;

    yang_name = "download"; yang_parent_name = "table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::~Download()
{
}

bool Native::Cef::Table::Download::has_data() const
{
    return (catch_all !=  nullptr && catch_all->has_data())
	|| (connected_route !=  nullptr && connected_route->has_data())
	|| (default_route !=  nullptr && default_route->has_data())
	|| (receive_route !=  nullptr && receive_route->has_data())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_data())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_data());
}

bool Native::Cef::Table::Download::has_operation() const
{
    return is_set(yfilter)
	|| (catch_all !=  nullptr && catch_all->has_operation())
	|| (connected_route !=  nullptr && connected_route->has_operation())
	|| (default_route !=  nullptr && default_route->has_operation())
	|| (receive_route !=  nullptr && receive_route->has_operation())
	|| (recursive_dependents !=  nullptr && recursive_dependents->has_operation())
	|| (route_in_vrf !=  nullptr && route_in_vrf->has_operation());
}

std::string Native::Cef::Table::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "catch-all")
    {
        if(catch_all == nullptr)
        {
            catch_all = std::make_shared<Native::Cef::Table::Download::CatchAll>();
        }
        return catch_all;
    }

    if(child_yang_name == "connected-route")
    {
        if(connected_route == nullptr)
        {
            connected_route = std::make_shared<Native::Cef::Table::Download::ConnectedRoute>();
        }
        return connected_route;
    }

    if(child_yang_name == "default-route")
    {
        if(default_route == nullptr)
        {
            default_route = std::make_shared<Native::Cef::Table::Download::DefaultRoute>();
        }
        return default_route;
    }

    if(child_yang_name == "receive-route")
    {
        if(receive_route == nullptr)
        {
            receive_route = std::make_shared<Native::Cef::Table::Download::ReceiveRoute>();
        }
        return receive_route;
    }

    if(child_yang_name == "recursive-dependents")
    {
        if(recursive_dependents == nullptr)
        {
            recursive_dependents = std::make_shared<Native::Cef::Table::Download::RecursiveDependents>();
        }
        return recursive_dependents;
    }

    if(child_yang_name == "route-in-vrf")
    {
        if(route_in_vrf == nullptr)
        {
            route_in_vrf = std::make_shared<Native::Cef::Table::Download::RouteInVrf>();
        }
        return route_in_vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(catch_all != nullptr)
    {
        children["catch-all"] = catch_all;
    }

    if(connected_route != nullptr)
    {
        children["connected-route"] = connected_route;
    }

    if(default_route != nullptr)
    {
        children["default-route"] = default_route;
    }

    if(receive_route != nullptr)
    {
        children["receive-route"] = receive_route;
    }

    if(recursive_dependents != nullptr)
    {
        children["recursive-dependents"] = recursive_dependents;
    }

    if(route_in_vrf != nullptr)
    {
        children["route-in-vrf"] = route_in_vrf;
    }

    return children;
}

void Native::Cef::Table::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catch-all" || name == "connected-route" || name == "default-route" || name == "receive-route" || name == "recursive-dependents" || name == "route-in-vrf")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::CatchAll()
    :
    priority(std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>())
{
    priority->parent = this;

    yang_name = "catch-all"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::CatchAll::~CatchAll()
{
}

bool Native::Cef::Table::Download::CatchAll::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::CatchAll::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::CatchAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "catch-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::CatchAll::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::CatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::CatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::CatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::CatchAll::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "catch-all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::CatchAll::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/catch-all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::CatchAll::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::CatchAll::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::CatchAll::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::CatchAll::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::CatchAll::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::CatchAll::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::CatchAll::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::ConnectedRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>())
{
    priority->parent = this;

    yang_name = "connected-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ConnectedRoute::~ConnectedRoute()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ConnectedRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ConnectedRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ConnectedRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ConnectedRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "connected-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ConnectedRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/connected-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ConnectedRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ConnectedRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ConnectedRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ConnectedRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ConnectedRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ConnectedRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::DefaultRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>())
{
    priority->parent = this;

    yang_name = "default-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::DefaultRoute::~DefaultRoute()
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::DefaultRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::DefaultRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::DefaultRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::DefaultRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::DefaultRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::DefaultRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "default-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::DefaultRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/default-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::DefaultRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::DefaultRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::DefaultRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::DefaultRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::DefaultRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::DefaultRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::ReceiveRoute()
    :
    priority(std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>())
{
    priority->parent = this;

    yang_name = "receive-route"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ReceiveRoute::~ReceiveRoute()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::ReceiveRoute::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::ReceiveRoute::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::ReceiveRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::ReceiveRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "receive-route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::ReceiveRoute::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/receive-route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::ReceiveRoute::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::ReceiveRoute::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::ReceiveRoute::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::ReceiveRoute::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::ReceiveRoute::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::ReceiveRoute::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::RecursiveDependents()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>())
{
    priority->parent = this;

    yang_name = "recursive-dependents"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RecursiveDependents::~RecursiveDependents()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RecursiveDependents::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursive-dependents";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RecursiveDependents::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RecursiveDependents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RecursiveDependents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "recursive-dependents"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RecursiveDependents::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/recursive-dependents/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RecursiveDependents::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RecursiveDependents::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RecursiveDependents::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RecursiveDependents::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RecursiveDependents::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RecursiveDependents::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::RouteInVrf()
    :
    priority(std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>())
{
    priority->parent = this;

    yang_name = "route-in-vrf"; yang_parent_name = "download"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RouteInVrf::~RouteInVrf()
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Cef::Table::Download::RouteInVrf::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Cef::Table::Download::RouteInVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-in-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Cef::Table::Download::RouteInVrf::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Cef::Table::Download::RouteInVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Cef::Table::Download::RouteInVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Cef::Table::Download::RouteInVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::Priority()
    :
    priority1{YType::empty, "priority1"},
    priority2{YType::empty, "priority2"},
    priority3{YType::empty, "priority3"},
    priority4{YType::empty, "priority4"}
{

    yang_name = "priority"; yang_parent_name = "route-in-vrf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cef::Table::Download::RouteInVrf::Priority::~Priority()
{
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_data() const
{
    return priority1.is_set
	|| priority2.is_set
	|| priority3.is_set
	|| priority4.is_set;
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| ydk::is_set(priority3.yfilter)
	|| ydk::is_set(priority4.yfilter);
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-cef:cef/table/download/route-in-vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cef::Table::Download::RouteInVrf::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cef::Table::Download::RouteInVrf::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());
    if (priority3.is_set || is_set(priority3.yfilter)) leaf_name_data.push_back(priority3.get_name_leafdata());
    if (priority4.is_set || is_set(priority4.yfilter)) leaf_name_data.push_back(priority4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cef::Table::Download::RouteInVrf::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cef::Table::Download::RouteInVrf::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority3")
    {
        priority3 = value;
        priority3.value_namespace = name_space;
        priority3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority4")
    {
        priority4 = value;
        priority4.value_namespace = name_space;
        priority4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cef::Table::Download::RouteInVrf::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
    if(value_path == "priority3")
    {
        priority3.yfilter = yfilter;
    }
    if(value_path == "priority4")
    {
        priority4.yfilter = yfilter;
    }
}

bool Native::Cef::Table::Download::RouteInVrf::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority1" || name == "priority2" || name == "priority3" || name == "priority4")
        return true;
    return false;
}

Native::Coap::Coap()
    :
    http(std::make_shared<Native::Coap::Http>())
{
    http->parent = this;

    yang_name = "coap"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Coap::~Coap()
{
}

bool Native::Coap::has_data() const
{
    return (http !=  nullptr && http->has_data());
}

bool Native::Coap::has_operation() const
{
    return is_set(yfilter)
	|| (http !=  nullptr && http->has_operation());
}

std::string Native::Coap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-coap:coap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Coap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Coap::Http>();
        }
        return http;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(http != nullptr)
    {
        children["http"] = http;
    }

    return children;
}

void Native::Coap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Coap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Coap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Coap::Http::Http()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "http"; yang_parent_name = "coap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Coap::Http::~Http()
{
}

bool Native::Coap::Http::has_data() const
{
    return enable.is_set;
}

bool Native::Coap::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Coap::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-coap:coap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Coap::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Coap::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Coap::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Coap::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Coap::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Coap::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Coap::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::DeviceSensor::DeviceSensor()
    :
    accounting{YType::empty, "accounting"}
{

    yang_name = "device-sensor"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceSensor::~DeviceSensor()
{
}

bool Native::DeviceSensor::has_data() const
{
    return accounting.is_set;
}

bool Native::DeviceSensor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting.yfilter);
}

std::string Native::DeviceSensor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceSensor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-sensor:device-sensor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceSensor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceSensor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceSensor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceSensor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceSensor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Native::DeviceSensor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting")
        return true;
    return false;
}

Native::Diagnostic::Diagnostic()
    :
    bootup(std::make_shared<Native::Diagnostic::Bootup>())
	,event_log(std::make_shared<Native::Diagnostic::EventLog>())
	,monitor(std::make_shared<Native::Diagnostic::Monitor>())
	,schedule(std::make_shared<Native::Diagnostic::Schedule>())
{
    bootup->parent = this;
    event_log->parent = this;
    monitor->parent = this;
    schedule->parent = this;

    yang_name = "diagnostic"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::~Diagnostic()
{
}

bool Native::Diagnostic::has_data() const
{
    return (bootup !=  nullptr && bootup->has_data())
	|| (event_log !=  nullptr && event_log->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (schedule !=  nullptr && schedule->has_data());
}

bool Native::Diagnostic::has_operation() const
{
    return is_set(yfilter)
	|| (bootup !=  nullptr && bootup->has_operation())
	|| (event_log !=  nullptr && event_log->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (schedule !=  nullptr && schedule->has_operation());
}

std::string Native::Diagnostic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-diagnostics:diagnostic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootup")
    {
        if(bootup == nullptr)
        {
            bootup = std::make_shared<Native::Diagnostic::Bootup>();
        }
        return bootup;
    }

    if(child_yang_name == "event-log")
    {
        if(event_log == nullptr)
        {
            event_log = std::make_shared<Native::Diagnostic::EventLog>();
        }
        return event_log;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Diagnostic::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "schedule")
    {
        if(schedule == nullptr)
        {
            schedule = std::make_shared<Native::Diagnostic::Schedule>();
        }
        return schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootup != nullptr)
    {
        children["bootup"] = bootup;
    }

    if(event_log != nullptr)
    {
        children["event-log"] = event_log;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(schedule != nullptr)
    {
        children["schedule"] = schedule;
    }

    return children;
}

void Native::Diagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootup" || name == "event-log" || name == "monitor" || name == "schedule")
        return true;
    return false;
}

Native::Diagnostic::Bootup::Bootup()
    :
    level{YType::enumeration, "level"}
{

    yang_name = "bootup"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Bootup::~Bootup()
{
}

bool Native::Diagnostic::Bootup::has_data() const
{
    return level.is_set;
}

bool Native::Diagnostic::Bootup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Native::Diagnostic::Bootup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Bootup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Bootup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Bootup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Bootup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Bootup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Bootup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Bootup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Diagnostic::EventLog::EventLog()
    :
    size{YType::uint16, "size"}
{

    yang_name = "event-log"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::EventLog::~EventLog()
{
}

bool Native::Diagnostic::EventLog::has_data() const
{
    return size.is_set;
}

bool Native::Diagnostic::EventLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter);
}

std::string Native::Diagnostic::EventLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::EventLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::EventLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::EventLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::EventLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::EventLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::EventLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
}

bool Native::Diagnostic::EventLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Monitor()
    :
    syslog{YType::empty, "syslog"}
    	,
    interval(std::make_shared<Native::Diagnostic::Monitor::Interval>())
	,threshold(std::make_shared<Native::Diagnostic::Monitor::Threshold>())
{
    interval->parent = this;
    threshold->parent = this;

    yang_name = "monitor"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::~Monitor()
{
}

bool Native::Diagnostic::Monitor::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return syslog.is_set
	|| (interval !=  nullptr && interval->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Diagnostic::Monitor::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| (interval !=  nullptr && interval->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Diagnostic::Monitor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Diagnostic::Monitor::Interval>();
        }
        return interval;
    }

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
        auto c = std::make_shared<Native::Diagnostic::Monitor::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Diagnostic::Monitor::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interval != nullptr)
    {
        children["interval"] = interval;
    }

    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Diagnostic::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "switch" || name == "threshold" || name == "syslog")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Interval()
    :
    switch_(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_>())
{
    switch_->parent = this;

    yang_name = "interval"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::~Interval()
{
}

bool Native::Diagnostic::Monitor::Interval::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::Diagnostic::Monitor::Interval::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch_()
{

    yang_name = "switch"; yang_parent_name = "interval"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Interval::Switch_::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Switch__()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::~Switch__()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/interval/switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-ids" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::TestIds()
    :
    id{YType::str, "id"},
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::has_data() const
{
    return id.is_set
	|| hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(number_of_days.yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.yfilter)) leaf_name_data.push_back(number_of_days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
        number_of_days.value_namespace = name_space;
        number_of_days.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "number-of-days")
    {
        number_of_days.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "hh-mm-ss" || name == "milli-seconds" || name == "number-of-days")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::All()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"},
    milli_seconds{YType::uint16, "milli-seconds"},
    number_of_days{YType::uint16, "number-of-days"}
{

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::has_data() const
{
    return hh_mm_ss.is_set
	|| milli_seconds.is_set
	|| number_of_days.is_set;
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(number_of_days.yfilter);
}

std::string Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (number_of_days.is_set || is_set(number_of_days.yfilter)) leaf_name_data.push_back(number_of_days.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-days")
    {
        number_of_days = value;
        number_of_days.value_namespace = name_space;
        number_of_days.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "number-of-days")
    {
        number_of_days.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Interval::Switch_::Switch__::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss" || name == "milli-seconds" || name == "number-of-days")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Switch_::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Switch_::Test::Test()
    :
    id{YType::str, "id"},
    all{YType::empty, "all"}
{

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Switch_::Test::has_data() const
{
    return id.is_set
	|| all.is_set;
}

bool Native::Diagnostic::Monitor::Switch_::Test::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Diagnostic::Monitor::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Threshold()
{

    yang_name = "threshold"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Threshold::~Threshold()
{
}

bool Native::Diagnostic::Monitor::Threshold::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Switch_()
    :
    number{YType::uint8, "number"}
    	,
    test(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::has_data() const
{
    return number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/monitor/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All>())
{
    all->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-ids" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure>())
{
    failure->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::has_data() const
{
    return id.is_set
	|| (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Failure()
{

    yang_name = "failure"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "count"; yang_parent_name = "failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(runs.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.yfilter)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runs")
    {
        runs = value;
        runs.value_namespace = name_space;
        runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "runs")
    {
        runs.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::TestIds::Failure::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "days" || name == "hours" || name == "milli-seconds" || name == "minutes" || name == "runs" || name == "seconds")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::All()
    :
    failure(std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure>())
{
    failure->parent = this;

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::~All()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::has_data() const
{
    return (failure !=  nullptr && failure->has_data());
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation());
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure>();
        }
        return failure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Failure()
{

    yang_name = "failure"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::~Failure()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::Count()
    :
    range{YType::uint16, "range"},
    days{YType::uint32, "days"},
    hours{YType::uint32, "hours"},
    milli_seconds{YType::uint32, "milli-seconds"},
    minutes{YType::uint32, "minutes"},
    runs{YType::uint16, "runs"},
    seconds{YType::uint32, "seconds"}
{

    yang_name = "count"; yang_parent_name = "failure"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::~Count()
{
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::has_data() const
{
    return range.is_set
	|| days.is_set
	|| hours.is_set
	|| milli_seconds.is_set
	|| minutes.is_set
	|| runs.is_set
	|| seconds.is_set;
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(milli_seconds.yfilter)
	|| ydk::is_set(minutes.yfilter)
	|| ydk::is_set(runs.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (milli_seconds.is_set || is_set(milli_seconds.yfilter)) leaf_name_data.push_back(milli_seconds.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (runs.is_set || is_set(runs.yfilter)) leaf_name_data.push_back(runs.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds = value;
        milli_seconds.value_namespace = name_space;
        milli_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "runs")
    {
        runs = value;
        runs.value_namespace = name_space;
        runs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "milli-seconds")
    {
        milli_seconds.yfilter = yfilter;
    }
    if(value_path == "minutes")
    {
        minutes.yfilter = yfilter;
    }
    if(value_path == "runs")
    {
        runs.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Monitor::Threshold::Switch_::Test::All::Failure::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "days" || name == "hours" || name == "milli-seconds" || name == "minutes" || name == "runs" || name == "seconds")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Schedule()
{

    yang_name = "schedule"; yang_parent_name = "diagnostic"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Schedule::~Schedule()
{
}

bool Native::Diagnostic::Schedule::has_data() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Diagnostic::Schedule::has_operation() const
{
    for (std::size_t index=0; index<switch_.size(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Diagnostic::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_>();
        c->parent = this;
        switch_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : switch_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Diagnostic::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Switch_()
    :
    switch_number{YType::uint8, "switch-number"}
    	,
    test(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test>())
{
    test->parent = this;

    yang_name = "switch"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Diagnostic::Schedule::Switch_::~Switch_()
{
}

bool Native::Diagnostic::Schedule::Switch_::has_data() const
{
    return switch_number.is_set
	|| (test !=  nullptr && test->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-diagnostics:diagnostic/schedule/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Diagnostic::Schedule::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch" <<"[switch-number='" <<switch_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "switch-number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Test()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All>())
	,basic(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic>())
	,complete(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete>())
	,minimal(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal>())
	,non_disruptive(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive>())
	,per_port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort>())
{
    all->parent = this;
    basic->parent = this;
    complete->parent = this;
    minimal->parent = this;
    non_disruptive->parent = this;
    per_port->parent = this;

    yang_name = "test"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::~Test()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::has_data() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data())
	|| (basic !=  nullptr && basic->has_data())
	|| (complete !=  nullptr && complete->has_data())
	|| (minimal !=  nullptr && minimal->has_data())
	|| (non_disruptive !=  nullptr && non_disruptive->has_data())
	|| (per_port !=  nullptr && per_port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::has_operation() const
{
    for (std::size_t index=0; index<test_ids.size(); index++)
    {
        if(test_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (basic !=  nullptr && basic->has_operation())
	|| (complete !=  nullptr && complete->has_operation())
	|| (minimal !=  nullptr && minimal->has_operation())
	|| (non_disruptive !=  nullptr && non_disruptive->has_operation())
	|| (per_port !=  nullptr && per_port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "test-ids")
    {
        for(auto const & c : test_ids)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds>();
        c->parent = this;
        test_ids.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All>();
        }
        return all;
    }

    if(child_yang_name == "basic")
    {
        if(basic == nullptr)
        {
            basic = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic>();
        }
        return basic;
    }

    if(child_yang_name == "complete")
    {
        if(complete == nullptr)
        {
            complete = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete>();
        }
        return complete;
    }

    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal>();
        }
        return minimal;
    }

    if(child_yang_name == "non-disruptive")
    {
        if(non_disruptive == nullptr)
        {
            non_disruptive = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive>();
        }
        return non_disruptive;
    }

    if(child_yang_name == "per-port")
    {
        if(per_port == nullptr)
        {
            per_port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::PerPort>();
        }
        return per_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : test_ids)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(basic != nullptr)
    {
        children["basic"] = basic;
    }

    if(complete != nullptr)
    {
        children["complete"] = complete;
    }

    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    if(non_disruptive != nullptr)
    {
        children["non-disruptive"] = non_disruptive;
    }

    if(per_port != nullptr)
    {
        children["per-port"] = per_port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test-ids" || name == "all" || name == "basic" || name == "complete" || name == "minimal" || name == "non-disruptive" || name == "per-port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::TestIds()
    :
    id{YType::str, "id"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "test-ids"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::~TestIds()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::has_data() const
{
    return id.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "test-ids" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "test-ids"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::TestIds::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "all"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::All_()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::~All_()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::All::Port::All_::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Basic()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "basic"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::~Basic()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "basic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "basic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::InterfacePortNumber()
    :
    number{YType::uint8, "number"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "interface-port-number"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::~InterfacePortNumber()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::has_data() const
{
    return number.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-port-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "interface-port-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::InterfacePortNumber::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::PortNumberList()
    :
    number_list{YType::str, "number-list"}
    	,
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "port-number-list"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::~PortNumberList()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::has_data() const
{
    return number_list.is_set
	|| (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_list.yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-number-list" <<"[number-list='" <<number_list <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_list.is_set || is_set(number_list.yfilter)) leaf_name_data.push_back(number_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-list")
    {
        number_list = value;
        number_list.value_namespace = name_space;
        number_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-list")
    {
        number_list.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "number-list")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "port-number-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::PortNumberList::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::All()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "all"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::~All()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Basic::Port::All::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Complete()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "complete"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::~Complete()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "complete"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Complete::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Minimal()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;

    yang_name = "minimal"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::~Minimal()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "minimal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::Minimal::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::NonDisruptive()
    :
    daily(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily>())
	,on(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On>())
	,weekly(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly>())
	,port(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port>())
{
    daily->parent = this;
    on->parent = this;
    weekly->parent = this;
    port->parent = this;

    yang_name = "non-disruptive"; yang_parent_name = "test"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::~NonDisruptive()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::has_data() const
{
    return (daily !=  nullptr && daily->has_data())
	|| (on !=  nullptr && on->has_data())
	|| (weekly !=  nullptr && weekly->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (on !=  nullptr && on->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-disruptive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "on")
    {
        if(on == nullptr)
        {
            on = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On>();
        }
        return on;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly>();
        }
        return weekly;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(daily != nullptr)
    {
        children["daily"] = daily;
    }

    if(on != nullptr)
    {
        children["on"] = on;
    }

    if(weekly != nullptr)
    {
        children["weekly"] = weekly;
    }

    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "on" || name == "weekly" || name == "port")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::Daily()
    :
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "daily"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::~Daily()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::has_data() const
{
    return hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::On()
    :
    month{YType::enumeration, "month"},
    day_of_month{YType::uint16, "day-of-month"},
    year{YType::uint16, "Year"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "on"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::~On()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::has_data() const
{
    return month.is_set
	|| day_of_month.is_set
	|| year.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(year.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "Year")
    {
        year.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::On::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "month" || name == "day-of-month" || name == "Year" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    hh_mm{YType::str, "hh-mm"}
{

    yang_name = "weekly"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::~Weekly()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::has_data() const
{
    return day.is_set
	|| hh_mm.is_set;
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(hh_mm.yfilter);
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (hh_mm.is_set || is_set(hh_mm.yfilter)) leaf_name_data.push_back(hh_mm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hh-mm")
    {
        hh_mm = value;
        hh_mm.value_namespace = name_space;
        hh_mm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "hh-mm")
    {
        hh_mm.yfilter = yfilter;
    }
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "hh-mm")
        return true;
    return false;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::Port()
    :
    all(std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All>())
{
    all->parent = this;

    yang_name = "port"; yang_parent_name = "non-disruptive"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::~Port()
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::has_data() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::has_operation() const
{
    for (std::size_t index=0; index<interface_port_number.size(); index++)
    {
        if(interface_port_number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<port_number_list.size(); index++)
    {
        if(port_number_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-port-number")
    {
        for(auto const & c : interface_port_number)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::InterfacePortNumber>();
        c->parent = this;
        interface_port_number.push_back(c);
        return c;
    }

    if(child_yang_name == "port-number-list")
    {
        for(auto const & c : port_number_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::PortNumberList>();
        c->parent = this;
        port_number_list.push_back(c);
        return c;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_port_number)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : port_number_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Diagnostic::Schedule::Switch_::Test::NonDisruptive::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-port-number" || name == "port-number-list" || name == "all")
        return true;
    return false;
}

const Enum::YLeaf Native::BbaGroup::Pppoe::Id::global {0, "global"};

const Enum::YLeaf Native::Card::Type::t1 {0, "t1"};
const Enum::YLeaf Native::Card::Type::e1 {1, "e1"};

const Enum::YLeaf Native::Diagnostic::Bootup::Level::complete {0, "complete"};
const Enum::YLeaf Native::Diagnostic::Bootup::Level::minimal {1, "minimal"};


}
}

