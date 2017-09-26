
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_3.hpp"
#include "Cisco_IOS_XE_native_4.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Deny::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Permit::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::No::Permit::Request>())
	,response(std::make_shared<Native::Arp::AccessList::No::Permit::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "permit"; yang_parent_name = "no"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::~Permit()
{
}

bool Native::Arp::AccessList::No::Permit::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::No::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::No::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::No::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::No::Permit::Request::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::~Response()
{
}

bool Native::Arp::AccessList::No::Permit::Response::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::No::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Permit()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Ip>())
	,request(std::make_shared<Native::Arp::AccessList::Permit::Request>())
	,response(std::make_shared<Native::Arp::AccessList::Permit::Response>())
{
    ip->parent = this;
    request->parent = this;
    response->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::~Permit()
{
}

bool Native::Arp::AccessList::Permit::has_data() const
{
    return (ip !=  nullptr && ip->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (response !=  nullptr && response->has_data());
}

bool Native::Arp::AccessList::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (response !=  nullptr && response->has_operation());
}

std::string Native::Arp::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Arp::AccessList::Permit::Request>();
        }
        return request;
    }

    if(child_yang_name == "response")
    {
        if(response == nullptr)
        {
            response = std::make_shared<Native::Arp::AccessList::Permit::Response>();
        }
        return response;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(request != nullptr)
    {
        children["request"] = request;
    }

    if(response != nullptr)
    {
        children["response"] = response;
    }

    return children;
}

void Native::Arp::AccessList::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "request" || name == "response")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Request()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>())
{
    ip->parent = this;

    yang_name = "request"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::~Request()
{
}

bool Native::Arp::AccessList::Permit::Request::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Request::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "request"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Request::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Response()
    :
    ip(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip>())
{
    ip->parent = this;

    yang_name = "response"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::~Response()
{
}

bool Native::Arp::AccessList::Permit::Response::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Arp::AccessList::Permit::Response::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "response";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Ip()
    :
    any(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any>())
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host>())
{
    any->parent = this;
    host->parent = this;

    yang_name = "ip"; yang_parent_name = "response"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::~Ip()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_data() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_operation() const
{
    for (std::size_t index=0; index<sender_ip_address.size(); index++)
    {
        if(sender_ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation())
	|| (host !=  nullptr && host->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "sender-ip-address")
    {
        for(auto const & c : sender_ip_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress>();
        c->parent = this;
        sender_ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Any()
    :
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac>())
{
    mac->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_data() const
{
    return (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_operation() const
{
    return is_set(yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::Any_()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::~Any_()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Any_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Any::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::Host()
{

    yang_name = "host"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_data() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_operation() const
{
    for (std::size_t index=0; index<ip_address.size(); index++)
    {
        if(ip_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress>();
        c->parent = this;
        ip_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::IpAddress()
    :
    ip_address{YType::str, "ip-address"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "ip-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::~IpAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_data() const
{
    return ip_address.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::Host_()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::~Host_()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::Host_::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::Host::IpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::SenderIpAddress()
    :
    ip_address{YType::str, "ip-address"},
    ip_address_mask{YType::str, "ip-address-mask"}
    	,
    mac(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac>())
{
    mac->parent = this;

    yang_name = "sender-ip-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::~SenderIpAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_data() const
{
    return ip_address.is_set
	|| ip_address_mask.is_set
	|| (mac !=  nullptr && mac->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ip_address_mask.yfilter)
	|| (mac !=  nullptr && mac->has_operation());
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-ip-address" <<"[ip-address='" <<ip_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_mask.is_set || is_set(ip_address_mask.yfilter)) leaf_name_data.push_back(ip_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac>();
        }
        return mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask = value;
        ip_address_mask.value_namespace = name_space;
        ip_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ip-address-mask")
    {
        ip_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac" || name == "ip-address" || name == "ip-address-mask")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Mac()
    :
    any(nullptr) // presence node
	,host(std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host>())
{
    host->parent = this;

    yang_name = "mac"; yang_parent_name = "sender-ip-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::~Mac()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return (any !=  nullptr && any->has_data())
	|| (host !=  nullptr && host->has_data());
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_operation() const
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

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any>();
        }
        return any;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host>();
        }
        return host;
    }

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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(any != nullptr)
    {
        children["any"] = any;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::Any()
    :
    log{YType::empty, "log"}
{

    yang_name = "any"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::~Any()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_data() const
{
    return log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::Host()
{

    yang_name = "host"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::~Host()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_data() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_operation() const
{
    for (std::size_t index=0; index<sender_mac_address.size(); index++)
    {
        if(sender_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress>();
        c->parent = this;
        sender_mac_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sender_mac_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sender-mac-address")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::Host::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log")
        return true;
    return false;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::SenderMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    log{YType::empty, "log"},
    mac_address_mask{YType::str, "mac-address-mask"}
{

    yang_name = "sender-mac-address"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::~SenderMacAddress()
{
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_data() const
{
    return mac_address.is_set
	|| log.is_set
	|| mac_address_mask.is_set;
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mac_address_mask.yfilter);
}

std::string Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sender-mac-address" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mac_address_mask.is_set || is_set(mac_address_mask.yfilter)) leaf_name_data.push_back(mac_address_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mac-address-mask")
    {
        mac_address_mask = value;
        mac_address_mask.value_namespace = name_space;
        mac_address_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mac-address-mask")
    {
        mac_address_mask.yfilter = yfilter;
    }
}

bool Native::Arp::AccessList::Permit::Response::Ip::SenderIpAddress::Mac::SenderMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "log" || name == "mac-address-mask")
        return true;
    return false;
}

Native::Arp::ArpEntry::ArpEntry()
    :
    ip{YType::str, "ip"},
    arp_type{YType::enumeration, "arp-type"},
    hardware_address{YType::str, "hardware-address"}
{

    yang_name = "arp-entry"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Arp::ArpEntry::~ArpEntry()
{
}

bool Native::Arp::ArpEntry::has_data() const
{
    return ip.is_set
	|| arp_type.is_set
	|| hardware_address.is_set;
}

bool Native::Arp::ArpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(arp_type.yfilter)
	|| ydk::is_set(hardware_address.yfilter);
}

std::string Native::Arp::ArpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-arp:arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Arp::ArpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp-entry" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Arp::ArpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (arp_type.is_set || is_set(arp_type.yfilter)) leaf_name_data.push_back(arp_type.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Arp::ArpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Arp::ArpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Arp::ArpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-type")
    {
        arp_type = value;
        arp_type.value_namespace = name_space;
        arp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Arp::ArpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "arp-type")
    {
        arp_type.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
}

bool Native::Arp::ArpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "arp-type" || name == "hardware-address")
        return true;
    return false;
}

Native::Authentication::Authentication()
    :
    command(std::make_shared<Native::Authentication::Command>())
	,critical(std::make_shared<Native::Authentication::Critical>())
	,mac_move(std::make_shared<Native::Authentication::MacMove>())
{
    command->parent = this;
    critical->parent = this;
    mac_move->parent = this;

    yang_name = "authentication"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::~Authentication()
{
}

bool Native::Authentication::has_data() const
{
    return (command !=  nullptr && command->has_data())
	|| (critical !=  nullptr && critical->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool Native::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation())
	|| (critical !=  nullptr && critical->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string Native::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sanet:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Authentication::Command>();
        }
        return command;
    }

    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Authentication::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<Native::Authentication::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void Native::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "critical" || name == "mac-move")
        return true;
    return false;
}

Native::Authentication::Command::Command()
    :
    bounce_port(std::make_shared<Native::Authentication::Command::BouncePort>())
	,disable_port(std::make_shared<Native::Authentication::Command::DisablePort>())
{
    bounce_port->parent = this;
    disable_port->parent = this;

    yang_name = "command"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Command::~Command()
{
}

bool Native::Authentication::Command::has_data() const
{
    return (bounce_port !=  nullptr && bounce_port->has_data())
	|| (disable_port !=  nullptr && disable_port->has_data());
}

bool Native::Authentication::Command::has_operation() const
{
    return is_set(yfilter)
	|| (bounce_port !=  nullptr && bounce_port->has_operation())
	|| (disable_port !=  nullptr && disable_port->has_operation());
}

std::string Native::Authentication::Command::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bounce-port")
    {
        if(bounce_port == nullptr)
        {
            bounce_port = std::make_shared<Native::Authentication::Command::BouncePort>();
        }
        return bounce_port;
    }

    if(child_yang_name == "disable-port")
    {
        if(disable_port == nullptr)
        {
            disable_port = std::make_shared<Native::Authentication::Command::DisablePort>();
        }
        return disable_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bounce_port != nullptr)
    {
        children["bounce-port"] = bounce_port;
    }

    if(disable_port != nullptr)
    {
        children["disable-port"] = disable_port;
    }

    return children;
}

void Native::Authentication::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bounce-port" || name == "disable-port")
        return true;
    return false;
}

Native::Authentication::Command::BouncePort::BouncePort()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bounce-port"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Command::BouncePort::~BouncePort()
{
}

bool Native::Authentication::Command::BouncePort::has_data() const
{
    return ignore.is_set;
}

bool Native::Authentication::Command::BouncePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Authentication::Command::BouncePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::BouncePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bounce-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::BouncePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Command::BouncePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Command::BouncePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::Command::BouncePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Command::BouncePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Authentication::Command::BouncePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Authentication::Command::DisablePort::DisablePort()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "disable-port"; yang_parent_name = "command"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Command::DisablePort::~DisablePort()
{
}

bool Native::Authentication::Command::DisablePort::has_data() const
{
    return ignore.is_set;
}

bool Native::Authentication::Command::DisablePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Authentication::Command::DisablePort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/command/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Command::DisablePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disable-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Command::DisablePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Command::DisablePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Command::DisablePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::Command::DisablePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Command::DisablePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Authentication::Command::DisablePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Authentication::Critical::Critical()
    :
    recovery(std::make_shared<Native::Authentication::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Critical::~Critical()
{
}

bool Native::Authentication::Critical::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::Authentication::Critical::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Authentication::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Authentication::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Authentication::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Authentication::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Authentication::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::Authentication::Critical::Recovery::Recovery()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "recovery"; yang_parent_name = "critical"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::Critical::Recovery::~Recovery()
{
}

bool Native::Authentication::Critical::Recovery::has_data() const
{
    return delay.is_set;
}

bool Native::Authentication::Critical::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Authentication::Critical::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/critical/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::Critical::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::Critical::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::Critical::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Authentication::Critical::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Authentication::MacMove::MacMove()
    :
    permit{YType::empty, "permit"}
{

    yang_name = "mac-move"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Authentication::MacMove::~MacMove()
{
}

bool Native::Authentication::MacMove::has_data() const
{
    return permit.is_set;
}

bool Native::Authentication::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permit.yfilter);
}

std::string Native::Authentication::MacMove::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-sanet:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Authentication::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Authentication::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permit.is_set || is_set(permit.yfilter)) leaf_name_data.push_back(permit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Authentication::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Authentication::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Authentication::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit")
    {
        permit = value;
        permit.value_namespace = name_space;
        permit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Authentication::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit")
    {
        permit.yfilter = yfilter;
    }
}

bool Native::Authentication::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit")
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

Native::Bfd::Bfd()
    :
    l2cos{YType::uint8, "Cisco-IOS-XE-bfd:l2cos"},
    slow_timers{YType::uint16, "Cisco-IOS-XE-bfd:slow-timers"}
    	,
    map(std::make_shared<Native::Bfd::Map>())
{
    map->parent = this;

    yang_name = "bfd"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::~Bfd()
{
}

bool Native::Bfd::has_data() const
{
    return l2cos.is_set
	|| slow_timers.is_set
	|| (map !=  nullptr && map->has_data());
}

bool Native::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2cos.yfilter)
	|| ydk::is_set(slow_timers.yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2cos.is_set || is_set(l2cos.yfilter)) leaf_name_data.push_back(l2cos.get_name_leafdata());
    if (slow_timers.is_set || is_set(slow_timers.yfilter)) leaf_name_data.push_back(slow_timers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Bfd::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2cos")
    {
        l2cos = value;
        l2cos.value_namespace = name_space;
        l2cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slow-timers")
    {
        slow_timers = value;
        slow_timers.value_namespace = name_space;
        slow_timers.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2cos")
    {
        l2cos.yfilter = yfilter;
    }
    if(value_path == "slow-timers")
    {
        slow_timers.yfilter = yfilter;
    }
}

bool Native::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "l2cos" || name == "slow-timers")
        return true;
    return false;
}

Native::Bfd::Map::Map()
    :
    ipv4(std::make_shared<Native::Bfd::Map::Ipv4>())
	,ipv6(std::make_shared<Native::Bfd::Map::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "map"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::~Map()
{
}

bool Native::Bfd::Map::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Bfd::Map::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Bfd::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Bfd::Map::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Bfd::Map::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::get_children() const
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

void Native::Bfd::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::Ipv4()
    :
    no_vrf(std::make_shared<Native::Bfd::Map::Ipv4::NoVrf>())
	,vrf(std::make_shared<Native::Bfd::Map::Ipv4::Vrf>())
{
    no_vrf->parent = this;
    vrf->parent = this;

    yang_name = "ipv4"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv4::~Ipv4()
{
}

bool Native::Bfd::Map::Ipv4::has_data() const
{
    return (no_vrf !=  nullptr && no_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (no_vrf !=  nullptr && no_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-vrf")
    {
        if(no_vrf == nullptr)
        {
            no_vrf = std::make_shared<Native::Bfd::Map::Ipv4::NoVrf>();
        }
        return no_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv4::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_vrf != nullptr)
    {
        children["no-vrf"] = no_vrf;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Bfd::Map::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-vrf" || name == "vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::NoVrf::NoVrf()
    :
    dest_ip{YType::str, "dest-ip"},
    src_ip{YType::str, "src-ip"},
    template_name{YType::str, "template-name"}
{

    yang_name = "no-vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv4::NoVrf::~NoVrf()
{
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_data() const
{
    return dest_ip.is_set
	|| src_ip.is_set
	|| template_name.is_set;
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_ip.yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string Native::Bfd::Map::Ipv4::NoVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::NoVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::NoVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ip.is_set || is_set(dest_ip.yfilter)) leaf_name_data.push_back(dest_ip.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::NoVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::NoVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Bfd::Map::Ipv4::NoVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-ip")
    {
        dest_ip = value;
        dest_ip.value_namespace = name_space;
        dest_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv4::NoVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-ip")
    {
        dest_ip.yfilter = yfilter;
    }
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ip" || name == "src-ip" || name == "template-name")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::Vrf::Vrf()
{

    yang_name = "vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Bfd::Map::Ipv4::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv4::Vrf::has_data() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv4::Vrf::has_operation() const
{
    for (std::size_t index=0; index<dst_vrf.size(); index++)
    {
        if(dst_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Bfd::Map::Ipv4::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Bfd::Map::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-vrf")
    {
        for(auto const & c : dst_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Bfd::Map::Ipv4::Vrf::DstVrf>();
        c->parent = this;
        dst_vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Bfd::Map::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dst_vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Bfd::Map::Ipv4::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv4::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv4::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf")
        return true;
    return false;
}

const Enum::YLeaf Native::Arp::ArpEntry::ArpType::ARPA {0, "ARPA"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SAP {1, "SAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SMDS {2, "SMDS"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SNAP {3, "SNAP"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_A {4, "SRP-A"};
const Enum::YLeaf Native::Arp::ArpEntry::ArpType::SRP_B {5, "SRP-B"};

const Enum::YLeaf Native::BbaGroup::Pppoe::Id::global {0, "global"};


}
}

